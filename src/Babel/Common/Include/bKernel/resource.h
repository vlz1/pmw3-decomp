#pragma once

#include <bKernel/file.h>

typedef enum EBResourceType
{
    EBRESTYPE_NONE = 255,
    EBRESTYPE_TEXTURE = 0,
    EBRESTYPE_ACTOR = 1,
    EBRESTYPE_SAMPLE = 2,
    EBRESTYPE_FONT = 3,
    EBRESTYPE_STRINGTABLE = 4,
    EBRESTYPE_SPLASH = 5,
    EBRESTYPE_SET = 6,
    EBRESTYPE_COLLISIONMESH = 7,
    EBRESTYPE_AUDIOSTREAM = 8,
    EBRESTYPE_LIPSYNC = 9,
    EBRESTYPE_FLAREMESH = 10,
    EBRESTYPE_FLAREWORLD = 11,
    EBRESTYPE_SOUNDBANK = 12,
    EBRESTYPE_SOUNDPATCH = 13,
    EBRESTYPE_LIGHTMATRIX = 14,
    EBRESTYPE_SIMULATIONDATA = 15,
    EBRESTYPE_SUBTITLE = 16,
    EBRESTYPE_MATERIAL = 17,
    EBRESTYPE_BLENDER = 18,
    EBRESTYPE_VERTEXSHADER = 19,
    EBRESTYPE_PIXELSHADER = 20,
    BNOOFRESTYPES = 21,
    EBRESTYPE_ANY = 22,
} EBResourceType;

// total size: 0x4
typedef struct _TBPackageID
{
    unsigned int crc : 31;
    unsigned int loaded : 1;
} TBPackageID;

// total size: 0x140
typedef struct _TBPackageIndex
{
    // Members
    TBPackageID id; // offset 0x0, size 0x4
    unsigned int pauSize; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    int noofFiles; // offset 0xC, size 0x4

    union
    {
        TBFileIndex* index; // offset 0x0, size 0x4
        unsigned int indexOffset; // offset 0x0, size 0x4
    }; // offset 0x10, size 0x4

    union
    {
        unsigned int* tags; // offset 0x0, size 0x4
        unsigned int tagOffset; // offset 0x0, size 0x4
    }; // offset 0x14, size 0x4

    union
    {
        TBFileHandleType* fp; // offset 0x0, size 0x4
        unsigned char * data; // offset 0x0, size 0x4
    }; // offset 0x18, size 0x4

    int noofTags; // offset 0x1C, size 0x4
    int blockMapOffset; // offset 0x20, size 0x4
    int blockMapSize; // offset 0x24, size 0x4
    unsigned int filenameTableOffset; // offset 0x28, size 0x4
    unsigned int filenameTableSize; // offset 0x2C, size 0x4
    unsigned int indexSize; // offset 0x30, size 0x4
    unsigned int startSector; // offset 0x34, size 0x4
    unsigned int buildNumber; // offset 0x38, size 0x4
    unsigned int noofFilesUsingDMA; // offset 0x3C, size 0x4
    char pakFilename[256]; // offset 0x40, size 0x100
} TBPackageIndex;

typedef struct _TBResourceInfo
{
    // Members
    union
    {
        TBPackageID packageId; // offset 0x0, size 0x4
        unsigned int packageId32; // offset 0x0, size 0x4
    }; // offset 0x0, size 0x4

    unsigned short groupId; // offset 0x4, size 0x2
    unsigned char type; // offset 0x6, size 0x1
    unsigned char pad1; // offset 0x7, size 0x1

    union
    {
        int iContext; // offset 0x0, size 0x4
        unsigned int uiContext; // offset 0x0, size 0x4
        short sContext[2]; // offset 0x0, size 0x4
        unsigned short usContext[2]; // offset 0x0, size 0x4
        float fContext; // offset 0x0, size 0x4
        char cContext[4]; // offset 0x0, size 0x4
        unsigned char ucContext[4]; // offset 0x0, size 0x4
        void * pContext; // offset 0x0, size 0x4
    }; // offset 0x8, size 0x4

    unsigned int crc; // offset 0xC, size 0x4
    struct _TBResourceInfo* child1; // offset 0x10, size 0x4
    struct _TBResourceInfo* child2; // offset 0x14, size 0x4
    struct _TBResourceInfo* parent; // offset 0x18, size 0x4
    unsigned int pad; // offset 0x1C, size 0x4
} TBResourceInfo;

typedef struct _TBFilenameTableHeader
{
    TBPackageID package; // offset 0x0, size 0x4
    struct _TBFilenameTableHeader * prev; // offset 0x4, size 0x4
    struct _TBFilenameTableHeader * next; // offset 0x8, size 0x4
    int refCount; // offset 0xC, size 0x4
    unsigned int noofFiles; // offset 0x10, size 0x4
    char filename[256]; // offset 0x14, size 0x100
} TBFilenameTableHeader;

typedef struct _TBFileTagInfo
{
    unsigned int* tags; // offset 0x0, size 0x4
    int noofTags; // offset 0x4, size 0x4
} TBFileTagInfo;

typedef TBResourceInfo*(*TBResourceLoadFunction)(TBPackageIndex*, unsigned int);
typedef void (*TBResourceDeleteFunction)(TBResourceInfo*);

TBPackageIndex* bkOpenPackage(char* filename);
TBPackageIndex* bkLoadPackage(TBPackageIndex* parentIndex, char* filename, unsigned char* dataPtr);
int bkFreePackageMemory(TBPackageIndex** index);
void bkClosePackage(TBPackageIndex* index);
