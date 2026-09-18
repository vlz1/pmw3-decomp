#include <staticData.h>
#include <bKernel/heap.h>
#include <bKernel/mutex.h>
#include <bKernel/debug.h>
#include <bKernel/globals.h>
#include <bMaths/dataArray.h>
#include <string.h>
#include <stdlib.h>

extern u8* bSpecificHeapInit(void* basePtr, unsigned int size);
extern unsigned int bSpecificHeapDefaultSize(unsigned int size);
extern void bSpecificHeapShutdown(u8* base);

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

KEEP_STRING("External Object");
KEEP_STRING("bInitHeap: Out of memory (heap wanted %d bytes)\\n");

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
            if ((block->flags & HEAPALLOC_FLAGS_MALLOC) != 0)
            {
                strcpy(buf3, "Malloc");
            }
            else if (block->flags & HEAPALLOC_FLAGS_NEW)
            {
                strcpy(buf3, "New");
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
    
    // bHeap.rootBlock is already in r10
    bHeap.rootBlock->typeNext = &bHeap.freeRoot;
    // But then the compiler reads it again into r9 for this write?? WHY
    bHeap.rootBlock->typePrev = &bHeap.freeRoot;

    bHeap.usedRoot.typePrev = &bHeap.usedRoot;
    bHeap.usedRoot.typeNext = &bHeap.usedRoot;
    bHeap.freeRoot.typePrev = bHeap.rootBlock;
    bHeap.freeRoot.typeNext = bHeap.rootBlock;

    bHeap.blocksFree = 1;
    
    bHeap.totalAllocated = 0;
    bHeap.peakTotalAllocated = 0;
    bHeap.blocksAllocated = 0;
    bHeap.peakBlocksAllocated = 0;
    bHeap.defaultHeapGroup = (u8*)0xDEFA;
    bHeap.largeMemoryBlockThreshold = 0x100000;
    bHeap.forceUseSystemHeap = 0;
    bHeap.forceStandardMallocFree = 0;

    bHeap.groupStack.group[0] = (u32)0xDEFA;
    bHeap.groupStack.currentLevel = 0;

    bHeap.disabledPool = 0;
    bHeap.currPool = 0;
    bHeap.maxHeapPools = 0;

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
    int reqSize;
    TBHeapBlock* block; // r30
    TBHeapBlock* newBlock; // r31
    unsigned int adjSize; // r7
    unsigned int alignedPtr; // r31

    bkWaitMutex(&bHeap.heapLock);

    if (bHeap.heapSize == 0 || bHeap.forceUseSystemHeap)
    {
        bkReleaseMutex(&bHeap.heapLock);

        adjSize = (size + 0x1F & 0xFFFFFFE0) + sizeof(TBHeapBlock);
        block = (TBHeapBlock*)malloc(adjSize);
        if (block == NULL)
            return NULL;

        block->used = 1;
        block->group = (char*)bHeap.defaultHeapGroup;
        block->flags = flags;
        block->next = 0;
        block->size = adjSize;
        block->marker = 0xDEADBEEF;
        return block + 1;
    }

    adjSize = size + 0x1F & 0xFFFFFFE0;
    if (bHeap.currPool != NULL)
    {
        TBHeapPool* pool = bHeap.currPool;
        reqSize = (pool->end - pool->ptr);
        if (reqSize >= adjSize)
        {
            pool->prevPtr = pool->ptr;
            pool->ptr += adjSize;
            ++pool->noofAllocs;
            ++pool->peakAllocs;
            bkReleaseMutex(&bHeap.heapLock);
            return pool->prevPtr;
        }
        else if (reqSize < 128)
        {
            bHeap.currPool = 0;
        }
    }

    reqSize = adjSize + sizeof(TBHeapBlock);
    block = bHeap.freeRoot.typeNext;
    if (adjSize < bHeap.largeMemoryBlockThreshold)
    {
        for (; block != &bHeap.freeRoot; block = block->next)
        {
            if (adjSize <= block->size)
                break;
        }
    }
    else if (bHeap.freeRoot.typePrev != &bHeap.freeRoot)
    {
        u32 sizeFree = bHeap.freeRoot.typePrev->size;
        block = bHeap.freeRoot.typePrev;
        while (sizeFree < reqSize)
        {
            block = block->typePrev;
            if (block == &bHeap.freeRoot)
                goto out_of_memory;
            sizeFree = block->size;
        }
    }

    if (block == &bHeap.freeRoot)
    {
        int largest;
        int sizeFree;
out_of_memory:
        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("%s(%d) : bkHeapAllocDebug: Out of memory (wanted %d bytes)\n",
                file, line, adjSize);
        }

        sizeFree = bkHeapFreeSpace(&largest);

        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("bkHeapAllocDebug: (only %d bytes available: %d more required, max %d bytes (%d short)) ***\n",
                sizeFree, adjSize - sizeFree, largest, adjSize - largest);
        }

        bkReleaseMutex(&bHeap.heapLock);
        return 0;
    }

    newBlock = block;
    if (block->size > (adjSize + 128))
    {
        if (adjSize >= bHeap.largeMemoryBlockThreshold)
        {
            int t = block->size - reqSize;
            newBlock = (_TBHeapBlock *)(bHeap.heapBase + t + block->offset);

            newBlock->size = reqSize;
            newBlock->used = block->used;
            newBlock->flags = block->flags;
            newBlock->group = block->group;

            TBHeapBlock* temp2 = block->typeNext;
            newBlock->typeNext = temp2;
            newBlock->typePrev = block->typePrev;
            temp2->typePrev = newBlock;
            newBlock->typePrev->typeNext = newBlock;
            temp2 = block->next;
            newBlock->prev = block;
            newBlock->next = temp2;
            temp2->prev = newBlock;
            newBlock->prev->next = newBlock;
            block->flags = 0;
            block->used = 0;
            block->group = (char*)group;
            block->size = block->size - reqSize;

            ConnectFreeBlock(block);
            if ((block->prev == bHeap.rootBlock) || (block->prev->used != 0))
                goto done;

            block->typePrev->typeNext = block->typeNext;
            block->typeNext->typePrev = block->typePrev;
            block->typePrev->size = block->typePrev->size + block->size;
            block->prev->next = block->next;
            block->next->prev = block->prev;
            block = newBlock;
        }
        else
        {
            TBHeapBlock* temp = (TBHeapBlock*)(bHeap.heapBase + reqSize + block->offset);
            *(u32*)(bHeap.heapBase + reqSize + block->offset) = block->offset + reqSize;

            temp->flags = 0;
            temp->used = 0;
            temp->size = 0;
            temp->group = (char*)group;

            TBHeapBlock* temp2 = block->next;
            temp->prev = block;
            temp->next = temp2;
            temp2->prev = temp;
            temp->prev->next = temp;
            block->size = reqSize;
            ConnectFreeBlock(temp);

            temp2 = newBlock->next;
            if ((temp2 == bHeap.rootBlock) || (temp2->used != 0))
                goto done;

            newBlock = temp2->typeNext;
            temp->typeNext = newBlock;
            newBlock->typePrev = temp;
            temp->size = temp->size + temp->next->size;
            newBlock = temp->next->next;
            temp->next = newBlock;
            newBlock->prev = temp;
        }

        --bHeap.blocksFree;
        newBlock = block;
    }

