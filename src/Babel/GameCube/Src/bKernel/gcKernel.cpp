#include <stdarg.h>
#include <string.h>
#include <stdio.h>
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
#include <bKernel/bkgLoad.h>
#include <bKernel/language.h>
#include <bKernel/resource.h>
#include <bKernel/stringTable.h>
#include <bKernel/GameCube/gcFileHandle.h>

inline int bReadClock(TBClock* clock)
{
    OSCalendarTime td;
    OSTicksToCalendarTime(OSGetTime(), &td);

    clock->second = td.sec;
    clock->minute = td.min;
    clock->hour = td.hour;
    clock->day = td.mday;
    clock->month = td.mon + 1;

    s32 year = td.year;
    clock->year = year - (year / 100) * 100;
    return 1;
}

volatile int bBytesTransferred = 0;
volatile int bLastBytesTransferred = 0;

unsigned int bCRCtable[256];
char* bFileSearchPath[4];
TBResourceInfo bGlobalResourceList;
int bNoofBkgLoadsInListOnChannel[3];

enum EBVerboseLevel bVerboseLevel = BDVERBOSE_WARNINGS;
unsigned int bVerboseModule = ~0U;
unsigned int bVerboseFlags = 1;
static int bVerboseStackSize = 0;
static enum EBVerboseLevel bVerboseLevelStack[4];
static unsigned int bVerboseModuleStack[4];
static unsigned int bVerboseFlagsStack[4];
static int sigDecoded = 0;
EBLanguageID bLanguage = BLANGUAGEID_UK;
int bFileSearchPaths = 0;
int bFileSearchFlags = 0;
struct _TBKernelModuleInfo* kernelModules = NULL;

extern "C" void PCinit();
extern "C" int PCcreat(char* filename, int arg1);
extern "C" int PCwrite(int fp, void* data, int nBytes);
extern void bInitTimer();
extern void bShutdownTimer();
extern void bkPerfMonShutdown();
extern void bReadPhysicalInputDevices(int wait);
extern TBResourceInfo bGlobalResourceList;
extern TBDebugStream bDefaultDebugStream;

unsigned int bBkInitFlags;
int bInsideEventCallback;
u64 bSoundTimer;
static volatile int workerThreadRunning;
static volatile int workerThreadWaiting;
static OSCond kickThread;
static u64 dataTransferStart;
static DVDDiskID* diskID;

unsigned int resourceTypeTag[21] = {
    *(u32*)"TEXR",
    *(u32*)"ACTR",
    *(u32*)"SAMP",
    *(u32*)"FONT",
    *(u32*)"STAB",
    *(u32*)"SPLA",
    *(u32*)"SET ",
    *(u32*)"CMES",
    *(u32*)"ASTR",
    *(u32*)"LIPS",
    *(u32*)"FMSH",
    *(u32*)"FWRL",
    *(u32*)"SBNK",
    *(u32*)"SPAT",
    *(u32*)"LTMX",
    *(u32*)"SIMD",
    *(u32*)"SUBT",
    *(u32*)"MTRL",
    *(u32*)"BLDR",
    *(u32*)"VSHR",
    *(u32*)"PSHR"
};

static TBEvent events;
static OSMutex eventMutex;
static OSMutex filenameTableMutex;
TBResourceInfo bGlobalResourceSubList[2];
static TBkgSchedulerChannel bkgChannel[3];
static TBBkgLoadCmd bkgLoadList[16];
static TBFileHandleType bkgFileHandle[3];
static OSThread threadHandle;
static unsigned char threadStack[4096];
static OSMutex bkgQueueMutex;
static OSMutex bkgRunningMutex;
static char debugBuffer[2048];
static OSMutex bPrintfMutex;

void bRecordError(char* errorStr, int module)
{

}

void bCheckSignature()
{
    TBClock clock; // r1+0x8
    unsigned long long time; // r28
    int expYear; // r30
    int expMonth; // r29
    int expDay; // r28
    int l; // r10
    int seed; // r9
}

inline TBEvent* bFindEvent(u32 crc)
{
    for (TBEvent* event = events.next; event != &events; event = event->next)
    {
        if (event->crc == crc)
            return event;
    }
    return NULL;
}

