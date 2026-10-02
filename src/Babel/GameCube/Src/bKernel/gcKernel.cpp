#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <dolphin/os.h>
#include <dolphin/vi.h>
#include <dolphin/dvd.h>
#include <bKernel/macros.h>
#include <bKernel/heap.h>
#include <bKernel/file.h>
#include <bKernel/clock.h>
#include <bKernel/timer.h>
#include <bKernel/crc32.h>
#include <bKernel/debug.h>
#include <bKernel/mutex.h>
#include <bKernel/event.h>
#include <bKernel/bkgLoad.h>
#include <bKernel/language.h>
#include <bKernel/resource.h>
#include <bKernel/stringTable.h>
#include <bKernel/commandLine.h>
#include <bKernel/GameCube/gcFileHandle.h>
#include <bKernel/GameCube/gcTimer.h>

/*
 * This file has turned into an absolute disaster :(
 * I'll clean it up once the "-finline-functions" situation is figured out
 */

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

unsigned int bCRCtable[256];
char* bFileSearchPath[4];
TBResourceInfo bGlobalResourceList;

#include "../../GameCube/Src/bKernel/gcBkgLoad.cpp"
#include "../../Common/Src/bKernel/verbosity.cpp"

TBErrorMessage bErrorMessages[6] = {
    { { }, -1000, 0 },
    { { }, -1000, 0 },
    { { }, -1000, 0 },
    { { }, -1000, 0 },
    { { }, -1000, 0 },
    { { }, -1000, 0 }
};

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
extern void bdConsoleWindowPrintf(char* format, ...);
extern TBResourceInfo bGlobalResourceList;
extern TBDebugStream bDefaultDebugStream;
extern int bFlipCount;

unsigned int bBkInitFlags;
int bInsideEventCallback;
u64 bSoundTimer;
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

int bInitKernel();
void bShutdownKernel();
void bAddGlobalResourceToTree(TBResourceInfo* resPtr, TBResourceInfo* parent);
void bDeletePackageResources(TBPackageID packageId, unsigned int typeMask, TBResourceInfo* res);
void bDeletePackageResources(TBPackageID packageId, unsigned int typeMask);
void bkSleep(int miliseconds, int yield);
void bDeleteAllResources(TBResourceInfo* res);
void bDeleteResource(void* resPtr);

