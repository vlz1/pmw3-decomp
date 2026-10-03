#include <stdlib.h>
#include <bKernel/heap.h>
#include <bKernel/crc32.h>
#include <bKernel/file.h>
#include <bKernel/main.h>
#include <bKernel/debug.h>
#include <bKernel/verbosity.h>
#include <feCore/CFFactoryClass.h>
#include <feCore/CFEnvironmentVars.h>
#include <feCore/TFValidationHandle.h>
#include <feCore/SysVar.h>

extern u32 feHeapSize;
extern u32 feInitFlags;

extern void feClientInit(int* pnHeapSize, unsigned int* pun32InitFlags, void** ppHeapBase);

struct TRegisteredClass
{
    char* name; // offset 0x0, size 0x4
    unsigned int nameCrc; // offset 0x4, size 0x4
    CFFactoryClass* (*factory)(); // offset 0x8, size 0x4
};

static struct TRegisteredClass registeredClasses[256];
static int noofRegisteredClasses = 0;
unsigned int TFValidationHandle::lastHandle = 1;

CFFactoryClass* feCreateClass(unsigned int nameCrc);

CFFactoryClass* ClassFactory_CFController()
{

}

CFFactoryClass* ClassFactory_CFCamera()
{

}

CFFactoryClass* ClassFactory_CFCameraContext()
{

}

CFFactoryClass* ClassFactory_CFFlyAroundCamera()
{

}

CFFactoryClass* ClassFactory_CFPivotCamera()
{

}

CFFactoryClass* ClassFactory_CFDisplayContext()
{

}

CFFactoryClass* ClassFactory_CFLightingContext()
{

}

CFFactoryClass* ClassFactory_CFSoundContext()
{

}

CFFactoryClass* ClassFactory_CFMode_World()
{

}

static int SortRegisteredClasses(const void* ptr1, const void* ptr2)
{
    unsigned int crc1 = ((TRegisteredClass*)ptr1)->nameCrc;
    unsigned int crc2 = ((TRegisteredClass*)ptr2)->nameCrc;
    if (crc1 < crc2)
        return -1;
    if (crc1 > crc2)
        return 1;
    return 0;
}

void feRegisterClass(char* name, CFFactoryClass* (*factory)())
{
    int l; // r11
    unsigned int nameCrc; // r8

    nameCrc = bkStringLwrCRC(name, 0);
    l = 0;
    while (l < noofRegisteredClasses)
    {
        if (registeredClasses[l].nameCrc == nameCrc)
        {
            registeredClasses[l].factory = factory;
            return;
        }
        ++l;
    }

    registeredClasses[noofRegisteredClasses].nameCrc = nameCrc;
    registeredClasses[noofRegisteredClasses].factory = factory;
    registeredClasses[noofRegisteredClasses].name = name;
    ++noofRegisteredClasses;
    qsort(registeredClasses,noofRegisteredClasses, sizeof(TRegisteredClass), SortRegisteredClasses);
}

CFFactoryClass* feCreateClass(char* name)
{
    return feCreateClass(bkStringLwrCRC(name, 0));
}

CFFactoryClass* feCreateClass(unsigned int nameCrc)
{
    int first;
    int last;
    int current;

    first = 0;
    last = noofRegisteredClasses - 1;
    while (true)
    {
        current = (first + last) >> 1;
        if (registeredClasses[current].nameCrc == nameCrc)
            return registeredClasses[current].factory();
        if (registeredClasses[current].nameCrc < nameCrc)
        {
            if ((first = current + 1) > last)
                break;
        }
        else
        {
            if ((last = current - 1) < first)
                break;
        }
    }
    
    return NULL;
}

static void feRegisterEngineClasses()
{
    feRegisterClass("CFCamera", ClassFactory_CFCamera);
    feRegisterClass("CFFlyAroundCamera", ClassFactory_CFFlyAroundCamera);
    feRegisterClass("CFPivotCamera", ClassFactory_CFPivotCamera);
    feRegisterClass("CFController", ClassFactory_CFController);
    feRegisterClass("CFMode_World", ClassFactory_CFMode_World);
    feRegisterClass("CFDisplayContext", ClassFactory_CFDisplayContext);
    feRegisterClass("CFCameraContext", ClassFactory_CFCameraContext);
    feRegisterClass("CFLightingContext", ClassFactory_CFLightingContext);
    feRegisterClass("CFSoundContext", ClassFactory_CFSoundContext);
}

void ProcessEnvCommands()
{
    int counter; // r1+0x8
    int pathNum; // r0
    char* valPtr; // r3

    pathNum = 0;
    counter = 0;

    do
    {
        valPtr = feEnvVars->FindVarVal("addsearchpath", &counter);
        if (!valPtr)
            return;
        bFileSearchPath[pathNum++] = valPtr;
    } while (pathNum != 4);
}

void ProcessModeEnvCommands()
{
    int counter; // r1+0x88
    char* valPtr; // r30
    char* namePtr; // r31
    char path[128]; // r1+0x8
    struct CFMode_World* world; // r29
    int worldPassedOnCommandLine; // r31
}

void fMain(void* context)
{
    char* eval;
    int heapSize; // r1+0x8
    int heapPooling; // r30
    unsigned int flags; // r1+0xC
    void* basePtr; // r1+0x10

    basePtr = NULL;
    _register_malloc = bkMalloc;
    _register_free = bkFree;

    GetInitInfoFromCommandLine();

    heapSize = feHeapSize;
    flags = feInitFlags;

    feClientInit(&heapSize, &flags, &basePtr);

    if (!bkInit(basePtr, heapSize << 10, flags))
    {
        bkAlert("Error during Babel initialisation");
        return;
    }

    feEnvVars = new("File", 0, HEAP_FLAGS_NEW | HEAP_MODULE_FLARE) CFEnvironmentVars();
}
