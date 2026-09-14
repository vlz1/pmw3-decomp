#include <static_data.h>
#include <dolphin/os.h>
#include <dolphin/vi.h>
#include <dolphin/dvd.h>
#include <bKernel/heap.h>
#include <bKernel/file.h>
#include <bKernel/clock.h>
#include <bKernel/crc32.h>
#include <bKernel/debug.h>
#include <bKernel/mutex.h>
#include <bKernel/event.h>
#include <bKernel/language.h>
#include <bKernel/gcFileHandle.h>

extern "C" void PCinit();
extern "C" int PCcreat(char* filename, int arg1);
extern "C" int PCwrite(int fp, void* data, int nBytes);
extern void bInitTimer();
extern void bReadPhysicalInputDevices(int wait);

unsigned int bBkInitFlags;
int bInsideEventCallback;
u64 bSoundTimer;
static volatile int workerThreadRunning;
static volatile int workerThreadWaiting;
static OSCond kickThread;
static u64 dataTransferStart;
static DVDDiskID* diskID;

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

static TBEvent events;
static OSMutex eventMutex;
static OSMutex filenameTableMutex;

void bInitResources()
{

}

int bKernelInitBkgLoad()
{
    int loop;
    int priority;
}

void bInitDebug()
{
    TBClock clock; // r1+0x8
    static char* months[12] = {
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"
    };
}

char bHomeDirectory[256] = { };

int bHandleDVDErrors(char* buf)
{
    int status; // r31
    int coverOpenedFlag; // r28
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

void bShutdownKernel()
{

}

int bResetCheck(int reset)
{
    static char buf[2] = { '0', 0 };
    struct _TBEvent* event;
    int hardwareReset;

    return 0;
}

int bPerfMonActive = 0;
int bPerfMonRunning = 0;
u8* bPerfMonGraphDisplayList = 0;
int bPerfMonGraphDisplayListSize = 0;
u64 bTimerFrequency = 0;

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
int bFileLength(TBFileHandleType* fp);
void bCloseFile(TBFileHandleType* fp, int usemalloc);
void bkSleep(int miliseconds, int yield);

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

void bkSeekFile(TBFileHandleType* fp, int position, EBHostSeekMode mode)
{
    int ret = 1;
    unsigned int from = 0;
    int vsyncs;
    int nextVsyncCount;
    int fgl;

    switch (mode)
    {
        case EHOSTSEEK_SET:
            break;
        case EHOSTSEEK_CUR:
            from = fp->offset;
            break;
        case EHOSTSEEK_END:
            from = bFileLength(fp);
            break;
    }

    bForeGroundLoaded = 0;
    if (!DVDSeekAsyncPrio(&fp->handle, from + position, &bForegroundLoadReadCallback, 2))
    {
        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("bkSeekFile: DVDSeekAsync error\n");
        }
        ret = -1;
    }

    vsyncs = VIGetRetraceCount();
    fgl = bForeGroundLoaded;
    while (!fgl)
    {
        nextVsyncCount = VIGetRetraceCount();
        if (vsyncs != nextVsyncCount)
        {
            bReadPhysicalInputDevices(0);
            vsyncs = nextVsyncCount;
        }

        bHandleDVDErrors(0);
        bResetCheck(0);
        bkSleep(0, 1);
        fgl = bForeGroundLoaded;
    }

    if (ret != -1)
        fp->offset = from + position;
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

int bInitKernel()
{
    OSInit();
    DVDInit();
    PCinit();
    diskID = DVDGetCurrentDiskID();

    bkCreateMutex(&filenameTableMutex);
    bInitDebug();
    bInitTimer();

    bInsideEventCallback = 0;
    events.prev = &events;
    events.next = &events;
    bkCreateMutex(&eventMutex);

    bInitResources();
    bKernelInitBkgLoad();
    return 1;
}

void bRun(void (*mainFunc)(void*), void* context)
{
    bPopulateCRCTable();
    mainFunc(context);
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
