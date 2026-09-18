#pragma once

#include <stdarg.h>
#include <bKernel/verbosity.h>

typedef struct _TBDebugStream
{
    char logFile[256]; // offset 0x0, size 0x100
    unsigned int flags; // offset 0x100, size 0x4
    int fp; // offset 0x104, size 0x4
} TBDebugStream;

typedef struct _TBErrorMessage
{
    char error[512]; // offset 0x0, size 0x200
    int flipCount; // offset 0x200, size 0x4
    int module; // offset 0x204, size 0x4
} TBErrorMessage;

void bInitDebug();
void bPrintError(char* format, ...);
void bkPrintf(char* format, ...);
void bkVPrintf(char* format, va_list argp);
TBDebugStream* bkCreateDebugStream(TBDebugStream* stream, char* filename, unsigned int flags);
void bkSetDebugStream(TBDebugStream* stream);