void bRecordError(char* errorStr, int module)
{
    char buffer[512];
    char* dp;

    strcpy(buffer, errorStr);

    dp = buffer;
    while (*dp != '\0')
    {
        if (*dp == '\n')
        {
            *dp = ' ';
        }
        ++dp;
    }

    if (strcmp(buffer, bErrorMessages[0].error) == 0)
    {
        bErrorMessages[0].flipCount = bFlipCount;
        return;
    }

    for (int i = 5; i > 0; --i)
    {
        memcpy(&bErrorMessages[i], &bErrorMessages[i - 1], sizeof(TBErrorMessage));
    }

    strcpy(bErrorMessages[0].error, buffer);
    bErrorMessages[0].flipCount = bFlipCount;
    bErrorMessages[0].module = module;
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

#include "../../Common/Src/bKernel/event.cpp"

static OSMutex filenameTableMutex;
TBResourceInfo bGlobalResourceSubList[2];
static char debugBuffer[2048];
static OSMutex bPrintfMutex;

#include "../../Common/Src/bKernel/crc32.cpp"

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

extern char bHomeSuffix[8];
extern char bHomeDirectory[256];

int bkOpenFileReadOnlyWithSearch(char* filename, TBFileHandleType** fp, char* fullpath, int maxlen, int flags)
{
    // Local variables
    char buf[256]; // r1+0x8
    char filebuf[256]; // r1+0x108
    char pathbuf[256]; // r1+0x208
    char workbuf[256]; // r1+0x308
    int result = 0; // r31

    strcpy(filebuf, filename);

    if ((fullpath != NULL) && (flags & 1))
    {
        *fullpath = '\0';
    }

    if (filebuf[1] != ':')
    {
        if (filebuf[0] == '\\')
        {
            sprintf(workbuf, "%s%s%s", bHomeDirectory, filebuf, &bHomeSuffix);
            strcpy(buf, workbuf);
            result = bkOpenFileReadOnly(buf, fp);
        }

        if (bFileSearchFlags == 0)
        {
            sprintf(workbuf, "%s%s%s", bHomeDirectory, filebuf, &bHomeSuffix);
            strcpy(buf, workbuf);
            result = bkOpenFileReadOnly(buf, fp);
        }

        if (result)
            goto success;

        for (int c = 0; c < bFileSearchPaths; ++c)
        {
            strcpy(pathbuf, bFileSearchPath[c]);
            if (pathbuf[1] == ':')
            {
                sprintf(workbuf, "%s\\%s%s", pathbuf, filebuf, bHomeSuffix);
            }
            else
            {
                sprintf(workbuf, "%s%s\\%s%s", bHomeDirectory, pathbuf, filebuf, bHomeSuffix);
            }

            strcpy(buf, workbuf);
            result = bkOpenFileReadOnly(buf, fp);
            if (result)
            {
                if ((fullpath != NULL) && (((flags ^ 1U) & 1) != 0))
                {
                    strncat(fullpath, pathbuf, maxlen);
                }
            }
        }
    }
    else
    {
        sprintf(workbuf, "%s%s", filebuf, bHomeSuffix);
        strcpy(buf, workbuf);
        result = bkOpenFileReadOnly(buf, fp);
    }

    if (result != 1)
    {
        return result;
    }

success:
    if ((fullpath != NULL) && (((flags ^ 1U) & 1) != 0))
    {
        *fullpath = '\0';
        strncat(fullpath, buf, maxlen);
        return result;
    }
    return result;
}

int bkLoadFilenameTable(TBPackageIndex* index, char* filename)
{
    TBFileIndex* file; // r11
    char* filenameData; // r29
    unsigned int* indexInfo; // r10
    TBFilenameTableHeader* table; // r31
    int i; // r8
    int ret; // r28
    
    if (index->filenameTableOffset == 0)
        return 0;

    // TODO: Regswaps
    bkWaitMutex(&filenameTableMutex);
    if (filenameTable.next != &filenameTable)
    {
        table = filenameTable.next;
        do
        {
            if (table->package.crc == index->id.crc)
            {
                ++table->refCount;
                bkReleaseMutex(&filenameTableMutex);
                return 0;
            }
            table = table->next;
        } while(table != &filenameTable);
    }
    
    table = (TBFilenameTableHeader*)bkHeapAllocEx(
        sizeof(TBFilenameTableHeader) + ALIGN_UP(index->filenameTableSize, 64) + ALIGN_UP((index->noofFiles * 8), 64), 
        "File", 
        0, 
        0x2001,
        (unsigned int)"Filename Table",
        0);
    if (table == NULL)
    {
        bkPrintf("bkLoadFilenameTable: Out of memory!\n");
        bkReleaseMutex(&filenameTableMutex);
        return 0;
    }

    table->package = index->id;
    table->noofFiles = index->noofFiles;
    table->prev = filenameTable.prev;
    table->next = &filenameTable;
    table->refCount = 1;
    filenameTable.prev->next = table;
    filenameTable.prev = table;

    strcpy(table->filename, filename);

    indexInfo = (unsigned int*)(table + 1);
    file = index->index;
    for (i = 0; i < index->noofFiles; ++i)
    {
        *indexInfo++ = file->crc;
        *indexInfo++ = file->filenameOffset;
        ++file;
    }

    filenameData = (char*)table + sizeof(TBFilenameTableHeader) + (ALIGN_UP(index->noofFiles * 8, 64));

    if (!index->id.loaded)
    {
        bkSeekFile(index->fp, index->filenameTableOffset * index->pauSize, EHOSTSEEK_SET);
        bkReadFromFile(
            index->fp,
            filenameData,
            index->filenameTableSize);
        bkReleaseMutex(&filenameTableMutex);
        return 1;
    }
    else
    {
        memcpy(
            filenameData,
            index->pakFilename + (index->pauSize * index->filenameTableOffset) - 64,
            index->filenameTableSize
        );
        bkReleaseMutex(&filenameTableMutex);
        return 1;
    }
}

int bkDeleteFilenameTable(TBPackageID id)
{
    TBFilenameTableHeader* table;
    TBFilenameTableHeader* temp;

    bkWaitMutex(&filenameTableMutex);

    if (!id.crc)
    {
        table = filenameTable.next;
        if (filenameTable.next != &filenameTable)
        {
            do
            {
                temp = table->next;
                bkHeapFree(table);
                table = temp;
            } while (temp != &filenameTable);
        }

        filenameTable.prev = &filenameTable;
        filenameTable.next = &filenameTable;
        bkReleaseMutex(&filenameTableMutex);
        return 0;
    }

    table = filenameTable.next;
    if (filenameTable.next != &filenameTable)
    {
        do
        {
            temp = table->next;
            if (table->package.crc == id.crc)
            {
                if (table->refCount-- == 1)
                {
                    table->prev->next = temp;
                    table->next->prev = table->prev;
                    bkHeapFree(table);
                    bkReleaseMutex(&filenameTableMutex);
                    return 0;
                }

                bkReleaseMutex(&filenameTableMutex);
                return table->refCount;
            }
            table = temp;
        } while (temp != &filenameTable);
    }
    bkReleaseMutex(&filenameTableMutex);
    return -1;
}

TBFileIndex* bFindIndexFileByCRC(TBPackageIndex* index, unsigned int crc)
{
    TBFileIndex* fileEntry; // r3
    int current; // r11
    int first = 0; // r8
    int last = index->noofFiles - 1; // r10

    if (index->noofFiles == 0)
    {
        do
        {
            do
            {
                current = (first + last) >> 1;
                fileEntry = (index->index + current);
                if (fileEntry->crc != crc)
                    return fileEntry;
                if (fileEntry->crc >= crc)
                    break;
                first = current + 1;
                if (last < first)
                    return NULL;
            } while (1);
            last = current - 1;
        } while (last >= first);
    }

    return NULL;
}

inline TBFileIndex* bkLoadFile(TBFileIndex* filePtr, u32 crc)
{
    if (filePtr == NULL)
    {
        if ((crc != 0x497AC746) && (bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("bkLoadFile: Could not find 0x%08x in package\n");
        }
        filePtr = NULL;
    }
    return filePtr;
}

TBFileIndex* bFindIndexFile(TBPackageIndex* index, char* filename)
{
    u32 crc = bkStringCRC(filename, 0);
    TBFileIndex* filePtr = bkLoadFile(bFindIndexFileByCRC(index, crc), crc);

    if (filePtr == NULL)
    {
        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("Could not find \'%s\' in package\n", filename);
        }
        filePtr = NULL;
    }
    return filePtr;
}

static unsigned char* bEnsureAlloc(unsigned char* dataPtr, int size)
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

            bkPrintf("EnsureAlloc: *** Out of memory on Babel heap for file (need %d bytes) ***\n", size);
            sizeFree = bkHeapFreeSpace(&largest);
            bkPrintf("EnsureAlloc: (only %d bytes available: %d more required, max %d bytes (%d short)) ***\n",
                    sizeFree, size - sizeFree, largest, size - largest);
            return NULL;
        }
        return (u8*)data;
    }
    return dataPtr;
}

