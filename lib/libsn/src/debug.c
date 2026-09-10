#include <dolphin/types.h>

// This looks plausible, but I can't get it to use r6 as a temporary rather than r0
// without using "-ffixed-r0 -ffixed-r9 -ffixed-r11 -ffixed-r10 -ffixed-r8 -ffixed-r7".
// Which is quite rancid. I'm guessing most of this file is hand-written assembly.
void SNMemCpy(u8* dst, const u8* src, u32 n)
{
    u32 i;
    if (((u32)dst & 3) == 0 && ((u32)src & 3) == 0 && (n & 3) == 0)
    {
        src -= 4;
        dst -= 4;
        n += (u32)src;
        do {
            src += 4;
            dst += 4;
            *(u32*)dst = *(u32*)src;
        } while (src < (u8*)n);
        return;
    }

    src -= 1;
    dst -= 1;
    n += (u32)src;
    do {
        ++src;
        ++dst;
        *dst = *src;
    } while (src < (u8*)n);
}

void DBcallback(void* arg0, int arg1)
{

}

void EnableMetroTRKInterrupts()
{
    
}

void SNDebugInit(int arg0)
{
    
}

void SNDebugBoot()
{
    
}

void ISIentry()
{

}

void DSIentry()
{

}

BOOL IsDevLink()
{
    return FALSE;
}
