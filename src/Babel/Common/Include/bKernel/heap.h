#pragma once

#include <dolphin/types.h>
#include <dolphin/os/OSMutex.h>
#include <InlineUnitData.h>

struct _TBHeapBlock
{
    u32 offset; // offset 0x0, size 0x4
    u32 size; // offset 0x4, size 0x4
    s16 used; // offset 0x8, size 0x2
    u16 flags; // offset 0xA, size 0x2
    char* group; // offset 0xC, size 0x4
    struct _TBHeapBlock* typeNext; // offset 0x10, size 0x4
    struct _TBHeapBlock* typePrev; // offset 0x14, size 0x4
    struct _TBHeapBlock* next; // offset 0x18, size 0x4
    struct _TBHeapBlock* prev; // offset 0x1C, size 0x4
    u8 pad[28]; // offset 0x20, size 0x20
    u32 marker; // offset 0x3C, size 0x4
};

typedef struct _TBHeapBlock TBHeapBlock;

struct _TBHeapPool
{
    u8* base; // offset 0x0, size 0x4
    u8* ptr; // offset 0x4, size 0x4
    u8* prevPtr; // offset 0x8, size 0x4
    u8* end; // offset 0xC, size 0x4
    s32 noofAllocs; // offset 0x10, size 0x4
    s32 peakAllocs; // offset 0x14, size 0x4
    s8 userAllocated; // offset 0x18, size 0x1
    u8 debug; // offset 0x19, size 0x1
    u16 unk1A; // offset 0x1A, size 0x2
};

typedef struct _TBHeapPool TBHeapPool;

struct _TBHeapGroupStack
{
    u32 group[32]; // offset 0x0, size 0x80
    s32 currentLevel; // offset 0x80, size 0x4
};

typedef struct _TBHeapGroupStack TBHeapGroupStack;

struct _TBHeap
{
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
    TBHeapPool* currPool; // offset 0x168, size 0x4
    TBHeapPool* disabledPool; // offset 0x16C, size 0x4
    TBHeapPool heapPools[64]; // offset 0x170, size 0x700
};

typedef struct _TBHeap TBHeap;

void* bkHeapRealloc(void* ptr, int newSize);
void* bkHeapAlloc(unsigned int size, char* file, int line, unsigned short flags);
void* bkHeapAllocEx(unsigned int size, char* file, int line, unsigned short flags, unsigned int group, int alignment);
void* bkHeapCalloc(unsigned int size, int value, char* file, int line, unsigned short flags);
void* bkHeapCallocEx(unsigned int size, int value, char* file, int line, unsigned short flags, unsigned int group, int alignment);
void bkHeapFree(void* ptr);

int bkHeapFreeSpace(int* largestFreeBlock);
void bkHeapActivatePool(struct _TBHeapPool* pool);
void bkHeapDeactivatePool(struct _TBHeapPool* pool, int finalise);

#define HEAPALLOC_FLAGS_MALLOC  0x2000
#define HEAPALLOC_FLAGS_NEW     0x1000

DEFINE_UNIT_STRING(File, "File");

inline void* bkMalloc(unsigned int size)
{
    return bkHeapAlloc(size, (char*)UNIT_DATA(File, "File"), 0, HEAPALLOC_FLAGS_MALLOC | 1);
}

inline void bkFree(void* ptr)
{
    bkHeapFree(ptr);
}
