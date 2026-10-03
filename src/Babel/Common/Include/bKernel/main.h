#pragma once

#include <dolphin/types.h>

void bRun(void (*mainFunc)(void*), void* context);
int bkInit(void* base, unsigned int size, unsigned int flags);
