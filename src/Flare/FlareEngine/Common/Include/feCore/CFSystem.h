#pragma once

#include <bKernel/language.h>

struct CFSystem
{
    CFSystem();
    ~CFSystem();

    inline void SetDisplayMode(int newPalMode) { }

    int fStartup();
    void fShutdown();
    void fTogglePALMode();
    void fInitialise();
    void fFree();
    void fUpdate();

    void SetLanguage(EBLanguageID languageID);
    float TimeSinceFrameStartMS();
    unsigned short TimeSinceFrameStartMicro();
    void GetSafeFrameArea(int* top, int* left, int* width, int* height);

    // Static members
    static float deltaT60ths; // size: 0x4, address: 0x8047DE70
    static float deltaTSeconds; // size: 0x4, address: 0x8047DE6C
    static float deltaTDebug60ths; // size: 0x4, address: 0x8047DE7C
    static float deltaTDebugSeconds; // size: 0x4, address: 0x8047DE78
    static float timeRunning60ths; // size: 0x4, address: 0x8047DE80
    static float timeRunningSeconds; // size: 0x4, address: 0x8047DE74

    // Members
    unsigned char* fetListData; // offset 0x0, size 0x4
    int fetListLength; // offset 0x4, size 0x4
    unsigned long long frameStart; // offset 0x8, size 0x8
    unsigned long long frameEnd; // offset 0x10, size 0x8
    unsigned long long framePreFlip; // offset 0x18, size 0x8
    float targetFPS; // offset 0x20, size 0x4
    int enableFrameLimit; // offset 0x24, size 0x4
    float timeStretch; // offset 0x28, size 0x4
    int enableTimeStretch; // offset 0x2C, size 0x4
    int enableTimeStep; // offset 0x30, size 0x4
    int xRes; // offset 0x34, size 0x4
    int yRes; // offset 0x38, size 0x4
    int bpp; // offset 0x3C, size 0x4
    int zDepth; // offset 0x40, size 0x4
    unsigned int displayFlags; // offset 0x44, size 0x4
    int palMode; // offset 0x48, size 0x4
    int nextPalMode; // offset 0x4C, size 0x4
    float halfXRes; // offset 0x50, size 0x4
    float halfYRes; // offset 0x54, size 0x4
    char* applicationName; // offset 0x58, size 0x4
    int quit; // offset 0x5C, size 0x4
    unsigned int screenshotID; // offset 0x60, size 0x4
    char cleanScreenshot; // offset 0x64, size 0x1
    char takingScreenshot; // offset 0x65, size 0x1
    char screenshotDelay; // offset 0x66, size 0x1
    char currentScreenshot; // offset 0x67, size 0x1
    char screenshotTile; // offset 0x68, size 0x1
    char debugCommsScreenshot; // offset 0x69, size 0x1
    float fCompensation; // offset 0x6C, size 0x4
    unsigned int languages; // offset 0x70, size 0x4
    //struct CFSharedVertexBuffer sharedVerts2D; // offset 0x74, size 0x18
    //struct CFSharedVertexBuffer sharedVerts3D; // offset 0x8C, size 0x18
};
