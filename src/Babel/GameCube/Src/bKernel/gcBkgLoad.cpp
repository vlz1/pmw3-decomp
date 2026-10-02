#include <stdio.h>
#include <string.h>
#include <dolphin/os.h>
#include <bKernel/heap.h>
#include <bKernel/file.h>
#include <bKernel/crc32.h>
#include <bKernel/mutex.h>
#include <bKernel/timer.h>
#include <bKernel/debug.h>
#include <bKernel/bkgLoad.h>
#include <bKernel/verbosity.h>
#include <bKernel/resource.h>
#include <bKernel/GameCube/gcFileHandle.h>

static volatile int workerThreadRunning;
static volatile int workerThreadWaiting;
static OSCond kickThread;
static u64 dataTransferStart;

volatile int bBytesTransferred = 0;
volatile int bLastBytesTransferred = 0;
static int noofBkgLoadsInList = 0;
static unsigned int bkgCommandUid = 0;
static int quitThread = 0;
static int bkgBusy = 0;
static int bkgLoadWake = 0;
static int desiredTransferRate = 104857600;

int bNoofBkgLoadsInListOnChannel[3];
static TBkgSchedulerChannel bkgChannel[3];
static TBBkgLoadCmd bkgLoadList[16];
static TBFileHandleType bkgFileHandle[3];
static OSThread threadHandle;
static unsigned char threadStack[4096];
static OSMutex bkgQueueMutex;
static OSMutex bkgRunningMutex;
volatile int bChannelBytesTransferred[3] = { };
volatile int bChannelLastBytesTransferred[3] = { };

static void bEndLoad(TBkgSchedulerChannel* channel);
static int bScheduleLoad(TBBkgLoadCmd* cmd, void (*callback)(void*), void* context);
static void* bKernelWorkerThread(void* context);
static void KickScheduler(unsigned long context);
static void BkgIOCompletion(long bytesTransferred, DVDFileInfo* fileInfo);
static void BackgroundLoadComplete(void* context);
static void BackgroundLoadFreeRequest(TBkgSchedulerChannel* channel);
int bIsBkgChannelBusy(EBBkgChannel channel);

int bKernelInitBkgLoad()
{
    int loop;
    int priority;

    for (loop = 0; loop < 16; ++loop)
        bkgLoadList[loop].resType = -1;

    memset(bkgChannel, 0, sizeof(bkgChannel));

    // TODO: Stack and store order
    bkgChannel[0].blockSize = 0x40000;
    bkgChannel[1].blockSize = 0x20000;
    bkgChannel[2].blockSize = 0x20000;

    bkgChannel[0].channel = EBBKGCHANNEL_DATA;
    bkgChannel[1].channel = EBBKGCHANNEL_AUDIO1;
    bkgChannel[2].channel = EBBKGCHANNEL_AUDIO2;

    bkgChannel[0].ident = "DATA";
    bkgChannel[1].ident = "AUDIO1";
    bkgChannel[2].ident = "AUDIO2";

    noofBkgLoadsInList = 0;
    for (loop = 0; loop < 3; ++loop)
        bNoofBkgLoadsInListOnChannel[loop] = 0;

    workerThreadRunning = 0;
    workerThreadWaiting = 0;
    quitThread = 0;

    bkCreateMutex(&bkgQueueMutex);
    bkCreateMutex(&bkgRunningMutex);
    OSInitCond(&kickThread);
    bkSleep(0, 1);
    OSCreateThread(&threadHandle, bKernelWorkerThread, 0, &bkgQueueMutex, 0x1000, 0x10, 1);
    OSResumeThread(&threadHandle);
    return 1;
}

int bKernelShutdownBkgLoad()
{
    quitThread = 1;
    if (workerThreadRunning)
    {
        while (!workerThreadWaiting)
        {
            bkSleep(0, 1);
        }
        OSSignalCond(&kickThread);
    }

    while (workerThreadRunning)
    {
        bkSleep(0, 1);
    }

    bkDeleteMutex(&bkgRunningMutex);
    bkDeleteMutex(&bkgQueueMutex);
    return 0;
}

void bUpdateBkgLoad() {
    TBkgSchedulerChannel* channel;
    int l;

    if (bkgLoadWake)
    {
        bkgLoadWake = 0;
        if (workerThreadRunning)
        {
            while (!workerThreadWaiting)
            {
                bkSleep(0, 1);
            }
            OSSignalCond(&kickThread);
        }
    }

    for (l = 0; l < 3; l++)
    {
        channel = &bkgChannel[l % 3];
        if (channel->flags & 0x10)
            BackgroundLoadFreeRequest(channel);
    }
}

static void bFixupResource(TBBkgLoadCmd* cmd)
{
    char* cp; // r3
}

