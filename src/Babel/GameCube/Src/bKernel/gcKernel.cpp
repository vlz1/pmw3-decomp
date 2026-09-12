#include <static_data.h>
#include <dolphin/os.h>
#include <dolphin/dvd.h>
#include <bKernel/heap.h>
#include <bKernel/file.h>
#include <bKernel/time.h>
#include <bKernel/crc32.h>
#include <bKernel/debug.h>
#include <bKernel/mutex.h>
#include <bKernel/language.h>
#include <bKernel/gcFileHandle.h>

extern "C" void PCinit();
extern "C" int PCcreat(char* filename, int arg1);
extern "C" int PCwrite(int fp, void* data, int nBytes);

unsigned int bBkInitFlags;
int bInsideEventCallback;
DVDDiskID* diskID;

char* bLanguageCode[18] = {
    "uk",
    "f",
    "d",
    "e",
    "it",
    "nl",
    "sw",
    "fin",
    "n",
    "dk",
    "us",
    "jp",
    "pg",
    "br",
    "kr",
    "ch",
    "th",
    "hw"
};
volatile int bChannelBytesTransferred[3] = { };
volatile int bChannelLastBytesTransferred[3] = { };
TBDebugStream bDefaultDebugStream = { { }, 2 , 0 };
char bHomeDirectory[256] = { };

TBDebugStream* bCurrentDebugStream = &bDefaultDebugStream;
int bPrintPause = 0;
static volatile int bForeGroundLoaded = 0;
static volatile int bForeGroundLoadedSize = 0;
char bDiskErrorString[2] = { 0 };
int bOSHeap = 0;
char bHomeSuffix[8] = { 0 };
int resetPending = 0;
int bResetCheckDiskDoneByUser = 0;
int bArgc = 0;
char** bArgv = 0;
int bPerfMonActive = 0;
int bPerfMonRunning = 0;
u8* bPerfMonGraphDisplayList = 0;
int bPerfMonGraphDisplayListSize = 0;
unsigned long long bTimerFrequency = 0;

OSMutex eventMutex;
OSMutex filenameTableMutex;

static inline void bPopulateCRCTable()
{
    const u32 polynomial = 0x4C11DB7;

    for (s32 i = 0; i < 256; i++) {
        s32 c = i << 24;
        for (s32 j = 8; j > 0; --j) {
            if (c < 0) {
                c = polynomial ^ (c << 1);
            } else {
                c <<= 1;
            }
        }
        bCRCtable[i] = c;
    }
}

// TODO: weird branch
u8* bSpecificHeapInit(void* basePtr, unsigned int size)
{
    BOOL old = OSDisableInterrupts();
    void* arenaLo = OSGetArenaLo();
    void* arenaHi = OSGetArenaHi();
    void* heap;
    unsigned int base;

    bkPrintf("Available Memory %d bytes from 0x%X to 0x%X\n", 
        (s32)arenaHi - (s32)arenaLo, arenaLo, arenaHi);

    if (basePtr == NULL || basePtr >= arenaLo)
    {
        base = ((u32)basePtr + size);
        if (base > (u32)arenaHi)
        {
            bkPrintf("Unable to allocate memory of %d bytes from specified base 0x%X to 0x%X [0x%X 0x%X]\n",
                size, basePtr, base, arenaLo, arenaHi);
            OSRestoreInterrupts(old);
            return (u8*)NULL;
        }
    }
    else
    {
        arenaHi = (void*)((u32)arenaHi & 0xFFFFFFE0);
        basePtr = (void*)((u32)arenaLo + 0x1FU & 0xFFFFFFE0);
        base = (u32)basePtr + size;
    }

    if (base > (u32)arenaHi)
    {
        bkPrintf("Unable to allocate aligned memory of %d bytes [0x%X 0x%X] %d available\n",
            size, basePtr, arenaHi, (u32)arenaHi - (u32)basePtr);
        OSRestoreInterrupts(old);
        return (u8*)NULL;
    }

    heap = OSInitAlloc((void*)base, arenaHi, 1);
    OSSetArenaLo(heap);
    bOSHeap = OSCreateHeap((void*)((u32)heap + 0x1FU & 0xFFFFFFE0), (void*)((u32)arenaHi & 0xFFFFFFE0));
    OSSetCurrentHeap(bOSHeap);
    OSSetArenaLo((void*)((u32)arenaHi & 0xFFFFFFE0));
    OSRestoreInterrupts(old);
    bkPrintf("Allocating from 0x%X [%d]\n", basePtr, (int)basePtr % 0x20);
    return (u8*)basePtr;
}

int bkReadClock(TBClock* clock)
{
    OSCalendarTime td;
    long long ticks = OSGetTime();
    OSTicksToCalendarTime(ticks, &td);

    s32 year = td.year;
    clock->second = td.sec;
    clock->minute = td.min;
    clock->hour = td.hour;
    clock->day = td.mday;
    clock->month = td.mon + 1;
    clock->year = year - (year / 100) * 100;
    return 1;
}

TBDebugStream* bkCreateDebugStream(TBDebugStream* stream, char* filename, unsigned int flags)
{
    if (stream == NULL)
    {
        stream = (TBDebugStream*)bkHeapAlloc(sizeof(TBDebugStream), (char*)s_File, 0, 0x2006);
        if (stream == NULL)
            return (TBDebugStream*)NULL;
        flags |= 1;
    }

    if (filename == NULL || *filename == '\0')
        stream->logFile[0] = '\0';
    else
        sprintf(stream->logFile, "%s%s", bHomeDirectory, filename);

    stream->flags = flags;
    if (stream->logFile[0] == '\0')
        stream->fp = ~0U;
    else
    {
        if (!bkHostCreateFile(stream->logFile, &stream->fp))
        {
            bkPrintf("Unable to create: %s\n", stream->logFile);
            return (TBDebugStream*)NULL;
        }
    }
    return stream;
}