done:
    if (bHeap.peakBlocksAllocated <= bHeap.blocksAllocated)
    {
        bHeap.peakBlocksAllocated = bHeap.blocksAllocated + 1;
    }
    bHeap.totalAllocated = bHeap.totalAllocated + newBlock->size;
    if (bHeap.peakTotalAllocated < bHeap.totalAllocated)
    {
        bHeap.peakTotalAllocated = bHeap.totalAllocated;
    }
    bHeap.blocksAllocated = bHeap.blocksAllocated + 1;

    newBlock->typeNext->typePrev = newBlock->typePrev;
    newBlock->typePrev->typeNext = newBlock->typeNext;
    newBlock->used = 1;
    --bHeap.blocksFree;

    newBlock->flags = flags;
    newBlock->group = (char*)group;

    block = bHeap.usedRoot.typeNext;
    if (newBlock == bHeap.rootBlock)
    {
        newBlock->typePrev = &bHeap.usedRoot;
        newBlock->typeNext = block;
    }
    else if (adjSize < bHeap.largeMemoryBlockThreshold)
    {
        block = newBlock->prev->typeNext;
        newBlock->typePrev = newBlock->prev;
        newBlock->typeNext = block;
    }
    else
    {
        newBlock->typeNext = newBlock->next;
        newBlock->typePrev = newBlock->next->typePrev;
    }

    newBlock->typeNext->typePrev = newBlock;
    newBlock->typePrev->typeNext = newBlock;
    newBlock->marker = 0xDEADBEEF;
    bkReleaseMutex(&bHeap.heapLock);
    return newBlock + 1;
}

