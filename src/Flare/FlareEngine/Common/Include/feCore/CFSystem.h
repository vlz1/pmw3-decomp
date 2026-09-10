#pragma once

enum EBLanguageID
{
    BLANGUAGEID_UK = 0,
    BLANGUAGEID_F = 1,
    BLANGUAGEID_D = 2,
    BLANGUAGEID_E = 3,
    BLANGUAGEID_IT = 4,
    BLANGUAGEID_NL = 5,
    BLANGUAGEID_SW = 6,
    BLANGUAGEID_FIN = 7,
    BLANGUAGEID_N = 8,
    BLANGUAGEID_DK = 9,
    BLANGUAGEID_US = 10,
    BLANGUAGEID_JP = 11,
    BLANGUAGEID_PG = 12,
    BLANGUAGEID_BR = 13,
    BLANGUAGEID_KR = 14,
    BLANGUAGEID_CH = 15,
    BLANGUAGEID_TH = 16,
    BLANGUAGEID_HW = 17,
    BLANGUAGEID_PO = 18,
    BLANGUAGEID_CZ = 19,
    BLANGUAGEID_RU = 20,
    BLANGUAGEID_USS = 21,
    BLANGUAGEID_USF = 22,
    BLANGUAGEID_UNKNOWN = 23,
};

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

    void SetLanguage(enum EBLanguageID languageID);
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
    unsigned char * fetListData; // offset 0x0, size 0x4
    int fetListLength; // offset 0x4, size 0x4
    unsigned long long frameStart; // offset 0x8, size 0x8
    unsigned long long frameEnd; // offset 0x10, size 0x8
    unsigned long long framePreFlip; // offset 0x18, size 0x8
    float minimumFPS; // offset 0x20, size 0x4
    float targetFPS[8]; // offset 0x24, size 0x20
    int noofTargetFPS; // offset 0x44, size 0x4
    int enableFrameLimit; // offset 0x48, size 0x4
    int timeOut; // offset 0x4C, size 0x4
    float timeStretch; // offset 0x50, size 0x4
    int enableTimeStretch; // offset 0x54, size 0x4
    int enableTimeStep; // offset 0x58, size 0x4
    int xRes; // offset 0x5C, size 0x4
    int yRes; // offset 0x60, size 0x4
    int bpp; // offset 0x64, size 0x4
    int zDepth; // offset 0x68, size 0x4
    unsigned int displayFlags; // offset 0x6C, size 0x4
    unsigned int displayEffects; // offset 0x70, size 0x4
    int palMode; // offset 0x74, size 0x4
    int nextPalMode; // offset 0x78, size 0x4
    float halfXRes; // offset 0x7C, size 0x4
    float halfYRes; // offset 0x80, size 0x4
    char * applicationName; // offset 0x84, size 0x4
    int quit; // offset 0x88, size 0x4
    int screenshotType; // offset 0x8C, size 0x4
    unsigned int screenshotID; // offset 0x90, size 0x4
    int screenshotNoDebug; // offset 0x94, size 0x4
    char cleanScreenshot; // offset 0x98, size 0x1
    char takingScreenshot; // offset 0x99, size 0x1
    char screenshotDelay; // offset 0x9A, size 0x1
    char currentScreenshot; // offset 0x9B, size 0x1
    char screenshotTile; // offset 0x9C, size 0x1
    char debugCommsScreenshot; // offset 0x9D, size 0x1
    unsigned int recordingMovie; // offset 0xA0, size 0x4
    unsigned int movieLength; // offset 0xA4, size 0x4
    float fCompensation; // offset 0xA8, size 0x4
    unsigned int languages; // offset 0xAC, size 0x4
    //struct CFSharedVertexBuffer sharedVerts2D; // offset 0xB0, size 0x18
    //struct CFSharedVertexBuffer sharedVerts3D; // offset 0xC8, size 0x18
};
