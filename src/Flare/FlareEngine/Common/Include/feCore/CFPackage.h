#pragma once

#include <bKernel/heap.h>
#include <bKernel/resource.h>

enum EFPackageState
{
    EFPACKAGESTATE_NOTLOADED = 0,
    EFPACKAGESTATE_LOADING = 1,
    EFPACKAGESTATE_LOADED = 2,
    EFPACKAGESTATE_UNLOADING = 3,
};

enum EFPackagePriority
{
    EFPACKAGEPRIORITY_NOTNEEDED = 0,
    EFPACKAGEPRIORITY_LOW = 1,
    EFPACKAGEPRIORITY_MEDIUM = 2,
    EFPACKAGEPRIORITY_HIGH = 3,
    EFPACKAGEPRIORITY_NEEDED = 4,
    EFPACKAGEPRIORITY_NOOF = 5,
    EFPACKAGEPRIORITY_INVALID = 6,
};

typedef struct _TFPackagePriority
{
    struct CFMode* mode; // offset 0x0, size 0x4
    EFPackagePriority priority; // offset 0x4, size 0x4
} TFPackagePriority;

typedef struct _TFPackageFlags
{
    union
    {
        unsigned int allFlags; // offset 0x0, size 0x4
        struct
        {
            unsigned int samplesOnly : 1; // offset 0x0, size 0x4
            unsigned int unflushable : 1; // offset 0x0, size 0x4
            unsigned int useReservedBlocks : 1; // offset 0x0, size 0x4
            unsigned int usingReservedBlock : 1; // offset 0x0, size 0x4
            unsigned int notFound : 1; // offset 0x0, size 0x4
            unsigned int empty : 1; // offset 0x0, size 0x4
            unsigned int perLanguage : 1; // offset 0x0, size 0x4
            unsigned int mustUnload : 1; // offset 0x0, size 0x4
            unsigned int temporary : 1; // offset 0x0, size 0x4
            unsigned int didntAttemptLoad : 1; // offset 0x0, size 0x4
            unsigned int inUse : 1; // offset 0x0, size 0x4
            unsigned int poolMemory : 1; // offset 0x0, size 0x4
            unsigned int tooBigForBlock : 1; // offset 0x0, size 0x4
        }; // offset 0x0, size 0x4
    }; // offset 0x0, size 0x4
} TFPackageFlags;

struct CFPackage
{
    CFPackage();
    void fConstruct(char* vName);
    void fDestroy();
    ~CFPackage();

    int fLoad();
    void fBeginUnload(int mustUnload);
    void fFinishUnload();
    void fFixup(int freeMemory);
    int fFreePackageMemory();
    void fSetPriority(EFPackagePriority vPriority, struct CFMode* mode, int instantUnload);
    EFPackagePriority fGetHighestPriority();
    void SetReservedBlockGroup(unsigned int groupCRC);

    inline void SetUnflushable(int unflushable) {}
    inline void SetTemporary(int temporary) {}
    inline void SetPerLanguage(int perLanguage) {}

    int unloadDelay; // offset 0x0, size 0x4
    unsigned long long loadStart; // offset 0x8, size 0x8
    float loadingTime; // offset 0x10, size 0x4
    unsigned int nextReservedBlockGroup; // offset 0x14, size 0x4
    unsigned int reservedBlockGroup; // offset 0x18, size 0x4
    unsigned char* reservedBlockPtr; // offset 0x1C, size 0x4
    TFPackagePriority priorities[5]; // offset 0x20, size 0x28
    TBHeapPool* fixupPool; // offset 0x48, size 0x4
    TFPackageFlags flags; // offset 0x4C, size 0x4
    CFPackage* prev; // offset 0x50, size 0x4
    CFPackage* next; // offset 0x54, size 0x4
    EFPackageState state; // offset 0x58, size 0x4
    char name[64]; // offset 0x5C, size 0x40
    unsigned int crc; // offset 0x9C, size 0x4
    EFPackagePriority priority; // offset 0xA0, size 0x4
    TBPackageIndex* packagePtr; // offset 0xA4, size 0x4
    int size; // offset 0xA8, size 0x4
};
