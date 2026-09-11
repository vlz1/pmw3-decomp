#include <bKernel/heap.h>
#include <bKernel/mutex.h>
#include <bKernel/debug.h>
#include <bKernel/globals.h>
#include <string.h>
#include <static_data.h>

extern void free(void* ptr);

u32 bGetCurrentGroup();

TBHeap bHeap = { };
char* moduleNames[15] = {
    "External",
    "User",
    "bActor",
    "bDisplay",
    "bGUI",
    "bInput",
    "bKernel",
    "bMaths",
    "bNetwork",
    "bCollision",
    "bSound",
    "fCamera",
    "fEffects",
    "feCore",
    "frRuntime"
};

void bShutdownHeap()
{
    TBHeapBlock* block;
    char* name;
    char buf[32];
    char buf2[176];
    char buf3[16];

    bkDeleteMutex(&bHeap.heapLock);
    if (bHeap.usedRoot.typeNext != &bHeap.usedRoot)
    {
        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("\nMemory leaks detected!\n");
        }

        block = bHeap.usedRoot.typeNext;

        while (block != &bHeap.usedRoot)
        {
            name = (char*)block->group;
            if (block->group == (char*)0xDEFA)
                name = "Default";

            buf2[0] = '\0';
            if ((block->flags & 0x2000) != 0)
            {
                strcpy(buf3, "Malloc");
            }
            else
            {
                if (block->flags & 0x1000)
                {
                    strcpy(buf3, "New");
                }
            }
            
            bkDataToSafeString((u8*)(block + 1), block->size - sizeof(TBHeapBlock), buf, 32);
            if ((bVerboseModule & 1) && (bVerboseLevel > 0))
            {
                bPrintError("\n%s 0x%08x, %8d bytes [%s %s in %s] \'%s\'\n",
                    buf2, 
                    block + 1,
                    block->size - sizeof(TBHeapBlock),
                    name,
                    buf3,
                    moduleNames[((u8*)(&block->flags))[1]],
                    buf);
            }

            block = block->typeNext;
        }
    }

    if (bHeap.dynamicHeap != 0)
    {
        bSpecificHeapShutdown(bHeap.realHeapBase);
    }
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
    
    bHeap.groupStack.group[0] = (u32)0xDEFA;
    bHeap.peakTotalAllocated = 0;
    bHeap.blocksAllocated = 0;
    bHeap.peakBlocksAllocated = 0;
    bHeap.totalAllocated = 0;
    
    bHeap.forceUseSystemHeap = 0;
    bHeap.forceStandardMallocFree = 0;
    bHeap.groupStack.currentLevel = 0;
    bHeap.maxHeapPools = 0;
    bHeap.currPool = 0;
    bHeap.disabledPool = 0;
    
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
    TBHeapBlock* block;
    TBHeapBlock* prevBlock;
    TBHeapBlock* nextBlock;
    TBHeapPool* pool;
    int l;

    if (ptr == NULL)
        return;
    
    bkWaitMutex(&bHeap.heapLock);

    if (bHeap.maxHeapPools < 0)
    {
        l = 0;
        pool = bHeap.heapPools;
        do
        {
            if (ptr >= pool->base && ptr < pool->end)
            {
                pool->noofAllocs -= 1;
                bkReleaseMutex(&bHeap.heapLock);
                return;
            }
            ++l;
            ++pool;
        } while (l < bHeap.maxHeapPools);
    }

    block = (TBHeapBlock*)ptr - 1;
    if (!block->used)
    {
        // Yup, it just writes to a null pointer
        *((volatile u32*)NULL) = 0xCDCDCDCD;
    }

    if (block->next == NULL)
    {
        free(block);
        bkReleaseMutex(&bHeap.heapLock);
        return;
    }

    bHeap.totalAllocated -= block->size;
    --bHeap.blocksAllocated;

    block->typeNext->typePrev = block->typePrev;
    block->typePrev->typeNext = block->typeNext;
    block->used = 0;

    ConnectFreeBlock(block);

    if (block == bHeap.rootBlock || (nextBlock = block->prev, nextBlock->used != 0))
    {
        if (nextBlock != bHeap.rootBlock && nextBlock->used == 0)
        {
            block->size += nextBlock->size;
            block->next = nextBlock->next;
            nextBlock->next->prev = block;
            block->typeNext = nextBlock->typeNext;
            nextBlock->typeNext->typePrev = block;
            --bHeap.blocksFree;
        }
    }
    else
    {
        nextBlock->size += block->size;
        nextBlock->next = block->next;
        block->next->prev = nextBlock;
        nextBlock->typeNext = block->typeNext;
        block->typeNext->typePrev = nextBlock;
        --bHeap.blocksFree;

        if (block != bHeap.rootBlock && block->used == 0)
        {
            nextBlock->size += block->size;
            nextBlock->next = block->next;
            block->next->prev = nextBlock;
            nextBlock->typeNext = block->typeNext;
            block->typeNext->typePrev = nextBlock;
            --bHeap.blocksFree;
        }
    }

    bkReleaseMutex(&bHeap.heapLock);
}

