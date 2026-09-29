#include <feCore/CFFactoryClass.h>
#include <bKernel/heap.h>
#include <bKernel/crc32.h>
#include <stdlib.h>

struct TRegisteredClass
{
    char* name; // offset 0x0, size 0x4
    unsigned int nameCrc; // offset 0x4, size 0x4
    CFFactoryClass* (*factory)(); // offset 0x8, size 0x4
};

static struct TRegisteredClass registeredClasses[256];
static int noofRegisteredClasses = 0;

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
    unsigned int crc1; // r9
    unsigned int crc2; // r0
}

void feRegisterClass(char* name, CFFactoryClass* (*factory)())
{
    int l; // r11
    unsigned int nameCrc = bkStringLwrCRC(name, 0);
    

    #if 0
    l = 0;
    while (true)
    {
        if (noofRegisteredClasses <= 1)
        {
            registeredClasses[noofRegisteredClasses].nameCrc = nameCrc;
            registeredClasses[noofRegisteredClasses].factory = factory;
            registeredClasses[noofRegisteredClasses].name = name;
            noofRegisteredClasses++;
            qsort(registeredClasses,noofRegisteredClasses, sizeof(TRegisteredClass), SortRegisteredClasses);
            return;
        }
        else
        {
            if (registeredClasses[l].nameCrc == nameCrc)
                break;
            ++l;
        }
    }
    #else
    if (noofRegisteredClasses >= 0) {
        for (l = 0; l < noofRegisteredClasses; ++l)
        {
            if (registeredClasses[l].nameCrc == nameCrc)
                return;
        }
    }

    registeredClasses[noofRegisteredClasses].name = name;
    registeredClasses[noofRegisteredClasses].nameCrc = nameCrc;
    registeredClasses[noofRegisteredClasses].factory = factory;
    qsort(registeredClasses,noofRegisteredClasses++, sizeof(TRegisteredClass), SortRegisteredClasses);
    #endif

    //registeredClasses[l].factory = factory;
}

struct CFFactoryClass* feCreateClass(char* name)
{

}

struct CFFactoryClass* feCreateClass(unsigned int nameCrc)
{
    int first; // r8
    int last; // r11
    int current; // r10
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
    
}