void bkHeapFree(void* ptr)
{
    TBHeapBlock* block; // r31
    TBHeapBlock* prevBlock;
    TBHeapBlock* nextBlock; // r10
    TBHeapPool* pool;
    int l; // r8

    if (ptr == NULL)
        return;
    
    bkWaitMutex(&bHeap.heapLock);

    if (bHeap.maxHeapPools < 0)
    {
        l = 0;
        pool = bHeap.heapPools;
        do
        {
            if (pool->base != 0 && ptr >= pool->base && ptr < pool->end)
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

#if 0
    if (block == bHeap.rootBlock || (nextBlock = block->prev, nextBlock->used == 0))
    {
        block->size += nextBlock->size;
        block->next = nextBlock->next;
        nextBlock->next->prev = block;
        block->typeNext = nextBlock->typeNext;
        nextBlock->typeNext->typePrev = block;
        --bHeap.blocksFree;
    }
    else if (block->next != bHeap.rootBlock && block->used == 0)
    {
        nextBlock->size += block->size;
        nextBlock->next = block->next;
        block->next->prev = nextBlock;
        nextBlock->typeNext = block->typeNext;
        block->typeNext->typePrev = nextBlock;
        --bHeap.blocksFree;

        if ((block != bHeap.rootBlock) && block->used == 0)
        {
            nextBlock->size += block->size;
            nextBlock->next = block->next;
            block->next->prev = nextBlock;
            nextBlock->typeNext = block->typeNext;
            block->typeNext->typePrev = nextBlock;
            --bHeap.blocksFree;
        }
    }
#else
    if (block != bHeap.rootBlock && (nextBlock = block->prev, nextBlock->used == 0))
    {
        block->size += nextBlock->size;
        block->next = nextBlock->next;
        nextBlock->next->prev = block;
        block->typeNext = nextBlock->typeNext;
        nextBlock->typeNext->typePrev = block;
        --bHeap.blocksFree;
    }
    else if (block->next != bHeap.rootBlock && block->used == 0)
    {
        nextBlock->size += block->size;
        nextBlock->next = block->next;
        block->next->prev = nextBlock;
        nextBlock->typeNext = block->typeNext;
        block->typeNext->typePrev = nextBlock;
        --bHeap.blocksFree;

        if ((block != bHeap.rootBlock) && block->used == 0)
        {
            nextBlock->size += block->size;
            nextBlock->next = block->next;
            block->next->prev = nextBlock;
            nextBlock->typeNext = block->typeNext;
            block->typeNext->typePrev = nextBlock;
            --bHeap.blocksFree;
        }
    }
#endif

    bkReleaseMutex(&bHeap.heapLock);
}

void* bkHeapRealloc(void* ptr, int newSize)
{
    TBHeapBlock* block; // r31
    TBHeapBlock* tmpNext; // r8
    TBHeapBlock* tmpPrev; // r11
    unsigned int adjSize; // r29
    int remainingFree; // r5
    TBHeapBlock* newFreeBlock; // r9
    TBHeapBlock* afterFreeBlock; // r7
    TBHeapBlock* oldFreeBlock; // r8

    if (ptr == NULL)
    {
        char* file = (char*)UNIT_DATA(File, "File");
        return (void*)bkHeapAllocEx(newSize, file, 0, HEAPALLOC_FLAGS_MALLOC | 6, bGetCurrentGroup(), 0);
    }

    if (newSize == 0)
    {
        bkHeapFree(ptr);
        return NULL;
    }

    bkWaitMutex(&bHeap.heapLock);

    adjSize = newSize + 0x1FU & 0xFFFFFFE0;

    int reqSize = adjSize + sizeof(TBHeapBlock);
    if (((bHeap.currPool != NULL) && ((bHeap.currPool)->base < ptr)) && (ptr < (bHeap.currPool)->end))
    {
        if ((ptr == (bHeap.currPool)->prevPtr) && ((int)adjSize <= (int)(bHeap.currPool)->end - (int)(bHeap.currPool)->ptr))
        {
            (bHeap.currPool)->ptr = (u8*)((int)ptr + adjSize);
        }

        if ((bVerboseModule & 1) && (bVerboseLevel > 0))
        {
            bPrintError("bkHeapRealloc() Can\'t realloc a block in a heap pool unless it was the last thing allocated.");
        }
    }

    block = (TBHeapBlock*)ptr - 1;
    if (block->next)
    {
        bkReleaseMutex(&bHeap.heapLock);
        return realloc(block, reqSize);
    }

    bHeap.totalAllocated += (reqSize - block->size);
    int blockSize = block->size;
    if (blockSize == reqSize)
    {
        bkReleaseMutex(&bHeap.heapLock);
        return ptr;
    }

    if (blockSize < reqSize)
    {
        tmpNext = block->next;
        if (tmpNext->used != 0)
        {
            bkReleaseMutex(&bHeap.heapLock);
            void* pvVar6 = (void *)bkHeapAllocEx(
                adjSize, "b:/BlitzSDK/Babel/Common/Src/bKernel/heap.cpp",
                1227,
                block->flags,
                (u32)block->group,
                0
            );
            if (pvVar6 != NULL)
            {
                bkHeapFree(ptr);
                return pvVar6;
            }
            return NULL;
        }

        int iVar2 = tmpNext->size + blockSize;
        remainingFree = iVar2 - reqSize;
        if (remainingFree >= 0x41)
        {
            block->size = iVar2;
            tmpNext->prev = block;
            //*(_TBHeapBlock **)((int)param_1 + -0x28) = p_Var8;
            tmpNext->typeNext->typePrev = tmpNext->typePrev;
            tmpNext->typePrev->typeNext = tmpNext->typeNext;
        }
        else
        {
            newFreeBlock = (_TBHeapBlock *)(bHeap.heapBase + reqSize + block->offset);
            newFreeBlock->typePrev = oldFreeBlock->typePrev;
            newFreeBlock->typeNext = oldFreeBlock->typeNext;
            newFreeBlock->prev = block;
            newFreeBlock->next = afterFreeBlock;
            oldFreeBlock->typeNext->typePrev = newFreeBlock;
            newFreeBlock->typePrev->typeNext = newFreeBlock;
            afterFreeBlock->prev = newFreeBlock;
            block->next = newFreeBlock;
            block->size = reqSize;
            *(u32*)(bHeap.heapBase + reqSize + block->offset) = block->offset + reqSize;
            newFreeBlock->group = 0;
            newFreeBlock->size = remainingFree;
            newFreeBlock->used = 0;
            newFreeBlock->flags = 0;
        }
        block->marker = 0xDEADBEEF;
    }
    else
    {
        if ((blockSize - reqSize) > 0x40)
        {
            remainingFree = block->offset;
            afterFreeBlock = (TBHeapBlock*)(bHeap.heapBase + reqSize + remainingFree);
            afterFreeBlock->used = 0;
            afterFreeBlock->flags = 0;
            afterFreeBlock->group = 0;
            ConnectFreeBlock(afterFreeBlock);
        }
        block->marker = 0xDEADBEEF;
    }

    bkReleaseMutex(&bHeap.heapLock);
    return ptr;
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
        char* file = (char*)UNIT_DATA(File, "File");
        pool->userAllocated = 0;
        pool->base = (u8*)bkHeapAllocEx(size, file, 0, 0x2006, bGetCurrentGroup(), 0);
    }

    u8* base = pool->base;
    pool->end = base + size;
    pool->prevPtr = base;
    pool->noofAllocs = 0;
    pool->peakAllocs = 0;
    pool->ptr = base;
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
    if (bHeap.groupStack.currentLevel == 0x1F)
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