void* bkHeapRealloc(void* ptr, int newSize)
{
    return 0;
}

TBHeapPool* bHeapCreatePool(unsigned int size, void* memPtr)
{
    int l;
    TBHeapPool* pool;
    int largest;

    if (!bHeap.enablePooling)
        return 0;

    l = 0;
    while ((l < 64) && bHeap.heapPools[l].base != NULL)
    {
        ++l;
    }

    if (l == 64)
    {
        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("bkHeapCreatePool() Ran out of heap pools (%d allowed at once)\n", 64);
        }
        return 0;
    }

    if (l + 1 > bHeap.maxHeapPools)
    {
        bHeap.maxHeapPools = l + 1;
    }

    pool = &bHeap.heapPools[l];
    if (memPtr != NULL)
    {
        pool->userAllocated = 1;
        pool->base = (u8*)memPtr;
    }
    else
    {
        char* file = (char*)s_File;
        pool->userAllocated = 0;
        pool->base = (u8*)bkHeapAllocEx(size, file, 0, 0x2006, bGetCurrentGroup(), 0);
    }

    u8* pbVar1 = pool->base;
    
    pool->end = pbVar1 + size;
    pool->prevPtr = pbVar1;
    pool->noofAllocs = 0;
    pool->peakAllocs = 0;
    pool->ptr = pbVar1;

    return pool;
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
    return bkHeapAllocEx(size, file, line, flags, (u32)bGetCurrentGroup(), 0);
}

int bkHeapGetBlockSize(void* ptr)
{
    TBHeapBlock* block = (TBHeapBlock*)((u8*)ptr - sizeof(TBHeapBlock));
    return block->size - sizeof(TBHeapBlock);
}

int bkHeapFreeSpace(int* largestFreeBlock)
{
    TBHeapBlock* block;
    int size, max;

    if (largestFreeBlock != NULL)
    {
        max = 0;
        for (block = bHeap.freeRoot.typeNext; block != &bHeap.freeRoot; block = block->typeNext)
        {
            size = block->size - sizeof(TBHeapBlock);
            if (size > max)
                max = size;
        }
        *largestFreeBlock = max;
    }

    return (bHeap.heapSize - bHeap.totalAllocated) - sizeof(TBHeapBlock);
}

u32 bGetCurrentGroup()
{
    return (u32)bHeap.groupStack.group[bHeap.groupStack.currentLevel];
}

int bkHeapGroupPush(const char* const group)
{
    if (bHeap.groupStack.currentLevel == 0x1f)
        return 0;
    bHeap.groupStack.group[++bHeap.groupStack.currentLevel] = (u32)group;
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
    bHeap.largeMemoryBlockThreshold = value;
}

unsigned int bkHeapGetLargeBlockThreshold()
{
    return bHeap.largeMemoryBlockThreshold;
}

void bkFreeAligned(void* ptr)
{
    bkHeapFree(ptr);
}

int bkHeapEnablePooling(int enable)
{
    if (enable)
    {
        if (bHeap.disabledPool != NULL)
        {
            bHeap.currPool = bHeap.disabledPool;
            bHeap.disabledPool = 0;
        }
    }
    else
    {
        if (!bHeap.enablePooling)
            return 0;
        bHeap.disabledPool = bHeap.currPool;
        bHeap.currPool = 0;
    }
    bHeap.enablePooling = enable;
    return 1;
}

void bkHeapActivatePool(struct _TBHeapPool* pool)
{
    if (bHeap.enablePooling != 0 && pool != bHeap.currPool)
    {
        if (bHeap.currPool != 0)
            bkHeapDeactivatePool(bHeap.currPool, 0);
        bHeap.currPool = pool;
    }
}

void bkHeapDeactivatePool(struct _TBHeapPool* pool, int finalise)
{
    if (bHeap.enablePooling != 0 && bHeap.currPool != 0)
    {
        if (finalise != 0 && pool->userAllocated == 0 && (pool->ptr < pool->end))
        {
            if (pool->noofAllocs != 0)
            {
                bkHeapRealloc(pool->base, pool->ptr - pool->base);
            }
            else
            {
                bkHeapRealloc(pool->base, 8);
            }
            pool->end = pool->ptr;
        }
        bHeap.currPool = 0;
    }
}

void bkHeapFreePool(struct _TBHeapPool* pool)
{
    if (!bHeap.enablePooling)
        return;

    pool->ptr = pool->base;
    pool->base = 0;

    if (!pool->userAllocated)
    {
        bkHeapFree(pool->ptr);
        pool->ptr = 0;
    }
    
    if ((pool - bHeap.heapPools) > bHeap.maxHeapPools + 1)
    {
        while (pool->base == 0)
        {
            --bHeap.maxHeapPools;
            --pool;
        }
    }
}
