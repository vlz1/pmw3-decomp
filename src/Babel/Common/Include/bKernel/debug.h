#pragma once

#include <bKernel/verbosity.h>

struct _TBDebugStream
{
    char logFile[256]; // offset 0x0, size 0x100
    unsigned int flags; // offset 0x100, size 0x4
    int fp; // offset 0x104, size 0x4
};

typedef struct _TBDebugStream TBDebugStream;

void bInitDebug();
void bPrintError(char* format, ...);
void bkPrintf(char* format, ...);