int bkCreateEvent(char* eventName)
{
    TBEvent* event;
    u32 crc = bkStringLwrCRC(eventName, 0);

    bkWaitMutex(&eventMutex);

    event = bFindEvent(crc);
    if (event)
    {
        ++event->refCount;
        bkReleaseMutex(&eventMutex);
        return 1;
    }

    event = (TBEvent*)bkHeapAllocEx(sizeof(TBEvent), (char*)UNIT_DATA(File, "File"), 0, 0x2001, (u32)"Event", 0);
    if (!event)
    {
        bkReleaseMutex(&eventMutex);
        return 0;
    }

    event->prev = events.prev;
    event->next = &events;

    event->prev->next = event;
    event->next->prev = event;

    strcpy(event->name, eventName);

    event->clients.prev = &event->clients;
    event->clients.next = &event->clients;

    event->crc = crc;
    event->noofQueues = 0;
    event->refCount = 1;
    bkReleaseMutex(&eventMutex);
    return 1;
}

int bkPopEvent(TBEventClient* client, char* parmBuffer, void* data)
{
    // client->type always seems to be EBEVENTCLIENTTYPE_QUEUE

    if (client->queue.size == 0)
        return 0;

    // TODO: Why are there NULL checks on the client->queue.queue.parms and data arrays??
    // This is worth looking into later, because there may be inline shenanigans.

    bkWaitMutex(&eventMutex);
    if ((client->queue.flags & 1) != 0)
    {
        int i = --client->queue.size;
        if ((parmBuffer != NULL) && (client->queue.queue[i].parms != NULL))
        {
            strcpy(parmBuffer, (client->queue.queue[i].parms));
        }

        if ((data != NULL) && (client->queue.queue[client->queue.size].data != NULL))
        {
            memcpy(data, client->queue.queue[client->queue.size].data, sizeof(client->queue.queue->data));
        }
    }
    else
    {
        if ((parmBuffer != NULL) && (client->queue.queue != NULL))
        {
            strcpy(parmBuffer, client->queue.queue->parms);
        }

        if ((data != NULL) && (client->queue.queue->data != NULL))
        {
            memcpy(data, client->queue.queue->data, 16);
        }

        if (client->queue.size > 1)
        {
            memmove(client->queue.queue, client->queue.queue + 1, (client->queue.size - 1) * sizeof(TBEventEntry));
        }

        --client->queue.size;
    }
    bkReleaseMutex(&eventMutex);
    return 1;
}

void bkDeleteEvent(char* eventName)
{
    TBEvent* event; // r31
}

int bkGenerateEvent(char* eventName, char* parmString, void* data, int takeMutex)
{
    TBEvent* event; // r3
    TBEventClient* client; // r31
}

void bkSetFileSearchPath(int flags, int noofPaths, ...)
{
    va_list argp;

    bFileSearchFlags = flags;
    bFileSearchPaths = noofPaths;

    va_start(argp, noofPaths);
    for (int c = 0; c < noofPaths; ++c)
    {
        bFileSearchPath[c] = va_arg(argp, char*);
    }
    va_end(argp);
}

int bkOpenFileReadOnlyWithSearch(char* filename, TBFileHandleType** fp, char* fullpath, int maxlen, int flags)
{
    // Local variables
    char buf[256]; // r1+0x8
    char filebuf[256]; // r1+0x108
    char pathbuf[256]; // r1+0x208
    char workbuf[256]; // r1+0x308
    int result; // r31

    /* anonymous block */ {
        int c; // r29
    }
}

int bkLoadFilenameTable(TBPackageIndex* index, char* filename)
{
    struct _TBFileIndex* file; // r11
    char* filenameData; // r29
    unsigned int* indexInfo; // r10
    struct _TBFilenameTableHeader* table; // r31
    int i; // r8
    int ret; // r28
}

int bkDeleteFilenameTable(TBPackageID id)
{
    TBFilenameTableHeader* table; // r31
    TBFilenameTableHeader* temp; // r30
}

TBFileIndex* bFindIndexFile(TBPackageIndex* index, char* filename)
{
    TBFileIndex* filePtr; // r0
}

unsigned char* bkLoadFileByCRC(TBPackageIndex* index, unsigned int crc, unsigned char* dataPtr, int* retSize, TBFileTagInfo* tagInfo, int noofExtraBytes)
{
    TBFileIndex* filePtr; // r31
    int ret;
}