unsigned char* bkLoadFileByCRC(TBPackageIndex* index, unsigned int crc, unsigned char* dataPtr, int* retSize, TBFileTagInfo* tagInfo, int noofExtraBytes)
{
    TBFileIndex* filePtr; // r31
    int ret;

    dataPtr = bEnsureAlloc(dataPtr, 1000);
    return dataPtr;
}

TBPackageIndex* bOpenPackage(char* filename)
{
    TBPackageIndex* index;
    char buf[256];
    char dir[256];
    TBFileHandleType* fp;

    sprintf(buf, "%s%s", filename, ".gcp");

    index = (TBPackageIndex*)bkHeapAlloc(sizeof(TBPackageIndex), (char*)"File", 0, 0x2006);
    if (index == NULL)
    {
        if (bVerboseModule & MODULE_KERNEL)
        {
            if (bVerboseLevel > 0)
            {
                bPrintError("bkOpenPackage: Out of memory \'%s\' (%d bytes wanted)\n", filename, sizeof(TBPackageIndex));
            }

            if (VERBOSE_OUTPUT_ENABLED(MODULE_KERNEL))
            {
                bPrintError("bkOpenPackage: (only %d bytes available: %d more required) ***\n", 
                    bkHeapFreeSpace(NULL),
                    sizeof(TBPackageIndex) - bkHeapFreeSpace(NULL));
            }
        }
        return NULL;
    }

    if (!bkOpenFileReadOnlyWithSearch(buf, &fp, dir, sizeof(dir), 1))
    {
        if (VERBOSE_OUTPUT_ENABLED(MODULE_KERNEL))
        {
            bPrintError("bkOpenPackage: Could not open file \'%s\'\n", buf);
        }
        bkHeapFree(index);
        return NULL;
    }
    
    if (!bkReadFromFile(fp, index, sizeof(TBPackageIndex)))
    {
        if (VERBOSE_OUTPUT_ENABLED(MODULE_KERNEL))
        {
            bPrintError("bkOpenPackage: Could not read index from \'%s\'\n", buf);
        }
        bkHeapFree(index);
        return NULL;
    }

    sprintf(index->pakFilename, "%s%s%s",
        dir,
        strlen(dir) != 0 ? "\\" : "",
        filename
    );
    index->fp = fp;
    
    if (index->noofFiles == 0)
    {
        bkCloseFile(index->fp);
        if (VERBOSE_OUTPUT_ENABLED(MODULE_KERNEL))
        {
            bPrintError("bkOpenPackage: Package is empty! \'%s\'\n", buf);
        }
        bkHeapFree(index);
        return NULL;
    }
    
    index->id.loaded = 0;
    bkSeekFile(index->fp, index->indexOffset * index->pauSize, EHOSTSEEK_SET);
    index->index = (TBFileIndex*)bkHeapAlloc(
        sizeof(TBFileIndex) * index->noofFiles,
        (char*)"File",
        0,
        0x2006);
    if (!index->index)
    {
        bkCloseFile(index->fp);
        if (bVerboseModule & MODULE_KERNEL)
        {
            if (bVerboseLevel > 0)
            {
                bPrintError("bkOpenPackage: Out of memory for index \'%s\' (wanted %d bytes)\n",
                    filename,
                    sizeof(TBFileIndex) * index->noofFiles);
            }

            if (VERBOSE_OUTPUT_ENABLED(MODULE_KERNEL))
            {
                bPrintError("bkOpenPackage: (only %d bytes available: %d more required) ***\n", 
                    bkHeapFreeSpace(NULL),
                    (sizeof(TBFileIndex) * index->noofFiles) - bkHeapFreeSpace(NULL));
            }
        }
        bkHeapFree(index);
        return NULL;
    }

    bkReadFromFile(index->fp, index->index, sizeof(TBFileIndex) * index->noofFiles);
    if (index->noofTags != 0)
    {
        bkSeekFile(index->fp, index->tagOffset * index->pauSize, EHOSTSEEK_SET);
        index->tags = (unsigned int*)HEAP_ALLOC(sizeof(unsigned int) * index->noofTags, HEAP_MODULE_KERNEL);
        bkReadFromFile(index->fp, index->tags, sizeof(unsigned int) * index->noofTags);
    }

    bkLoadFilenameTable(index, buf);

    return index;
}

