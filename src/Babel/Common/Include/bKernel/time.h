#pragma once

struct _TBClock
{
    unsigned char second; // offset 0x0, size 0x1
    unsigned char minute; // offset 0x1, size 0x1
    unsigned char hour; // offset 0x2, size 0x1
    unsigned char day; // offset 0x3, size 0x1
    unsigned char month; // offset 0x4, size 0x1
    unsigned char year; // offset 0x5, size 0x1
};

typedef struct _TBClock TBClock;