static inline unsigned char* EnsureAllocBkg(unsigned char* dataPtr, int size)
{
    if (dataPtr != NULL)
    {
        if (bkHeapGetBlockSize(dataPtr) < size)
            return NULL;
    }
    else
    {
        char* group = (char*)bGetCurrentGroup();
        if ((u32)group == 0xDEFA)
            group = "Package";

        void* data = bkHeapAllocEx(size, (char*)"File", 0, 0x2001, (u32)group, 0);
        if (data == NULL)
        {
            int largest;
            int sizeFree;

            if ((bVerboseModule & 1) && (bVerboseLevel > 0))
            {
                bPrintError("EnsureAllocBkg: *** Out of memory on Babel heap for file (need %d bytes) ***\n", size);
            }
            sizeFree = bkHeapFreeSpace(&largest);
            if ((bVerboseModule & 1) && (bVerboseLevel > 0))
            {
                bPrintError("EnsureAllocBkg: (only %d bytes available: %d more required, max %d bytes (%d short)) ***\n",
                    sizeFree, size - sizeFree, largest, size - largest);
            }
            return NULL;
        }
        return (u8*)data;
    }
    return dataPtr;
}

int bQueueBackgroundLoad(EBBkgChannel channel, char* dest, TBFileHandleType* fp, char* onDiskFilename, char* filename, unsigned int crc, int offset, int noofBytes, int flags, char* event, int resType) 
{
    TBBkgLoadCmd* cmd;

    if (noofBkgLoadsInList == 16)
    {
        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
            bPrintError("bQueueBackgroundLoad: background load request queue is FULL\n");
        return 0;
    }

    bkWaitMutex(&bkgQueueMutex);
    cmd = &bkgLoadList[noofBkgLoadsInList];

    strcpy(cmd->eventName, event);
    strcpy(cmd->eventFilename, filename);
    if ((fp != NULL) && (filename == NULL))
        sprintf(cmd->filename, "FP = 0x%X", fp);
    else
        strcpy(cmd->filename, onDiskFilename);

    // TODO: Store order and regswap
    cmd->uid = bkgCommandUid++;
    ++bNoofBkgLoadsInListOnChannel[channel];
    cmd->fp = fp;
    cmd->crc = crc;
    cmd->address = dest;
    cmd->offset = offset;
    cmd->noofBytes = noofBytes;
    cmd->resType = resType;
    cmd->flags = flags;
    ++noofBkgLoadsInList;
    cmd->channel = channel;

    bkReleaseMutex(&bkgQueueMutex);

    if ((bNoofBkgLoadsInListOnChannel[cmd->channel] < 2) && !bIsBkgChannelBusy(cmd->channel))
    {
        if (!bScheduleLoad(cmd, BackgroundLoadComplete, (void*)cmd->uid))
            return 0;
    }

    return 1;
}

unsigned char* LoadSingleFileBkg(char* filename, unsigned char* dataPtr, int* retSize, char* eventName, int resType, unsigned int crc)
{
    TBFileHandleType* fp; // r1+0x118
    int len; // r31
    char buf[256]; // r1+0x18
    unsigned char* oldDataPtr = dataPtr; // r25

    if (retSize != NULL || dataPtr == NULL)
    {
        if (!bkOpenFileReadOnlyWithSearch(filename, &fp, buf, 0x100, 0))
        {
            if ((bVerboseModule & 1) && (bVerboseLevel > 0))
            {
                bPrintError("LoadSingleFileBkg: *** Could not load file \'%s\' ***\n", filename);
            }
            return NULL;
        }

        len = bFileLength(fp);
        bkCloseFile(fp);
        if (retSize != NULL)
            *retSize = len;

        dataPtr = EnsureAllocBkg(dataPtr, len);
        if (!dataPtr)
            return NULL;
    }
    else
    {
        strcpy(buf, filename);
    }

    if (!bQueueBackgroundLoad(EBBKGCHANNEL_DATA, (char*)dataPtr, fp, buf, filename, crc, 0, len, 0, eventName, resType))
    {
        if (dataPtr)
            bkHeapFree(dataPtr);
        return NULL;
    }

    return dataPtr;
}

