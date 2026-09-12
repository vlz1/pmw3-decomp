#pragma once

#include <dolphin/dvd.h>

struct _TBFileHandleType
{
    DVDFileInfo handle; // offset 0x0, size 0x3C
    int offset; // offset 0x3C, size 0x4
};
