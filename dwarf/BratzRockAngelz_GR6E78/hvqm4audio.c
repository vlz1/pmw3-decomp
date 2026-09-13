/*
    Compile unit: D:\DolphinSDK1.0\HVQ\build\libraries\hvqm4audio\src\hvqm4audio.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803B2B80 -> 0x803B3234
*/
static int indexAdjustTable[16]; // size: 0x40, address: 0x8042C1C0
static int stepSizeTable[89]; // size: 0x164, address: 0x8042C200
// Range: 0x803B2B80 -> 0x803B3234
void HVQM4ADPCMDecode(unsigned char * pSrc /* r3 */, unsigned char * pDst /* r4 */, int iChannels /* r1+0x10 */, unsigned long dwFormat /* r1+0x14 */, unsigned long dwSamples /* r7 */, // total size: 0x18
struct {
    // Members
    unsigned char * inPtr; // offset 0x0, size 0x4
    signed short * outPtr; // offset 0x4, size 0x4
    signed short previous; // offset 0x8, size 0x2
    unsigned char hi_nibble; // offset 0xA, size 0x1
    unsigned char step_index; // offset 0xB, size 0x1
    unsigned char reserved[2]; // offset 0xC, size 0x2
    unsigned char * bufstart; // offset 0x10, size 0x4
    unsigned char * bufend; // offset 0x14, size 0x4
} * pState /* r8 */) {
    // Local variables
    unsigned char * inP; // r3
    signed short * outP; // r4
    int hi_nibble; // r27
    int i; // r9
    int delta; // r1+0x8
    int diff[2]; // r1+0x44
    int step[2]; // r1+0x3C
    int prev[2]; // r1+0x34
    int index[2]; // r1+0x2C
    unsigned char b1; // r10
    unsigned char b2; // r11

    // References
    // -> static int indexAdjustTable[16];
    // -> static int stepSizeTable[89];
}


