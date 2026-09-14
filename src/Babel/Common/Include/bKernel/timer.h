#pragma once

#include <dolphin/types.h>

void bInitTimer();
void bShutdownTimer();
unsigned long long bkTimerRead();
float bkTimerToFPS(unsigned long long timerValue);
unsigned long long bkTimerDelta(unsigned long long startValue, unsigned long long endValue);
void bkSleep(int miliseconds, int yield);
