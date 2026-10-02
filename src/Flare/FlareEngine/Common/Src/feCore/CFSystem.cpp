#include <stdlib.h>
#include <string.h>
#include <bKernel/heap.h>
#include <bKernel/timer.h>
#include <bKernel/language.h>
#include <feCore/CFSystem.h>
#include <feCore/CFEnvironmentVars.h>
#include <feCore/SysVar.h>

// Absolutely rancid
#define GET_SYSVAR(name) \
    (feEnvVars && \
        ((fSysStrPtr = feEnvVars->FindVarVal(FSYSVAR_##name##_STR, NULL)) || \
        (fSysStrPtr = feEnvVars->FindVarVal(FSYSVAR_##name##_SHORTSTR, NULL))) \
            ? atoi(fSysStrPtr) \
            : FSYSVAR_##name##_VAL)
#define GET_SYSSTR(name) \
    (feEnvVars && \
        ((fSysStrPtr = feEnvVars->FindVarVal(FSYSSTR_##name##_STR, NULL)) || \
        (fSysStrPtr = feEnvVars->FindVarVal(FSYSSTR_##name##_SHORTSTR, NULL))) \
            ? fSysStrPtr \
            : FSYSSTR_##name##_VAL)

CFSystem::CFSystem()
{
    quit = 0;
    applicationName = "FlareEngine";
    deltaT60ths = 1.0f;
    deltaTSeconds = 1.0f / 60.0f;
    deltaTDebug60ths = 1.0f;
    deltaTDebugSeconds = 1.0f / 60.0f;
    timeStretch = 1.0f;
    timeRunning60ths = 0.0f;
    timeRunningSeconds = 0.0f;
    enableTimeStretch = 0;
    enableTimeStep = 0;
    takingScreenshot = 0;
    cleanScreenshot = 0;
    screenshotTile = 1;
    screenshotDelay = 0;
    palMode = 0;
    enableFrameLimit = 1;
}

CFSystem::~CFSystem()
{
    
}

void CFSystem::fInitialise()
{
    char* languageStr; // r30
    int l; // r31

    targetFPS    = GET_SYSVAR(TARGET_FPS);
    xRes         = GET_SYSVAR(DISPLAY_XRES);
    yRes         = GET_SYSVAR(DISPLAY_YRES);
    bpp          = GET_SYSVAR(DISPLAY_BPP);
    zDepth       = GET_SYSVAR(DISPLAY_ZDEPTH);
    displayFlags = GET_SYSVAR(DISPLAY_FLAGS);
    
    if (GET_SYSVAR(EMULATE_PSP_CLIPPING))
    {
        displayFlags |= 0x400000;
    }

    fetListData = NULL;
    fetListLength = 0;

    halfXRes = xRes * 0.5f;
    halfYRes = yRes * 0.5f;

    palMode = GET_SYSVAR(PALMODE);
    if (palMode)
        displayFlags |= 4;
    else
        displayFlags |= 2;
    nextPalMode = palMode;

    languages = GET_SYSVAR(SUPPORTED_LANGUAGES);
    languageStr = GET_SYSSTR(LANGUAGE);

    for (l = 0; l < 0x12; ++l)
    {
        if (strcasecmp(bLanguageCode[l], languageStr) == 0)
        {
            bkSetLanguage((EBLanguageID)l);
            break;
        }
    }

    if (l == 0x12)
        bkSetLanguage(bkGetSystemLanguage());

    framePreFlip = frameEnd = bkTimerRead();
    fCompensation = 1.0f;
}

void CFSystem::fFree()
{
    if (fetListData)
    {
        bkHeapFree(fetListData);
        fetListData = NULL;
    }

    fetListData = NULL;
}

void CFSystem::fUpdate()
{

}
