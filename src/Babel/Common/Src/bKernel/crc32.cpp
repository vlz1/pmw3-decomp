#include <bKernel/crc32.h>

u32 bkCRC32(const u8* data, int count, unsigned int crc)
{
    while (count != 0)
    {
        u8 byte = *data++;
        crc = (crc << 8) ^ bCRCtable[(crc >> 24) ^ (unsigned int)byte];
        --count;
    }
    return crc;
}

u32 bkStringCRC(const char* str, unsigned int crc)
{
    while (*str != '\0')
    {
        u8 byte = *str++;
        crc = (crc << 8) ^ bCRCtable[(crc >> 24) ^ (unsigned int)byte];
    }
    return crc;
}

u32 bkStringLwrCRC(const char* str, unsigned int crc)
{
    while (*str != '\0')
    {
        s32 c = *str++;
        if ((c - 0x41) < 0x1AU) {
            c += 0x20;
        }
        crc = (crc << 8) ^ bCRCtable[((crc >> 24) ^ c) & 0xFF];
    }
    return crc;
}
