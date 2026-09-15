#pragma once

#include <InlineUnitData.h>
#include <bKernel/debug.h>

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

struct TBDataArray
{
    struct TBDataElement* array; // offset 0x0, size 0x4
    struct TBDataElement* tempArray; // offset 0x4, size 0x4
    int maxElements; // offset 0x8, size 0x4
    int noofElements; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
};

struct TBDataElement
{
    float value; // offset 0x0, size 0x4
    union UBContext32 context; // offset 0x4, size 0x4
};

struct TBDataArrayWide
{
    struct TBDataElementWide * array; // offset 0x0, size 0x4
    struct TBDataElementWide * tempArray; // offset 0x4, size 0x4
    int maxElements; // offset 0x8, size 0x4
    int noofElements; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
};

struct TBDataElementWide
{
    float value; // offset 0x0, size 0x4
    int priority; // offset 0x4, size 0x4
    union UBContext32 context; // offset 0x8, size 0x4
    union UBContext32 context2; // offset 0xC, size 0x4
};


inline void bmDataArrayAddElement(TBDataArray* data, float value, void* context)
{

}

inline void bmDataArrayClear(TBDataArrayWide* data)
{

}

inline void bmDataArrayDelete(TBDataArray* data)
{

}

inline void bmDataArrayDelete(TBDataArrayWide* data)
{

}

DEFINE_UNIT_STRING(UnimplementedSortType, "bDataArraySort: Unimplemented sort type\n");

inline void bmDataArraySort(TBDataArray* data, enum EBSortType type)
{
    bPrintError((char*)UNIT_DATA(UnimplementedSortType, "bDataArraySort: Unimplemented sort type\n"));
}
