#include <dolphin/os.h>
#include <bKernel/timer.h>
#include <bKernel/GameCube/gcTimer.h>

extern u64 bTimerFrequency;

void bInitTimer()
{
    // Won't match if we use __OSBusClock
    u32* osBase = (u32*)OS_BASE_CACHED;
    bTimerFrequency = osBase[0xF8 / 4] / 4;
}

void bShutdownTimer()
{

}

u64 bkTimerRead()
{
    return OSGetTime();
}

float bkTimerToFPS(u64 timerValue)
{
    if (timerValue != 0)
    {
        u64 value = (bTimerFrequency * 100) / timerValue;
        return value * 0.0099999998f;
    }
    return 0.0f;
}

u64 bkTimerDelta(u64 startValue, u64 endValue)
{
    if (endValue < startValue)
        return endValue - (startValue + 1);
    return endValue - startValue;
}

void bkSleep(int miliseconds, int yield)
{
    u64 now = OSGetTime();
    u64 wait = (miliseconds * bTimerFrequency) / 1000;
    do
    {
        if (yield) OSYieldThread();
    } while (bkTimerDelta(now) < wait);
}
