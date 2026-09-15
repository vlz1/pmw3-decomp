#pragma once

#include <bKernel/file.h>

typedef enum EBBkgChannel
{
    EBBKGCHANNEL_DATA = 0,
    EBBKGCHANNEL_AUDIO1 = 1,
    EBBKGCHANNEL_AUDIO2 = 2,
    EBBKGCHANNEL_CHANNELS = 3,
    EBBKGCHANNEL_INVALID = 4,
} EBBkgChannel;

typedef enum EBBkgError
{
    EBBKGERROR_NONE = 0,
    EBBKGERROR_NOTFOUND = 1,
    EBBKGERROR_LOADBUFFERTOSMALL = 2,
    EBBKGERROR_READERROR = 3,
    EBBKGERROR_PACKAGEEMPTY = 4,
    EBBKGERROR_SYSTEMERROR = 5,
    EBBKGERROR_CANCELLED = 6,
    EBBKGERROR_NOOF = 7,
} EBBkgError;

typedef struct _TBBkgLoadCmd
{
    char filename[256]; // offset 0x0, size 0x100
    char target[256]; // offset 0x100, size 0x100
    char eventName[128]; // offset 0x200, size 0x80
    char eventFilename[256]; // offset 0x280, size 0x100
    int resType; // offset 0x380, size 0x4
    void * address; // offset 0x384, size 0x4
    unsigned int uid; // offset 0x388, size 0x4
    int offset; // offset 0x38C, size 0x4
    int noofBytes; // offset 0x390, size 0x4
    struct _TBFileHandleType * fp; // offset 0x394, size 0x4
    enum EBBkgChannel channel; // offset 0x398, size 0x4
    int flags; // offset 0x39C, size 0x4
    enum EBBkgError resultCode; // offset 0x3A0, size 0x4
    unsigned int crc; // offset 0x3A4, size 0x4
} TBBkgLoadCmd;

typedef struct _TBkgSchedulerChannel {
    char filename[256]; // offset 0x0, size 0x100
    TBFileHandleType * fp; // offset 0x100, size 0x4
    int offset; // offset 0x104, size 0x4
    unsigned char * dest; // offset 0x108, size 0x4
    int noofBytes; // offset 0x10C, size 0x4
    int blockSize; // offset 0x110, size 0x4
    int thisBlockSize; // offset 0x114, size 0x4
    EBBkgChannel channel; // offset 0x118, size 0x4
    char * ident; // offset 0x11C, size 0x4
    void (* completeCallback)(void *); // offset 0x120, size 0x4
    void * callbackContext; // offset 0x124, size 0x4
    int bytesRead; // offset 0x128, size 0x4
    int orgNoofBytes; // offset 0x12C, size 0x4
    unsigned int flags; // offset 0x130, size 0x4
    unsigned int state; // offset 0x134, size 0x4
    unsigned int uid; // offset 0x138, size 0x4
    EBBkgError resultCode; // offset 0x13C, size 0x4
} TBkgSchedulerChannel;
