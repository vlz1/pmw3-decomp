#pragma once

#include <dolphin/types.h>

extern u32 bCRCTable[256];

/*
static inline void bPopulateCRCTable()
{
    u32 polynomial = 0x4c11db7;
    
    for (u32 i = 0; i < 256; i++) {
        u32 c = i;
        for (size_t j = 0; j < 8; j++) {
            if (c & 1) {
                c = polynomial ^ (c >> 1);
            } else {
                c >>= 1;
            }
        }
        bCRCTable[i] = c;
    }
}
*/