TBPackageIndex* bkLoadPackageBkg(TBPackageIndex* parentIndex, char* filename, char* eventName, int* retSize, unsigned char* dataPtr)
{
    unsigned char* data; // r22
    char buf[256]; // r1+0x18
    TBFileIndex* filePtr; // r29
    int isStatic; // r23
    unsigned int crc; // r25
    char pakFilename[256]; // r1+0x118
    char pakInPakFilename[256]; // r1+0x218

    crc = bkStringCRC(filename, 0);
    sprintf(pakFilename, "%s%s", filename, ".gcp");

    if (parentIndex == NULL)
    {
        return (TBPackageIndex*)LoadSingleFileBkg(pakFilename, dataPtr, retSize, eventName, 0, crc);
    }

    filePtr = bFindIndexFile(parentIndex, pakFilename);
    if (filePtr == NULL)
        return NULL;

    if (retSize != NULL)
        *retSize = filePtr->size;

    EnsureAllocBkg(dataPtr, filePtr->size);
    bQueueBackgroundLoad(EBBKGCHANNEL_DATA, (char*)dataPtr, parentIndex->fp, pakInPakFilename, pakFilename, crc, 0, 0, 0, buf, 0);
}

int bIsBkgChannelBusy(EBBkgChannel channel)
{
    if (bkgChannel[channel].state & 1)
        return 1;
    return 0;
}

static int bScheduleLoad(TBBkgLoadCmd* cmd, void (*callback)(void*), void* context)
{
    TBkgSchedulerChannel* channel = &bkgChannel[cmd->channel];
    if (channel->state & 1 || channel->flags & 0x10)
        return 0;

    // TODO: Store order
    channel->offset = cmd->offset;
    channel->bytesRead = 0;
    channel->flags = cmd->flags;
    channel->noofBytes = cmd->noofBytes;

    channel->dest = (u8*)cmd->address;

    channel->completeCallback = callback;
    channel->callbackContext = context;

    channel->orgNoofBytes = cmd->noofBytes;
    channel->uid = cmd->uid;
    channel->resultCode = EBBKGERROR_NONE;

    if (channel->offset == 0)
        bLastBytesTransferred = 0;

    bChannelLastBytesTransferred[cmd->channel] = 0;

    if (cmd->fp == NULL)
    {
        strcpy(channel->filename, cmd->filename);
        channel->fp = NULL;
    }
    else
    {
        channel->filename[0] = '\0';
        channel->fp = cmd->fp;
    }

    channel->state = 1;

    if (cmd->channel == EBBKGCHANNEL_DATA)
    {
        dataTransferStart = bkTimerRead();
    }

    cmd->flags |= 4;
    bkgLoadWake = 1;
    return 1;
}

static void* bKernelWorkerThread(void* context)
{
    workerThreadRunning = 1;
    bkWaitMutex(&bkgRunningMutex);
    while (!quitThread)
    {
        workerThreadWaiting = 1;
        OSWaitCond(&kickThread, &bkgRunningMutex);
        workerThreadWaiting = 0;
        KickScheduler(0);
    }
    bkReleaseMutex(&bkgRunningMutex);
    workerThreadRunning = 0;
    return NULL;
}

static int bkgOpenFile(TBkgSchedulerChannel* channel)
{
    int size;

    channel->fp = &bkgFileHandle[channel->channel];
    if (!bOpenFileReadOnly(channel->filename, &channel->fp, 0))
    {
        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("File %s not found\n", channel->filename);
        }
        channel->resultCode = EBBKGERROR_NOTFOUND;
        bEndLoad(channel);
        return 0;
    }
    else
    {
        channel->flags |= 2;
        size = bFileLength(channel->fp);
        if (channel->noofBytes == 0)
        {
            channel->noofBytes = size;
            channel->orgNoofBytes = size;
        }

        if (channel->dest == NULL || bkHeapGetBlockSize(channel->dest) < channel->noofBytes)
        {
            if ((bVerboseModule & 1) && (bVerboseLevel > 0))
            {
                bPrintError("Load data area too small %d < %d [full size %d]\n",
                    bkHeapGetBlockSize(channel->dest),
                    channel->noofBytes,
                    size
                );
            }
            channel->resultCode = EBBKGERROR_LOADBUFFERTOSMALL;
            bEndLoad(channel);
            return 0;
        }
    }

    return 1;
}

static int CheckForCancelledIO(int channelID)
{
    int c; // r11
    TBkgSchedulerChannel* channel = &bkgChannel[channelID]; // r10
    
    if (noofBkgLoadsInList <= 0)
        return 0;

    for (c = 0; c < noofBkgLoadsInList; ++c)
    {
        if ((bkgLoadList[c].channel == channelID) && (bkgLoadList[c].flags & 0x20))
        {
            channel->resultCode = EBBKGERROR_CANCELLED;
            bEndLoad(channel);
            return 1;
        }
    }

    return 0;
}