TBPackageIndex* bOpenPackage(char* filename)
{
    TBPackageIndex * index; // r31
    char buf[256]; // r1+0x8
    char dir[256]; // r1+0x108
    TBFileHandleType* fp; // r1+0x208

    bPrintError("bkOpenPackage: Out of memory \'%s\' (%d bytes wanted)\n", filename, 0x140);
    bPrintError("bkOpenPackage: (only %d bytes available: %d more required) ***\n");
    bPrintError("bkOpenPackage: Could not open file \'%s\'\n");
    bPrintError("bkOpenPackage: Could not read index from \'%s\'\n");
    bPrintError("bkOpenPackage: Package is empty! \'%s\'\n");
    bPrintError("bkOpenPackage: Out of memory for index \'%s\' (wanted %d bytes)\n");
    bPrintError("bkOpenPackage: (only %d bytes available: %d more required) ***\n");
    return NULL;
}

void bInitResources()
{
    memset(&bGlobalResourceList, 0, sizeof(bGlobalResourceList));
    memset(bGlobalResourceSubList, 0, sizeof(bGlobalResourceSubList));
    bGlobalResourceList.crc = 0x80000000;
    bGlobalResourceSubList[1].crc = 0xA0000000;
    bGlobalResourceList.child2 = bGlobalResourceSubList + 1;

    bGlobalResourceSubList[1].child1 = 0;
    bGlobalResourceSubList[0].crc = 0x40000000;
    bGlobalResourceList.parent = 0;
    bGlobalResourceList.child1 = bGlobalResourceSubList;
    bGlobalResourceList.type = 0xFF;
    bGlobalResourceSubList[0].type = 0xFF;
    bGlobalResourceSubList[1].type = 0xFF;
    bGlobalResourceSubList[1].parent = &bGlobalResourceList;
    bGlobalResourceSubList[0].parent = &bGlobalResourceList;
    bGlobalResourceSubList[0].child1 = 0;
    bGlobalResourceSubList[0].child2 = 0;
    bGlobalResourceSubList[1].child2 = 0;
}

void bDeleteGlobalResource(TBResourceInfo* resPtr)
{

}

TBErrorMessage bErrorMessages[6] = {
    { { }, -1000, 0 },
    { { }, -1000, 0 },
    { { }, -1000, 0 },
    { { }, -1000, 0 },
    { { }, -1000, 0 },
    { { }, -1000, 0 }
};

typedef struct TCodeSignature
{
    unsigned char magicMarker[64]; // offset 0x0, size 0x40
    char identString[256]; // offset 0x40, size 0x100
    int yearToExpire; // offset 0x140, size 0x4
    int monthToExpire; // offset 0x144, size 0x4
    int dayToExpire; // offset 0x148, size 0x4
    unsigned int doubleCheck; // offset 0x14C, size 0x4
} TCodeSignature;
static volatile TCodeSignature codeSignature = { };
static TBFilenameTableHeader filenameTable = { { }, &filenameTable, &filenameTable };
TBResourceLoadFunction bResLoadFunction[21] = { 0 };
TBResourceDeleteFunction bResDeleteFunction[21] = { 0 };

static int bResLoadOrder[21] = {
    18, 19, 20, 17,
    0, 1, 2, 3,
    4, 5, 6, 7,
    8, 9, 10, 11,
    12, 13, 14, 15,
    16
};

int bLoadPackageResources(TBPackageIndex* package, unsigned int typeMask, int groupId, unsigned int tagMatch)
{
    TBFileIndex* filePtr; // r9
    TBFileIndex* searchPtr;
    int l; // r31
    int k; // ctr
    int noofLoaded; // r27
    int matchMask; // r6
    int typeLoop; // r29
    int found; // r7
    unsigned int * tag; // r11
    int prevOffs; // r24
    int searchOffs; // r10

    {
        int strLoaded; // r3
    }

    {
        int lipsyncsLoaded; // r3
    }

}

TBResourceInfo* bLoadResource(TBPackageIndex* index, char* filename, EBResourceType resType, int groupID)
{
    unsigned int crc; // r4
    TBResourceInfo* res;
}

