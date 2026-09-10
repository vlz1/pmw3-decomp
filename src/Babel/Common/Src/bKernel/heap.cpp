#include <bKernel/heap.h>
#include <bKernel/mutex.h>
#include <bKernel/globals.h>
#include <string.h>

struct _TBHeap {
    int heapSize; // offset 0x0, size 0x4
    unsigned int nextUID; // offset 0x4, size 0x4
    u8* realHeapBase; // offset 0x8, size 0x4
    u8* heapBase; // offset 0xC, size 0x4
    int dynamicHeap; // offset 0x10, size 0x4
    OSMutex heapLock; // offset 0x14, size 0x18
    int showHeapAlloc; // offset 0x2C, size 0x4
    int showHeapAllocExternalOnly; // offset 0x30, size 0x4
    int totalAllocated; // offset 0x34, size 0x4
    int peakTotalAllocated; // offset 0x38, size 0x4
    int blocksAllocated; // offset 0x3C, size 0x4
    int peakBlocksAllocated; // offset 0x40, size 0x4
    u8* defaultHeapGroup; // offset 0x44, size 0x4
    unsigned int largeMemoryBlockThreshold; // offset 0x48, size 0x4
    int forceUseSystemHeap; // offset 0x4C, size 0x4
    int forceStandardMallocFree; // offset 0x50, size 0x4
    int blocksFree; // offset 0x54, size 0x4
    TBHeapBlock* rootBlock; // offset 0x58, size 0x4
    TBHeapBlock usedRoot; // offset 0x5C, size 0x40
    TBHeapBlock freeRoot; // offset 0x9C, size 0x40
    TBHeapGroupStack groupStack; // offset 0xDC, size 0x84
    int enablePooling; // offset 0x160, size 0x4
    int maxHeapPools; // offset 0x164, size 0x4
    int debugHeapPools; // offset 0x168, size 0x4
    TBHeapPool* currPool; // offset 0x16C, size 0x4
    //TBHeapPool* disabledPool; // offset 0x170, size 0x4   ???
    TBHeapPool heapPools[64]; // offset 0x174, size 0x700
};

typedef struct _TBHeap TBHeap;

TBHeap bHeap = { };

void bShutdownHeap()
{
    
}

// TODO: Registers and weird write order
void bkHeapReset()
{
    bkWaitMutex(&bHeap.heapLock);

    bHeap.nextUID = 1;
    bHeap.rootBlock = (TBHeapBlock*)bHeap.heapBase;

    *(u32*)bHeap.heapBase = 0;

    bHeap.rootBlock->size = bHeap.heapSize;
    bHeap.rootBlock->used = 0;
    bHeap.rootBlock->flags = 0;

    TBHeapBlock* rootBlock = bHeap.rootBlock;
    rootBlock->prev = rootBlock;
    rootBlock->next = rootBlock;
    
    rootBlock = bHeap.rootBlock;
    rootBlock->typeNext = &bHeap.freeRoot;
    rootBlock->typePrev = &bHeap.freeRoot;

    bHeap.usedRoot.typePrev = &bHeap.usedRoot;
    bHeap.usedRoot.typeNext = &bHeap.usedRoot;
    bHeap.freeRoot.typePrev = bHeap.rootBlock;
    bHeap.freeRoot.typeNext = bHeap.rootBlock;
    
    bHeap.blocksFree = 1;
    
    bHeap.defaultHeapGroup = (u8*)0xDEFA;
    bHeap.largeMemoryBlockThreshold = 0x100000;
    
    bHeap.groupStack.group[0] = (u8*)0xDEFA;
    bHeap.peakTotalAllocated = 0;
    bHeap.blocksAllocated = 0;
    bHeap.peakBlocksAllocated = 0;
    bHeap.totalAllocated = 0;
    
    bHeap.forceUseSystemHeap = 0;
    bHeap.forceStandardMallocFree = 0;
    bHeap.groupStack.currentLevel = 0;
    bHeap.maxHeapPools = 0;
    bHeap.debugHeapPools = 0;
    bHeap.currPool = (TBHeapPool*)NULL;
    
    for (int l = 0; l < 64; ++l)
    {
        bHeap.heapPools[l].base = (u8*)NULL;
    }

    bkReleaseMutex(&bHeap.heapLock);
}