void bkSetDebugStream(TBDebugStream* stream)
{
    bCurrentDebugStream = stream;
    if (stream != NULL)
        return;
    bCurrentDebugStream = &bDefaultDebugStream;
}

void bkAlert(char* message)
{
    bkPrintf("bkAlert: %s", message);
}

int bOpenFileReadOnly(char* filename, TBFileHandleType** fpPtr, int usemalloc);
void bCloseFile(TBFileHandleType* fp, int usemalloc);

int bkOpenFileReadOnly(char* filename, TBFileHandleType** fpPtr)
{
    return bOpenFileReadOnly(filename, fpPtr, 1);
}

int bOpenFileReadOnly(char* filename, TBFileHandleType** fpPtr, int usemalloc)
{
    TBFileHandleType* fp; // r29
    char buf[256]; // r1+0x8
    char* cp = buf; // r31

    if (usemalloc)
        fp = (TBFileHandleType*)bkHeapAlloc(sizeof(TBFileHandleType), (char*)s_File, 0, 0x2006);
    else
        fp = *fpPtr;
    fp->offset = 0;

    while (*filename != '\0')
    {
        if (*filename == '\\')
        {
            *cp++ = '/';
            ++filename;
        }
        else
        {
            *cp++ = *filename++;
        }
    }
    *cp = '\0';

    if (!DVDOpen(buf, &fp->handle))
    {
        if (usemalloc)
            bkHeapFree(fp);
        return 0;
    }
    *fpPtr = fp;
    return 1;
}

static void bForegroundLoadReadCallback(long bytesTransferred, DVDFileInfo* fileInfo)
{
    bForeGroundLoaded = 1;
    bForeGroundLoadedSize = bytesTransferred;
}

int bkSeekFile(struct _TBFileHandleType* fp, int position, EBHostSeekMode mode)
{
    int ret; // r31
    unsigned int from; // r3
    int vsyncs; // r30
    int nextVsyncCount; // r31
    return 0;
}

int bFileLength(TBFileHandleType* fp)
{
    return fp->handle.length;
}

void bkCloseFile(TBFileHandleType* fp)
{
    bCloseFile(fp, 1);
}

void bCloseFile(TBFileHandleType* fp, int usemalloc)
{
    DVDClose(&fp->handle);
    if (usemalloc)
        bkHeapFree((void*)fp);
}

int bkHostCreateFile(char* filename, int* fpPtr)
{
    *fpPtr = PCcreat(filename, 0);
    if (*fpPtr == -1)
        return 0;
    return 1;
}

int bkHostWriteToFile(int fp, void* data, int noofBytes)
{
    return PCwrite(fp, data, noofBytes);
}

unsigned int bSpecificHeapDefaultSize(unsigned int size)
{
    BOOL old = OSDisableInterrupts();
    void* arenaLo = OSGetArenaLo();
    void* arenaHi = OSGetArenaHi();
    OSRestoreInterrupts(old);
    return ((u8*)arenaHi - (u8*)arenaLo) - 0x400;
}

void bSpecificHeapShutdown(u8* base)
{
    OSDestroyHeap(bOSHeap);
}

void bInitKernel()
{
    OSInit();
    DVDInit();
    PCinit();
    diskID = DVDGetCurrentDiskID();

    bkCreateMutex(&filenameTableMutex);
}

void bRun(void (*arg0)(void*), void* arg1)
{
    bPopulateCRCTable();
    arg0(arg1);
    OSPanic("b:/BlitzSDK/Babel/GameCube/Src/bKernel/gcKernel.cpp", 108, "End of program");
}

OSMutex* bkCreateMutex(OSMutex* mutex)
{
    OSInitMutex(mutex);
    return mutex;
}

int bkWaitMutex(OSMutex* mutex)
{
    BOOL useMutex = 0;
    if (OSDisableInterrupts())
    {
        OSEnableInterrupts();
        useMutex = 1;
    }

    if (useMutex)
    {
        OSLockMutex(mutex);
    }

    return 1;
}

int bkReleaseMutex(OSMutex* mutex)
{
    BOOL useMutex = 0;
    if (OSDisableInterrupts())
    {
        OSEnableInterrupts();
        useMutex = 1;
    }

    if (useMutex)
    {
        OSUnlockMutex(mutex);
    }
    
    return 1;
}

int bkDeleteMutex(OSMutex* mutex)
{
    if (OSTryLockMutex(mutex) == 0)
    {
        bkPrintf("bkDeleteMutex: Mutex not deleted since it is still in used\n");
        return 0;
    }

    OSUnlockMutex(mutex);
    return 1;
}

int bInitCommandLine(int argc, char** argv)
{
    bArgc = argc;
    bArgv = argv;
    return 0;
}

void bShutdownCommandLine()
{

}

void bkGetCommandLine(int* argc, char*** argv)
{
    *argc = bArgc - 1;
    *argv = bArgv + 1;
}

EBLanguageID bkGetSystemLanguage()
{
    switch (OSGetLanguage())
    {
    case 0:
        return BLANGUAGEID_US;
    case 1:
        return BLANGUAGEID_D;
    case 2:
        return BLANGUAGEID_F;
    case 3:
        return BLANGUAGEID_E;
    case 4:
        return BLANGUAGEID_IT;
    case 5:
        return BLANGUAGEID_NL;
    }
    return BLANGUAGEID_PO;
}
