#pragma once

#include <dolphin/types.h>

extern unsigned int bCRCtable[256];

u32 bkCRC32(const u8* data, int count, unsigned int crc);
u32 bkStringCRC(const char* str, unsigned int crc);

static inline void bPopulateCRCTable()
{
    const u32 polynomial = 0x4C11DB7;

    for (s32 i = 0; i < 256; i++) {
        s32 c = i << 24;
        for (s32 j = 8; j > 0; --j) {
            if (c < 0) {
                c = polynomial ^ (c << 1);
            } else {
                c <<= 1;
            }
        }
        bCRCtable[i] = c;
    }
}