TBResourceInfo* bLoadResourceByCRC(TBPackageIndex* index, unsigned int crc, EBResourceType resType, int groupID)
{
    TBResourceInfo * res; // r31
}

TBResourceInfo* bkFindResourceByCRC(EBResourceType resType, unsigned int crc, TBPackageID packageId, unsigned int groupId, unsigned int flags)
{
    TBResourceInfo* res; // r10
    int l; // r29
    static TBResourceInfo* prevRes[2] = { };
    static int prevIdx = 0;
    static int lang = -1;
    static int langExtLen = 0;
    static char languageExtension[16] = { 0x5F };
}

int bSoundTimerInited = 0;
float bSoundTimeMilliseconds = 0.0f;
static int noofBkgLoadsInList = 0;
static unsigned int bkgCommandUid = 0;
static int quitThread = 0;
static int bkgBusy = 0;
static int bkgLoadWake = 0;
static int desiredTransferRate = 104857600;

TBStringTable* bLoadStringTableByCRC(TBPackageIndex* pakIndex, unsigned int crc)
{
    TBStringTable* tablePtr; // r31
    int l; // r30
    int index; // r10
    unsigned int u; // r10

    // This inline is also in the DWARF for Bratz: Rock Angelz, so we probably have it too.
    // inline struct _TBTexture * bkFindTextureByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}
}

static unsigned short* bStringPrintFormat(unsigned short* target, int formatAt, int width, int precision, int pfound, unsigned char pad, unsigned short echar, unsigned char formatChar, va_list argp)
{
    // TODO: This function is absolutely massive. I'll copy over all the DWARF info when I'm ready to work on it.
}

int bkStringVSprintf16(unsigned short* target, const char* format, va_list argp)
{
    // Local variables
    int width; // r5
    int precision; // r29
    int pfound; // r7
    unsigned char pad;
    unsigned short echar; // r30
    unsigned short * start; // r27

    /* anonymous block */ {
        int formatAt; // r4
    }
}

int bkStringSprintf16(unsigned short* target, const char* format, ...)
{
    va_list argp;
    int ret;
    va_start(argp, format);
    ret = bkStringVSprintf16(target, format, argp);
    va_end(argp);
    return ret;
}

TBStringTableString* bkFindString(TBStringTable* stringTable, char* identifier, int offset)
{
    unsigned int index; // r11
    unsigned int crc; // r7
}

int bkStringNPrintf(char* target, unsigned int maxLen, const char* format, ...)
{
    va_list argp;
    int ret;
    va_start(argp, format);
    ret = vsprintf(target, format, argp);
    va_end(argp);
    return ret;
}

void bkUpdate(int modules)
{
    int reenablePooling; // r28

    /* anonymous block */ {
        unsigned long long curTime; // r30
    }
}

int bKernelInitBkgLoad()
{
    int loop;
    int priority;
}

static void bFixupResource(TBBkgLoadCmd* cmd)
{
    char* cp; // r3
}

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



static unsigned char* LoadSingleFileBkg(char* filename, unsigned char* dataPtr, int* retSize, char* eventName, int resType, unsigned int crc)
{
    struct _TBFileHandleType * fp; // r1+0x118
    int len; // r31
    char buf[256]; // r1+0x18
    unsigned char * oldDataPtr; // r25
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
}

static int bkgOpenFile(TBkgSchedulerChannel* channel)
{
    int size; // r3
}

static void KickScheduler(unsigned long context)
{
    TBkgSchedulerChannel * channel; // r31
    int c; // r29
    int channelID; // r30
    static int startChannel = -1;
}

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
char** bArgv = NULL;

static void BkgIOCompletion(long bytesTransferred, DVDFileInfo* fileInfo)
{
    unsigned long long ticksPerKb;
    unsigned long long desiredTime; // r27
    unsigned long long actualTime; // r3
    unsigned long long delay; // r9
    int sleepTime;
    int rate;
    TBkgSchedulerChannel* channel; // r31
}

static void BackgroundLoadFreeRequest(TBkgSchedulerChannel* channel /* r29 */)
{
    TBBkgLoadCmd* cmd; // r31
    int l; // r30
    unsigned int uid; // r11
}

