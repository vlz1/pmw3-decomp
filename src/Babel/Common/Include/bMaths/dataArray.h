#pragma once

#include <bKernel/debug.h>
#include <bKernel/heap.h>

enum EBSortType
{
    EBSORTTYPE_BUBBLE = 0,
    EBSORTTYPE_QUICK = 1,
    EBSORTTYPE_MERGE = 2,
    EBSORTTYPE_SYSQUICK = 3,
    EBSORTTYPES = 4,
};

union UBContext32
{
    int iContext; // offset 0x0, size 0x4
    unsigned int uiContext; // offset 0x0, size 0x4
    short sContext[2]; // offset 0x0, size 0x4
    unsigned short usContext[2]; // offset 0x0, size 0x4
    float fContext; // offset 0x0, size 0x4
    char cContext[4]; // offset 0x0, size 0x4
    unsigned char ucContext[4]; // offset 0x0, size 0x4
    void* pContext; // offset 0x0, size 0x4
};

struct TBDataElement
{
    float value; // offset 0x0, size 0x4
    union UBContext32 context; // offset 0x4, size 0x4
};

struct TBDataElementWide
{
    float value; // offset 0x0, size 0x4
    int priority; // offset 0x4, size 0x4
    union UBContext32 context; // offset 0x8, size 0x4
    union UBContext32 context2; // offset 0xC, size 0x4
};

struct TBDataArray
{
    TBDataElement* array; // offset 0x0, size 0x4
    TBDataElement* tempArray; // offset 0x4, size 0x4
    int maxElements; // offset 0x8, size 0x4
    int noofElements; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
};

struct TBDataArrayWide
{
    TBDataElementWide * array; // offset 0x0, size 0x4
    TBDataElementWide * tempArray; // offset 0x4, size 0x4
    int maxElements; // offset 0x8, size 0x4
    int noofElements; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
};

TBDataArray* bmDataArrayCreate(int maxElements, int flags);
TBDataArrayWide* bmDataArrayCreateWide(int maxElements, int flags);

inline void bmDataArrayAddElement(TBDataArray* data, float value, void* context)
{

}

inline void bmDataArrayAddElement(TBDataArrayWide* data, float value, void* context)
{

}

inline void bmDataArrayClear(TBDataArray* data)
{
    data->noofElements = 0;
}

inline void bmDataArrayClear(TBDataArrayWide* data)
{
    data->noofElements = 0;
}

inline void bmDataArrayDelete(TBDataArray* data)
{
    bkHeapFree(data);
}

inline void bmDataArrayDelete(TBDataArrayWide* data)
{
    bkHeapFree(data);
}

inline void bmDataArraySort(TBDataArray* data, enum EBSortType type)
{
    bPrintError("bDataArraySort: Unimplemented sort type\n");
}