static void KickScheduler(unsigned long context)
{
    TBkgSchedulerChannel * channel; // r31
    int c; // r29
    int channelID; // r30
    static int startChannel = -1;

    if (bkgBusy)
        return;

    c = 0;
    startChannel = (startChannel + 1) % 3;
    do
    {
        channelID = (startChannel + c) % 3;
        channel = &bkgChannel[channelID];
        if (!(channel->flags & 0x10) && (channel->state & 1) && (channel->fp != NULL) && (bkgOpenFile(channel) != 0))
        {
            if (CheckForCancelledIO(channelID))
                break;

            if (channel->blockSize > channel->noofBytes)
            {
                channel->thisBlockSize = channel->blockSize;
            }
            else
            {
                channel->thisBlockSize = channel->noofBytes;
            }

            channel->fp->handle.cb.userData = channel;
            if (!DVDReadAsyncPrio(
                &channel->fp->handle,
                channel->dest,
                channel->thisBlockSize,
                channel->offset,
                BkgIOCompletion,
                2)
            )
            {
                if ((bVerboseModule & 1) && (bVerboseLevel > 0))
                {
                    bPrintError("    KickScheduler: *** DVDReadAsync failed (was filesize divisible by 2K? is the package granularity 2K?) ***\n");
                }
                channel->resultCode = EBBKGERROR_READERROR;
                bEndLoad(channel);
            }

            bkgBusy = 1;
            return;
        }
        ++c;
    } while (c < 3);
    bkgBusy = 0;
}

static void bEndLoad(TBkgSchedulerChannel* channel)
{
    if ((channel->flags & 2) && (channel->fp != NULL))
    {
        bCloseFile(channel->fp, 0);
        channel->fp = NULL;
    }

    channel->completeCallback(channel->callbackContext);
    channel->state &= ~1;
}

static void BkgIOCompletion(long bytesTransferred, DVDFileInfo* fileInfo)
{
    unsigned long long ticksPerKb;
    unsigned long long desiredTime; // r27
    unsigned long long actualTime; // r3
    unsigned long long delay; // r9
    int sleepTime;
    int rate;
    TBkgSchedulerChannel* channel; // r31

    channel = (TBkgSchedulerChannel*)fileInfo->cb.userData;
    if (bytesTransferred == -1)
    {
        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("    BkgIOCompletion: IO FAILURE! reading %d bytes\n", channel->thisBlockSize);
        }
    }
    else if (bytesTransferred == -3)
    {
        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("    BkgIOCompletion: IO CANCEL! reading %d bytes\n", channel->thisBlockSize);
        }
    }
    else
    {
        if (bytesTransferred == channel->thisBlockSize)
        {
            channel->noofBytes -= bytesTransferred;
            channel->bytesRead += bytesTransferred;
            channel->offset += bytesTransferred;
            channel->dest += bytesTransferred;
            bChannelBytesTransferred[channel->channel] += bytesTransferred;

            if (channel->channel == EBBKGCHANNEL_DATA)
            {
                if (channel->flags & 1)
                {
                    bBytesTransferred += channel->thisBlockSize;
                }
            }

            if (channel->noofBytes != 0)
            {
                bkgBusy = 0;
                bkgLoadWake = 1;
                return;
            }
        }

        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("    BkgIOCompletion: IO FAILURE transfered %d != requested %d\n", channel->thisBlockSize);
        }
    }

    channel->resultCode = EBBKGERROR_SYSTEMERROR;
    if ((channel->flags & 2) != 0 && channel->fp != NULL)
    {
        bCloseFile(channel->fp, 0);
        channel->fp = NULL;
    }

    (*channel->completeCallback)(channel->callbackContext);
    channel->state = channel->state & 0xFFFFFFFE;
    bkgBusy = 0;
    bkgLoadWake = 1;
}

static void BackgroundLoadComplete(void* context)
{
    TBBkgLoadCmd* cmd = bkgLoadList;
    int l = 0;

    while (l < noofBkgLoadsInList)
    {
        if (cmd->uid == (u32)context)
            break;
        ++l;
        ++cmd;
    }

    TBkgSchedulerChannel* channel = &bkgChannel[cmd->channel];
    bkgLoadWake = 1;
    channel->flags |= 0x10;
}

static void BackgroundLoadFreeRequest(TBkgSchedulerChannel* channel /* r29 */)
{
    TBBkgLoadCmd* cmd; // r31
    int l; // r30
    unsigned int uid; // r11
}

int bkCancelLoadPackageBkg(TBPackageIndex* packageIndex)
{
    int l; // r10

    if (packageIndex == NULL)
        return 0;

    if (!bkWaitMutex(&bkgQueueMutex))
        return 0;

    for (l = 0; l < noofBkgLoadsInList; ++l)
    {
        if ((u8)bkgLoadList[l].resType == 1 && bkgLoadList[l].address == packageIndex)
        {
            bkgLoadList[l].flags |= 0x20;
            bkReleaseMutex(&bkgQueueMutex);
            return 1;
        }
    }

    bkReleaseMutex(&bkgQueueMutex);
    return 0;
}