void bInitDebug()
{
    TBClock clock;
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

    bkCreateMutex(&bPrintfMutex);
    if ((bBkInitFlags & 8) != 0)
    {
        bkCreateDebugStream(&bDefaultDebugStream, "", 0);
    }
    else
    {
        if ((bBkInitFlags & 0x100) != 0)
        {
            bkCreateDebugStream(&bDefaultDebugStream, "" , (bBkInitFlags & 0x200) ? 0x16 : 6);
        }
        else
        {
            bkCreateDebugStream(&bDefaultDebugStream, "debugLog.txt", (bBkInitFlags & 0x200) ? 0x16 : 6);
        }
    }

    bkSetDebugStream(NULL);
    bkPrintf("\n-----------------------------------------\n");
    bkPrintf("Babel Execution Log, (c) 2001 Blitz Games\n");
    bkPrintf("  Babel 120.0.216 \n");
    bkPrintf("-----------------------------------------\n");

    bReadClock(&clock);

    bkPrintf("Current time is %02d:%02d:%02d, %d %s 20%02d\n",
        clock.hour,
        clock.minute,
        clock.second,
        clock.day,
        months[clock.month - 1],
        clock.year
    );
}

char bHomeDirectory[256] = { };

void bPrintError(char* format, ...)
{
    va_list argp; // r1+0x70
    char buf[512]; // r1+0x80
}

void bkPrintf(char* format, ...)
{
    va_list argp; // r1+0x70
}

void bkVPrintf(char* format, va_list argp) {
    long long ticks;
    OSCalendarTime td; // r1+0x8

    /* anonymous block */ {
        int len; // r5
    }

    /* anonymous block */ {
        unsigned long long start; // r28
        unsigned long long pause; // r30
    }
}

int bHandleDVDErrors(char* buf)
{
    int status; // r31
    int coverOpenedFlag; // r28
}

int bkReadFromFile(TBFileHandleType* fp, void* data, int noofBytes)
{
    unsigned int dataOver;
    unsigned int noofBytesOver; // r28
    int noofBytesRead; // r31
    int totalBytesRead; // r24
    int bufferSize; // r23
    void * buffer; // r25
    int readAligned; // r5
    int read;
    int vsyncs; // r29
    int nextVsyncCount; // r31
}

