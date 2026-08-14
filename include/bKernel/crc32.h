#pragma once

#include <dolphin/types.h>

extern u32 bCRCtable[256];

u32 bkCRC32(const u8* data, int count, unsigned int crc);
u32 bkStringCRC(const char* str, unsigned int crc);
