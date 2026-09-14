#pragma once

#include <dolphin/types.h>

int bInitCommandLine(int argc, char** argv);
void bShutdownCommandLine();
void bkGetCommandLine(int* argc, char*** argv);
void bRun(void (*mainFunc)(void*), void* context);
