#include <dolphin/perf.h>
#include <bKernel/perf.h>
#include <bKernel/heap.h>

extern int bPerfMonActive;
extern int bPerfMonRunning;
extern u8* bPerfMonGraphDisplayList;
extern int bPerfMonGraphDisplayListSize;

void bkPerfMonShutdown()
{
    bPerfMonFinish();
    if (bPerfMonGraphDisplayList)
    {
        bkHeapFree(bPerfMonGraphDisplayList);
        bPerfMonGraphDisplayList = 0;
    }
    bPerfMonActive = 0;
}

void bPerfMonPrepare()
{
    if (!bPerfMonActive || bPerfMonRunning != 0)
        return;
    PERFStartFrame();
    PERFStartAutoSampling(1.0f);
    bPerfMonRunning = 1;
}

void bPerfMonFinish()
{
    if (!bPerfMonRunning)
        return;
    PERFEndFrame();
    PERFStopAutoSampling();
    bPerfMonRunning = 0;
    GXBeginDisplayList(bPerfMonGraphDisplayList, 1 << 16);
    PERFDumpScreen();
    bPerfMonGraphDisplayListSize = GXEndDisplayList();
}

void bPerfMonDraw()
{
    if (!bPerfMonActive || !bPerfMonGraphDisplayListSize)
        return;
    PERFPreDraw();
    GXCallDisplayList(bPerfMonGraphDisplayList, bPerfMonGraphDisplayListSize);
    PERFPostDraw();
}