u8* bSpecificHeapInit(void* basePtr, unsigned int size)
{
    BOOL old = OSDisableInterrupts();
    void* arenaLo = OSGetArenaLo();
    void* arenaHi = OSGetArenaHi();
    void* heap;
    unsigned int base;

    bkPrintf("Available Memory %d bytes from 0x%X to 0x%X\n", 
        (s32)arenaHi - (s32)arenaLo, arenaLo, arenaHi);

    // TODO: weird branch
    if (basePtr == NULL || basePtr >= arenaLo)
    {
        base = ((u32)basePtr + size);
        if (base > (u32)arenaHi)
        {
            bkPrintf("Unable to allocate memory of %d bytes from specified base 0x%X to 0x%X [0x%X 0x%X]\n",
                size, basePtr, base, arenaLo, arenaHi);
            OSRestoreInterrupts(old);
            return NULL;
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
        return NULL;
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

void bDeleteAllResources(TBResourceInfo* res);
void bDeleteResource(void* resPtr);

void bShutdownKernel()
{
    bkDeleteFilenameTable(TBPackageID());
    if (bGlobalResourceList.child1->child1 != NULL
        || bGlobalResourceList.child1->child2 != NULL
        || bGlobalResourceList.child2->child1 != NULL
        || bGlobalResourceList.child2->child2 != NULL)
    {
        bkPrintf("\n*** RESOURCE LEAKS DETECTED :\n");
        bkPrintf("\n");
    }
    else
    {
        bkPrintf("Resource list is clean\n");
    }

    if (bGlobalResourceList.child1 != NULL)
    {
        bDeleteAllResources(bGlobalResourceList.child1);
    }

    if (bGlobalResourceList.child2 != NULL)
    {
        bDeleteAllResources(bGlobalResourceList.child2);
    }

    bDeleteResource(&bGlobalResourceList);
    bkDeleteMutex(&filenameTableMutex);
    bkDeleteEvent("_DiskError");
    bInsideEventCallback = 0;
    bkDeleteEvent(NULL);
    bkDeleteMutex(&eventMutex);
    bShutdownTimer();
    bkDeleteMutex((OSMutex *)&bPrintfMutex);
    bkPerfMonShutdown();
}

int bResetCheck(int reset)
{
    static char buf[2] = { '0', 0 };
    TBEvent* event;
    int hardwareReset;

    return 0;
}

int bkFreePackageMemory(TBPackageIndex** index)
{
    
}

void bkSetVerboseLevel(enum EBVerboseLevel level, unsigned int module, unsigned int flags)
{
    if (level < BDVERBOSE_ASSERTS)
    {
        bkPrintf("*WARNING* bkSetVerboseLevel: Setting level < BDVERBOSE_ASSERTS could cause problems\n");
    }

    bVerboseModule = module;
    bVerboseLevel = level;
    bVerboseFlags = flags;
}

void bkPushVerboseLevel(enum EBVerboseLevel level, unsigned int modules, unsigned int flags)
{
    bVerboseModuleStack[bVerboseStackSize] = bVerboseModule;
    bVerboseLevelStack[bVerboseStackSize] = bVerboseLevel;
    bVerboseFlagsStack[bVerboseStackSize] = bVerboseFlags;

    if (level < 2)
    {
        bkPrintf("*WARNING* bkSetVerboseLevel: Setting level < BDVERBOSE_ASSERTS could cause problems\n");
    }

    bVerboseModule = modules;
    bVerboseLevel = level;
    bVerboseFlags = flags;
    bVerboseStackSize += 1;
}

void bkPopVerboseLevel()
{
    --bVerboseStackSize;
    bVerboseModule = bVerboseModuleStack[bVerboseStackSize];
    bVerboseLevel = bVerboseLevelStack[bVerboseStackSize];
    bVerboseFlags = bVerboseFlagsStack[bVerboseStackSize];
}

char* bkDataToSafeString(unsigned char* data, int dataSize, char* buffer, int bufferSize)
{
    int length;
    char* bufPtr = buffer;

    if (data == NULL)
    {
        *buffer = '\0';
        return buffer;
    }

    length = bufferSize - 1;
    if (length > dataSize)
        length = dataSize;

    while (length-- > 0)
    {
        if (*data >= ' ')
            *bufPtr++ = *data;
        else
            *bufPtr++ = '.';

        ++data;
    }

    *bufPtr = '\0';
    return buffer;
}

TBEventClient * bkTrapEventCallback(char* eventName, TBEventCallback callback, void* context)
{
    TBEventClient* client; // r8
    TBEvent* event; // r31
}

TBEventClient * bkTrapEventQueue(char* eventName, int queueSize, unsigned int flags)
{
    TBEventClient* client; // r8
    TBEvent* event; // r31
}

void bkDeleteEventClient(TBEventClient* client)
{

}

void bkDeleteEventTraps(char* eventName)
{
    struct _TBEventClient * client; // r31
    struct _TBEvent * event; // r30
}

#include "../../Common/Src/bKernel/crc32.cpp"

void bkSetLanguage(EBLanguageID languageId)
{
    bLanguage = languageId;
}

int bPerfMonActive = 0;
int bPerfMonRunning = 0;
u8* bPerfMonGraphDisplayList = 0;
int bPerfMonGraphDisplayListSize = 0;
u64 bTimerFrequency = 0;

int bkPackageFileLength(TBPackageIndex* index, char* filename, int flags)
{
    char buf[256]; // r1+0x8
}

TBResourceInfo* bNullResourceLoadFunction(TBPackageIndex* index, unsigned int crc)
{
    return NULL;
}

void bNullResourceDeleteFunction(TBResourceInfo* resPtr)
{

}

void bAddGlobalResourceToTree(TBResourceInfo* resPtr, TBResourceInfo* parent)
{

}

void bAddGlobalResource(TBResourceInfo* resPtr, TBPackageIndex* pakSrc, int type, int groupID)
{

}

void bDeletePackageResources(TBPackageID packageId, unsigned int typeMask, TBResourceInfo* res)
{

}

void bDeletePackageResources(TBPackageID packageId, unsigned int typeMask)
{

}

void bDeleteResourceGroup(unsigned int typeMask, unsigned int groupID, TBResourceInfo* res)
{

}

void bDeleteResourceGroup(unsigned int typeMask, unsigned int groupID)
{

}

void bDeleteAllResources(TBResourceInfo* res)
{

}

void bDeleteResource(void* resPtr)
{
    TBResourceInfo* delRes;
}

unsigned int bkFixStringTableCRC(unsigned int crc)
{
    char str[5]; // r1+0x8
}

void bDeleteStringTable(TBStringTable* tablePtr)
{

}

char* bkString16to8(char* dest, const unsigned short* src)
{
    char* dp; // r9
}

unsigned short* bkString8to16(unsigned short* dest, const char* src)
{
    unsigned short* dp; // r9
}

int bkStringLength16(const unsigned short* str)
{
    const unsigned short * eos; // r3
}

unsigned short* bkStringCopy16(unsigned short* dst, const unsigned short* src)
{
    unsigned short* cp; // r11
}

int bkStringCompare16(const unsigned short* src, const unsigned short* dst, int length)
{
    int c; // r11
    int ret; // r0
}

unsigned short* bkStringFindLetter16(const unsigned short* src, unsigned short letter)
{
    const unsigned short* s; // r3
}

TBStringTableString* bkFindStringByCRC(TBStringTable* stringTable, unsigned int crc, int offset)
{
    unsigned int index; // r11
}

int bkStopStopwatchEnd(struct _TBStopwatch* stop)
{

}

float bkTimerToMilliseconds(unsigned long long value)
{

}

unsigned long long bkMillisecondsToTimer(float value)
{

}

int bkInit(void* base, unsigned int size, unsigned int flags)
{

}

void bkShutdown()
{

}

int bKernelShutdownBkgLoad()
{

}

void bUpdateBkgLoad() {
    TBkgSchedulerChannel* channel; // r3
    int l; // r31
}

int bQueueBackgroundLoad(EBBkgChannel channel, char* dest, TBFileHandleType* fp, char* onDiskFilename, char* filename, unsigned int crc, int offset, int noofBytes, int flags, char* event, int resType) 
{
    TBBkgLoadCmd * cmd; // r31
}

int bIsBkgChannelBusy(EBBkgChannel channel)
{
    
}

static int bScheduleLoad(TBBkgLoadCmd* cmd, void (*callback)(void*), void* context)
{
    TBkgSchedulerChannel* channel; // r31
}

static void* bKernelWorkerThread(void* context)
{

}

static void bEndLoad(TBkgSchedulerChannel* channel)
{

}

static void BackgroundLoadComplete(void* context)
{
    struct _TBBkgLoadCmd * cmd; // r9
    struct _TBkgSchedulerChannel * channel; // r9
    int l; // r11
    unsigned int uid; // r3
}

int bkCancelLoadPackageBkg(TBPackageIndex* packageIndex)
{
    int l; // r10
    if (packageIndex == NULL)
        return 0;
    return 1;
}

int bkReadClock(TBClock* clock)
{
    return bReadClock(clock);
}

TBDebugStream* bkCreateDebugStream(TBDebugStream* stream, char* filename, unsigned int flags)
{
    if (stream == NULL)
    {
        stream = (TBDebugStream*)bkHeapAlloc(sizeof(TBDebugStream), (char*)UNIT_DATA(File, "File"), 0, 0x2006);
        if (stream == NULL)
            return NULL;
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
            return NULL;
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
        fp = (TBFileHandleType*)bkHeapAlloc(sizeof(TBFileHandleType), "File", 0, 0x2006);
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

TBPackageIndex* bkOpenPackage(char* filename)
{
    return bOpenPackage(filename);
}

void bkClosePackage(TBPackageIndex* index)
{
    if (index == NULL)
        return;

    bkDeleteFilenameTable(index->id);

    if (!index->id.loaded)
    {
        bkCloseFile(index->fp);
        if (index->index != NULL)
        {
            bkHeapFree(index->index);
            index->index = 0;
        }

        if (index->tags != NULL)
        {
            bkHeapFree(index->tags);
            index->tags = 0;
        }
    }
    else
    {
        bDeletePackageResources(index->id, ~0U);
    }

    if (!(index->flags & 1))
    {
        bkHeapFree(index);
    }
}