void ConnectFreeBlock(TBHeapBlock* block)
{
    if (bHeap.freeRoot.typeNext == &bHeap.freeRoot)
    {
        bHeap.freeRoot.typePrev = block;
        bHeap.freeRoot.typeNext = block;
        block->typePrev = &bHeap.freeRoot;
        block->typeNext = &bHeap.freeRoot;
        return;
    }

    TBHeapBlock* freeBlock = bHeap.freeRoot.typeNext;
    TBHeapBlock* next;

    while (block->offset < freeBlock->offset)
    {
        // TODO: ???
        if (freeBlock->typeNext == &bHeap.freeRoot)
        {
            block->typePrev = &bHeap.freeRoot;
            block->typeNext = freeBlock->typeNext;
            freeBlock->typeNext->typePrev = block;
            block->typePrev->typeNext = block;
            
            bHeap.blocksFree += 1;
            return;
        }
        freeBlock = freeBlock->typeNext;
    }

    block->typePrev = freeBlock;
    block->typeNext = freeBlock->typeNext;
    block->typeNext->typePrev = block;
    block->typePrev->typeNext = block;
    bHeap.blocksFree += 1;
}

void* bkHeapAllocEx(unsigned int size, char* file, int line, unsigned short flags, unsigned int group, int alignment)
{
    return 0;
}

void bkHeapFree(void* ptr)
{

}

void* bkHeapRealloc(void* ptr, int newSize)
{
    return 0;
}

TBHeapPool* bHeapCreatePool(unsigned int size, void* memPtr)
{
    return 0;
}

void* operator new(unsigned int size, char* file, int line, unsigned short flags)
{
    return bkHeapAlloc(size, file, line, flags);
}

void* operator new[](unsigned int size, char* file, int line, unsigned short flags)
{
    return bkHeapAlloc(size, file, line, flags);
}

void operator delete(void* ptr)
{
    bkHeapFree(ptr);
}

void operator delete[](void* ptr)
{
    bkHeapFree(ptr);
}

int bInitHeap(void* base, unsigned int size)
{
    if (bBkInitFlags & 4)
    {
        size = bSpecificHeapDefaultSize(size);
    }
    bHeap.heapSize = size + 0x1FU & 0xFFFFFFE0;
    bHeap.realHeapBase = bSpecificHeapInit(base, bHeap.heapSize);
    if (bHeap.realHeapBase != NULL)
    {
        bHeap.dynamicHeap = base == NULL ? 1 : 0;
        bHeap.heapBase = (u8*)((u32)bHeap.realHeapBase + 0x1FU & 0xFFFFFFE0);
        bHeap.freeRoot.used = 0;
        bHeap.usedRoot.used = 1;
        bkCreateMutex(&bHeap.heapLock);
        bkHeapReset();
        return 1;
    }
    return 0;
}

void* bkHeapCalloc(unsigned int size, int value, char* file, int line, unsigned short flags)
{
    void* ptr = bkHeapAlloc(size, file, line, flags);
    if (ptr != NULL)
    {
        memset(ptr, value, size);
    }
    return ptr;
}

void* bkHeapCallocEx(unsigned int size, int value, char* file, int line, unsigned short flags, unsigned int group, int alignment)
{
    void* ptr = bkHeapAllocEx(size, file, line, flags, group, alignment);
    if (ptr != NULL)
    {
        memset(ptr, value, size);
    }
    return ptr;
}

void* bkHeapAlloc(unsigned int size, char* file, int line, unsigned short flags)
{
    return 0;
}

int bkHeapGetBlockSize(void* ptr)
{
    return 0;
}

int bkHeapFreeSpace(int* largestFreeBlock)
{
    return 0;
}

char* bGetCurrentGroup()
{
    return (char*)bHeap.groupStack.group[bHeap.groupStack.currentLevel];
}

int bkHeapGroupPush(const char* const group)
{
    if (bHeap.groupStack.currentLevel == 0x1f)
        return 0;
    bHeap.groupStack.group[++bHeap.groupStack.currentLevel] = (u8*)group;
    return 1;
}

int bkHeapGroupPop()
{
    if (bHeap.groupStack.currentLevel == 0)
        return 0;
    --bHeap.groupStack.currentLevel;
    return 1;
}

void bkHeapSetLargeBlockThreshold(unsigned int value)
{

}

unsigned int bkHeapGetLargeBlockThreshold()
{
    return 0;
}

void bkFreeAligned(void* ptr)
{

}

int bkHeapEnablePooling(int enable)
{
    return 0;
}

void bkHeapActivatePool(struct _TBHeapPool* pool)
{

}

void bkHeapDeactivatePool(struct _TBHeapPool* pool, int finalise) {
    unsigned char* newPtr;
}

void bkHeapFreePool(struct _TBHeapPool* pool)
{

}
