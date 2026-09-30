#include <dolphin/types.h>
#include <bKernel/verbosity.h>
#include <bKernel/debug.h>

enum EBVerboseLevel bVerboseLevel = BDVERBOSE_WARNINGS;
unsigned int bVerboseModule = ~0U;
unsigned int bVerboseFlags = 1;
static int bVerboseStackSize = 0;
static enum EBVerboseLevel bVerboseLevelStack[4];
static unsigned int bVerboseModuleStack[4];
static unsigned int bVerboseFlagsStack[4];

void bkSetVerboseLevel(enum EBVerboseLevel level, unsigned int module, unsigned int flags)
{
    if (level < BDVERBOSE_ASSERTS)
    {
        bkPrintf("*WARNING* bkSetVerboseLevel: Setting level < BDVERBOSE_ASSERTS could cause problems\n");
    }

    bVerboseModule = module;
    bVerboseLevel = level;
    bVerboseFlags = flags;
}

void bkPushVerboseLevel(enum EBVerboseLevel level, unsigned int modules, unsigned int flags)
{
    bVerboseModuleStack[bVerboseStackSize] = bVerboseModule;
    bVerboseLevelStack[bVerboseStackSize] = bVerboseLevel;
    bVerboseFlagsStack[bVerboseStackSize] = bVerboseFlags;

    if (level < 2)
    {
        bkPrintf("*WARNING* bkSetVerboseLevel: Setting level < BDVERBOSE_ASSERTS could cause problems\n");
    }

    bVerboseModule = modules;
    bVerboseLevel = level;
    bVerboseFlags = flags;
    bVerboseStackSize += 1;
}

void bkPopVerboseLevel()
{
    --bVerboseStackSize;
    bVerboseModule = bVerboseModuleStack[bVerboseStackSize];
    bVerboseLevel = bVerboseLevelStack[bVerboseStackSize];
    bVerboseFlags = bVerboseFlagsStack[bVerboseStackSize];
}
