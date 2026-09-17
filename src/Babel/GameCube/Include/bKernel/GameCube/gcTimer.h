#pragma once

#include <dolphin/os.h>

inline u64 bkTimerDelta(u64 startValue)
{
    u64 endValue = OSGetTime();
    if (endValue < startValue)
        return endValue - (startValue + 1);
    return endValue - startValue;
}