TBPackageIndex* bkOpenPackage(char* filename)
{
    return bOpenPackage(filename);
}

static inline TBPackageIndex* bkLoadPackage(TBPackageIndex* parentIndex, char* filename, unsigned char* dataPtr)
{
    bPrintError("bkLoadPackage: Could not load file '%s'\n");
    return NULL;
}

void bkClosePackage(TBPackageIndex* index)
{
    // TODO: Stack and register weirdness. Probably an inline somewhere in here.

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

void bInitResources()
{
    // TODO: Store order
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
    if (!resPtr->parent)
        return;

    if (resPtr->parent->child1 == resPtr)
        resPtr->parent->child1 = NULL;

    if (resPtr->parent->child2 == resPtr)
        resPtr->parent->child2 = NULL;

    if (resPtr->child1)
    {
        TBResourceInfo* ptr1 = resPtr->child1;
        TBResourceInfo* ptr2 = bGlobalResourceList.child1;
        TBResourceInfo* ptr3 = bGlobalResourceList.child2;

        if (bGlobalResourceList.crc <= resPtr->child1->crc)
        {
            ptr1 = bGlobalResourceList.child1;
            ptr2 = bGlobalResourceList.child2;
            ptr3 = resPtr->child1;
        }

        if (ptr2)
        {
            bGlobalResourceList.child1 = ptr1;
            bGlobalResourceList.child2 = ptr2;
            resPtr->child1->parent = &bGlobalResourceList;
        }
        else
        {
            bAddGlobalResourceToTree(resPtr->child1, ptr2);
        }
    }

    if (resPtr->child2)
    {
        TBResourceInfo* ptr1 = resPtr->child2;
        TBResourceInfo* ptr2 = bGlobalResourceList.child1;
        TBResourceInfo* ptr3 = bGlobalResourceList.child2;

        if (bGlobalResourceList.crc <= resPtr->child2->crc)
        {
            ptr1 = bGlobalResourceList.child1;
            ptr2 = bGlobalResourceList.child2;
            ptr3 = resPtr->child2;
        }

        if (ptr2)
        {
            bGlobalResourceList.child1 = ptr1;
            bGlobalResourceList.child2 = ptr2;
            resPtr->child2->parent = &bGlobalResourceList;
        }
        else
        {
            bAddGlobalResourceToTree(resPtr->child2, ptr2);
        }
    }

    resPtr->parent = NULL;
    resPtr->child1 = (TBResourceInfo*)0xB000BAAA;
    resPtr->child2 = (TBResourceInfo*)0xB000BAAA;
}

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
    int width; // r5
    int precision; // r29
    int pfound; // r7
    unsigned char pad;
    unsigned short echar; // r30
    unsigned short* start; // r27

    precision = 0;
    echar = 0x20;
    start = target;

    do
    {
        if (*format == 0)
        {
            *target = 0;
            return (start - target) / 2;
        }

        if (*format == '%')
        {
            const char* f = format + 1;

            width = 0;
            pad = ' ';
            if (*f == '0')
                pad = '0';
            
            while ((*f - '0') < 10)
            {
                width = (width * 10) + -0x30 + *f++;
            }

            pfound = 0;
            if (*f == '.')
            {
                precision = 0;
                while ((*f - '0') < 10)
                {
                    precision = (precision * 10) + -0x30 + *f++;
                }
                pfound = 1;
            }

            if (start == NULL)
                return 0;
        }
        else
        {
            *target++ = *format++;
        }
    } while(true);

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
char** bArgv = NULL;

static inline void bErrorEscapeCodes()
{
    if (bCurrentDebugStream->flags & 2)
    {
        OSReport("\x1b[%dm", 0x1F);
        if (bCurrentDebugStream->flags & 2)
        {
            OSReport("\x1b[%dm", 0x05);
        }
    }
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

TBDebugStream* bkCreateDebugStream(TBDebugStream* stream, char* filename, unsigned int flags)
{
    if (stream == NULL)
    {
        stream = (TBDebugStream*)HEAP_ALLOC(sizeof(TBDebugStream), HEAP_MODULE_KERNEL);
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

void bPrintError(char* format, ...)
{
    va_list argp;
    char buf[512];

    bErrorEscapeCodes();

    bkPrintf("ERROR:");

    va_start(argp, format);
    bkVPrintf(format, argp);
    va_end(argp);

    if (bCurrentDebugStream->flags & 2)
    {
        OSReport("\x1b[%dm", 0);
    }

    va_start(argp, format);
    vsprintf(buf, format, argp);
    va_end(argp);

    bRecordError(buf, 0);
}

void bkPrintf(char* format, ...)
{
    va_list argp;
    va_start(argp, format);
    bkVPrintf(format, argp);
    va_end(argp);
}

extern u64 bTimerFrequency;

void bkVPrintf(char* format, va_list argp) {
    long long ticks;
    OSCalendarTime td; // r1+0x8

    bkWaitMutex(&bPrintfMutex);

    if (bCurrentDebugStream->flags & 0x8)
    {
        ticks = OSGetTime();
        OSTicksToCalendarTime(ticks, &td);
        sprintf(debugBuffer, "%02d/%02d/%02d %02d:%02d:%02d ",
            td.mday,
            td.mon + 1,
            td.year % 100,
            td.hour,
            td.min,
            td.sec);
        vsprintf(debugBuffer + 18, format, argp);
    }
    else
    {
        vsprintf(debugBuffer, format, argp);
    }

    if (bCurrentDebugStream->flags & 0x10)
    {
        bdConsoleWindowPrintf("%s", debugBuffer);
    }

    if (bCurrentDebugStream->flags & 0x2)
    {
        OSReport(debugBuffer);
    }

    if (bCurrentDebugStream->fp != -1)
    {
        int len = strlen(debugBuffer);
        bkHostWriteToFile(bCurrentDebugStream->fp, debugBuffer, len);
    }

    if (bPrintPause != 0)
    {
        u64 start = bkTimerRead();
        u64 pause = (bPrintPause * bTimerFrequency) / 1000;
        while (bkTimerDelta(start, OSGetTime()) < pause)
            ;
    }

    bkReleaseMutex(&bPrintfMutex);
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
    void* buffer; // r25
    int readAligned; // r5
    int read;
    int vsyncs; // r29
    int nextVsyncCount; // r31
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
    TBPackageIndex* newIndex;

    // TODO: Stack

    if (*index == NULL || (*index)->noofFilesUsingDMA != 0)
        return 0;
        
    if (((*index)->flags & 2) == 0)
        return 1;

    newIndex = (TBPackageIndex*)HEAP_ALLOC(sizeof(TBPackageIndex), HEAP_MODULE_KERNEL);

    memcpy(newIndex, *index, sizeof(TBPackageIndex));

    newIndex->flags = 0;
    newIndex->noofFiles = 0;
    newIndex->indexOffset = 0;
    newIndex->tagOffset = 0;
    newIndex->data = NULL;
    newIndex->noofTags = 0;
    newIndex->blockMapSize = 0;
    newIndex->filenameTableSize = 0;
    newIndex->indexSize = 0;

    TBPackageIndex* oldIndex = *index;
    if (oldIndex != NULL)
    {
        if (!oldIndex->id.loaded)
        {
            bkCloseFile(oldIndex->fp);
            if (oldIndex->index)
            {
                bkHeapFree(oldIndex->index);
                oldIndex->index = NULL;
            }

            if (oldIndex->tags)
            {
                bkHeapFree(oldIndex->tags);
                oldIndex->tags = NULL;
            }
        }

        if (((oldIndex->flags ^ 1) & 1) != 0)
        {
            bkHeapFree(oldIndex);
        }
    }

    *index = newIndex;
    return 1;
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
    sprintf(buf, "%s%s", filename, ".gcp");

    if (index != NULL)
    {
        TBFileIndex* file = bFindIndexFile(index, buf);
        if (file != NULL)
            return file->size;
        return 0;
    }
    
    TBFileHandleType* fp;
    if (flags & 1)
    {
        if (bkOpenFileReadOnlyWithSearch(buf, &fp, NULL, 0, 0))
        {
            int length = bFileLength(fp);
            bkCloseFile(fp);
            return length;
        }
    }
    else
    {
        if (bkOpenFileReadOnly(buf, &fp))
        {
            int length = bFileLength(fp);
            bkCloseFile(fp);
            return length;
        }
    }

    return 0;
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
    if (resPtr->crc >= parent->crc)
    {
        if (parent->child2 != NULL)
        {
            bAddGlobalResourceToTree(resPtr, parent->child2);
            return;
        }
        parent->child2 = resPtr;
    }
    else
    {
        if (parent->child1 != NULL)
        {
            bAddGlobalResourceToTree(resPtr, parent->child1);
            return;
        }
        parent->child1 = resPtr;
    }
    resPtr->parent = parent;
}

void bAddGlobalResource(TBResourceInfo* resPtr, TBPackageIndex* pakSrc, int type, int groupID)
{
    resPtr->packageId = pakSrc->id;
    resPtr->type = type;
    resPtr->child2 = NULL;
    resPtr->child1 = NULL;
    
    bAddGlobalResourceToTree(resPtr, &bGlobalResourceList);

    resPtr->pContext = NULL;
    if (groupID != 0xDEFA)
        resPtr->groupId = (u16)groupID;
}

void bDeletePackageResources(TBPackageID packageId, unsigned int typeMask, TBResourceInfo* res)
{
    if (res->child1 != NULL)
        bDeletePackageResources(packageId, typeMask, res->child1);
    if (res->child2 != NULL)
        bDeletePackageResources(packageId, typeMask, res->child2);
    if ((typeMask & 1 << res->type) != 0)
    {
        if (res->packageId.crc == packageId.crc)
        {
            bDeleteResource(res);
        }
    }
}

void bDeletePackageResources(TBPackageID packageId, unsigned int typeMask)
{
    bDeletePackageResources(packageId, typeMask, &bGlobalResourceList);
}

void bDeleteResourceGroup(unsigned int typeMask, unsigned int groupID, TBResourceInfo* res)
{
    if (res->child1 != NULL)
        bDeleteResourceGroup(typeMask, groupID, res->child1);
    if (res->child2 != NULL)
        bDeleteResourceGroup(typeMask, groupID, res->child2);
    if ((typeMask & 1 << res->type) != 0)
    {
        if (groupID == 0xFFFF || (res->groupId == groupID))
            bDeleteResource(res);
    }
}

void bDeleteResourceGroup(unsigned int typeMask, unsigned int groupID)
{
    bDeleteResourceGroup(typeMask, groupID, &bGlobalResourceList);
}

void bDeleteAllResources(TBResourceInfo* res)
{
    if (res->child1)
        bDeleteAllResources(res->child1);
    if (res->child2)
        bDeleteAllResources(res->child2);
    bDeleteResource(res);
}

void bDeleteResource(void* resPtr)
{
    TBResourceInfo* delRes = (TBResourceInfo*)resPtr;
    bDeleteGlobalResource(delRes);
    if (delRes->type != 0xFF)
    {
        bResDeleteFunction[delRes->type](delRes);
    }
}

unsigned int bkFixStringTableCRC(unsigned int crc)
{
    char str[8];
    sprintf(str, ".%s", bLanguageCode[bLanguage]);
    return bkCRC32((const u8*)str, strlen(str), crc);
}

void bDeleteStringTable(TBStringTable* tablePtr)
{
    bkHeapFree(tablePtr->hashTable);
    tablePtr->hashTable = NULL;
    if (tablePtr->resInfo.packageId.loaded == 0)
    {
        bkHeapFree(tablePtr);
    }
}

char* bkString16to8(char* dest, const unsigned short* src)
{
    char* dp = dest;
    while (*src != 0)
    {
        *dp = (char)*src++;
        ++dp;
    }
    *dp = '\0';
    return dest;
}

unsigned short* bkString8to16(unsigned short* dest, const char* src)
{
    unsigned short* dp = dest;
    while (*src != 0)
    {
        *dp = (u8)*src++;
        ++dp;
    }
    *dp = 0;
    return dest;
}

int bkStringLength16(const unsigned short* str)
{
    const unsigned short* eos = str;
    while (*eos++ != 0)
        ;
    return eos - str - 1;
}

unsigned short* bkStringCopy16(unsigned short* dst, const unsigned short* src)
{
    unsigned short* cp = dst + 1;
    *dst = *src++;
    if (*dst == 0)
        return dst;
    do
    {
        *cp = *src++;
    } while (*cp++ != 0);
    return dst;
}

int bkStringCompare16(const unsigned short* src, const unsigned short* dst, int length)
{
    int ret = 0;
    int c;

    if (length < 1)
    {
        ret = *src - *dst;
        while ((ret == 0) && (*dst != 0))
        {
            ++src;
            ++dst;
            ret = *src - *dst;
        }
    }
    else
    {
        for (c = 0; c < length; ++c, ++src, ++dst)
        {
            ret = *src - *dst;
            if (ret != 0)
                break;
        }
    }

    if (ret < 0)
        ret = -1;
    else if (ret > 0)
        ret = 1;
    return ret;
}

unsigned short* bkStringFindLetter16(const unsigned short* src, unsigned short letter)
{
    const unsigned short* s = src;
    while (*s != 0)
    {
        if (*s == letter)
            return (unsigned short*)s;
        ++s;
    }
    return NULL;
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

int bkReadClock(TBClock* clock)
{
    return bReadClock(clock);
}

void bkAlert(char* message)
{
    bkPrintf("bkAlert: %s", message);
}

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
