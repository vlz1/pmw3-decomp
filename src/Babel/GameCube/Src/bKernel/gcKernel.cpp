#include <dolphin/os.h>
#include <bKernel/crc32.h>

static inline void bPopulateCRCTable()
{
    const u32 polynomial = 0x4c11db7;

    for (s32 i = 0; i < 256; i++) {
        s32 c = i << 24;
        for (s32 j = 8; j > 0; --j) {
            if (c < 0) {
                c = polynomial ^ (c << 1);
            } else {
                c <<= 1;
            }
        }
        bCRCTable[i] = c;
    }
}

static const char s_b_BlitzSDK_Babel_GameCube_Src_bKernel_gcKernel_cpp[] = "b:/BlitzSDK/Babel/GameCube/Src/bKernel/gcKernel.cpp";
static const char s_End_of_Program[] = "End of program";

void bRun(void (*arg0)(void*), void* arg1)
{
    bPopulateCRCTable();
    arg0(arg1);
    OSPanic((char*)s_b_BlitzSDK_Babel_GameCube_Src_bKernel_gcKernel_cpp, 108, (char*)s_End_of_Program);
}
