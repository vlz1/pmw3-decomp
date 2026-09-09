#include <dolphin/os.h>
#include <dolphin/dvd.h>
#include <bKernel/crc32.h>
#include <bKernel/debug.h>
#include <bKernel/mutex.h>

unsigned int bBkInitFlags;
int bInsideEventCallback;
DVDDiskID* diskID;

OSMutex eventMutex;
OSMutex filenameTableMutex;

int bOSHeap = 0;

void PCinit()
{

}

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
