#include <bMaths/dataArray.h>
#include <bKernel/heap.h>

TBDataArray* bmDataArrayCreate(int maxElements, int flags)
{
    TBDataArray* data;
    char* ptr; // r0
    int size = maxElements * sizeof(TBDataElement);

    data = (TBDataArray*)bkHeapAlloc(
        sizeof(TBDataArray) + size * 2,
        (char*)"File",
        0,
        0x2007);
    data->array = (TBDataElement*)(data + 1);
    data->tempArray = (((flags ^ 1) & 1) == 0) ? NULL : (TBDataElement*)(data->array + maxElements);
    data->maxElements = maxElements;
    data->noofElements = 0;
    data->flags = flags;
    return data;
}

TBDataArrayWide* bmDataArrayCreateWide(int maxElements, int flags)
{
    TBDataArrayWide* data;
    char* ptr; // r0
    int size = maxElements * 16;

    data = (TBDataArrayWide*)bkHeapAlloc(
        sizeof(TBDataArrayWide) + sizeof(TBDataElementWide) * 4 + size * 2,
        (char*)"File",
        0,
        0x2007);
    data->array = (TBDataElementWide*)((u32)data + 0x53U & 0xFFFFFFC0);
    data->tempArray = (((flags ^ 1) & 1) == 0) ? NULL : (TBDataElementWide*)(data->array + maxElements);
    data->maxElements = maxElements;
    data->noofElements = 0;
    data->flags = flags;
    return data;
}

int bDataArrayCompareElement(const void* el1, const void* el2)
{
    TBDataElement* e1;
    TBDataElement* e2;
}
