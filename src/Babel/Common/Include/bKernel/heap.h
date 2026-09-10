#pragma once

#include <dolphin/types.h>
#include <dolphin/os/OSMutex.h>

struct _TBHeapBlock {
    u32 offset; // offset 0x0, size 0x4
    u32 size; // offset 0x4, size 0x4
    s16 used; // offset 0x8, size 0x2
    u16 flags; // offset 0xA, size 0x2
    u32 pad0; // offset 0xC, size 0x4
    struct _TBHeapBlock* typeNext; // offset 0x10, size 0x4
    struct _TBHeapBlock* typePrev; // offset 0x14, size 0x4
    struct _TBHeapBlock* next; // offset 0x18, size 0x4
    struct _TBHeapBlock* prev; // offset 0x1C, size 0x4
    char* group; // offset 0x20, size 0x4
    u8 pad[24]; // offset 0x24, size 0x18
    u32 marker; // offset 0x3C, size 0x4
};

typedef struct _TBHeapBlock TBHeapBlock;

struct _TBHeapPool {
    u8* base; // offset 0x0, size 0x4
    u8* ptr; // offset 0x4, size 0x4
    u8* prevPtr; // offset 0x8, size 0x4
    u8* end; // offset 0xC, size 0x4
    s32 noofAllocs; // offset 0x10, size 0x4
    s32 peakAllocs; // offset 0x14, size 0x4
    u8 userAllocated; // offset 0x18, size 0x1
    u8 debug; // offset 0x19, size 0x1
    //s32 overflowBytes; // offset 0x1C, size 0x4
};

typedef struct _TBHeapPool TBHeapPool;

struct _TBHeapGroupStack {
    u8* group[32]; // offset 0x0, size 0x80
    s32 currentLevel; // offset 0x80, size 0x4
};

typedef struct _TBHeapGroupStack TBHeapGroupStack;

u8* bSpecificHeapInit(void* basePtr, unsigned int size);
unsigned int bSpecificHeapDefaultSize(unsigned int size);
void bSpecificHeapShutdown(u8* base);

void* bkHeapRealloc(void* ptr, int newSize);
void* bkHeapAlloc(unsigned int size, char* file, int line, unsigned short flags);
void* bkHeapAllocEx(unsigned int size, char* file, int line, unsigned short flags, unsigned int group, int alignment);
void* bkHeapCalloc(unsigned int size, int value, char* file, int line, unsigned short flags);
void* bkHeapCallocEx(unsigned int size, int value, char* file, int line, unsigned short flags, unsigned int group, int alignment);
void bkHeapFree(void* ptr);
