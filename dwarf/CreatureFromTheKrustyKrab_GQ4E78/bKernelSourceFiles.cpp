/*
    Compile unit: b:/BlitzSDK/Babel/GameCube/Src/bKernel/bKernelSourceFiles.cpp
    Producer: GNU C++ 2.95.3 SN BUILD v1.62 for Nintendo Gamecube
    Compile directory: b:\BlitzSDK\Babel\GameCube\Src\bKernel
    Language: C++
    Code range: 0x8023ED98 -> 0x80246B54
    GCC Source File Name Offset: 0x0001AD27
    GCC Source Info Offset: 0x0004E10C
*/
static inline void OSSetGQR2(unsigned int type, unsigned int scale) {
    // Local variables
    unsigned int val;
}

static inline void OSSetGQR3(unsigned int type, unsigned int scale) {
    // Local variables
    unsigned int val;
}

static inline void OSSetGQR4(unsigned int type, unsigned int scale) {
    // Local variables
    unsigned int val;
}

static inline void OSSetGQR5(unsigned int type, unsigned int scale) {
    // Local variables
    unsigned int val;
}

static inline void OSSetGQR6(unsigned int type, unsigned int scale) {
    // Local variables
    unsigned int val;
}

static inline void OSSetGQR7(unsigned int type, unsigned int scale) {
    // Local variables
    unsigned int val;
}

static inline void OSInitFastCast() {}

static inline void GXEnd() {}

static inline void GXSetTexCoordGen(enum _GXTexCoordID dst_coord, enum _GXTexGenType func, enum _GXTexGenSrc src_param, unsigned int mtx) {}

enum _GXTexCoordID {
    GX_TEXCOORD0 = 0,
    GX_TEXCOORD1 = 1,
    GX_TEXCOORD2 = 2,
    GX_TEXCOORD3 = 3,
    GX_TEXCOORD4 = 4,
    GX_TEXCOORD5 = 5,
    GX_TEXCOORD6 = 6,
    GX_TEXCOORD7 = 7,
    GX_MAX_TEXCOORD = 8,
    GX_TEXCOORD_NULL = 255,
};
enum _GXTexGenType {
    GX_TG_MTX3x4 = 0,
    GX_TG_MTX2x4 = 1,
    GX_TG_BUMP0 = 2,
    GX_TG_BUMP1 = 3,
    GX_TG_BUMP2 = 4,
    GX_TG_BUMP3 = 5,
    GX_TG_BUMP4 = 6,
    GX_TG_BUMP5 = 7,
    GX_TG_BUMP6 = 8,
    GX_TG_BUMP7 = 9,
    GX_TG_SRTG = 10,
};
enum _GXTexGenSrc {
    GX_TG_POS = 0,
    GX_TG_NRM = 1,
    GX_TG_BINRM = 2,
    GX_TG_TANGENT = 3,
    GX_TG_TEX0 = 4,
    GX_TG_TEX1 = 5,
    GX_TG_TEX2 = 6,
    GX_TG_TEX3 = 7,
    GX_TG_TEX4 = 8,
    GX_TG_TEX5 = 9,
    GX_TG_TEX6 = 10,
    GX_TG_TEX7 = 11,
    GX_TG_TEXCOORD0 = 12,
    GX_TG_TEXCOORD1 = 13,
    GX_TG_TEXCOORD2 = 14,
    GX_TG_TEXCOORD3 = 15,
    GX_TG_TEXCOORD4 = 16,
    GX_TG_TEXCOORD5 = 17,
    GX_TG_TEXCOORD6 = 18,
    GX_TG_COLOR0 = 19,
    GX_TG_COLOR1 = 20,
};
static inline void GXSetViewportv(const float * vp) {}

static inline void GXCmd1u8(const unsigned char x) {}

static inline void GXCmd1u16(const unsigned short x) {}

static inline void GXCmd1u32(const unsigned long x) {}

static inline void GXParam1u8(const unsigned char x) {}

static inline void GXParam1u16(const unsigned short x) {}

static inline void GXParam1u32(const unsigned long x) {}

static inline void GXParam1s8(const signed char x) {}

static inline void GXParam1s16(const short x) {}

static inline void GXParam1s32(const long x) {}

static inline void GXParam1f32(const float x) {}

static inline void GXParam3f32(const float x, const float y, const float z) {}

static inline void GXParam4f32(const float x, const float y, const float z, const float w) {}

static inline void GXPosition3f32(const float x, const float y, const float z) {}

static inline void GXPosition3u8(const unsigned char x, const unsigned char y, const unsigned char z) {}

static inline void GXPosition3s8(const signed char x, const signed char y, const signed char z) {}

static inline void GXPosition3u16(const unsigned short x, const unsigned short y, const unsigned short z) {}

static inline void GXPosition3s16(const short x, const short y, const short z) {}

static inline void GXPosition2f32(const float x, const float y) {}

static inline void GXPosition2u8(const unsigned char x, const unsigned char y) {}

static inline void GXPosition2s8(const signed char x, const signed char y) {}

static inline void GXPosition2u16(const unsigned short x, const unsigned short y) {}

static inline void GXPosition2s16(const short x, const short y) {}

static inline void GXPosition1x16(const unsigned short x) {}

static inline void GXPosition1x8(const unsigned char x) {}

static inline void GXNormal3f32(const float x, const float y, const float z) {}

static inline void GXNormal3s16(const short x, const short y, const short z) {}

static inline void GXNormal3s8(const signed char x, const signed char y, const signed char z) {}

static inline void GXNormal1x16(const unsigned short x) {}

static inline void GXNormal1x8(const unsigned char x) {}

static inline void GXColor4u8(const unsigned char x, const unsigned char y, const unsigned char z, const unsigned char w) {}

static inline void GXColor1u32(const unsigned long x) {}

static inline void GXColor3u8(const unsigned char x, const unsigned char y, const unsigned char z) {}

static inline void GXColor1u16(const unsigned short x) {}

static inline void GXColor1x16(const unsigned short x) {}

static inline void GXColor1x8(const unsigned char x) {}

static inline void GXTexCoord2f32(const float x, const float y) {}

static inline void GXTexCoord2s16(const short x, const short y) {}

static inline void GXTexCoord2u16(const unsigned short x, const unsigned short y) {}

static inline void GXTexCoord2s8(const signed char x, const signed char y) {}

static inline void GXTexCoord2u8(const unsigned char x, const unsigned char y) {}

static inline void GXTexCoord1f32(const float x) {}

static inline void GXTexCoord1s16(const short x) {}

static inline void GXTexCoord1u16(const unsigned short x) {}

static inline void GXTexCoord1s8(const signed char x) {}

static inline void GXTexCoord1u8(const unsigned char x) {}

static inline void GXTexCoord1x16(const unsigned short x) {}

static inline void GXTexCoord1x8(const unsigned char x) {}

static inline void GXMatrixIndex1u8(const unsigned char x) {}

static inline void GXFastCallDisplayList(const void * list, unsigned int nbytes) {}

inline unsigned int bkFloatAsInt(float f) {}

inline void * bkMalloc(unsigned int size) {}

inline void bkFree(void * ptr) {}

inline void bMemCpy16(void * dst, const void * src, int blocksOf16) {
    // Local variables
    char * d;
    char * s;

    /* anonymous block */ {
        int i;
    }
}

inline void bMemCpy64(void * dst, const void * src, int blocksOf64) {
    // Local variables
    char * d;
    char * s;

    /* anonymous block */ {
        int i;
    }
}

inline void bkSetPrintPause(int pause) {}

inline struct _TBTexture * bkFindTexture(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

// total size: 0x4
struct _TBPackageID {
    // Members
    unsigned int crc : 31; // offset 0x0, size 0x4
    unsigned int loaded : 1; // offset 0x0, size 0x4
};
inline struct _TBTexture * bkFindTextureByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBActor * bkFindActor(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBActor * bkFindActorByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSample * bkFindSample(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSample * bkFindSampleByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBFont * bkFindFont(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBFont * bkFindFontByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBStringTable * bkFindStringTable(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBStringTable * bkFindStringTableByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSplash * bkFindSplash(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSplash * bkFindSplashByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSet * bkFindSet(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSet * bkFindSetByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBCollisionMesh * bkFindCollisionMesh(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBCollisionMesh * bkFindCollisionMeshByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBAudioStream * bkFindAudioStream(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBAudioStream * bkFindAudioStreamByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBLipSync * bkFindLipSync(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBLipSync * bkFindLipSyncByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSoundBank * bkFindSoundBank(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSoundBank * bkFindSoundBankByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSoundPatch * bkFindSoundPatch(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSoundPatch * bkFindSoundPatchByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBLightMatrix * bkFindLightMatrix(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBLightMatrix * bkFindLightMatrixByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSubtitle * bkFindSubtitle(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBSubtitle * bkFindSubtitleByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBMaterial * bkFindMaterial(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBMaterial * bkFindMaterialByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBBlender * bkFindBlender(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBBlender * bkFindBlenderByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBShaderHeader * bkFindVertexShader(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBShaderHeader * bkFindVertexShaderByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBShaderHeader * bkFindPixelShader(char * filename, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline struct _TBShaderHeader * bkFindPixelShaderByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

inline void bkInitStopwatch(struct _TBStopwatch * stop, int maxCount) {}

// total size: 0x20
struct _TBStopwatch {
    // Members
    unsigned long long value; // offset 0x0, size 0x8
    unsigned long long accum; // offset 0x8, size 0x8
    unsigned long long start; // offset 0x10, size 0x8
    int count; // offset 0x18, size 0x4
    int maxCount; // offset 0x1C, size 0x4
};
inline void bkStartStopwatch(struct _TBStopwatch * stop) {}

inline void bkStopStopwatchNotEnd(struct _TBStopwatch * stop) {}

inline int bkStopStopwatch(struct _TBStopwatch * stop, int endOfFrame) {}

inline unsigned long long bkTimerDelta(unsigned long long startValue) {}

inline unsigned short * bkStringFindLetter16(const unsigned short * src, char letter) {}

inline unsigned short * bkStringFindLetterReverse16(const unsigned short * src, char letter) {}

inline int bkStringNVSprintf16(unsigned short * target, unsigned int maxLen, const unsigned short * format, struct __va_list_tag * argp) {
    // Local variables
    int ret;
}

// total size: 0xC
struct __va_list_tag {
    // Members
    char gpr; // offset 0x0, size 0x1
    char fpr; // offset 0x1, size 0x1
    char * overflow_arg_area; // offset 0x4, size 0x4
    char * reg_save_area; // offset 0x8, size 0x4
};
inline int bkStringNVSprintf16(unsigned short * target, unsigned int maxLen, const char * format, struct __va_list_tag * argp) {
    // Local variables
    int ret;
}

inline int bkStringNVPrintf(char * target, unsigned int maxLen, const char * format, struct __va_list_tag * argp) {
    // Local variables
    int ret;
}

inline char * bkStringNCat(char * target, const char * cat, int maxLen) {
    // Local variables
    char * ret;
}

static inline void bkInvalidateDataCacheLine(void * memAddr) {}

static inline void bkFlushDataCacheLine(void * memAddr) {}

inline int bmVanillaRand() {}

inline float bmVanillaRandf() {}

inline float bmVanillaRandfSigned() {}

inline void bmVanillaSRand(unsigned int seed) {}

inline float bmVanillaFloatLerp(const float src, const float dest, float t) {}

inline float bmVanillaFloatFixedSpeedLerp(const float val1, const float val2, float delta) {}

inline int bmVanillaFloatToInt(float val) {}

inline unsigned char bmVanillaFloatToByte(float val) {}

inline unsigned int bmVanillaFloatToUInt(float val) {}

inline float bmVanillaIntToFloat(int val) {}

inline float bmVanillaCos(float val) {}

inline float bmVanillaSin(float val) {}

inline void bmVanillaSinCos(float angle, float * sinOfAngle, float * cosOfAngle) {}

inline float bmVanillaTan(float val) {}

inline float bmVanillaTanApprox(float val) {}

inline float bmVanillaACos(float val) {}

inline float bmVanillaASin(float val) {}

inline float bmVanillaATan(float val) {}

inline float bmVanillaATanApprox(float val) {}

inline float bmVanillaATan2(float y, float x) {}

inline float bmVanillaATan2Approx(float y, float x) {}

inline float bmVanillaFAbs(float x) {}

inline float bmVanillaFMod(float x, float y) {
    // Local variables
    int idiv;
    float px;
    float py;
    float v;
}

inline float bmVanillaSqrt(float x) {}

inline float bmVanillaSqrtApprox(float x) {
    // Local variables
    float fx;
    int * ix;
}

inline float bmVanillaOneOverSqrt(float x) {}

inline float bmVanillaOneOverSqrtApprox(float x) {
    // Local variables
    long i;
    float x2;
    float y;
}

inline float bmVanillaCosToSinApprox(float cos) {}

inline float bmVanillaCosToSin(float cos) {}

inline float bmVanillaSinToCosApprox(float sin) {}

inline float bmVanillaSinToCos(float sin) {}

inline float bmVanillaLog(float value) {}

inline float bmVanillaLog10(float value) {}

inline float bmVanillaPow(float x, float y) {}

inline float bmVanillaExp(float x) {}

inline float bmVanillaCosh(float val) {}

inline float bmVanillaSinh(float val) {}

inline float bmVanillaTanh(float val) {}

inline float bmVanillaFSnap(const float val, const float snapVal, const int snapRange) {
    // Local variables
    int ival;
    int isnapVal;
}

inline float bmVanillaAToF(char * str) {}

inline float bmVanillaOffsetToAngle(float xOffset, float zOffset) {}

inline float bmVanillaCombinations(int n, int i) {}

inline float bmVanillaPermutations(int n, int i) {}

inline float bmVanillaModF(float x, float * y) {}

inline float bmVanillaFunctionInvSquareLaw(const float x) {
    // Local variables
    float oneMinusX;
}

inline float bmVanillaHypotenuse(const float side1, const float side2) {}

inline float bmVanillaHypotenuseApprox(const float side1, const float side2) {}

inline void bmVanillaVectorAdd(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorAdd(float * src1, const float * src2) {}

inline void bmVanillaVectorAdd4(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorAdd4(float * src1, const float * src2) {}

inline void bmVanillaVectorSub(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorSub(float * src1, const float * src2) {}

inline void bmVanillaVectorSub4(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorSub4(float * src1, const float * src2) {}

inline void bmVanillaVectorMul(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorMul(float * src1, const float * src2) {}

inline void bmVanillaVectorMul4(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorMul4(float * src1, const float * src2) {}

inline void bmVanillaVectorDiv(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorDiv(float * src1, const float * src2) {}

inline void bmVanillaVectorDiv4(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorDiv4(float * src1, const float * src2) {}

inline void bmVanillaVectorCAdd(float * dest, const float * src, const float val) {}

inline void bmVanillaVectorCAdd(float * src, const float val) {}

inline void bmVanillaVectorCAdd4(float * dest, const float * src, const float val) {}

inline void bmVanillaVectorCAdd4(float * src, const float val) {}

inline void bmVanillaVectorCSub(float * dest, const float * src, const float val) {}

inline void bmVanillaVectorCSub(float * src, const float val) {}

inline void bmVanillaVectorCSub4(float * dest, const float * src, const float val) {}

inline void bmVanillaVectorCSub4(float * src, const float val) {}

inline void bmVanillaVectorCMul(float * dest, const float * src, const float val) {}

inline void bmVanillaVectorCMul(float * src, const float val) {}

inline void bmVanillaVectorCMul4(float * dest, const float * src, const float val) {}

inline void bmVanillaVectorCMul4(float * src, const float val) {}

inline void bmVanillaVectorCDiv(float * dest, const float * src, const float val) {}

inline void bmVanillaVectorCDiv(float * src, const float val) {}

inline void bmVanillaVectorCDiv4(float * dest, const float * src, const float val) {}

inline void bmVanillaVectorCDiv4(float * src, const float val) {}

inline void bmVanillaVectorNegate(float * dest, const float * src) {}

inline void bmVanillaVectorNegate(float * src) {}

inline void bmVanillaVectorNegate4(float * dest, const float * src) {}

inline void bmVanillaVectorNegate4(float * src) {}

inline float bmVanillaVectorNorm4(float * dest) {}

inline float bmVanillaVectorLen(const float * src) {}

inline float bmVanillaVectorLenApprox(const float * src) {}

inline float bmVanillaVectorLen4(const float * src) {}

inline float bmVanillaVectorSquaredLen(const float * src) {}

inline float bmVanillaVectorSquaredLen4(const float * src) {}

inline void bmVanillaVectorCross(float * dest, const float * src1, const float * src2) {
    // Local variables
    float tmpDest[4];
}

inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

inline float bmVanillaVectorDot4(const float * src1, const float * src2) {}

inline void bmVanillaVectorCopy(float * dest, const float * src) {}

inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

inline void bmVanillaVectorZero(float * dest) {}

inline unsigned int bmVanillaVectorToUByte4(float * src) {}

inline int bmVanillaVectorEqual(const float * vec1, const float * vec2) {}

inline void bmVanillaVectorMin3(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorMin3(float * dest, const float * src) {}

inline void bmVanillaVectorMax3(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorMax3(float * dest, const float * src) {}

inline bool bmVanillaVectorIsZeroApprox(const float * vector) {}

inline bool bmVanillaVectorIsZero(const float * vector) {}

inline bool bmVanillaVectorIsZeroApprox4(const float * vector) {}

inline bool bmVanillaVectorIsZero4(const float * vector) {}

inline void bmVanillaVectorCrossX(float * dest, const float * src) {}

inline void bmVanillaVectorCrossY(float * dest, const float * src) {}

inline void bmVanillaVectorCrossZ(float * dest, const float * src) {}

inline void bmVanillaVectorCrossXNeg(float * dest, const float * src) {}

inline void bmVanillaVectorCrossYNeg(float * dest, const float * src) {}

inline void bmVanillaVectorCrossZNeg(float * dest, const float * src) {}

inline void bmVanillaVectorHalve(float * dest, const float * src) {
    // Local variables
    float x;
    float y;
    float z;
}

inline void bmVanillaVectorHalve4(float * dest, const float * src) {
    // Local variables
    float x;
    float y;
    float z;
    float w;
}

inline void bmVanillaVectorHalve(float * dest) {
    // Local variables
    float x;
    float y;
    float z;
}

inline void bmVanillaVectorHalve4(float * dest) {
    // Local variables
    float x;
    float y;
    float z;
    float w;
}

inline void bmVanillaVectorAverage(float * dest, const float * src1, const float * src2) {
    // Local variables
    float x;
    float y;
    float z;
}

inline void bmVanillaVectorAverage(float * dest, const float * src) {
    // Local variables
    float x;
    float y;
    float z;
}

inline void bmVanillaVectorMulAdd(float * dest, const float * src, const float * vmul, const float * vadd) {}

inline void bmVanillaVectorCMulAdd(float * dest, const float * src, const float fmul, const float * vadd) {}

inline void bmVanillaVectorCMulAdd(float * dest, const float * src, const float fmul) {}

inline void bmVanillaVectorMulCAdd(float * dest, const float * src, const float * vmul, const float fadd) {}

inline void bmVanillaVectorCMulCAdd(float * dest, const float * src, const float fmul, const float fadd) {}

inline void bmVanillaVectorMulAdd4(float * dest, const float * src, const float * vmul, const float * vadd) {}

inline void bmVanillaVectorCMulAdd4(float * dest, const float * src, const float fmul, const float * vadd) {}

inline void bmVanillaVectorMulCAdd4(float * dest, const float * src, const float * vmul, const float fadd) {}

inline void bmVanillaVectorCMulCAdd4(float * dest, const float * src, const float fmul, const float fadd) {}

inline void bmVanillaVectorMulMulAdd(float * dest, const float * src, const float * vmul, const float * src2, const float * vmul2, const float * vadd) {}

inline void bmVanillaVectorCMulCMulAdd(float * dest, const float * src, const float fmul, const float * src2, const float fmul2, const float * vadd) {}

inline void bmVanillaVectorCMulCMulAdd(float * dest, const float * src, const float fmul, const float * src2, const float fmul2) {}

inline void bmVanillaVectorMulMulCAdd(float * dest, const float * src, const float * vmul, const float * src2, const float * vmul2, const float fadd) {}

inline void bmVanillaVectorCMulCMulCAdd(float * dest, const float * src, const float fmul, const float * src2, const float fmul2, const float fadd) {}

inline void bmVanillaVectorMulMulAdd4(float * dest, const float * src, const float * vmul, const float * src2, const float * vmul2, const float * vadd) {}

inline void bmVanillaVectorCMulCMulAdd4(float * dest, const float * src, const float fmul, const float * src2, const float fmul2, const float * vadd) {}

inline void bmVanillaVectorCMulCMulAdd4(float * dest, const float * src, const float fmul, const float * src2, const float fmul2) {}

inline void bmVanillaVectorMulMulCAdd4(float * dest, const float * src, const float * vmul, const float * src2, const float * vmul2, const float fadd) {}

inline void bmVanillaVectorCMulCMulCAdd4(float * dest, const float * src, const float fmul, const float * src2, const float fmul2, const float fadd) {}

inline void bmVanillaVectorMin(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorMin(float * dest, const float * src) {}

inline void bmVanillaVectorMin4(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorMin4(float * dest, const float * src) {}

inline void bmVanillaVectorMax(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorMax(float * dest, const float * src) {}

inline void bmVanillaVectorMax4(float * dest, const float * src1, const float * src2) {}

inline void bmVanillaVectorMax4(float * dest, const float * src) {}

inline void bmVanillaVectorMinMax(float * min, float * max, const float * src1, const float * src2) {
    // Local variables
    const float * s1;
    const float * s2;
    float * a;
    float * b;

    /* anonymous block */ {
        int i;
    }
}

inline void bmVanillaVectorMinMax4(float * min, float * max, const float * src1, const float * src2) {
    // Local variables
    const float * s1;
    const float * s2;
    float * a;
    float * b;

    /* anonymous block */ {
        int i;
    }
}

inline void bmVanillaVectorAbs(float * dest, const float * src) {}

inline float bmVanillaVectorNorm(float * dest) {}

inline float bmVanillaVectorLengthAlongVector(const float * basis, const float * test) {
    // Local variables
    float basisLenSquared;
}

inline float bmVanillaVectorGetComponentFacingInDirection(float * dest, const float * src, const float * direction) {
    // Local variables
    float dot;
}

inline float bmVanillaAngleBetweenNormalisedVectors(const float * vector1, const float * vector2) {
    // Local variables
    float dot;
}

inline bool bmVanillaVectorEqualApprox(const float * vector1, const float * vector2, float tolerance) {}

inline void bmVanillaVectorCopyNonAligned(float * dest, const float * src) {}

inline void bmVanillaVectorCopy3NonAligned(float * dest, const float * src) {}

inline void bmVanillaVectorLimitLen(float * dest, const float * src, float length) {
    // Local variables
    float sqrLen;
    float sqrMaxLen;
}

inline void bmVanillaVectorLimitLen(float * dest, float length) {
    // Local variables
    float sqrLen;
    float sqrMaxLen;
}

inline void bmVectorXZZero(float * dest) {}

inline bool bmVectorXZIsZeroApprox(const float * vector) {}

inline bool bmVectorXZIsZero(const float * vector) {}

inline void bmVectorXZCopy(float * dest, const float * src) {}

inline void bmVectorXZAdd(float * dest, const float * src1, const float * src2) {}

inline void bmVectorXZAdd(float * src1, const float * src2) {}

inline void bmVectorXZSub(float * dest, const float * src1, const float * src2) {}

inline void bmVectorXZSub(float * src1, const float * src2) {}

inline void bmVectorXZMul(float * dest, const float * src1, const float * src2) {}

inline void bmVectorXZMul(float * src1, const float * src2) {}

inline void bmVectorXZCMul(float * dest, const float * src, const float val) {}

inline void bmVectorXZCMul(float * src, const float val) {}

inline void bmVectorXZCMulAdd(float * dest, const float * src, const float fmul, const float * vadd) {}

inline void bmVectorXZCMulAdd(float * dest, const float * src, const float fmul) {}

inline float bmVectorXZDot(const float * src1, const float * src2) {}

inline float bmVectorXZCross(const float * src1, const float * src2) {}

inline float bmVectorXZLen(const float * src) {}

inline float bmVectorXZSquaredLen(const float * src) {}

inline float bmVectorXZNorm(float * dest) {}

inline void bmVectorXZLerp(float * src1, const float * src2, const float t) {}

inline float bmVectorXZLenApprox(const float * src) {}

inline void bmVectorXZLimitLen(float * dest, const float * src, float length) {
    // Local variables
    float sqrLen;
    float sqrMaxLen;
}

inline void bmVectorXZLimitLen(float * dest, float length) {
    // Local variables
    float sqrLen;
    float sqrMaxLen;
}

inline bool bmVector2DIsZeroApprox(const float * vector) {}

inline bool bmVector2DIsZero(const float * vector) {}

inline void bmVector2DSet(float * dest, float x, float y) {}

inline void bmVector2DZero(float * dest) {}

inline int bmVector2DEqual(const float * vec1, const float * vec2) {}

inline void bmVector2DAdd(float * dest, const float * source1, const float * source2) {}

inline void bmVector2DAdd(float * source1, const float * source2) {}

inline void bmVector2DSub(float * dest, const float * source1, const float * source2) {}

inline void bmVector2DSub(float * source1, const float * source2) {}

inline void bmVector2DMul(float * dest, const float * source1, const float * source2) {}

inline void bmVector2DMul(float * source1, const float * source2) {}

inline void bmVector2DCMulAdd(float * dest, const float * src, const float fmul, const float * vadd) {}

inline void bmVector2DCMulAdd(float * dest, const float * src, const float fmul) {}

inline void bmVector2DDiv(float * dest, const float * source1, const float * source2) {}

inline void bmVector2DDiv(float * source1, const float * source2) {}

inline void bmVector2DCAdd(float * dest, const float * source1, const float constant) {}

inline void bmVector2DCAdd(float * source1, const float constant) {}

inline void bmVector2DCSub(float * dest, const float * source1, const float constant) {}

inline void bmVector2DCSub(float * source1, const float constant) {}

inline void bmVector2DCMul(float * dest, const float * source1, const float constant) {}

inline void bmVector2DCMul(float * source1, const float constant) {}

inline void bmVector2DCDiv(float * dest, const float * source1, const float constant) {}

inline void bmVector2DCDiv(float * source1, const float constant) {}

inline void bmVector2DNegate(float * dest, const float * source) {}

inline float bmVector2DLen(const float * source) {}

inline float bmVector2DLenApprox(const float * source) {}

inline float bmVector2DSquaredLen(const float * source) {}

inline float bmVector2DNorm(float * dest, const float * source) {
    // Local variables
    float len;
    float d;
}

inline float bmVector2DNorm(float * dest) {}

inline void bmVector2DScaleToLength(float * dest, const float * source, const float length) {
    // Local variables
    float d;
    float len;
}

inline void bmVector2DCopy(float * dest, const float * source) {}

inline float bmVector2DDot(const float * source1, const float * source2) {}

inline float bmVector2DDistance(const float * source1, const float * source2) {
    // Local variables
    float difference[2];
}

inline float bmVector2DSquaredDistance(const float * source1, const float * source2) {
    // Local variables
    float difference[2];
}

inline void bmVector2DLerp(float * dest, const float * src1, const float * src2, const float t) {
    // Local variables
    float oneMinusT;
}

inline void bmVector2DCombine(float * dest, const float * src1, const float factor1, const float * src2, const float factor2) {}

inline void bmVector2DRotate(float * dest, const float * src, const float rads) {
    // Local variables
    float x;
    float y;
    float sinv;
    float cosv;
}

inline void bmVector2DRotateFast(float * dest, const float * src, float sinAng, float cosAng) {
    // Local variables
    float x;
    float y;
}

inline float bmVector2DLengthAlongVector(const float * basis, const float * test) {
    // Local variables
    float basisLen;
}

inline void bmVector2DLimitLen(float * dest, const float * src, float length) {
    // Local variables
    float sqrLen;
    float sqrMaxLen;
}

inline void bmVector2DLimitLen(float * dest, float length) {
    // Local variables
    float sqrLen;
    float sqrMaxLen;
}

inline void bmGCMatMultiplyVector2(float * dest, float (* mat)[4], const float * src, int noofVectors) {}

inline void bmGCMatMultiply33Vector2(float * dest, float (* mat)[4], const float * src, int noofVectors) {}

inline void bmGCMatMultiplyVector(float (* mat)[4], float * dest, int noofVectors) {}

inline void bmGCMatMultiply33Vector(float (* mat)[4], float * dest, int noofVectors) {}

inline void bmGCMatTranspose(float (* mat)[4]) {
    // Local variables
    float tmp[4][4];
}

inline void bmVanillaMatMultiply44(float (* dest)[4], float (* src1)[4], float (* src2)[4]) {}

inline float bmVanillaMatDet33(float (* src)[4]) {}

inline int bVanillaMatrixIsDiagonal33(float (* m)[4]) {}

inline int bVanillaMatrixIsDiagonal44(float (* m)[4]) {}

inline int bVanillaMatrixIsTransScale(float (* m)[4]) {}

inline int bmVanillaMatrixEqual(float (* m1)[4], float (* m2)[4]) {}

inline void bmVanillaMatGetColumn(const int column, float (* mat)[4], float * result) {}

inline void bmVanillaMatGetRow(const int row, float (* mat)[4], float * result) {}

inline void bmVanillaMatGetRight(float (* mat)[4], float * result) {}

inline void bmVanillaMatGetUp(float (* mat)[4], float * result) {}

inline void bmVanillaMatGetForwards(float (* mat)[4], float * result) {}

inline void bmVanillaMatrix33Add(float (* dst)[4], float (* src1)[4], float (* src2)[4]) {}

inline void bmVanillaMatrix33Sub(float (* dst)[4], float (* src1)[4], float (* src2)[4]) {}

inline void bmVanillaGetRelativeTransform(float (* relativeTransform)[4], float (* oldTransformInverse)[4], float (* newTransform)[4]) {}

inline void bmVanillaGetNewTransform(float (* newTransform)[4], float (* oldTransform)[4], float (* relativeTransform)[4]) {}

inline void bmVanillaMatrixCMul(float (* dst)[4], float (* src)[4], const float mul) {}

inline void bmVanillaMatrixCDiv(float (* dst)[4], float (* src)[4], const float divide) {
    // Local variables
    float mul;
}

inline void bmVanillaMatMultiplyVector2(float * dest, float (* mat)[4], const float * src, int noofVectors) {}

inline void bmVanillaMatMultiply33Vector2(float * dest, float (* mat)[4], const float * src, int noofVectors) {}

inline void bmVanillaMatMultiplyVector(float (* mat)[4], float * dest, int noofVectors) {}

inline void bmVanillaMatMultiply33Vector(float (* mat)[4], float * dest, int noofVectors) {}

inline void bmVanillaAxesToMatrix(float (* mat)[4], const float * dir, const float * up, float * right) {}

inline void bmVanillaDirectionToMatrix(float (* mat)[4], const float * dirIn, const float * upApprox) {
    // Local variables
    float up[4];
    float dir[4];
    float right[4];
}

inline void bmVanillaYDirectionToMatrix(float (* mat)[4], const float * up, const float * dirApprox) {
    // Local variables
    float dir[4];
    float right[4];
}

inline void bmVanillaMatTranslate(float (* mat)[4], const float * translate) {}

inline void bmVanillaMatPreApplyTrans(float (* dest)[4], const float * trans) {
    // Local variables
    float add[4];
}

inline void bmVanillaMatPreApplyTrans(float (* dest)[4], float (* src)[4], const float * trans) {
    // Local variables
    float add[4];
}

inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, float (* orientation)[4]) {}

inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
    // Local variables
    float orientMat[4][4];
}

inline void bmVanillaMatOrTrans(float (* dest)[4], const float * transIn, float (* orientation)[4]) {
    // Local variables
    float trans[4];
}

inline void bmVanillaMatOrScale(float (* dest)[4], const float * scale, float (* orientation)[4]) {}

inline void bmVanillaMatScaleOr(float (* dest)[4], const float * scale, float (* orientation)[4]) {}

inline void bmVanillaMatTransOrScale(float (* dest)[4], const float * trans, float (* orientation)[4], const float * scale) {}

inline void bmVanillaMatTransOrScale(float (* dest)[4], const float * trans, const float * orientation, const float * scale) {
    // Local variables
    float orientMat[4][4];
}

inline void bmVanillaMatScaleOrTrans(float (* dest)[4], const float * trans, float (* orientation)[4], const float * scale) {
    // Local variables
    float newTrans[4];
}

inline void bmVanillaMatScaleTrans(float (* dest)[4], const float * trans, const float * scale) {
    // Local variables
    float scaledTrans[4];
}

inline int bmVanillaMatInverse(float (* mat)[4]) {}

inline void bmVanillaMatInverseNonSingular(float (* mat)[4]) {}

inline void bmVanillaQuatCopy(float * dest, const float * src) {}

inline void bmVanillaQuatInverse(float * dest, const float * src) {}

inline void bmVanillaQuatZero(float * dest) {}

inline int bmVanillaQuatEqual(const float * q1, const float * q2) {}

inline int bmVanillaQuatEqualApprox(const float * quat1, const float * quat2, float tolerance) {}

inline void bmVanillaQuatNorm(float * q) {}

inline void bmVanillaQuatNormApprox(float * q) {}

inline void bmVanillaQuatSlerp(float * src1, const float * src2, const float t) {
    // Local variables
    float temp[4];
}

inline void bmVanillaQuatMultiply(float * src1, const float * src2) {
    // Local variables
    float temp[4];
}

inline void bmVanillaGetRelativeOrientation(float * relativeOrientation, float * oldOrientationInverse, float * newOrientation) {}

inline void bmVanillaGetNewOrientation(float * newOrientation, float * oldOrientation, float * relativeOrientation) {}

inline float bmVanillaQuatSlerpAtFixedSpeed(float * src1, const float * src2, const float speed) {
    // Local variables
    float temp[4];
}

inline void bmVanillaQuatInvRotateVector2(float * dest, const float * q, const float * v) {
    // Local variables
    float inv[4];
}

inline void bmVanillaQuatInvRotateVector(const float * q, float * v) {
    // Local variables
    float inv[4];
}

inline float bmGeomGetClosestPointOnLineSegment(const float * lineStartPoint, const float * lineEndPoint, const float * point, float * closestPoint) {
    // Local variables
    float lineDirection[4];
    float pointOffset[4];
    float ret;
}

inline float bmGeomGetClosestPointOnLineSegment2D(const float * lineStartPoint, const float * lineEndPoint, const float * point, float * closestPoint) {
    // Local variables
    float lineDirection[2];
    float pointOffset[2];
    float ret;
}

inline void bmCalculateTorque(float * torque, const float * force, const float * offset) {}

inline void bmSetMomentOfInertia(float (* moi)[4], float Ixx, float Iyy, float Izz, float Ixy, float Ixz, float Iyz) {}

inline void bmCalculateRelativeVelocity(float * rv, const float * v, const float * w, const float * r) {
    // Local variables
    float wv[4];
}

inline void bmCalculateRelativeVelocity(float * rv, const float * w, const float * r) {}

inline float bmGetSpeed(const float * velocity) {}

inline float bmForceOfGravity(float mass1, float mass2, float r) {}

inline float bmForceOfDrag(float density, float speed, float area, float c) {}

inline float bmForceOfSpring1D(float kS, float r, float l) {}

inline float bmForceOfDampedSpring1D(float kS, float r, float l, float kD, float v1, float v2) {}

inline void bmDataArrayDelete(struct TBDataArray * data) {}

// total size: 0x14
struct TBDataArray {
    // Members
    struct TBDataElement * array; // offset 0x0, size 0x4
    struct TBDataElement * tempArray; // offset 0x4, size 0x4
    int maxElements; // offset 0x8, size 0x4
    int noofElements; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
};
// total size: 0x8
struct TBDataElement {
    // Members
    float value; // offset 0x0, size 0x4
    union UBContext32 context; // offset 0x4, size 0x4
};
union UBContext32 {
    int iContext; // offset 0x0, size 0x4
    unsigned int uiContext; // offset 0x0, size 0x4
    short sContext[2]; // offset 0x0, size 0x4
    unsigned short usContext[2]; // offset 0x0, size 0x4
    float fContext; // offset 0x0, size 0x4
    char cContext[4]; // offset 0x0, size 0x4
    unsigned char ucContext[4]; // offset 0x0, size 0x4
    void * pContext; // offset 0x0, size 0x4
};
inline void bmDataArrayDelete(struct TBDataArrayWide * data) {}

// total size: 0x14
struct TBDataArrayWide {
    // Members
    struct TBDataElementWide * array; // offset 0x0, size 0x4
    struct TBDataElementWide * tempArray; // offset 0x4, size 0x4
    int maxElements; // offset 0x8, size 0x4
    int noofElements; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
};
// total size: 0x10
struct TBDataElementWide {
    // Members
    float value; // offset 0x0, size 0x4
    int priority; // offset 0x4, size 0x4
    union UBContext32 context; // offset 0x8, size 0x4
    union UBContext32 context2; // offset 0xC, size 0x4
};
inline void bmDataArrayAddElement(struct TBDataArray * data, float value, void * context) {}

inline void bmDataArrayAddElement(struct TBDataArrayWide * data, float value, void * context, int priority, void * context2) {}

inline void bmDataArraySwapElements(struct TBDataElement * e1, struct TBDataElement * e2) {
    // Local variables
    float value;
    void * context;
}

inline void bmDataArraySwapElements(struct TBDataElementWide * e1, struct TBDataElementWide * e2) {
    // Local variables
    float value;
    void * context;
    void * context2;
    int priority;
}

inline void bmDataArrayCopyElement(struct TBDataElement * dest, struct TBDataElement * src) {}

inline void bmDataArrayCopyElement(struct TBDataElementWide * dest, struct TBDataElementWide * src) {}

inline void bDataArraySortQuick(struct TBDataArray * data) {}

inline void bDataArraySortQuick(struct TBDataArrayWide * data) {}

inline void bDataArraySortSystemQuick(struct TBDataArray * data) {}

inline void bDataArraySortSystemQuick(struct TBDataArrayWide * data) {}

inline void bmDataArrayClear(struct TBDataArray * data) {}

inline void bmDataArrayClear(struct TBDataArrayWide * data) {}

inline void bmDataArraySort(struct TBDataArray * data, enum EBSortType type) {}

enum EBSortType {
    EBSORTTYPE_BUBBLE = 0,
    EBSORTTYPE_QUICK = 1,
    EBSORTTYPE_MERGE = 2,
    EBSORTTYPE_SYSQUICK = 3,
    EBSORTTYPES = 4,
};
inline void bmDataArraySort(struct TBDataArrayWide * data, enum EBSortType type) {}

inline int bdIsProgressiveModeAvailable() {}

inline int bSysIsProgressiveModeAvailable() {}

inline void bUpdateWorldToView() {
    // Local variables
    float trans[4];
}

inline void bdGetObjectMatrix(float (* dest)[4]) {}

inline void bdGetViewClipPlanes(float * nearClip, float * farClip) {}

inline void bUpdateObjectToScreen() {}

inline void bUpdateWorldToProjection() {}

inline int bSetTexture(int stage, struct _TBTexture * handle, int force) {}

// total size: 0xA0
struct _TBTexture {
    // Members
    struct _TBResourceInfo resInfo; // offset 0x0, size 0x20
    int xDim; // offset 0x20, size 0x4
    int yDim; // offset 0x24, size 0x4
    int format; // offset 0x28, size 0x4
    unsigned short flags; // offset 0x2C, size 0x2
    unsigned char mipLevels; // offset 0x2E, size 0x1
    unsigned char noofFrames; // offset 0x2F, size 0x1
    int animDuration; // offset 0x30, size 0x4
    unsigned char alphaBlendMode; // offset 0x34, size 0x1
    unsigned char curFrameNumber; // offset 0x35, size 0x1
    unsigned char pad[2]; // offset 0x36, size 0x2
    int totalArea; // offset 0x38, size 0x4
    unsigned int lastFlipUsed; // offset 0x3C, size 0x4
    struct _GXTexObj textureFormat; // offset 0x40, size 0x20
    struct _GXTlutObj tlutFormat; // offset 0x60, size 0xC
    unsigned char * palette; // offset 0x6C, size 0x4
    void * frames; // offset 0x70, size 0x4
    int * frameDelays; // offset 0x74, size 0x4
    int (* setCallback)(struct _TBTexture *, int, void *); // offset 0x78, size 0x4
    void * setContext; // offset 0x7C, size 0x4
    int (* unsetCallback)(struct _TBTexture *, int, void *); // offset 0x80, size 0x4
    void * unsetContext; // offset 0x84, size 0x4
    float uScroll; // offset 0x88, size 0x4
    float vScroll; // offset 0x8C, size 0x4
    unsigned char changed; // offset 0x90, size 0x1
    unsigned char padding[15]; // offset 0x91, size 0xF
};
// total size: 0x20
struct _TBResourceInfo {
    // Inner declarations
    union {
        struct _TBPackageID packageId; // offset 0x0, size 0x4
        unsigned int packageId32; // offset 0x0, size 0x4
    };
    union {
        int iContext; // offset 0x0, size 0x4
        unsigned int uiContext; // offset 0x0, size 0x4
        short sContext[2]; // offset 0x0, size 0x4
        unsigned short usContext[2]; // offset 0x0, size 0x4
        float fContext; // offset 0x0, size 0x4
        char cContext[4]; // offset 0x0, size 0x4
        unsigned char ucContext[4]; // offset 0x0, size 0x4
        void * pContext; // offset 0x0, size 0x4
    };

    // Members
    union {
        struct _TBPackageID packageId; // offset 0x0, size 0x4
        unsigned int packageId32; // offset 0x0, size 0x4
    }; // offset 0x0, size 0x4
    unsigned short groupId; // offset 0x4, size 0x2
    unsigned char type; // offset 0x6, size 0x1
    unsigned char pad1; // offset 0x7, size 0x1
    union {
        int iContext; // offset 0x0, size 0x4
        unsigned int uiContext; // offset 0x0, size 0x4
        short sContext[2]; // offset 0x0, size 0x4
        unsigned short usContext[2]; // offset 0x0, size 0x4
        float fContext; // offset 0x0, size 0x4
        char cContext[4]; // offset 0x0, size 0x4
        unsigned char ucContext[4]; // offset 0x0, size 0x4
        void * pContext; // offset 0x0, size 0x4
    }; // offset 0x8, size 0x4
    unsigned int crc; // offset 0xC, size 0x4
    struct _TBResourceInfo * child1; // offset 0x10, size 0x4
    struct _TBResourceInfo * child2; // offset 0x14, size 0x4
    struct _TBResourceInfo * parent; // offset 0x18, size 0x4
    int pad; // offset 0x1C, size 0x4
};
// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
// total size: 0xC
struct _GXTlutObj {
    // Members
    unsigned long dummy[3]; // offset 0x0, size 0xC
};
inline int bGetTextureFrameDelay(struct _TBTexture * texturePtr, int frameNumber) {}

inline int bPrimCount(unsigned int primType, int vertCount) {}

inline int bTextureCallbackSet(int stage, struct _TBTexture * handle) {}

inline void bTextureCallbackUnset(int stage) {}

inline void bTextureCallbackPost(int stage, struct _TBTexture * handle) {}

inline void bsSetGlobalVideoVolume(int volume) {}

inline int bsGetGlobalVideoVolume() {}

inline void bdBeginFullscreenOutline() {}

inline void bdSetFullscreenOutlineValue(int value) {}

inline int bdIsFullscreenOutlineEnabled() {}

inline void bdEndFullscreenOutline(int thickness) {}

inline float bdTileableNoise1D(float x, float u) {}

inline float bdTileableNoise2D(float x, float y, float u, float v) {}

inline float bNoiseSCurve1D(float t) {}

inline void bFurthestAABoxPointAlongVector(float * furthest, const float * v, const struct _TBCollisionAABox * aabox) {}

// total size: 0x20
struct _TBCollisionAABox {
    // Members
    float min[4]; // offset 0x0, size 0x10
    float max[4]; // offset 0x10, size 0x10
};
inline void bcClampPointToAABox(const struct _TBCollisionAABox * aabox, float * point) {
    // Local variables
    float * p;
    const float * min;
    const float * max;
    int i;
}

inline void bcClampPointToAABoxCorner(const struct _TBCollisionAABox * aabox, const float * boxCentre, float * point) {
    // Local variables
    float * p;
    const float * min;
    const float * max;
    const float * mid;
    int i;
}

inline void bClosestAABoxPointToPoint(float * closest, const float * target, const struct _TBCollisionAABox * aabox) {}

inline int bcAABoxWithinAABox(const struct _TBCollisionAABox * aabox, const struct _TBCollisionAABox * aabox2) {}

inline int bcSphereWithinSphere(const float * centre, float radius, const float * centre2, float radius2) {
    // Local variables
    float dist;
}

inline int bcPointInAABox(const float * point, const struct _TBCollisionAABox * aabox) {}

inline int bcAABoxOverlapAABox(const struct _TBCollisionAABox * aabox, const struct _TBCollisionAABox * aabox2) {}

inline int bcGetAABoxIntersection(const struct _TBCollisionAABox * aabox, const struct _TBCollisionAABox * aabox2, struct _TBCollisionAABox * intersection) {}

inline void bcGetAABoxUnion(const struct _TBCollisionAABox * aabox, const struct _TBCollisionAABox * aabox2, struct _TBCollisionAABox * aaboxUnion) {}

inline int bcCollidePointTriList(const struct _TBCollisionPoint * point, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x10
struct _TBCollisionPoint {
    // Members
    float position[4]; // offset 0x0, size 0x10
};
// total size: 0x30
struct _TBCollisionTriangleList {
    // Members
    int noof; // offset 0x0, size 0x4
    float boundingRadius; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    int pad; // offset 0xC, size 0x4
    float centreOfMass[4]; // offset 0x10, size 0x10
    int padList; // offset 0x20, size 0x4
    struct _TBCollisionTriangle * list; // offset 0x24, size 0x4
    int padBoundsList; // offset 0x28, size 0x4
    struct _TBCollisionAABox * boundsList; // offset 0x2C, size 0x4
};
// total size: 0x70
struct _TBCollision {
    // Inner declarations
    union {
        struct _TBCollision3DSpecific _3D; // offset 0x0, size 0x20
        struct _TBCollision2DSpecific _2D; // offset 0x0, size 0x20
    };

    // Members
    float time; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    float impact[4]; // offset 0x10, size 0x10
    float normal[4]; // offset 0x20, size 0x10
    float position[4]; // offset 0x30, size 0x10
    float penetration; // offset 0x40, size 0x4
    int pad; // offset 0x44, size 0x4
    void * userContext; // offset 0x48, size 0x4
    int pad2; // offset 0x4C, size 0x4
    union {
        struct _TBCollision3DSpecific _3D; // offset 0x0, size 0x20
        struct _TBCollision2DSpecific _2D; // offset 0x0, size 0x20
    }; // offset 0x50, size 0x20
};
// total size: 0x40
struct _TBCollisionTriangle {
    // Members
    float verts[4][3]; // offset 0x0, size 0x30
    float normal[4]; // offset 0x30, size 0x10
};
// total size: 0x20
struct _TBCollision3DSpecific {
    // Members
    struct _TBCollisionMesh * mesh1; // offset 0x0, size 0x4
    unsigned int pad; // offset 0x4, size 0x4
    unsigned short tri1; // offset 0x8, size 0x2
    unsigned short trianglePart1; // offset 0xA, size 0x2
    unsigned int typeID1; // offset 0xC, size 0x4
    struct _TBCollisionMesh * mesh2; // offset 0x10, size 0x4
    unsigned int pad2; // offset 0x14, size 0x4
    unsigned short tri2; // offset 0x18, size 0x2
    unsigned short trianglePart2; // offset 0x1A, size 0x2
    unsigned int typeID2; // offset 0x1C, size 0x4
};
// total size: 0x20
struct _TBCollision2DSpecific {
    // Members
    int line1; // offset 0x0, size 0x4
    int line2; // offset 0x4, size 0x4
    int pad[2]; // offset 0x8, size 0x8
    int pad2[4]; // offset 0x10, size 0x10
};
// total size: 0x1F0
struct _TBCollisionMesh {
    // Inner declarations
    union {
        struct _TBActorInstance * actorInstance; // offset 0x0, size 0x4
        struct _TBActorNodeInstance * nodeInstance; // offset 0x0, size 0x4
    };
    union {
        struct _TBCollisionMeshCell * cells; // offset 0x0, size 0x4
        struct _TBCollisionMeshNode * nodes; // offset 0x0, size 0x4
        struct _TBCollisionMesh * root; // offset 0x0, size 0x4
    };

    // Members
    struct _TBResourceInfo resInfo; // offset 0x0, size 0x20
    int cellRes[3]; // offset 0x20, size 0xC
    unsigned int flags; // offset 0x2C, size 0x4
    float cellSize[3]; // offset 0x30, size 0xC
    unsigned int type; // offset 0x3C, size 0x4
    float min[3]; // offset 0x40, size 0xC
    unsigned int crc; // offset 0x4C, size 0x4
    float max[3]; // offset 0x50, size 0xC
    union {
        struct _TBActorInstance * actorInstance; // offset 0x0, size 0x4
        struct _TBActorNodeInstance * nodeInstance; // offset 0x0, size 0x4
    }; // offset 0x5C, size 0x4
    struct _TBCollisionMeshVertex * vertices; // offset 0x60, size 0x4
    struct _TBCollisionMeshNormal * normals; // offset 0x64, size 0x4
    struct _TBCollisionMeshTri * tris; // offset 0x68, size 0x4
    union {
        struct _TBCollisionMeshCell * cells; // offset 0x0, size 0x4
        struct _TBCollisionMeshNode * nodes; // offset 0x0, size 0x4
        struct _TBCollisionMesh * root; // offset 0x0, size 0x4
    }; // offset 0x6C, size 0x4
    struct _TBCollisionMesh * next; // offset 0x70, size 0x4
    struct _TBCollisionMesh * prev; // offset 0x74, size 0x4
    struct _TBCollisionMesh * parent; // offset 0x78, size 0x4
    struct _TBCollisionMesh * children; // offset 0x7C, size 0x4
    unsigned int noofVertices; // offset 0x80, size 0x4
    unsigned int noofNormals; // offset 0x84, size 0x4
    unsigned int noofTris; // offset 0x88, size 0x4
    int refCount; // offset 0x8C, size 0x4
    float position[4]; // offset 0x90, size 0x10
    float orientation[4]; // offset 0xA0, size 0x10
    float velocity[4]; // offset 0xB0, size 0x10
    float angularVelocity[4]; // offset 0xC0, size 0x10
    float lastNodeToWorld[4][4]; // offset 0xD0, size 0x40
    float nodeToWorld[4][4]; // offset 0x110, size 0x40
    float invNodeToWorld[4][4]; // offset 0x150, size 0x40
    float momentOfInertia[4][4]; // offset 0x190, size 0x40
    float centreOfGravity[4]; // offset 0x1D0, size 0x10
    float volume; // offset 0x1E0, size 0x4
    int dataSize; // offset 0x1E4, size 0x4
    int pad[2]; // offset 0x1E8, size 0x8
};
// total size: 0xC
struct _TBCollisionMeshVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct _TBCollisionMeshNormal {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
struct _TBCollisionMeshTri {
    // Members
    unsigned short vertexIndex[3]; // offset 0x0, size 0x6
    unsigned short normalIndex; // offset 0x6, size 0x2
    int faceId; // offset 0x8, size 0x4
    unsigned char flags; // offset 0xC, size 0x1
    unsigned char pad[3]; // offset 0xD, size 0x3
};
// total size: 0x10
struct _TBCollisionMeshCell {
    // Members
    int indexBase; // offset 0x0, size 0x4
    int noofReferences; // offset 0x4, size 0x4
    unsigned short * references; // offset 0x8, size 0x4
    unsigned int pad1; // offset 0xC, size 0x4
};
// total size: 0xC
struct _TBCollisionMeshNode {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char pad; // offset 0x1, size 0x1
    unsigned char extentMin[3]; // offset 0x2, size 0x3
    unsigned char extentMax[3]; // offset 0x5, size 0x3
    unsigned short left; // offset 0x8, size 0x2
    unsigned short right; // offset 0xA, size 0x2
};
inline int bcCollideLineTriList(const struct _TBCollisionLine * line, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x20
struct _TBCollisionLine {
    // Members
    float start[4]; // offset 0x0, size 0x10
    float end[4]; // offset 0x10, size 0x10
};
inline int bcCollideTriangleTriList(const struct _TBCollisionTriangle * tri, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAACylinderTriList(const struct _TBCollisionAACylinder * aacylinder, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x18
struct _TBCollisionAACylinder {
    // Members
    float base[4]; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
    float height; // offset 0x14, size 0x4
};
inline int bcCollideCylinderTriList(const struct _TBCollisionCylinder * cylinder, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x28
struct _TBCollisionCylinder {
    // Inner declarations
    union {
        float unitDirection[4]; // offset 0x0, size 0x10
        float orientation[4]; // offset 0x0, size 0x10
    };

    // Members
    float base[4]; // offset 0x0, size 0x10
    union {
        float unitDirection[4]; // offset 0x0, size 0x10
        float orientation[4]; // offset 0x0, size 0x10
    }; // offset 0x10, size 0x10
    float radius; // offset 0x20, size 0x4
    float height; // offset 0x24, size 0x4
};
inline int bcCollideAAConeTriList(const struct _TBCollisionAACone * aacone, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x18
struct _TBCollisionAACone {
    // Members
    float base[4]; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
    float height; // offset 0x14, size 0x4
};
inline int bcCollideConeTriList(const struct _TBCollisionCone * cone, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x28
struct _TBCollisionCone {
    // Members
    float base[4]; // offset 0x0, size 0x10
    float orientation[4]; // offset 0x10, size 0x10
    float radius; // offset 0x20, size 0x4
    float height; // offset 0x24, size 0x4
};
inline int bcCollideAABoxTriList(const struct _TBCollisionAABox * aabox, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideBoxTriList(const struct _TBCollisionBox * box, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x30
struct _TBCollisionBox {
    // Members
    float position[4]; // offset 0x0, size 0x10
    float orientation[4]; // offset 0x10, size 0x10
    float halfSize[4]; // offset 0x20, size 0x10
};
inline int bcCollideSphereTriList(const struct _TBCollisionSphere * sphere, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x14
struct _TBCollisionSphere {
    // Inner declarations
    union {
        float centre[4]; // offset 0x0, size 0x10
        float position[4]; // offset 0x0, size 0x10
    };

    // Members
    union {
        float centre[4]; // offset 0x0, size 0x10
        float position[4]; // offset 0x0, size 0x10
    }; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
};
inline int bcCollideAACapsuleTriList(const struct _TBCollisionAACapsule * aacapsule, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x18
struct _TBCollisionAACapsule {
    // Members
    float base[4]; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
    float height; // offset 0x14, size 0x4
};
inline int bcCollideCapsuleTriList(const struct _TBCollisionCapsule * capsule, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x28
struct _TBCollisionCapsule {
    // Members
    float base[4]; // offset 0x0, size 0x10
    float orientation[4]; // offset 0x10, size 0x10
    float radius; // offset 0x20, size 0x4
    float height; // offset 0x24, size 0x4
};
inline int bcCollideMeshTriList(const struct _TBCollisionMesh * mesh, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListPoint(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionPoint * point, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListLine(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionLine * line, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListTriangle(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionTriangle * tri, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListPlane(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionPlane * plane, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x10
struct _TBCollisionPlane {
    // Members
    float normal[4]; // offset 0x0, size 0x10
};
inline int bcCollideTriListAACylinder(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionAACylinder * aacylinder, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListCylinder(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionCylinder * cylinder, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListAACone(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionAACone * aacone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListCone(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionCone * cone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListAABox(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionAABox * aabox, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListBox(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionBox * box, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListSphere(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionSphere * sphere, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListAACapsule(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionAACapsule * aacapsule, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListCapsule(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionCapsule * capsule, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListMesh(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionMesh * mesh, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListTriList(const struct _TBCollisionTriangleList * triList1, const struct _TBCollisionTriangleList * triList2, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollidePointSphereList(const struct _TBCollisionPoint * point, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

// total size: 0x8
struct _TBCollisionSphereList {
    // Members
    int noof; // offset 0x0, size 0x4
    struct _TBCollisionSphere * list; // offset 0x4, size 0x4
};
inline int bcCollideLineSphereList(const struct _TBCollisionLine * line, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriangleSphereList(const struct _TBCollisionTriangle * tri, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAACylinderSphereList(const struct _TBCollisionAACylinder * aacylinder, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideCylinderSphereList(const struct _TBCollisionCylinder * cylinder, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAAConeSphereList(const struct _TBCollisionAACone * aacone, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideConeSphereList(const struct _TBCollisionCone * cone, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAABoxSphereList(const struct _TBCollisionAABox * aabox, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideBoxSphereList(const struct _TBCollisionBox * box, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereSphereList(const struct _TBCollisionSphere * sphere, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAACapsuleSphereList(const struct _TBCollisionAACapsule * aacapsule, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideCapsuleSphereList(const struct _TBCollisionCapsule * capsule, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideMeshSphereList(const struct _TBCollisionMesh * mesh, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideTriListSphereList(const struct _TBCollisionTriangleList * triList, const struct _TBCollisionSphereList * sphereList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListPoint(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionPoint * point, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListLine(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionLine * line, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListTriangle(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionTriangle * tri, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListPlane(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionPlane * plane, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListAACylinder(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionAACylinder * aacylinder, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListCylinder(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionCylinder * cylinder, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListAACone(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionAACone * aacone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListCone(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionCone * cone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListAABox(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionAABox * aabox, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListBox(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionBox * box, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListSphere(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionSphere * sphere, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListAACapsule(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionAACapsule * aacapsule, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListCapsule(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionCapsule * capsule, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListMesh(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionMesh * mesh, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListTriList(const struct _TBCollisionSphereList * sphereList, const struct _TBCollisionTriangleList * triList, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideSphereListSphereList(const struct _TBCollisionSphereList * sphereList1, const struct _TBCollisionSphereList * sphereList2, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAACylinderAACone(const struct _TBCollisionAACylinder * aacylinder, const struct _TBCollisionAACone * aacone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideCylinderAACone(const struct _TBCollisionCylinder * cylinder, const struct _TBCollisionAACone * aacone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAACapsuleAACone(const struct _TBCollisionAACapsule * aacapsule, const struct _TBCollisionAACone * aacone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideCapsuleAACone(const struct _TBCollisionCapsule * capsule, const struct _TBCollisionAACone * aacone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAAConeAACylinder(const struct _TBCollisionAACone * aacone, const struct _TBCollisionAACylinder * aacylinder, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAAConeCylinder(const struct _TBCollisionAACone * aacone, const struct _TBCollisionCylinder * cylinder, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAAConeAACapsule(const struct _TBCollisionAACone * aacone, const struct _TBCollisionAACapsule * aacapsule, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAAConeCapsule(const struct _TBCollisionAACone * aacone, const struct _TBCollisionCapsule * capsule, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAACylinderCone(const struct _TBCollisionAACylinder * aacylinder, const struct _TBCollisionCone * cone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideCylinderCone(const struct _TBCollisionCylinder * cylinder, const struct _TBCollisionCone * cone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideAACapsuleCone(const struct _TBCollisionAACapsule * aacapsule, const struct _TBCollisionCone * cone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideCapsuleCone(const struct _TBCollisionCapsule * capsule, const struct _TBCollisionCone * cone, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideConeAACylinder(const struct _TBCollisionCone * cone, const struct _TBCollisionAACylinder * aacylinder, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideConeCylinder(const struct _TBCollisionCone * cone, const struct _TBCollisionCylinder * cylinder, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideConeAACapsule(const struct _TBCollisionCone * cone, const struct _TBCollisionAACapsule * aacapsule, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline int bcCollideConeCapsule(const struct _TBCollisionCone * cone, const struct _TBCollisionCapsule * capsule, const float * motion, const float * rotation, const float * centreOfRotation, int flags, struct _TBCollision * const collisionInfo, int maxCollisions) {}

inline void bcBody2DApplyTorque(struct _TBBody2D * body, float torque) {}

// total size: 0x90
struct _TBBody2D {
    // Members
    float force[2]; // offset 0x0, size 0x8
    float acceleration[2]; // offset 0x8, size 0x8
    float velocity[2]; // offset 0x10, size 0x8
    float position[2]; // offset 0x18, size 0x8
    float torque; // offset 0x20, size 0x4
    float angularAcceleration; // offset 0x24, size 0x4
    float angularVelocity; // offset 0x28, size 0x4
    float orientation; // offset 0x2C, size 0x4
    int material; // offset 0x30, size 0x4
    float nextOrientation; // offset 0x34, size 0x4
    float nextPosition[2]; // offset 0x38, size 0x8
    int systemType; // offset 0x40, size 0x4
    int flags; // offset 0x44, size 0x4
    float motion[2]; // offset 0x48, size 0x8
    float rotation; // offset 0x50, size 0x4
    float distance; // offset 0x54, size 0x4
    struct _TBCollisionGeometry2D * collision; // offset 0x58, size 0x4
    union _UBGeometry2DType worldCollision; // offset 0x5C, size 0x4
    struct _TBRenderGeometry2D * render; // offset 0x60, size 0x4
    union UBContext32 context; // offset 0x64, size 0x4
    struct _TBBody2D * prev; // offset 0x68, size 0x4
    struct _TBBody2D * next; // offset 0x6C, size 0x4
    struct _TBSimulation2D * simulation; // offset 0x70, size 0x4
    void (* collisionCallback)(struct _TBSimulation2D *, struct _TBBody2D *, struct _TBBody2D *, struct _TBSimulationCollision2D *, int); // offset 0x74, size 0x4
    void (* contactCallback)(struct _TBSimulation2D *, struct _TBBody2D *, struct _TBBody2D *, struct _TBSimulationContact2D *, int); // offset 0x78, size 0x4
    void (* dragCoefficientCallback)(struct _TBSimulation2D *, struct _TBBody2D *, float *, float, float *, float *); // offset 0x7C, size 0x4
    struct _TBCollisionNode2D * cNode; // offset 0x80, size 0x4
    int state; // offset 0x84, size 0x4
    int pad[2]; // offset 0x88, size 0x8
};
// total size: 0x50
struct _TBCollisionGeometry2D {
    // Inner declarations
    union {
        struct _TBCollisionGeometry2D * next; // offset 0x0, size 0x4
        struct _TBCollisionGeometry2D * head; // offset 0x0, size 0x4
    };

    // Members
    enum EBBodyType2D type; // offset 0x0, size 0x4
    union _UBGeometry2DType data; // offset 0x4, size 0x4
    float centreOfGeometry[2]; // offset 0x8, size 0x8
    float centreOfMass[2]; // offset 0x10, size 0x8
    float centreOfRotation[2]; // offset 0x18, size 0x8
    float momentOfInertia; // offset 0x20, size 0x4
    float momentOfInertiaInverse; // offset 0x24, size 0x4
    float mass; // offset 0x28, size 0x4
    float massInverse; // offset 0x2C, size 0x4
    struct _TBCollisionGeometry2D * prev; // offset 0x30, size 0x4
    union {
        struct _TBCollisionGeometry2D * next; // offset 0x0, size 0x4
        struct _TBCollisionGeometry2D * head; // offset 0x0, size 0x4
    }; // offset 0x34, size 0x4
    union UBContext32 context; // offset 0x38, size 0x4
    float boundingRadius; // offset 0x3C, size 0x4
    int flags; // offset 0x40, size 0x4
    int pad[3]; // offset 0x44, size 0xC
};
union _UBGeometry2DType {
    void * geometry; // offset 0x0, size 0x4
    struct _TBCollisionPoint2D * point; // offset 0x0, size 0x4
    struct _TBCollisionLine2D * line; // offset 0x0, size 0x4
    struct _TBCollisionPolyLine2D * polyLine; // offset 0x0, size 0x4
    struct _TBCollisionCircle2D * circle; // offset 0x0, size 0x4
    struct _TBCollisionPolygon2D * polygon; // offset 0x0, size 0x4
    union _UBGeometry2DType * subGeometry; // offset 0x0, size 0x4
    float (* offset)[2]; // offset 0x0, size 0x4
};
// total size: 0x10
struct _TBRenderGeometry2D {
    // Members
    enum EBRenderType2D type; // offset 0x0, size 0x4
    void * geometry; // offset 0x4, size 0x4
    union UBContext32 context; // offset 0x8, size 0x4
    int flags; // offset 0xC, size 0x4
};
enum EBBodyType2D {
    EBBODY2D_POINT = 0,
    EBBODY2D_LINE = 1,
    EBBODY2D_CIRCLE = 2,
    EBBODY2D_CIRCLE_SHELL = 3,
    EBBODY2D_POLYLINE = 4,
    EBBODY2D_POLYGON = 5,
    EBBODY2D_POLYGON_SHELL = 6,
    EBBODY2D_COMBINED = 7,
    EBBODY2D_TYPES = 8,
};
// total size: 0x8
struct _TBCollisionPoint2D {
    // Members
    float position[2]; // offset 0x0, size 0x8
};
// total size: 0x10
struct _TBCollisionLine2D {
    // Members
    float start[2]; // offset 0x0, size 0x8
    float end[2]; // offset 0x8, size 0x8
};
// total size: 0x8
struct _TBCollisionPolyLine2D {
    // Members
    unsigned int vertexCount; // offset 0x0, size 0x4
    float (* verts)[2]; // offset 0x4, size 0x4
};
// total size: 0xC
struct _TBCollisionCircle2D {
    // Inner declarations
    union {
        float centre[2]; // offset 0x0, size 0x8
        float center[2]; // offset 0x0, size 0x8
    };

    // Members
    union {
        float centre[2]; // offset 0x0, size 0x8
        float center[2]; // offset 0x0, size 0x8
    }; // offset 0x0, size 0x8
    float radius; // offset 0x8, size 0x4
};
// total size: 0x18
struct _TBCollisionPolygon2D {
    // Members
    unsigned int vertexCount; // offset 0x0, size 0x4
    float (* verts)[2]; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    int pad; // offset 0xC, size 0x4
    float centre[2]; // offset 0x10, size 0x8
};
enum EBRenderType2D {
    EBRENDER2D_COLLISION = 0,
    EBRENDER2D_SPRITE = 1,
};
inline void bcCollisionPrimitiveCopy(void * dest, const void * src, enum EBCollisionType colType) {
    // Local variables
    int size;
}

enum EBCollisionType {
    EBCOLLISION_POINT = 0,
    EBCOLLISION_LINE = 1,
    EBCOLLISION_TRIANGLE = 2,
    EBCOLLISION_PLANE = 3,
    EBCOLLISION_BOUNDEDPLANE = 4,
    EBCOLLISION_MESH = 5,
    EBCOLLISION_AACYLINDER = 6,
    EBCOLLISION_CYLINDER = 7,
    EBCOLLISION_AABOX = 8,
    EBCOLLISION_BOX = 9,
    EBCOLLISION_SPHERE = 10,
    EBCOLLISION_AACAPSULE = 11,
    EBCOLLISION_CAPSULE = 12,
    EBCOLLISION_COMBINED = 13,
    EBCOLLISION_TRILIST = 14,
    EBCOLLISION_AACONE = 15,
    EBCOLLISION_CONE = 16,
    EBCOLLISION_USER = 17,
    EBCOLLISION_NONE = 18,
    EBCOLLISION_ALWAYS = 19,
    EBCOLLISION_SPHERELIST = 20,
    EBCOLLISION_TYPES = 21,
};
inline void bcCollisionPrimitiveCopy(void * dest, const void * src, enum EBBodyType bodyType) {
    // Local variables
    enum EBCollisionType colType;
    int size;
}

enum EBBodyType {
    EBBODY_POINT = 0,
    EBBODY_LINE = 1,
    EBBODY_TRIANGLE = 2,
    EBBODY_PLANE = 3,
    EBBODY_BOUNDEDPLANE = 4,
    EBBODY_MESH = 5,
    EBBODY_AACYLINDER = 6,
    EBBODY_AACYLINDER_SHELL = 7,
    EBBODY_CYLINDER = 8,
    EBBODY_CYLINDER_SHELL = 9,
    EBBODY_AABOX = 10,
    EBBODY_AABOX_SHELL = 11,
    EBBODY_BOX = 12,
    EBBODY_BOX_SHELL = 13,
    EBBODY_SPHERE = 14,
    EBBODY_SPHERE_SHELL = 15,
    EBBODY_AACAPSULE = 16,
    EBBODY_AACAPSULE_SHELL = 17,
    EBBODY_CAPSULE = 18,
    EBBODY_CAPSULE_SHELL = 19,
    EBBODY_COMBINED = 20,
    EBBODY_TRIANGLELIST = 21,
    EBBODY_AACONE = 22,
    EBBODY_AACONE_SHELL = 23,
    EBBODY_CONE = 24,
    EBBODY_CONE_SHELL = 25,
    EBBODY_USER = 26,
    EBBODY_NONE = 27,
    EBBODY_ALWAYS = 28,
    EBBODY_SPHERELIST = 29,
    EBBODY_TYPES = 30,
};
inline void bcBodyGetOrientation(const struct _TBBody * body, float * orientation, enum EBBodyPositionRefType reference) {}

enum EBBodyPositionRefType {
    EBBODYPOSREF_ORIGIN = 0,
    EBBODYPOSREF_CENTREOFGEOMETRY = 1,
    EBBODYPOSREF_CENTREOFMASS = 2,
    EBBODYPOSREF_CENTREOFROTATION = 3,
};
// total size: 0x2E8
struct _TBBody : public _TBSimulationObject {
    // Inner declarations
    // total size: 0x50
    struct _TBSimulationObject {
        // Inner declarations
        union {
            void * internalContext; // offset 0x0, size 0x4
            struct CFWorldNode * feSimulationObjectNode; // offset 0x0, size 0x4
        };

        // Members
        struct _TBSimulation * simulation; // offset 0x0, size 0x4
        union {
            void * internalContext; // offset 0x0, size 0x4
            struct CFWorldNode * feSimulationObjectNode; // offset 0x0, size 0x4
        }; // offset 0x4, size 0x4
        struct _TBCollisionNode * cNode; // offset 0x8, size 0x4
        unsigned int crc; // offset 0xC, size 0x4
        float position[4]; // offset 0x10, size 0x10
        float orientation[4]; // offset 0x20, size 0x10
        struct _TBCollisionAABox worldBoundingBox; // offset 0x30, size 0x20
    };

    // Members
    float force[4]; // offset 0x50, size 0x10
    float acceleration[4]; // offset 0x60, size 0x10
    float velocity[4]; // offset 0x70, size 0x10
    float preIntegrateVelocity[4]; // offset 0x80, size 0x10
    float torque[4]; // offset 0x90, size 0x10
    float angularAcceleration[4]; // offset 0xA0, size 0x10
    float angularVelocity[4]; // offset 0xB0, size 0x10
    float preIntegrateAngularVelocity[4]; // offset 0xC0, size 0x10
    float orientationMatrix[4][4]; // offset 0xD0, size 0x40
    float invOrientationMatrix[4][4]; // offset 0x110, size 0x40
    float worldSpaceMoIInverse[4][4]; // offset 0x150, size 0x40
    float nextPosition[4]; // offset 0x190, size 0x10
    float nextOrientation[4]; // offset 0x1A0, size 0x10
    float lastForce[4]; // offset 0x1B0, size 0x10
    float lastTorque[4]; // offset 0x1C0, size 0x10
    float lastPosition[4]; // offset 0x1D0, size 0x10
    float lastOrientation[4]; // offset 0x1E0, size 0x10
    float motion[4]; // offset 0x1F0, size 0x10
    float rotation[4]; // offset 0x200, size 0x10
    int flags; // offset 0x210, size 0x4
    int methodFlags; // offset 0x214, size 0x4
    struct _TBCollisionGeometry * collision; // offset 0x218, size 0x4
    union _UBGeometryType worldCollision; // offset 0x21C, size 0x4
    struct _TBRenderGeometry * render; // offset 0x220, size 0x4
    union UBContext32 context; // offset 0x224, size 0x4
    struct _TBBody * prev; // offset 0x228, size 0x4
    struct _TBBody * next; // offset 0x22C, size 0x4
    float distance; // offset 0x230, size 0x4
    struct _TBBodyActorData * actorData; // offset 0x234, size 0x4
    int systemType; // offset 0x238, size 0x4
    struct _TBSimulationSystem * system; // offset 0x23C, size 0x4
    int material; // offset 0x240, size 0x4
    int jointGroup; // offset 0x244, size 0x4
    int constraintGroup; // offset 0x248, size 0x4
    int state; // offset 0x24C, size 0x4
    int (* collisionCallback)(struct _TBSimulation *, struct _TBBody *, struct _TBBody *, struct _TBSimulationCollision *, int); // offset 0x250, size 0x4
    void (* dragCoefficientCallback)(struct _TBSimulation *, struct _TBBody *, float *, float *, float *, float *); // offset 0x254, size 0x4
    int (* contactCallback)(struct _TBSimulation *, struct _TBBody *, struct _TBBody *, struct _TBSimulationContact *, int); // offset 0x258, size 0x4
    void (* disableCallback)(struct _TBSimulation *, struct _TBBody *); // offset 0x25C, size 0x4
    void (* calcForcesCallback)(struct _TBSimulation *, struct _TBBody *, float); // offset 0x260, size 0x4
    float verticalNormalThreshold; // offset 0x264, size 0x4
    float horizontalNormalThreshold; // offset 0x268, size 0x4
    float gravityMultiplier; // offset 0x26C, size 0x4
    struct _TBBody * disabledNext; // offset 0x270, size 0x4
    struct _TBBodyCache * bodyCache; // offset 0x274, size 0x4
    struct _TBBody * prevEnabled; // offset 0x278, size 0x4
    struct _TBBody * nextEnabled; // offset 0x27C, size 0x4
    float stableVelocityPosition[4]; // offset 0x280, size 0x10
    float stableVelocityOrientation[4]; // offset 0x290, size 0x10
    struct _TBBodyContactInfo contact[4]; // offset 0x2A0, size 0x20
    float stableVelocityTime; // offset 0x2C0, size 0x4
    struct _TBBodyController * controller; // offset 0x2C4, size 0x4
    struct _TBSimulationContact * groundContact; // offset 0x2C8, size 0x4
    struct _TBBody * wheelChassisBody; // offset 0x2CC, size 0x4
    float minVelocity; // offset 0x2D0, size 0x4
    int maxMeshContactPoints; // offset 0x2D4, size 0x4
    void (* deleteCallback)(struct _TBSimulation *, struct _TBBody *); // offset 0x2D8, size 0x4
    struct _TBDeferredBody * deferred; // offset 0x2DC, size 0x4
    int pushingGroups; // offset 0x2E0, size 0x4
    int cantPushGroups; // offset 0x2E4, size 0x4
};
// total size: 0xE0
struct _TBCollisionGeometry {
    // Inner declarations
    union {
        struct _TBCollisionGeometry * next; // offset 0x0, size 0x4
        struct _TBCollisionGeometry * head; // offset 0x0, size 0x4
    };

    // Members
    enum EBBodyType type; // offset 0x0, size 0x4
    union _UBGeometryType data; // offset 0x4, size 0x4
    union UBContext32 context; // offset 0x8, size 0x4
    float boundingRadius; // offset 0xC, size 0x4
    float centreOfGeometry[4]; // offset 0x10, size 0x10
    float centreOfMass[4]; // offset 0x20, size 0x10
    float centreOfRotation[4]; // offset 0x30, size 0x10
    float momentOfInertia[4][4]; // offset 0x40, size 0x40
    float momentOfInertiaInverse[4][4]; // offset 0x80, size 0x40
    float mass; // offset 0xC0, size 0x4
    float massInverse; // offset 0xC4, size 0x4
    struct _TBCollisionGeometry * prev; // offset 0xC8, size 0x4
    union {
        struct _TBCollisionGeometry * next; // offset 0x0, size 0x4
        struct _TBCollisionGeometry * head; // offset 0x0, size 0x4
    }; // offset 0xCC, size 0x4
    float volume; // offset 0xD0, size 0x4
    int flags; // offset 0xD4, size 0x4
    int refCount; // offset 0xD8, size 0x4
    float approxMOI; // offset 0xDC, size 0x4
};
union _UBGeometryType {
    void * geometry; // offset 0x0, size 0x4
    struct _TBCollisionPoint * point; // offset 0x0, size 0x4
    struct _TBCollisionLine * line; // offset 0x0, size 0x4
    struct _TBCollisionTriangle * triangle; // offset 0x0, size 0x4
    struct _TBCollisionPlane * plane; // offset 0x0, size 0x4
    struct _TBCollisionSphere * sphere; // offset 0x0, size 0x4
    struct _TBCollisionSphereList * sphereList; // offset 0x0, size 0x4
    struct _TBCollisionAABox * aabox; // offset 0x0, size 0x4
    struct _TBCollisionBox * box; // offset 0x0, size 0x4
    struct _TBCollisionAACylinder * aacylinder; // offset 0x0, size 0x4
    struct _TBCollisionCylinder * cylinder; // offset 0x0, size 0x4
    struct _TBCollisionAACone * aacone; // offset 0x0, size 0x4
    struct _TBCollisionCone * cone; // offset 0x0, size 0x4
    struct _TBCollisionAACapsule * aacapsule; // offset 0x0, size 0x4
    struct _TBCollisionCapsule * capsule; // offset 0x0, size 0x4
    struct _TBCollisionMeshInstance * mesh; // offset 0x0, size 0x4
    struct _TBCollisionTriangleList * triangleList; // offset 0x0, size 0x4
    struct _TBCollisionUser * user; // offset 0x0, size 0x4
    union _UBGeometryType * subGeometry; // offset 0x0, size 0x4
    struct _TBAttachedGeometry * attachment; // offset 0x0, size 0x4
};
// total size: 0x20
struct _TBRenderGeometry {
    // Members
    enum EBRenderType type; // offset 0x0, size 0x4
    union _UBRenderGeometryType data; // offset 0x4, size 0x4
    union UBContext32 context; // offset 0x8, size 0x4
    int flags; // offset 0xC, size 0x4
    int refCount; // offset 0x10, size 0x4
    int pad[3]; // offset 0x14, size 0xC
};
// total size: 0x10
struct _TBBodyActorData {
    // Members
    int flags; // offset 0x0, size 0x4
    struct _TBActorInstance * actorInstance; // offset 0x4, size 0x4
    struct _TBActorNodeInstance * node1; // offset 0x8, size 0x4
    struct _TBActorNodeInstance * node2; // offset 0xC, size 0x4
};
// total size: 0x10
struct _TBBodyCache {
    // Members
    struct _TBBody * body; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    int stateIncomplete; // offset 0x8, size 0x4
    int actorFlags; // offset 0xC, size 0x4
};
// total size: 0x8
struct _TBBodyContactInfo {
    // Members
    struct _TBBody * body2; // offset 0x0, size 0x4
    int index; // offset 0x4, size 0x4
};
// total size: 0x200
struct _TBCollisionMeshInstance : public _TBCollisionMesh {
    // Members
    struct _TBCollisionMesh * mesh; // offset 0x1F0, size 0x4
    struct _TBCollMeshNodeInfo * nodeInfo; // offset 0x1F4, size 0x4
    int noofNodeInfo; // offset 0x1F8, size 0x4
    struct _TBCollisionAABox * nodeInfoLimitBox; // offset 0x1FC, size 0x4
};
// total size: 0x18
struct _TBCollisionUser {
    // Members
    void * context; // offset 0x0, size 0x4
    int (* setMOIFunc)(void *, float, float (*)[4]); // offset 0x4, size 0x4
    int (* centreOfMassFunc)(void *, float *, float *, float *); // offset 0x8, size 0x4
    int (* collideFunc)(struct _TBBody *, struct _TBBody *, const float *, const float *, const float *, int, struct _TBCollision *, int); // offset 0xC, size 0x4
    int (* staticBoundsFunc)(struct _TBBody *, struct _TBCollisionAABox *); // offset 0x10, size 0x4
    int (* drawFunc)(const struct _TBCollisionGeometry *, const float *, const float *, int, int, int, int, int); // offset 0x14, size 0x4
};
// total size: 0x20
struct _TBAttachedGeometry {
    // Members
    float offset[4]; // offset 0x0, size 0x10
    float angle[4]; // offset 0x10, size 0x10
};
enum EBRenderType {
    EBRENDER_COLLISION = 0,
    EBRENDER_ACTOR = 1,
    EBRENDER_SET = 2,
    EBRENDER_SPHERE = 3,
    EBRENDER_AACAPSULE = 4,
    EBRENDER_CAPSULE = 5,
    EBRENDER_USER = 6,
};
union _UBRenderGeometryType {
    void * geometry; // offset 0x0, size 0x4
    struct _TBActorInstance * actorInstance; // offset 0x0, size 0x4
    struct _TBSet * set; // offset 0x0, size 0x4
    struct _TBDrawPrimitive * primitive; // offset 0x0, size 0x4
    struct _TBRenderGeometryUserType * user; // offset 0x0, size 0x4
};
// total size: 0x30
struct _TBCollMeshNodeInfo {
    // Inner declarations
    union {
        struct _TBCollisionMeshNode * node; // offset 0x0, size 0x4
        unsigned short triIndex; // offset 0x0, size 0x2
    };

    // Members
    union {
        struct _TBCollisionMeshNode * node; // offset 0x0, size 0x4
        unsigned short triIndex; // offset 0x0, size 0x2
    }; // offset 0x0, size 0x4
    char depth; // offset 0x4, size 0x1
    char cpad[3]; // offset 0x5, size 0x3
    int flags; // offset 0x8, size 0x4
    int pad; // offset 0xC, size 0x4
    float min[4]; // offset 0x10, size 0x10
    float max[4]; // offset 0x20, size 0x10
};
// total size: 0x8
struct _TBRenderGeometryUserType {
    // Members
    void * context; // offset 0x0, size 0x4
    int (* renderFunc)(void *, const struct _TBRenderGeometry *, const float *, const float *); // offset 0x4, size 0x4
};
inline void bcBodySetVelocityXZ(struct _TBBody * body, const float * velocity, enum EBBodySpaceRefType reference) {
    // Local variables
    float newVel[4];
}

enum EBBodySpaceRefType {
    EBBODYSPACEREF_BODY = 0,
    EBBODYSPACEREF_WORLD = 1,
};
inline void bcBodyZeroAngularVelocity(struct _TBBody * body) {}

inline void bcBodyGetPushability(struct _TBBody * body1, struct _TBBody * body2, int * body1CanPush, int * body2CanPush) {}

inline int bcBodyIsEnabled(struct _TBBody * body) {}

inline void bcBodyApplyImpulse(struct _TBBody * body, float impulse, const float * dir, const float * point) {}

inline void bcBodySetCollisionCallback(struct _TBBody * body, int (* callback)(struct _TBSimulation *, struct _TBBody *, struct _TBBody *, struct _TBSimulationCollision *, int)) {}

inline void bcBodySetContactCallback(struct _TBBody * body, int (* callback)(struct _TBSimulation *, struct _TBBody *, struct _TBBody *, struct _TBSimulationContact *, int)) {}

inline void bcBodySetDragCoefficientCallback(struct _TBBody * body, void (* callback)(struct _TBSimulation *, struct _TBBody *, float *, float *, float *, float *)) {}

inline void bcBodySetDisableCallback(struct _TBBody * body, void (* callback)(struct _TBSimulation *, struct _TBBody *)) {}

inline void bcBodySetDeleteCallback(struct _TBBody * body, void (* callback)(struct _TBSimulation *, struct _TBBody *)) {}

inline void bcBodySetCalcForcesCallback(struct _TBBody * body, void (* callback)(struct _TBSimulation *, struct _TBBody *, float)) {}

inline void bBodyVectorWorldToBodySpace(const struct _TBBody * body, float * vector) {}

inline void bBodyVectorWorldToBodySpace2(const struct _TBBody * body, float * dest, const float * src) {}

inline void bBodyVectorBodyToWorldSpace(const struct _TBBody * body, float * vector) {}

inline void bBodyVectorBodyToWorldSpace2(const struct _TBBody * body, float * dest, const float * src) {}

inline void bBodyGetBodyAngAccDueToBodyTorque(struct _TBBody * body, float * angAcc, const float * torque) {}

inline void bBodyGetBodyAngAccDueToBodyTorque(struct _TBBody * body, float * angAcc) {}

inline void bBodyGetBodyAngAccDueToWorldTorque(struct _TBBody * body, float * angAcc, const float * torque) {}

inline void bBodyGetWorldAngAccDueToBodyTorque(struct _TBBody * body, float * angAcc, const float * torque) {}

inline void bBodyGetWorldAngAccDueToWorldTorque(struct _TBBody * body, float * angAcc, const float * torque) {}

inline void bBodyGetBodyTorqueToProduceBodyAngAcc(struct _TBBody * body, float * torque, const float * angAcc) {}

inline void bBodyGetBodyTorqueToProduceWorldAngAcc(struct _TBBody * body, float * torque, const float * angAcc) {}

inline void bBodyGetWorldTorqueToProduceBodyAngAcc(struct _TBBody * body, float * torque, const float * angAcc) {}

inline void bBodyGetWorldTorqueToProduceWorldAngAcc(struct _TBBody * body, float * torque, const float * angAcc) {
    // Local variables
    float bodyAngAcc[4];
}

inline void bBodyGetAngAccDueToForceAtOffset(struct _TBBody * body, float * angAcc, const float * force, const float * offset) {
    // Local variables
    float torque[4];
}

inline void bcBodySetName(struct _TBBody * body, unsigned int crc) {}

inline struct _TBActorInstance * bBodyGetActorInstance(const struct _TBBody * body) {}

inline int bBodyGetActorFlags(const struct _TBBody * body) {}

inline struct _TBActorNodeInstance * bBodyGetActorNode(const struct _TBBody * body) {}

inline struct _TBActorNodeInstance * bBodyGetActorParentNode(const struct _TBBody * body) {}

static inline void bBodyZeroForces(struct _TBBody * body) {}

inline void bcBodySetPosition(struct _TBBody * body, const float * pos, enum EBBodyPositionRefType reference, int setLast, int stop) {}

inline void bcBodySetPositionXZ(struct _TBBody * body, const float * pos, enum EBBodyPositionRefType reference, int setLast, int stop) {
    // Local variables
    float newPos[4];
}

inline void bcBodyAdjustPosition(struct _TBBody * body, const float * offset, int setLast) {}

inline struct _TBSimulationSystem * bJointGetSystem(struct _TBJoint * joint) {}

// total size: 0x280
struct _TBJoint {
    // Members
    struct _TBBody * body1; // offset 0x0, size 0x4
    struct _TBBody * body2; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    enum EBJointType type; // offset 0xC, size 0x4
    float bodyP[4][2]; // offset 0x10, size 0x20
    float worldP[4][2]; // offset 0x30, size 0x20
    float body1Axis[4][3]; // offset 0x50, size 0x30
    float worldAxis[4][3]; // offset 0x80, size 0x30
    float body1RotationAxis[4][3]; // offset 0xB0, size 0x30
    float worldRotationAxis[4][3]; // offset 0xE0, size 0x30
    float body2Direction[4]; // offset 0x110, size 0x10
    float body2Up[4]; // offset 0x120, size 0x10
    float worldDirection[4]; // offset 0x130, size 0x10
    float worldUp[4]; // offset 0x140, size 0x10
    float lastConstraintForce[4]; // offset 0x150, size 0x10
    float lastConstraintImpulse[4]; // offset 0x160, size 0x10
    float staticBodyP[4]; // offset 0x170, size 0x10
    struct _TBBody * staticBody; // offset 0x180, size 0x4
    int order; // offset 0x184, size 0x4
    float maxAngle[2]; // offset 0x188, size 0x8
    int dof; // offset 0x190, size 0x4
    float maxDist[3]; // offset 0x194, size 0xC
    float dist[3]; // offset 0x1A0, size 0xC
    float suspensionForce; // offset 0x1AC, size 0x4
    float maxTwist; // offset 0x1B0, size 0x4
    int breakFlags; // offset 0x1B4, size 0x4
    float minSquaredForce; // offset 0x1B8, size 0x4
    float maxSquaredForce; // offset 0x1BC, size 0x4
    void (* breakCallback)(struct _TBJoint *, int); // offset 0x1C0, size 0x4
    struct _TBJoint * prev; // offset 0x1C4, size 0x4
    struct _TBJoint * next; // offset 0x1C8, size 0x4
    void * paramRot; // offset 0x1CC, size 0x4
    void * paramTwist; // offset 0x1D0, size 0x4
    float seperationDist[3]; // offset 0x1D4, size 0xC
    float seperation[4]; // offset 0x1E0, size 0x10
    float unitSeperation[4]; // offset 0x1F0, size 0x10
    float forceDirection[4]; // offset 0x200, size 0x10
    float torqueAxis[4]; // offset 0x210, size 0x10
    struct _TBJoint * constraintGroupNext; // offset 0x220, size 0x4
    float springForce; // offset 0x224, size 0x4
    float springForceFactor; // offset 0x228, size 0x4
    float springDamping; // offset 0x22C, size 0x4
    float springDampingFactor; // offset 0x230, size 0x4
    float currentTorque; // offset 0x234, size 0x4
    float currentForce; // offset 0x238, size 0x4
    struct _TBJoint * relativeTo; // offset 0x23C, size 0x4
    void * param; // offset 0x240, size 0x4
    int constraintGroup; // offset 0x244, size 0x4
    float restLength; // offset 0x248, size 0x4
    struct _TBSimulation * simulation; // offset 0x24C, size 0x4
    int systemType; // offset 0x250, size 0x4
    float linearFriction; // offset 0x254, size 0x4
    float angularFriction; // offset 0x258, size 0x4
    unsigned int crc; // offset 0x25C, size 0x4
    float actorAngleFactors[4]; // offset 0x260, size 0x10
    float creationSize; // offset 0x270, size 0x4
    union UBContext32 context; // offset 0x274, size 0x4
    int pad[2]; // offset 0x278, size 0x8
};
enum EBJointType {
    EBJOINT_NOJOINT = -1,
    EBJOINT_BALLANDSOCKET = 0,
    EBJOINT_LIMITEDBALLANDSOCKET = 1,
    EBJOINT_PERPENDICULAR = 2,
    EBJOINT_FIXEDDIRECTION = 3,
    EBJOINT_FIXEDORIENTATION = 4,
    EBJOINT_HINGE = 5,
    EBJOINT_LIMITEDHINGE = 6,
    EBJOINT_SPRUNGHINGE = 7,
    EBJOINT_SLIDINGHINGE = 8,
    EBJOINT_TWISTINGHINGE = 9,
    EBJOINT_WHEEL = 10,
    EBJOINT_LINE = 11,
    EBJOINT_LIMITEDLINE = 12,
    EBJOINT_PRISMATIC = 13,
    EBJOINT_LIMITEDPRISMATIC = 14,
    EBJOINT_SPRUNGPRISMATIC = 15,
    EBJOINT_PLANAR = 16,
    EBJOINT_TWISTABLEPLANAR = 17,
    EBJOINT_LIMITEDPLANAR = 18,
    EBJOINT_BOX = 19,
    EBJOINT_FIXED = 20,
    EBJOINT_SPRING = 21,
    EBJOINT_FASTSPRING = 22,
    EBJOINT_SUSPENSION = 23,
    EBJOINT_TYPES = 24,
};
inline void bBodyLimitVelocity(struct _TBBody * body) {
    // Local variables
    float v;
}

inline void bcControllerSetName(struct _TBBodyController * controller, unsigned int crc) {}

// total size: 0xF0
struct _TBBodyController {
    // Members
    int flags; // offset 0x0, size 0x4
    enum EBBodyControllerType type; // offset 0x4, size 0x4
    union UBContext32 context; // offset 0x8, size 0x4
    unsigned int crc; // offset 0xC, size 0x4
    float position[4]; // offset 0x10, size 0x10
    float orientation[4]; // offset 0x20, size 0x10
    struct _TBBody * body; // offset 0x30, size 0x4
    struct _TBBodyController * next; // offset 0x34, size 0x4
    unsigned int pad[2]; // offset 0x38, size 0x8
    union _UBControllerParamType data; // offset 0x40, size 0xB0
};
enum EBBodyControllerType {
    EBBODYCONTROLLER_NONE = -1,
    EBBODYCONTROLLER_WING = 0,
    EBBODYCONTROLLER_THRUST = 1,
    EBBODYCONTROLLER_WORLDSPACETHRUST = 2,
    EBBODYCONTROLLER_MOTOR = 3,
    EBBODYCONTROLLER_GEARBOX = 4,
    EBBODYCONTROLLER_STEERING = 5,
    EBBODYCONTROLLER_BRAKE = 6,
    EBBODYCONTROLLER_DOWNFORCE = 7,
    EBBODYCONTROLLER_MOVEMENT = 8,
    EBBODYCONTROLLER_USER = 9,
    EBBODYCONTROLLERS = 10,
};
union _UBControllerParamType {
    struct _TBBodyThrustControl thruster; // offset 0x0, size 0x30
    struct _TBBodyMotorControl motor; // offset 0x0, size 0x30
    struct _TBBodyGearBoxControl gearBox; // offset 0x0, size 0xB0
    struct _TBBodyBrakeControl brake; // offset 0x0, size 0x78
    struct _TBBodyWingControl wing; // offset 0x0, size 0x40
    struct _TBBodySteeringControl steering; // offset 0x0, size 0x50
    struct _TBBodyDownForceControl downForce; // offset 0x0, size 0x38
    struct _TBBodyMovementControl movement; // offset 0x0, size 0x40
    struct _TBBodyUserControl user; // offset 0x0, size 0x10
};
// total size: 0x30
struct _TBBodyThrustControl {
    // Members
    float direction[4]; // offset 0x0, size 0x10
    float power; // offset 0x10, size 0x4
    int pad[7]; // offset 0x14, size 0x1C
};
// total size: 0x30
struct _TBBodyMotorControl {
    // Members
    float axis[4]; // offset 0x0, size 0x10
    float power; // offset 0x10, size 0x4
    int pad[7]; // offset 0x14, size 0x1C
};
// total size: 0xB0
struct _TBBodyGearBoxControl {
    // Members
    float axis[4][4]; // offset 0x0, size 0x40
    float acceleratorPos; // offset 0x40, size 0x4
    int noofGears; // offset 0x44, size 0x4
    int gear; // offset 0x48, size 0x4
    int flags; // offset 0x4C, size 0x4
    float differentialRatio; // offset 0x50, size 0x4
    float maxEngineSpeed; // offset 0x54, size 0x4
    float minEngineSpeed; // offset 0x58, size 0x4
    float engineSpeed; // offset 0x5C, size 0x4
    float balanceFactor; // offset 0x60, size 0x4
    int noofBodies; // offset 0x64, size 0x4
    float maxContactSlipVel; // offset 0x68, size 0x4
    unsigned int pad; // offset 0x6C, size 0x4
    float gearRatio[7]; // offset 0x70, size 0x1C
    unsigned int pad2; // offset 0x8C, size 0x4
    struct _TBBody * body[4]; // offset 0x90, size 0x10
    const struct _TBControlGraph * torqueGraph; // offset 0xA0, size 0x4
    unsigned int pad3[3]; // offset 0xA4, size 0xC
};
// total size: 0x78
struct _TBBodyBrakeControl {
    // Inner declarations
    union {
        struct _TBBrakeImpulseParams impulseParams; // offset 0x0, size 0x8
        struct _TBBrakeTorqueParams torqueParams; // offset 0x0, size 0x8
    };

    // Members
    float axis[4][4]; // offset 0x0, size 0x40
    float brakePos; // offset 0x40, size 0x4
    int flags; // offset 0x44, size 0x4
    int noofBodies; // offset 0x48, size 0x4
    int brakeModel; // offset 0x4C, size 0x4
    union {
        struct _TBBrakeImpulseParams impulseParams; // offset 0x0, size 0x8
        struct _TBBrakeTorqueParams torqueParams; // offset 0x0, size 0x8
    }; // offset 0x50, size 0x8
    struct _TBBody * body[4]; // offset 0x58, size 0x10
    struct _TBBody * referenceBody; // offset 0x68, size 0x4
    unsigned int pad[3]; // offset 0x6C, size 0xC
};
// total size: 0x40
struct _TBBodyWingControl {
    // Members
    float planformArea; // offset 0x0, size 0x4
    float airDensity; // offset 0x4, size 0x4
    float SpeedMultiplier; // offset 0x8, size 0x4
    int pad; // offset 0xC, size 0x4
    float upVector[4]; // offset 0x10, size 0x10
    float forwardVector[4]; // offset 0x20, size 0x10
    const struct _TBControlGraph * liftGraph; // offset 0x30, size 0x4
    const struct _TBControlGraph * dragGraph; // offset 0x34, size 0x4
    unsigned int pad2[2]; // offset 0x38, size 0x8
};
// total size: 0x50
struct _TBBodySteeringControl {
    // Members
    float steeringWheelPos; // offset 0x0, size 0x4
    int noofJoints; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    float middleSteerAngle; // offset 0xC, size 0x4
    float steerAngleRange; // offset 0x10, size 0x4
    float steerAngle; // offset 0x14, size 0x4
    float targetSteerAngle; // offset 0x18, size 0x4
    float steerSpeed; // offset 0x1C, size 0x4
    int noofBodies; // offset 0x20, size 0x4
    float steeringLimitLowSpeed; // offset 0x24, size 0x4
    float steeringLimitHighSpeed; // offset 0x28, size 0x4
    float highSpeedAngleRange; // offset 0x2C, size 0x4
    struct _TBJoint * joint[4]; // offset 0x30, size 0x10
    struct _TBBody * body[4]; // offset 0x40, size 0x10
};
// total size: 0x38
struct _TBBodyDownForceControl {
    // Members
    float forceDirection[4]; // offset 0x0, size 0x10
    float movementDirection[4]; // offset 0x10, size 0x10
    float minForce; // offset 0x20, size 0x4
    float maxForce; // offset 0x24, size 0x4
    float minSpeed; // offset 0x28, size 0x4
    float maxSpeed; // offset 0x2C, size 0x4
    float power; // offset 0x30, size 0x4
    int flags; // offset 0x34, size 0x4
};
// total size: 0x40
struct _TBBodyMovementControl {
    // Members
    float targetPosition[4]; // offset 0x0, size 0x10
    float (* wayPoints)[4]; // offset 0x10, size 0x4
    int noofPositions; // offset 0x14, size 0x4
    float desiredSpeed; // offset 0x18, size 0x4
    int flags; // offset 0x1C, size 0x4
    float angularVelocity[4]; // offset 0x20, size 0x10
    float angAlternationInterval; // offset 0x30, size 0x4
    float timeToTargetPosition; // offset 0x34, size 0x4
    float velLerpFactor; // offset 0x38, size 0x4
    float angVelLerpFactor; // offset 0x3C, size 0x4
};
// total size: 0x10
struct _TBBodyUserControl {
    // Members
    void (* callback)(struct _TBBody *, float, void *); // offset 0x0, size 0x4
    void * context; // offset 0x4, size 0x4
    unsigned int pad[2]; // offset 0x8, size 0x8
};
// total size: 0x20
struct _TBControlGraph {
    // Inner declarations
    union {
        int noof; // offset 0x0, size 0x4
        float (* callback)(float, void *); // offset 0x0, size 0x4
    };
    union {
        const struct _TBControlGraphKey * data; // offset 0x0, size 0x4
        void * context; // offset 0x0, size 0x4
    };

    // Members
    float scale; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    union {
        int noof; // offset 0x0, size 0x4
        float (* callback)(float, void *); // offset 0x0, size 0x4
    }; // offset 0x8, size 0x4
    union {
        const struct _TBControlGraphKey * data; // offset 0x0, size 0x4
        void * context; // offset 0x0, size 0x4
    }; // offset 0xC, size 0x4
    float xmin; // offset 0x10, size 0x4
    float xmax; // offset 0x14, size 0x4
    float ymin; // offset 0x18, size 0x4
    float ymax; // offset 0x1C, size 0x4
};
// total size: 0x8
struct _TBBrakeImpulseParams {
    // Members
    float fraction; // offset 0x0, size 0x4
    float maxVelocityChange; // offset 0x4, size 0x4
};
// total size: 0x8
struct _TBBrakeTorqueParams {
    // Members
    float multiplier; // offset 0x0, size 0x4
    float max; // offset 0x4, size 0x4
};
// total size: 0x8
struct _TBControlGraphKey {
    // Members
    float key; // offset 0x0, size 0x4
    float value; // offset 0x4, size 0x4
};
inline void bFastConstraintSolveForForces(struct _TBConstraintSolver * solver) {}

// total size: 0x50
struct _TBConstraintSolver {
    // Members
    float * matrix; // offset 0x0, size 0x4
    float * acceleration; // offset 0x4, size 0x4
    float * velocity; // offset 0x8, size 0x4
    float * force; // offset 0xC, size 0x4
    float * impulse; // offset 0x10, size 0x4
    float * inverse; // offset 0x14, size 0x4
    int constraints; // offset 0x18, size 0x4
    int pitch; // offset 0x1C, size 0x4
    int * matrixRows; // offset 0x20, size 0x4
    int * compressedRowStarts; // offset 0x24, size 0x4
    int * compressedRowLengths; // offset 0x28, size 0x4
    int * compressedRowOffsets; // offset 0x2C, size 0x4
    int * rowOffsets; // offset 0x30, size 0x4
    int flags; // offset 0x34, size 0x4
    int noofJoints; // offset 0x38, size 0x4
    struct _TBJoint * * joint; // offset 0x3C, size 0x4
    int noofChangingBlocks; // offset 0x40, size 0x4
    int * changingBlockPairs; // offset 0x44, size 0x4
    int * noofJointConstraints; // offset 0x48, size 0x4
    union UBContext32 context; // offset 0x4C, size 0x4
};
inline void bFastConstraintSolveForImpulses(struct _TBConstraintSolver * solver) {}

inline void bcSystemStopBodies(struct _TBSimulationSystem * simSystem) {
    // Local variables
    int c;
}

// total size: 0x160
struct _TBSimulationSystem : public _TBSimulationObject {
    // Members
    int type; // offset 0x50, size 0x4
    int flags; // offset 0x54, size 0x4
    enum EBSimulationSystemAnimType animType; // offset 0x58, size 0x4
    float actorImpulseFraction; // offset 0x5C, size 0x4
    int noofBodies; // offset 0x60, size 0x4
    int noofJoints; // offset 0x64, size 0x4
    int noofControllers; // offset 0x68, size 0x4
    int pad1; // offset 0x6C, size 0x4
    float actorToRoot[4]; // offset 0x70, size 0x10
    float rootToBody0[4]; // offset 0x80, size 0x10
    float actorToBoundingBody[4]; // offset 0x90, size 0x10
    float bodySpacePosition[4]; // offset 0xA0, size 0x10
    float bodySpaceOrientation[4]; // offset 0xB0, size 0x10
    struct _TBCollisionAABox worldBoundingBoxPhysics; // offset 0xC0, size 0x20
    struct _TBCollisionAABox worldBoundingBoxAnimation; // offset 0xE0, size 0x20
    float animBodyMassMultiplier; // offset 0x100, size 0x4
    float scale; // offset 0x104, size 0x4
    int pad2[2]; // offset 0x108, size 0x8
    struct _TBSimulationSystem * prev; // offset 0x110, size 0x4
    struct _TBSimulationSystem * next; // offset 0x114, size 0x4
    struct _TBBody * * body; // offset 0x118, size 0x4
    struct _TBJoint * * joint; // offset 0x11C, size 0x4
    struct _TBBodyController * * controller; // offset 0x120, size 0x4
    struct _TBConstraintSolver * constraint; // offset 0x124, size 0x4
    struct _TBBody * mainBody; // offset 0x128, size 0x4
    struct _TBBody * boundingBody; // offset 0x12C, size 0x4
    void * extraData; // offset 0x130, size 0x4
    struct _TBActorInstance * actorInstance; // offset 0x134, size 0x4
    void * userContext; // offset 0x138, size 0x4
    struct _TBBody * attachedBody; // offset 0x13C, size 0x4
    struct _TBCollisionNode * cNodePhysics; // offset 0x140, size 0x4
    struct _TBCollisionNode * cNodeAnimation; // offset 0x144, size 0x4
    void * pad3[2]; // offset 0x148, size 0x8
    int (* moveCallback)(struct _TBSimulationSystem *, const float *, enum EBSimulationSystemPositionRefType); // offset 0x150, size 0x4
    int (* rotateCallback)(struct _TBSimulationSystem *, const float *, enum EBSimulationSystemPositionRefType); // offset 0x154, size 0x4
    void (* deleteCallback)(struct _TBSimulationSystem *); // offset 0x158, size 0x4
    void * pad4; // offset 0x15C, size 0x4
};
enum EBSimulationSystemAnimType {
    EBSIMSYSTEMANIMTYPE_ANIMATION = 0,
    EBSIMSYSTEMANIMTYPE_COMBINE = 1,
    EBSIMSYSTEMANIMTYPE_BLENDJOINTS = 2,
    EBSIMSYSTEMANIMTYPE_BLENDBODY = 3,
    EBSIMSYSTEMANIMTYPE_BLENDBODYPOSITIONONLY = 4,
    EBSIMSYSTEMANIMTYPE_BLENDBODYORIENTATIONONLY = 5,
    EBSIMSYSTEMANIMTYPE_PHYSICS = 6,
};
// total size: 0x80
struct _TBCollisionNode {
    // Inner declarations
    union {
        void * bodyVoid; // offset 0x0, size 0x4
        struct _TBBody * body; // offset 0x0, size 0x4
    };

    // Members
    struct _TBCollisionNode * spacePrev; // offset 0x0, size 0x4
    struct _TBCollisionNode * spaceNext; // offset 0x4, size 0x4
    struct _TBCollisionNode * spaceChild; // offset 0x8, size 0x4
    struct _TBCollisionNode * spaceParent; // offset 0xC, size 0x4
    struct _TBCollisionSpace * space; // offset 0x10, size 0x4
    union {
        void * bodyVoid; // offset 0x0, size 0x4
        struct _TBBody * body; // offset 0x0, size 0x4
    }; // offset 0x14, size 0x4
    struct _TBCollisionAABox * aaBoundingBox; // offset 0x18, size 0x4
    struct _TBCollisionPlane * plane; // offset 0x1C, size 0x4
    int flags; // offset 0x20, size 0x4
    int noofBodies; // offset 0x24, size 0x4
    struct CFWorldNodeCollisionNode * feCollisionNode; // offset 0x28, size 0x4
    struct _TBCollisionNode * storedParent; // offset 0x2C, size 0x4
    float position[4]; // offset 0x30, size 0x10
    float motion[4]; // offset 0x40, size 0x10
    float nextPosition[4]; // offset 0x50, size 0x10
    float radius; // offset 0x60, size 0x4
    float distance; // offset 0x64, size 0x4
    int collisionGroups; // offset 0x68, size 0x4
    int excludeGroups; // offset 0x6C, size 0x4
    struct TBCollisionNodeDummyHead dummyChildArea; // offset 0x70, size 0x10
};
// total size: 0xA8
struct _TBCollisionSpace {
    // Inner declarations
    union {
        void * parms; // offset 0x0, size 0x4
        struct _TBCollisionSpaceGridXZ * gridXZ; // offset 0x0, size 0x4
    };

    // Members
    enum EBCollisionSpaceType type; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    struct _TBCollisionNode * head; // offset 0x8, size 0x4
    union {
        void * parms; // offset 0x0, size 0x4
        struct _TBCollisionSpaceGridXZ * gridXZ; // offset 0x0, size 0x4
    } data; // offset 0xC, size 0x4
    struct _TBCollisionNode * staticParent; // offset 0x10, size 0x4
    int noofNodes; // offset 0x14, size 0x4
    struct TBCollisionNodeDummyHead removedNodesHead; // offset 0x18, size 0x10
    struct _TBCollisionNode noCollisionNode; // offset 0x28, size 0x80
};
// total size: 0x10
struct TBCollisionNodeDummyHead {
    // Members
    struct _TBCollisionNode * spacePrev; // offset 0x0, size 0x4
    struct _TBCollisionNode * spaceNext; // offset 0x4, size 0x4
    struct _TBCollisionNode * spaceChild; // offset 0x8, size 0x4
    struct _TBCollisionNode * spaceParent; // offset 0xC, size 0x4
};
enum EBSimulationSystemPositionRefType {
    EBSIMSYSTEMPOSREF_ORIGIN = 0,
    EBSIMSYSTEMPOSREF_SYSTEMROOT = 1,
    EBSIMSYSTEMPOSREF_SET = 2,
};
enum EBCollisionSpaceType {
    BCOLLSPACETYPE_LIST = 0,
    BCOLLSPACETYPE_TREE = 1,
    BCOLLSPACETYPE_GRIDXZ = 2,
    BCOLLSPACETYPES = 3,
};
// total size: 0x30
struct _TBCollisionSpaceGridXZ {
    // Members
    float min_x; // offset 0x0, size 0x4
    float max_x; // offset 0x4, size 0x4
    float min_z; // offset 0x8, size 0x4
    float max_z; // offset 0xC, size 0x4
    float res_x; // offset 0x10, size 0x4
    float res_z; // offset 0x14, size 0x4
    int max_buckets; // offset 0x18, size 0x4
    int pad; // offset 0x1C, size 0x4
    struct _TBCollisionSpaceGridBucket * grid; // offset 0x20, size 0x4
    struct _TBCollisionSpaceGridBucket * buckets; // offset 0x24, size 0x4
    int pad2[2]; // offset 0x28, size 0x8
};
// total size: 0x4
struct _TBCollisionSpaceGridBucket {
    // Members
    void * node; // offset 0x0, size 0x4
};
inline void bcSystemSetName(struct _TBSimulationSystem * simSystem, unsigned int crc) {}

inline void bcParticleSystemSetEmitter(struct _TBSimParticleSystem * psystem, float emitDelta, void (* callback)(struct _TBSimParticleSystem *, void *), void * emitterData) {}

// total size: 0x1B0
struct _TBSimParticleSystem {
    // Members
    struct _TBSimulationSystem system; // offset 0x0, size 0x160
    int flags; // offset 0x160, size 0x4
    int maxParticles; // offset 0x164, size 0x4
    int activeParticles; // offset 0x168, size 0x4
    int maxTris; // offset 0x16C, size 0x4
    float age; // offset 0x170, size 0x4
    float emitDelta; // offset 0x174, size 0x4
    float lastEmit; // offset 0x178, size 0x4
    float particleMass; // offset 0x17C, size 0x4
    void (* emitterCallback)(struct _TBSimParticleSystem *, void *); // offset 0x180, size 0x4
    void * emitterData; // offset 0x184, size 0x4
    int (* collisionCallback)(struct _TBSimParticleSystem *, void *, float, int, struct _TBBody *, struct _TBCollision *); // offset 0x188, size 0x4
    int (* particleParticleCallback)(struct _TBSimParticleSystem *, void *, void *); // offset 0x18C, size 0x4
    struct _TBSimParticle * particle; // offset 0x190, size 0x4
    float * particleLifetime; // offset 0x194, size 0x4
    struct _TBCollisionTriangle * triList; // offset 0x198, size 0x4
    struct _TBCollisionAABox * triBounds; // offset 0x19C, size 0x4
    float collisionOffsetDistance; // offset 0x1A0, size 0x4
    float coefficientOfRestitution; // offset 0x1A4, size 0x4
    int clumps; // offset 0x1A8, size 0x4
    int pad3; // offset 0x1AC, size 0x4
};
// total size: 0x80
struct _TBSimParticle {
    // Members
    float force[4]; // offset 0x0, size 0x10
    float acceleration[4]; // offset 0x10, size 0x10
    float velocity[4]; // offset 0x20, size 0x10
    float motion[4]; // offset 0x30, size 0x10
    float lastPosition[4]; // offset 0x40, size 0x10
    float position[4]; // offset 0x50, size 0x10
    int flags; // offset 0x60, size 0x4
    int bodies; // offset 0x64, size 0x4
    int touching; // offset 0x68, size 0x4
    int pad; // offset 0x6C, size 0x4
    struct _TBSimParticle * next; // offset 0x70, size 0x4
    struct _TBSimParticle * prev; // offset 0x74, size 0x4
    struct _TBSimParticle * first; // offset 0x78, size 0x4
    struct _TBSimParticle * last; // offset 0x7C, size 0x4
};
inline void bcParticleSystemSetParticleParticleCollisionCallback(struct _TBSimParticleSystem * psystem, int (* callback)(struct _TBSimParticleSystem *, void *, void *)) {}

inline void bcParticleSystemSetCollisionCallback(struct _TBSimParticleSystem * psystem, int (* callback)(struct _TBSimParticleSystem *, void *, float, int, struct _TBBody *, struct _TBCollision *)) {}

inline int biGCRevPadReadAccel(int portId, struct _TBIGCRevPadAccel * accel1InfoArray, struct _TBIGCRevPadAccel * accel2InfoArray, int maxArrayNoof) {}

// total size: 0x18
struct _TBIGCRevPadAccel {
    // Members
    float acc[4]; // offset 0x0, size 0x10
    float magnitude; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
};
inline int biGCRevPadSetAccelParam(int portId, float accPlayRadius, float accSensitivity) {}

inline int biGCRevPadReadDPD(int portId, struct _TBIGCRevPadDPD * dpdInfo) {}

// total size: 0x38
struct _TBIGCRevPadDPD {
    // Members
    float position[2]; // offset 0x0, size 0x8
    float posLastVec[2]; // offset 0x8, size 0x8
    float posLastLen; // offset 0x10, size 0x4
    float horizon[2]; // offset 0x14, size 0x8
    float horLastVec[2]; // offset 0x1C, size 0x8
    float horLastLen; // offset 0x24, size 0x4
    float dist; // offset 0x28, size 0x4
    float distLastVec; // offset 0x2C, size 0x4
    float distLastLen; // offset 0x30, size 0x4
    int validity; // offset 0x34, size 0x4
};
inline int biGCRevPadDPDParam(int portId, float posPlayRadius, float posSensitivity, float horiPlayRadius, float horiSensitivity, float distPlayRadius, float distSensitivity) {}

inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
    // Local variables
    struct _TBActorAnimNode * animNodeData;
    int noofKeys;
    struct _TBAnimKey3 * keys;
}

// total size: 0x30
struct _TBActorAnimSegment {
    // Inner declarations
    union {
        void * pContext; // offset 0x0, size 0x4
        int iContext; // offset 0x0, size 0x4
        float fContext; // offset 0x0, size 0x4
        short sContext[2]; // offset 0x0, size 0x4
        unsigned char cContext[4]; // offset 0x0, size 0x4
    };

    // Members
    unsigned int crc; // offset 0x0, size 0x4
    int startFrame; // offset 0x4, size 0x4
    int endFrame; // offset 0x8, size 0x4
    int ticksPerFrame; // offset 0xC, size 0x4
    union {
        void * pContext; // offset 0x0, size 0x4
        int iContext; // offset 0x0, size 0x4
        float fContext; // offset 0x0, size 0x4
        short sContext[2]; // offset 0x0, size 0x4
        unsigned char cContext[4]; // offset 0x0, size 0x4
    }; // offset 0x10, size 0x4
    struct _TBActor * actor; // offset 0x14, size 0x4
    unsigned int typeCrc; // offset 0x18, size 0x4
    unsigned char typeIndex; // offset 0x1C, size 0x1
    unsigned char animsOfType; // offset 0x1D, size 0x1
    unsigned short flags; // offset 0x1E, size 0x2
    unsigned int noofNodes; // offset 0x20, size 0x4
    unsigned int index; // offset 0x24, size 0x4
    struct _TBActorAnimNode * * animNode; // offset 0x28, size 0x4
    char * name; // offset 0x2C, size 0x4
};
// total size: 0x134
struct _TBActorNode {
    // Inner declarations
    union {
        struct _TBActorInfo_SoftBone softBone; // offset 0x0, size 0x50
        struct _TBActorInfo_Mesh mesh; // offset 0x0, size 0x90
        struct _TBActorInfo_AsyncMesh asyncMesh; // offset 0x0, size 0x90
        struct _TBActorInfo_Link link; // offset 0x0, size 0x1
    };

    // Members
    struct _TBAnimQuantisation3 positionQuantisationNode; // offset 0x0, size 0x20
    struct _TBAnimQuantisation4 orientationQuantisationNode; // offset 0x20, size 0x30
    struct _TBAnimQuantisation3 scaleQuantisationNode; // offset 0x50, size 0x20
    unsigned char type; // offset 0x70, size 0x1
    unsigned char flags; // offset 0x71, size 0x1
    unsigned short pad; // offset 0x72, size 0x2
    unsigned int nodeIndex; // offset 0x74, size 0x4
    unsigned int crc; // offset 0x78, size 0x4
    int noofActAnimEvents; // offset 0x7C, size 0x4
    union {
        struct _TBActorInfo_SoftBone softBone; // offset 0x0, size 0x50
        struct _TBActorInfo_Mesh mesh; // offset 0x0, size 0x90
        struct _TBActorInfo_AsyncMesh asyncMesh; // offset 0x0, size 0x90
        struct _TBActorInfo_Link link; // offset 0x0, size 0x1
    }; // offset 0x80, size 0x90
    struct _TBActorNode * next; // offset 0x110, size 0x4
    struct _TBActorNode * prev; // offset 0x114, size 0x4
    struct _TBActorNode * parent; // offset 0x118, size 0x4
    struct _TBActorNode * children; // offset 0x11C, size 0x4
    struct _TBActorAnimEvent * actAnimEvents; // offset 0x120, size 0x4
    struct _TBMorphHeader * morphTargetData; // offset 0x124, size 0x4
    struct _TBPatchHeader * patchData; // offset 0x128, size 0x4
    struct _TBActor * actor; // offset 0x12C, size 0x4
    char * name; // offset 0x130, size 0x4
};
// total size: 0x14
struct _TBActorAnimNode {
    // Members
    unsigned short noofPositionKeys; // offset 0x0, size 0x2
    unsigned short noofScaleKeys; // offset 0x2, size 0x2
    unsigned short noofOrientationKeys; // offset 0x4, size 0x2
    unsigned char pad; // offset 0x6, size 0x1
    unsigned char flags; // offset 0x7, size 0x1
    struct _TBAnimKey3 * positionKeys; // offset 0x8, size 0x4
    struct _TBAnimKey3 * scaleKeys; // offset 0xC, size 0x4
    struct _TBAnimKey4 * orientationKeys; // offset 0x10, size 0x4
};
// total size: 0x8
struct _TBAnimKey3 {
    // Members
    unsigned short time; // offset 0x0, size 0x2
    unsigned short x; // offset 0x2, size 0x2
    unsigned short y; // offset 0x4, size 0x2
    unsigned short z; // offset 0x6, size 0x2
};
// total size: 0xF4
struct _TBActor {
    // Members
    struct _TBResourceInfo resInfo; // offset 0x0, size 0x20
    struct _TBSoftSkin softSkin; // offset 0x20, size 0x80
    struct _TBActorNode * rootNode; // offset 0xA0, size 0x4
    unsigned int flags; // offset 0xA4, size 0x4
    unsigned int lastFrame; // offset 0xA8, size 0x4
    int maxPrimVertices; // offset 0xAC, size 0x4
    int maxTotalPrimVertices; // offset 0xB0, size 0x4
    struct _TBActorAnimSegment * * animSegments; // offset 0xB4, size 0x4
    unsigned int numAnimSegments; // offset 0xB8, size 0x4
    float maxRadius; // offset 0xBC, size 0x4
    float xMin; // offset 0xC0, size 0x4
    float xMax; // offset 0xC4, size 0x4
    float yMin; // offset 0xC8, size 0x4
    float yMax; // offset 0xCC, size 0x4
    float zMin; // offset 0xD0, size 0x4
    float zMax; // offset 0xD4, size 0x4
    unsigned char matrixPaletteSize; // offset 0xD8, size 0x1
    unsigned char vertexType; // offset 0xD9, size 0x1
    unsigned short drawSync; // offset 0xDA, size 0x2
    char * animEventData; // offset 0xDC, size 0x4
    char * animSegmentNames; // offset 0xE0, size 0x4
    char * nodeNames; // offset 0xE4, size 0x4
    unsigned int lastFrameCount; // offset 0xE8, size 0x4
    struct _TBActorNode * * nodePtrs; // offset 0xEC, size 0x4
    unsigned char lightmapFormat; // offset 0xF0, size 0x1
    unsigned char noofNodes; // offset 0xF1, size 0x1
    unsigned char blendModeFlags; // offset 0xF2, size 0x1
    char pad; // offset 0xF3, size 0x1
};
// total size: 0x20
struct _TBAnimQuantisation3 {
    // Members
    float xQuantBase; // offset 0x0, size 0x4
    float yQuantBase; // offset 0x4, size 0x4
    float zQuantBase; // offset 0x8, size 0x4
    unsigned short lastKeyOffset; // offset 0xC, size 0x2
    short pad; // offset 0xE, size 0x2
    float xQuantScale; // offset 0x10, size 0x4
    float yQuantScale; // offset 0x14, size 0x4
    float zQuantScale; // offset 0x18, size 0x4
    void * lastAnimTrack; // offset 0x1C, size 0x4
};
// total size: 0x30
struct _TBAnimQuantisation4 {
    // Members
    float xQuantBase; // offset 0x0, size 0x4
    float yQuantBase; // offset 0x4, size 0x4
    float zQuantBase; // offset 0x8, size 0x4
    float wQuantBase; // offset 0xC, size 0x4
    float xQuantScale; // offset 0x10, size 0x4
    float yQuantScale; // offset 0x14, size 0x4
    float zQuantScale; // offset 0x18, size 0x4
    float wQuantScale; // offset 0x1C, size 0x4
    unsigned short lastKeyOffset; // offset 0x20, size 0x2
    short pad; // offset 0x22, size 0x2
    int pad2[2]; // offset 0x24, size 0x8
    void * lastAnimTrack; // offset 0x2C, size 0x4
};
// total size: 0x50
struct _TBActorInfo_SoftBone {
    // Members
    float invBoneReference[4][4]; // offset 0x0, size 0x40
    int matrixPaletteIndex; // offset 0x40, size 0x4
    int pad2[3]; // offset 0x44, size 0xC
};
// total size: 0x90
struct _TBActorInfo_Mesh {
    // Members
    struct _TBMesh mesh; // offset 0x0, size 0x70
    struct _TBStoredGeometry storedGeometry; // offset 0x70, size 0x20
};
// total size: 0x90
struct _TBActorInfo_AsyncMesh {
    // Members
    struct _TBMesh asyncMesh; // offset 0x0, size 0x70
    struct _TBStoredGeometry storedGeometry; // offset 0x70, size 0x20
};
// total size: 0x1
struct _TBActorInfo_Link {};
// total size: 0x10
struct _TBActorAnimEvent {
    // Inner declarations
    union {
        char * argument; // offset 0x0, size 0x4
        void * actions; // offset 0x0, size 0x4
    };

    // Members
    int frame; // offset 0x0, size 0x4
    char * event; // offset 0x4, size 0x4
    union {
        char * argument; // offset 0x0, size 0x4
        void * actions; // offset 0x0, size 0x4
    }; // offset 0x8, size 0x4
    char type; // offset 0xC, size 0x1
    unsigned char noofActions; // offset 0xD, size 0x1
    char pad[2]; // offset 0xE, size 0x2
};
// total size: 0x40
struct _TBMorphHeader {
    // Members
    unsigned int targets; // offset 0x0, size 0x4
    unsigned int noofVerts; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    unsigned int pad; // offset 0xC, size 0x4
    unsigned int first; // offset 0x10, size 0x4
    unsigned int last; // offset 0x14, size 0x4
    unsigned int pad2[2]; // offset 0x18, size 0x8
    struct _TBAnimTrackTarget3 morpher; // offset 0x20, size 0x20
};
// total size: 0x10
struct _TBPatchHeader {
    // Members
    unsigned int patches; // offset 0x0, size 0x4
    unsigned int pad[3]; // offset 0x4, size 0xC
};
// total size: 0xA
struct _TBAnimKey4 {
    // Members
    unsigned short time; // offset 0x0, size 0x2
    unsigned short x; // offset 0x2, size 0x2
    unsigned short y; // offset 0x4, size 0x2
    unsigned short z; // offset 0x6, size 0x2
    unsigned short w; // offset 0x8, size 0x2
};
// total size: 0x80
struct _TBSoftSkin {
    // Inner declarations
    union {
        unsigned char * vertices; // offset 0x0, size 0x4
        struct _TBVertexBuffer * vertexBuffer; // offset 0x0, size 0x4
        struct _TDLVertexExtra * vertExtra; // offset 0x0, size 0x4
    };
    union {
        struct _TBDLSegment * displaySegments; // offset 0x0, size 0x4
        struct _TBDLTextureOffset * displayTextureOffsets; // offset 0x0, size 0x4
    };

    // Members
    unsigned int noofVertices; // offset 0x0, size 0x4
    union {
        unsigned char * vertices; // offset 0x0, size 0x4
        struct _TBVertexBuffer * vertexBuffer; // offset 0x0, size 0x4
        struct _TDLVertexExtra * vertExtra; // offset 0x0, size 0x4
    }; // offset 0x4, size 0x4
    unsigned int noofBatches; // offset 0x8, size 0x4
    struct _TBSoftSkinBatch * batches; // offset 0xC, size 0x4
    struct _TBSoftSkinPrim * primitives; // offset 0x10, size 0x4
    unsigned int noofSolidBatches; // offset 0x14, size 0x4
    unsigned int noofCKeyBatches; // offset 0x18, size 0x4
    unsigned int noofAlphaBatches; // offset 0x1C, size 0x4
    int firstCKeyPrim; // offset 0x20, size 0x4
    int firstAlphaPrim; // offset 0x24, size 0x4
    int firstCKeyPrimVert; // offset 0x28, size 0x4
    int firstAlphaPrimVert; // offset 0x2C, size 0x4
    unsigned char bonesPerVertex; // offset 0x30, size 0x1
    unsigned char pad; // offset 0x31, size 0x1
    unsigned short flags; // offset 0x32, size 0x2
    union {
        struct _TBDLSegment * displaySegments; // offset 0x0, size 0x4
        struct _TBDLTextureOffset * displayTextureOffsets; // offset 0x0, size 0x4
    }; // offset 0x34, size 0x4
    unsigned char * displayList; // offset 0x38, size 0x4
    unsigned int displayListSize; // offset 0x3C, size 0x4
    unsigned char * positionData; // offset 0x40, size 0x4
    unsigned char * normalData; // offset 0x44, size 0x4
    unsigned char * textureCoordData; // offset 0x48, size 0x4
    unsigned char * colourData; // offset 0x4C, size 0x4
    unsigned int positions; // offset 0x50, size 0x4
    unsigned int normals; // offset 0x54, size 0x4
    struct _TBMorphHeader * morphTargetData; // offset 0x58, size 0x4
    struct _TBPatchHeader * patchData; // offset 0x5C, size 0x4
    unsigned char * vertNormExtra; // offset 0x60, size 0x4
    unsigned int padding[7]; // offset 0x64, size 0x1C
};
// total size: 0x70
struct _TBMesh {
    // Inner declarations
    union {
        unsigned char * vertices; // offset 0x0, size 0x4
        struct _TBVertexBuffer * vertexBuffer; // offset 0x0, size 0x4
    };
    union {
        struct _TBDLSegment * displaySegments; // offset 0x0, size 0x4
        struct _TBDLTextureOffset * displayTextureOffsets; // offset 0x0, size 0x4
    };

    // Members
    int noofVertices; // offset 0x0, size 0x4
    union {
        unsigned char * vertices; // offset 0x0, size 0x4
        struct _TBVertexBuffer * vertexBuffer; // offset 0x0, size 0x4
    }; // offset 0x4, size 0x4
    int noofBatches; // offset 0x8, size 0x4
    struct _TBMeshBatch * batches; // offset 0xC, size 0x4
    struct _TBMeshPrim * primitives; // offset 0x10, size 0x4
    unsigned int noofSolidBatches; // offset 0x14, size 0x4
    unsigned int noofCKeyBatches; // offset 0x18, size 0x4
    unsigned int noofAlphaBatches; // offset 0x1C, size 0x4
    int firstCKeyPrim; // offset 0x20, size 0x4
    int firstAlphaPrim; // offset 0x24, size 0x4
    int firstCKeyPrimVert; // offset 0x28, size 0x4
    int firstAlphaPrimVert; // offset 0x2C, size 0x4
    float * svVerts; // offset 0x30, size 0x4
    struct _TBShadowVolumeFace * svFaces; // offset 0x34, size 0x4
    struct _TBShadowVolumeEdge * svEdges; // offset 0x38, size 0x4
    int svNoofFaces; // offset 0x3C, size 0x4
    unsigned char * svEdgeFlags; // offset 0x40, size 0x4
    int svNoofEdges; // offset 0x44, size 0x4
    int svNoofVerts; // offset 0x48, size 0x4
    unsigned int flags; // offset 0x4C, size 0x4
    unsigned char * positionData; // offset 0x50, size 0x4
    unsigned char * normalData; // offset 0x54, size 0x4
    unsigned char * textureCoordData; // offset 0x58, size 0x4
    unsigned char * colourData; // offset 0x5C, size 0x4
    unsigned char * displayList; // offset 0x60, size 0x4
    unsigned int displayListSize; // offset 0x64, size 0x4
    union {
        struct _TBDLSegment * displaySegments; // offset 0x0, size 0x4
        struct _TBDLTextureOffset * displayTextureOffsets; // offset 0x0, size 0x4
    }; // offset 0x68, size 0x4
    unsigned int pad; // offset 0x6C, size 0x4
};
// total size: 0x20
struct _TBStoredGeometry {
    // Members
    int noofVertices; // offset 0x0, size 0x4
    int noofTriangles; // offset 0x4, size 0x4
    int pad[2]; // offset 0x8, size 0x8
    float * dataStreams[4]; // offset 0x10, size 0x10
};
// total size: 0x20
struct _TBAnimTrackTarget3 {
    // Members
    float quantBase[3]; // offset 0x0, size 0xC
    unsigned short noofKeys; // offset 0xC, size 0x2
    unsigned short lastKeyOffset; // offset 0xE, size 0x2
    float quantScale[3]; // offset 0x10, size 0xC
    struct _TBAnimKeyTarget3 * keys; // offset 0x1C, size 0x4
};
// total size: 0x20
struct _TBVertexBuffer {
    // Members
    struct _TBPrimVertex * verts; // offset 0x0, size 0x4
    int noofVertices; // offset 0x4, size 0x4
    int vertexSize; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    int vertexType; // offset 0x10, size 0x4
    struct _TBVertexBuffer * next; // offset 0x14, size 0x4
    struct _TBVertexBuffer * prev; // offset 0x18, size 0x4
    unsigned int lastFlipUsed; // offset 0x1C, size 0x4
};
// total size: 0x28
struct _TDLVertexExtra {
    // Inner declarations
    union {
        unsigned int matrixIndices; // offset 0x0, size 0x4
        unsigned char matrixIndex[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    union {
        unsigned int matrixIndices; // offset 0x0, size 0x4
        unsigned char matrixIndex[4]; // offset 0x0, size 0x4
    } mtx; // offset 0xC, size 0x4
    float weight[3]; // offset 0x10, size 0xC
    float xn; // offset 0x1C, size 0x4
    float yn; // offset 0x20, size 0x4
    float zn; // offset 0x24, size 0x4
};
// total size: 0x10
struct _TBSoftSkinBatch {
    // Inner declarations
    union {
        struct _TBTexture * texture1; // offset 0x0, size 0x4
        unsigned int textureCRC1; // offset 0x0, size 0x4
    };
    union {
        struct _TBTexture * texture2; // offset 0x0, size 0x4
        unsigned int textureCRC2; // offset 0x0, size 0x4
    };

    // Members
    int noofPrims; // offset 0x0, size 0x4
    union {
        struct _TBTexture * texture1; // offset 0x0, size 0x4
        unsigned int textureCRC1; // offset 0x0, size 0x4
    }; // offset 0x4, size 0x4
    union {
        struct _TBTexture * texture2; // offset 0x0, size 0x4
        unsigned int textureCRC2; // offset 0x0, size 0x4
    }; // offset 0x8, size 0x4
    unsigned int pad; // offset 0xC, size 0x4
};
// total size: 0x12
struct _TBSoftSkinPrim {
    // Members
    unsigned char primType; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned short noofVertices; // offset 0x2, size 0x2
    unsigned char noofMatrices; // offset 0x4, size 0x1
    unsigned char noofDrawPrims; // offset 0x5, size 0x1
    unsigned short pad; // offset 0x6, size 0x2
    unsigned char matrixIndices[10]; // offset 0x8, size 0xA
};
// total size: 0x8
struct _TBDLSegment {
    // Members
    unsigned int offset; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x8
struct _TBDLTextureOffset {
    // Members
    unsigned int offset1; // offset 0x0, size 0x4
    unsigned int offset2; // offset 0x4, size 0x4
};
// total size: 0x10
struct _TBMeshBatch {
    // Inner declarations
    union {
        unsigned int textureCRC1; // offset 0x0, size 0x4
        struct _TBTexture * texture1; // offset 0x0, size 0x4
    };
    union {
        unsigned int textureCRC2; // offset 0x0, size 0x4
        struct _TBTexture * texture2; // offset 0x0, size 0x4
    };

    // Members
    int noofPrims; // offset 0x0, size 0x4
    union {
        unsigned int textureCRC1; // offset 0x0, size 0x4
        struct _TBTexture * texture1; // offset 0x0, size 0x4
    }; // offset 0x4, size 0x4
    union {
        unsigned int textureCRC2; // offset 0x0, size 0x4
        struct _TBTexture * texture2; // offset 0x0, size 0x4
    }; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
};
// total size: 0x8
struct _TBMeshPrim {
    // Members
    unsigned char primType; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned short noofVertices; // offset 0x2, size 0x2
    unsigned short noofDrawPrims; // offset 0x4, size 0x2
    unsigned short pad; // offset 0x6, size 0x2
};
// total size: 0x18
struct _TBShadowVolumeFace {
    // Members
    float xNorm; // offset 0x0, size 0x4
    float yNorm; // offset 0x4, size 0x4
    float zNorm; // offset 0x8, size 0x4
    unsigned short v1; // offset 0xC, size 0x2
    unsigned short v2; // offset 0xE, size 0x2
    unsigned short v3; // offset 0x10, size 0x2
    unsigned short pad; // offset 0x12, size 0x2
    unsigned int sign; // offset 0x14, size 0x4
};
// total size: 0x8
struct _TBShadowVolumeEdge {
    // Members
    unsigned short vert1; // offset 0x0, size 0x2
    unsigned short vert2; // offset 0x2, size 0x2
    unsigned short face1; // offset 0x4, size 0x2
    unsigned short face2; // offset 0x6, size 0x2
};
// total size: 0xC
struct _TBAnimKeyTarget3 {
    // Members
    unsigned short time; // offset 0x0, size 0x2
    unsigned short weight[3]; // offset 0x2, size 0x6
    unsigned char target[3]; // offset 0x8, size 0x3
    unsigned char pad; // offset 0xB, size 0x1
};
// total size: 0x24
struct _TBPrimVertex {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float xn; // offset 0xC, size 0x4
    float yn; // offset 0x10, size 0x4
    float zn; // offset 0x14, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0x18, size 0x4
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
inline int baEvalAnimScale(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
    // Local variables
    struct _TBActorAnimNode * animNodeData;
    int noofKeys;
    struct _TBAnimKey3 * keys;
}

inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
    // Local variables
    struct _TBActorAnimNode * animNodeData;
    int noofKeys;
    struct _TBAnimKey4 * keys;
}

inline int baEvalAnimPositionSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
    /* anonymous block */ {
        struct _TBActorAnimNode * animNodeData;
    }
}

inline int baEvalAnimScaleSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
    /* anonymous block */ {
        struct _TBActorAnimNode * animNodeData;
    }
}

inline int baEvalAnimOrientationSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
    /* anonymous block */ {
        struct _TBActorAnimNode * animNodeData;
    }
}

inline struct _TBActorAnimSegment * baFindAnimSegment(struct _TBActor * actor, char * segName) {}

inline void baSetGlobalAlpha(int newAlphaScale) {}

inline void bSetGlobalAlphaOverride(int newAlphaOverride) {}

inline void baSetGlobalAlphaOverride(int newAlphaOverride) {}

inline void bEnableStencilShadows() {}

inline void bDisableStencilShadows() {}

inline void baSetStencilShadowBias(float bias) {}

inline void baSetStencilShadowLength(float length) {}

inline void baSetStencilShadowLight(struct _TBLightsource * lightPtr) {}

inline void baSetStencilShadowColour(int r, int g, int b) {}

inline void baResetEnvTextureMatrix() {}

inline void baGetNodesWorldPosition(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float * pos, float * offset) {}

// total size: 0x1C0
struct _TBActorInstance {
    // Members
    float objectToWorld[4][4]; // offset 0x0, size 0x40
    float objectToWorldNoScale[4][4]; // offset 0x40, size 0x40
    float worldToObject[4][4]; // offset 0x80, size 0x40
    float orientationMatrix[4][4]; // offset 0xC0, size 0x40
    float position[4]; // offset 0x100, size 0x10
    float scale[4]; // offset 0x110, size 0x10
    float orientation[4]; // offset 0x120, size 0x10
    unsigned short flags; // offset 0x130, size 0x2
    unsigned short bbVisible; // offset 0x132, size 0x2
    unsigned char lastQueue; // offset 0x134, size 0x1
    unsigned char currentQueue; // offset 0x135, size 0x1
    unsigned char alpha; // offset 0x136, size 0x1
    unsigned char queueSize; // offset 0x137, size 0x1
    int targetFrame; // offset 0x138, size 0x4
    float timeDeltaLast; // offset 0x13C, size 0x4
    float boundsMin[4]; // offset 0x140, size 0x10
    float boundsMax[4]; // offset 0x150, size 0x10
    float motionVector[4]; // offset 0x160, size 0x10
    float motionOrientation[4]; // offset 0x170, size 0x10
    enum EBActRenderMode renderMode[3]; // offset 0x180, size 0xC
    int callbackResult; // offset 0x18C, size 0x4
    void * renderParms[3]; // offset 0x190, size 0xC
    union UBContext32 context; // offset 0x19C, size 0x4
    struct _TBActor * actor; // offset 0x1A0, size 0x4
    struct _TBActorNodeInstance * rootNodeInstance; // offset 0x1A4, size 0x4
    struct _TBQueuedAnim * animQueue; // offset 0x1A8, size 0x4
    struct _TBActorNodeInstance * motionBone; // offset 0x1AC, size 0x4
    float * matrixPalette; // offset 0x1B0, size 0x4
    void * feActorResourcePtr; // offset 0x1B4, size 0x4
    struct _TBAnimTreeNode * animTreeRoot; // offset 0x1B8, size 0x4
    struct _TBAnimTreeNode * animTreeNodes; // offset 0x1BC, size 0x4
};
// total size: 0x180
struct _TBActorNodeInstance {
    // Members
    unsigned short nodeIndex; // offset 0x0, size 0x2
    unsigned short parentNodeIndex; // offset 0x2, size 0x2
    int animNode; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    float blendVal; // offset 0xC, size 0x4
    struct _TBAnimState animState; // offset 0x10, size 0x50
    unsigned int noofNodes; // offset 0x60, size 0x4
    unsigned int crc; // offset 0x64, size 0x4
    unsigned int pad[2]; // offset 0x68, size 0x8
    float nodeToLocalWorld[4][4]; // offset 0x70, size 0x40
    float inheritedXForm[4][4]; // offset 0xB0, size 0x40
    float referenceMatrix[4][4]; // offset 0xF0, size 0x40
    float savedPosition[4]; // offset 0x130, size 0x10
    float savedScale[4]; // offset 0x140, size 0x10
    float savedOrientation[4]; // offset 0x150, size 0x10
    struct _TBActorNodeInstance * parent; // offset 0x160, size 0x4
    struct _TBActorNodeInstance * prev; // offset 0x164, size 0x4
    struct _TBActorNodeInstance * next; // offset 0x168, size 0x4
    struct _TBActorNodeInstance * children; // offset 0x16C, size 0x4
    struct _TBActorNodeInstance * nextInList; // offset 0x170, size 0x4
    struct _TBActorNode * actorNode; // offset 0x174, size 0x4
    union UBContext32 context; // offset 0x178, size 0x4
    int (* controller)(struct _TBActorInstance *, struct _TBActorNodeInstance *, void *); // offset 0x17C, size 0x4
};
enum EBActRenderMode {
    BACTRENDERMODE_NONE = 0,
    BACTRENDERMODE_NORMAL = 1,
    BACTRENDERMODE_CARTOONLIT = 2,
    BACTRENDERMODE_ZONLY = 3,
    BACTRENDERMODE_OUTLINED = 4,
    BACTRENDERMODE_OUTLINED_VERTEXCOLOUR = 5,
    BACTRENDERMODE_SHELL = 6,
    BACTRENDERMODE_ENVIRONMENT = 7,
    BACTRENDERMODE_CUSTOM = 8,
    BACTRENDERMODE_SHADOW = 9,
    BACTRENDERMODE_OUTLINED_TEXTURE = 10,
    BACTRENDERMODE_LINEDRAW = 11,
    BACTRENDERMODE_NORMALVECTOR = 12,
    BACTRENDERMODE_SOLIDTEXTURE = 13,
    BACTRENDERMODE_SOLIDTEXTUREANDVERTEX = 14,
    BACTRENDERMODE_NOVERTEXCOLOUR = 15,
    BACTRENDERMODE_ALPHAEDGE = 16,
    BACTRENDERMODE_NOOF = 17,
};
// total size: 0x2C
struct _TBQueuedAnim {
    // Members
    unsigned char active; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    enum EBAnimTypes type; // offset 0x4, size 0x4
    struct _TBActorAnimSegment * animSeg1; // offset 0x8, size 0x4
    float t; // offset 0xC, size 0x4
    float deltaT; // offset 0x10, size 0x4
    int frame1; // offset 0x14, size 0x4
    int deltaFrame1; // offset 0x18, size 0x4
    int (* callback)(enum EBQueueCallbackReason, struct _TBActorInstance *, struct _TBActorAnimSegment *, void *); // offset 0x1C, size 0x4
    void * context; // offset 0x20, size 0x4
    struct _TBActorNodeInstance * srcNodeInstance; // offset 0x24, size 0x4
    int repeatCount; // offset 0x28, size 0x4
};
// total size: 0x64
struct _TBAnimTreeNode {
    // Inner declarations
    union {
        struct _TBAnimTreeAnimState * nodeStates; // offset 0x0, size 0x4
        struct _TBAnimTreeAnimStateNoScale * nodeStatesNoScale; // offset 0x0, size 0x4
    };
    union {
        struct _TBActorAnimSegment * segment; // offset 0x0, size 0x4
        unsigned int stateCRC; // offset 0x0, size 0x4
    };

    // Members
    unsigned char type; // offset 0x0, size 0x1
    char index; // offset 0x1, size 0x1
    char queuedAnimNode; // offset 0x2, size 0x1
    char forceWeightsPriority; // offset 0x3, size 0x1
    union {
        struct _TBAnimTreeAnimState * nodeStates; // offset 0x0, size 0x4
        struct _TBAnimTreeAnimStateNoScale * nodeStatesNoScale; // offset 0x0, size 0x4
    }; // offset 0x4, size 0x4
    unsigned char * nodeBlends; // offset 0x8, size 0x4
    struct _TBAnimTreeNode * prev; // offset 0xC, size 0x4
    struct _TBAnimTreeNode * next; // offset 0x10, size 0x4
    struct _TBAnimTreeNode * parent; // offset 0x14, size 0x4
    struct _TBAnimTreeNode * children; // offset 0x18, size 0x4
    float blendTarget; // offset 0x1C, size 0x4
    float blend; // offset 0x20, size 0x4
    float blendDelta; // offset 0x24, size 0x4
    float t; // offset 0x28, size 0x4
    float deltaT; // offset 0x2C, size 0x4
    union {
        struct _TBActorAnimSegment * segment; // offset 0x0, size 0x4
        unsigned int stateCRC; // offset 0x0, size 0x4
    }; // offset 0x30, size 0x4
    signed char repeatCount; // offset 0x34, size 0x1
    unsigned char callbackFlags; // offset 0x35, size 0x1
    unsigned short flags; // offset 0x36, size 0x2
    int (* callback)(enum EBAnimTreeCallbackReason, struct _TBActorInstance *, struct _TBAnimTreeNode *, void *); // offset 0x38, size 0x4
    void * context; // offset 0x3C, size 0x4
    float motionVector[4]; // offset 0x40, size 0x10
    float motionOrientation[4]; // offset 0x50, size 0x10
    float blendOutTime; // offset 0x60, size 0x4
};
// total size: 0x50
struct _TBAnimState {
    // Members
    float position[4]; // offset 0x0, size 0x10
    float scale[4]; // offset 0x10, size 0x10
    float orientation[4]; // offset 0x20, size 0x10
    float morphWeights[6]; // offset 0x30, size 0x18
    unsigned char targets[6]; // offset 0x48, size 0x6
    unsigned char pad[2]; // offset 0x4E, size 0x2
};
enum EBAnimTypes {
    BANIMTYPE_INVALID = 0,
    BANIMTYPE_NORMAL = 1,
    BANIMTYPE_BLENDSTATE = 2,
    BANIMTYPE_FORCE32 = 2147483647,
};
// total size: 0x30
struct _TBAnimTreeAnimState {
    // Members
    float position[4]; // offset 0x0, size 0x10
    float scale[4]; // offset 0x10, size 0x10
    float orientation[4]; // offset 0x20, size 0x10
};
// total size: 0x20
struct _TBAnimTreeAnimStateNoScale {
    // Members
    float position[4]; // offset 0x0, size 0x10
    float orientation[4]; // offset 0x10, size 0x10
};
enum EBQueueCallbackReason {
    BANIMQUEUEREASON_ENTRYCOMPLETE = 0,
    BANIMQUEUEREASON_FLUSHED = 1,
    BANIMQUEUEREASON_STARTED = 2,
    BANIMQUEUEREASON_LOOPED = 3,
};
enum EBAnimTreeCallbackReason {
    BANIMTREEREASON_COMPLETE = 0,
    BANIMTREEREASON_FLUSHED = 1,
    BANIMTREEREASON_STARTED = 2,
    BANIMTREEREASON_LOOPED = 3,
    BANIMTREEREASON_PREUPDATE = 4,
    BANIMTREEREASON_POSTUPDATE = 5,
    BANIMTREEREASON_BLENDTARGETREACHED = 6,
    BANIMTREEREASON_TYPECHANGED = 7,
};
inline void baGetNodesWorldOrientation(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float * orientation) {
    // Local variables
    float xform[4][4];
}

inline void baGetNodesWorldPositionOrientation(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float * pos, float * orientation) {
    // Local variables
    float xform[4][4];
}

inline void baGetNodesWorldPositionOrientationScale(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float * pos, float * orientation, float * scale) {
    // Local variables
    float xform[4][4];
}

inline void baGetNodesWorldMatrix(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float (* nodeToWorld)[4]) {}

inline void baGetPositionInNodeSpace(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float * pos) {
    // Local variables
    float xform[4][4];
    float ixform[4][4];
}

inline void baGetNodesLocalPosition(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float * pos) {}

inline void baGetNodesLocalOrientation(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float * orientation) {}

inline void baGetNodesLocalMatrix(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float (* nodeToLocalWorld)[4]) {}

inline void baSetNodesWorldMatrix(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * instanceNode, float (* newNodeToWorldMatrix)[4]) {}

inline void baSetNodesWorldPositionOrientation(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * instanceNode, float * newWorldPosition, float * newWorldOrientation) {
    // Local variables
    float newNodeToWorldMatrix[4][4];
}

inline void baSetNodesParentSpaceMatrix(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * instanceNode, float (* newNodeToParentMatrix)[4]) {}

inline void baSetNodesParentSpacePositionOrientation(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * instanceNode, float * newPosition, float * newOrientation) {
    // Local variables
    float newNodeToParentMatrix[4][4];
}

inline void baNodeLookAtX(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float * worldFocusPoint, float zConstraintNeg, float zConstraintPos, float zAngleOffset, float yConstraintNeg, float yConstraintPos, float yAngleOffset, float t, unsigned int flags) {}

inline int baGetNumberOfActiveLights() {}

inline int bsPlayPositionalAudioStream(struct _TBAudioStream * stream, float * pos, unsigned int flags, unsigned int volume, unsigned int frequency, void (* callback)(struct _TBAudioStream *, enum EBSoundStreamCallbackReason, void *, void *), void * context, float minDistance, float maxDistance, int startSamplePos) {}

// total size: 0x110
struct _TBAudioStream {
    // Members
    struct _TBResourceInfo resInfo; // offset 0x0, size 0x20
    int noofSamples; // offset 0x20, size 0x4
    int originalFrequency; // offset 0x24, size 0x4
    int bitDepth; // offset 0x28, size 0x4
    unsigned int originalFlags; // offset 0x2C, size 0x4
    int groupId; // offset 0x30, size 0x4
    struct _TBPackageIndex * package; // offset 0x34, size 0x4
    unsigned int pakOffset; // offset 0x38, size 0x4
    unsigned char * data; // offset 0x3C, size 0x4
    struct _TBAudioStreamBuffer * soundBuffer[4]; // offset 0x40, size 0x10
    int volume[4]; // offset 0x50, size 0x10
    int pan[4]; // offset 0x60, size 0x10
    int noofStreams; // offset 0x70, size 0x4
    unsigned int startPlaybackOffset; // offset 0x74, size 0x4
    int noofBlocks; // offset 0x78, size 0x4
    int nextBlock; // offset 0x7C, size 0x4
    int nextWritePos; // offset 0x80, size 0x4
    struct _TBEventClient * backgroundDMAEvent; // offset 0x84, size 0x4
    int noofChannels; // offset 0x88, size 0x4
    int adpcmPacketsRead; // offset 0x8C, size 0x4
    enum EBSoundStreamType type; // offset 0x90, size 0x4
    struct _TBEventClient * backgroundLoadEvent; // offset 0x94, size 0x4
    struct _TBFileHandleType * backgroundLoadHandle; // offset 0x98, size 0x4
    enum EBBkgChannel backgroundChannel; // offset 0x9C, size 0x4
    unsigned int loading; // offset 0xA0, size 0x4
    volatile enum EBSoundStreamStatus status; // offset 0xA4, size 0x4
    volatile unsigned int loadsPending; // offset 0xA8, size 0x4
    float durationMs; // offset 0xAC, size 0x4
    int frequency; // offset 0xB0, size 0x4
    volatile unsigned int flags; // offset 0xB4, size 0x4
    void (* callback)(struct _TBAudioStream *, enum EBSoundStreamCallbackReason, void *, void *); // offset 0xB8, size 0x4
    void * context; // offset 0xBC, size 0x4
    unsigned int noofMarkers; // offset 0xC0, size 0x4
    int * markers; // offset 0xC4, size 0x4
    unsigned int streamNumber; // offset 0xC8, size 0x4
    unsigned int nextPlayBuffer; // offset 0xCC, size 0x4
    int lastDecodeBuffer; // offset 0xD0, size 0x4
    int nextDecodeWritePos; // offset 0xD4, size 0x4
    int noofAdpcmPackets; // offset 0xD8, size 0x4
    int noofActualSamples; // offset 0xDC, size 0x4
    struct _TBAudioStreamMarker * markersEx; // offset 0xE0, size 0x4
    unsigned int noofMarkersEx; // offset 0xE4, size 0x4
    float prevCursorPos; // offset 0xE8, size 0x4
    float cursorPos; // offset 0xEC, size 0x4
    struct _TBADPCMHeader * adpcmHeader[2][4]; // offset 0xF0, size 0x20
};
enum EBSoundStreamCallbackReason {
    BAUDIOSTREAM_PRESEEK_FINISHED = 0,
    BAUDIOSTREAM_FINISHED = 1,
    BAUDIOSTREAM_LOOPED = 2,
    BAUDIOSTREAM_MARKER = 3,
    BAUDIOSTREAM_3DPOSITION = 4,
};
// total size: 0x150
struct _TBPackageIndex {
    // Members
    struct _TBPackageID id; // offset 0x0, size 0x4
    unsigned int pauSize; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    int noofFiles; // offset 0xC, size 0x4
    unsigned int indexOffset; // offset 0x10, size 0x4
    unsigned int tagOffset; // offset 0x14, size 0x4
    int noofTags; // offset 0x18, size 0x4
    unsigned int pad; // offset 0x1C, size 0x4
    int blockMapOffset; // offset 0x20, size 0x4
    int blockMapSize; // offset 0x24, size 0x4
    unsigned int filenameTableOffset; // offset 0x28, size 0x4
    unsigned int filenameTableSize; // offset 0x2C, size 0x4
    unsigned int indexSize; // offset 0x30, size 0x4
    unsigned int startSector; // offset 0x34, size 0x4
    unsigned int buildNumber; // offset 0x38, size 0x4
    unsigned int noofFilesUsingDMA; // offset 0x3C, size 0x4
    char pakFilename[256]; // offset 0x40, size 0x100
    struct _TBFileIndex * index; // offset 0x140, size 0x4
    unsigned int * tags; // offset 0x144, size 0x4
    struct _TBFileHandleType * fp; // offset 0x148, size 0x4
    unsigned char * data; // offset 0x14C, size 0x4
};
// total size: 0x10
struct _TBAudioStreamBuffer {
    // Members
    struct _AXVPB * sample[2]; // offset 0x0, size 0x8
    struct _TARAMBlock * aram[2]; // offset 0x8, size 0x8
};
// total size: 0x20
struct _TBEventClient {
    // Inner declarations
    union {
        struct _TBEventClientCallback callback; // offset 0x0, size 0x8
        struct _TBEventClientQueue queue; // offset 0x0, size 0x10
    };

    // Members
    struct _TBEventClient * next; // offset 0x0, size 0x4
    struct _TBEventClient * prev; // offset 0x4, size 0x4
    enum EBEventClientType type; // offset 0x8, size 0x4
    struct _TBEvent * event; // offset 0xC, size 0x4
    union {
        struct _TBEventClientCallback callback; // offset 0x0, size 0x8
        struct _TBEventClientQueue queue; // offset 0x0, size 0x10
    }; // offset 0x10, size 0x10
};
enum EBSoundStreamType {
    BSTREAMTYPE_ADPCM = 0,
    BSTREAMTYPE_WMA = 1,
    BSTREAMTYPE_SURROUND_51_AC3 = 2,
    BSTREAMTYPE_SURROUND_51_ADPCM = 3,
};
// total size: 0x40
struct _TBFileHandleType {
    // Members
    struct DVDFileInfo handle; // offset 0x0, size 0x3C
    int offset; // offset 0x3C, size 0x4
};
enum EBBkgChannel {
    EBBKGCHANNEL_DATA = 0,
    EBBKGCHANNEL_AUDIO1 = 1,
    EBBKGCHANNEL_AUDIO2 = 2,
    EBBKGCHANNEL_CHANNELS = 3,
    EBBKGCHANNEL_INVALID = 4,
};
enum EBSoundStreamStatus {
    BSSHSTATUS_IDLE = 0,
    BSSHSTATUS_PLAYING = 1,
    BSSHSTATUS_PAUSED = 2,
    BSSHSTATUS_PRELOADING = 3,
};
// total size: 0x40
struct _TBAudioStreamMarker : public _TBAudioStreamMarkerBase {
    // Inner declarations
    // total size: 0x8
    struct _TBAudioStreamMarkerBase {
        // Members
        float time; // offset 0x0, size 0x4
        unsigned int crc; // offset 0x4, size 0x4
    };

    // Members
    char name[56]; // offset 0x8, size 0x38
};
// total size: 0x60
struct _TBADPCMHeader {
    // Members
    unsigned int num_samples; // offset 0x0, size 0x4
    unsigned int num_adpcm_nibbles; // offset 0x4, size 0x4
    unsigned int sample_rate; // offset 0x8, size 0x4
    unsigned short loop_flag; // offset 0xC, size 0x2
    unsigned short format; // offset 0xE, size 0x2
    unsigned int sa; // offset 0x10, size 0x4
    unsigned int ea; // offset 0x14, size 0x4
    unsigned int ca; // offset 0x18, size 0x4
    unsigned short coef[16]; // offset 0x1C, size 0x20
    unsigned short gain; // offset 0x3C, size 0x2
    unsigned short ps; // offset 0x3E, size 0x2
    unsigned short yn1; // offset 0x40, size 0x2
    unsigned short yn2; // offset 0x42, size 0x2
    unsigned short lps; // offset 0x44, size 0x2
    unsigned short lyn1; // offset 0x46, size 0x2
    unsigned short lyn2; // offset 0x48, size 0x2
    unsigned short pad[11]; // offset 0x4A, size 0x16
};
// total size: 0x20
struct _TBFileIndex {
    // Members
    int offset; // offset 0x0, size 0x4
    unsigned int crc; // offset 0x4, size 0x4
    int size; // offset 0x8, size 0x4
    unsigned int filenameOffset; // offset 0xC, size 0x4
    unsigned int noofTags; // offset 0x10, size 0x4
    unsigned int tagOffset; // offset 0x14, size 0x4
    unsigned long long fileTime; // offset 0x18, size 0x8
};
// total size: 0x22C
struct _AXVPB {
    // Members
    void * next; // offset 0x0, size 0x4
    void * prev; // offset 0x4, size 0x4
    void * next1; // offset 0x8, size 0x4
    unsigned int priority; // offset 0xC, size 0x4
    void (* callback)(void *); // offset 0x10, size 0x4
    unsigned int userContext; // offset 0x14, size 0x4
    unsigned int index; // offset 0x18, size 0x4
    unsigned int sync; // offset 0x1C, size 0x4
    unsigned int depop; // offset 0x20, size 0x4
    unsigned int updateMS; // offset 0x24, size 0x4
    unsigned int updateCounter; // offset 0x28, size 0x4
    unsigned int updateTotal; // offset 0x2C, size 0x4
    unsigned short * updateWrite; // offset 0x30, size 0x4
    unsigned short updateData[128]; // offset 0x34, size 0x100
    void * itdBuffer; // offset 0x134, size 0x4
    struct _AXPB pb; // offset 0x138, size 0xF4
};
// total size: 0x20
struct _TARAMBlock {
    // Members
    int offset; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    short used; // offset 0x8, size 0x2
    unsigned short flags; // offset 0xA, size 0x2
    struct _TBARAMHeap * heap; // offset 0xC, size 0x4
    struct _TARAMBlock * typeNext; // offset 0x10, size 0x4
    struct _TARAMBlock * typePrev; // offset 0x14, size 0x4
    struct _TARAMBlock * next; // offset 0x18, size 0x4
    struct _TARAMBlock * prev; // offset 0x1C, size 0x4
};
enum EBEventClientType {
    EBEVENTCLIENTTYPE_CALLBACK = 0,
    EBEVENTCLIENTTYPE_QUEUE = 1,
};
// total size: 0x54
struct _TBEvent {
    // Members
    char name[32]; // offset 0x0, size 0x20
    unsigned int crc; // offset 0x20, size 0x4
    struct _TBEvent * next; // offset 0x24, size 0x4
    struct _TBEvent * prev; // offset 0x28, size 0x4
    struct _TBEventClient clients; // offset 0x2C, size 0x20
    int noofQueues; // offset 0x4C, size 0x4
    int refCount; // offset 0x50, size 0x4
};
// total size: 0x8
struct _TBEventClientCallback {
    // Members
    void (* callback)(char *, char *, void *, void *); // offset 0x0, size 0x4
    void * callbackContext; // offset 0x4, size 0x4
};
// total size: 0x10
struct _TBEventClientQueue {
    // Members
    struct _TBEventEntry * queue; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    int maxSize; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
};
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned int startAddr; // offset 0x30, size 0x4
    unsigned int length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// total size: 0xF4
struct _AXPB {
    // Members
    unsigned short nextHi; // offset 0x0, size 0x2
    unsigned short nextLo; // offset 0x2, size 0x2
    unsigned short currHi; // offset 0x4, size 0x2
    unsigned short currLo; // offset 0x6, size 0x2
    unsigned short srcSelect; // offset 0x8, size 0x2
    unsigned short coefSelect; // offset 0xA, size 0x2
    unsigned short mixerCtrl; // offset 0xC, size 0x2
    unsigned short state; // offset 0xE, size 0x2
    unsigned short type; // offset 0x10, size 0x2
    struct _AXPBMIX mix; // offset 0x12, size 0x24
    struct _AXPBITD itd; // offset 0x36, size 0xE
    struct _AXPBUPDATE update; // offset 0x44, size 0xE
    struct _AXPBDPOP dpop; // offset 0x52, size 0x12
    struct _AXPBVE ve; // offset 0x64, size 0x4
    struct _AXPBFIR fir; // offset 0x68, size 0x6
    struct _AXPBADDR addr; // offset 0x6E, size 0x10
    struct _AXPBADPCM adpcm; // offset 0x7E, size 0x28
    struct _AXPBSRC src; // offset 0xA6, size 0xE
    struct _AXPBADPCMLOOP adpcmLoop; // offset 0xB4, size 0x6
    struct _AXPBLPF lpf; // offset 0xBA, size 0x8
    unsigned short pad[25]; // offset 0xC2, size 0x32
};
// total size: 0x60
struct _TBARAMHeap {
    // Members
    struct _TBARAMHeap * prev; // offset 0x0, size 0x4
    struct _TBARAMHeap * next; // offset 0x4, size 0x4
    unsigned int aramAddr; // offset 0x8, size 0x4
    unsigned int aramSize; // offset 0xC, size 0x4
    int aramTotalAllocated; // offset 0x10, size 0x4
    int aramPeakTotalAllocated; // offset 0x14, size 0x4
    struct _TARAMBlock * primaryHeapBlock; // offset 0x18, size 0x4
    struct _TARAMBlock * aramRootBlock; // offset 0x1C, size 0x4
    struct _TARAMBlock aramUsedRoot; // offset 0x20, size 0x20
    struct _TARAMBlock aramFreeRoot; // offset 0x40, size 0x20
};
// total size: 0x110
struct _TBEventEntry {
    // Members
    char parms[256]; // offset 0x0, size 0x100
    unsigned char data[16]; // offset 0x100, size 0x10
};
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned int command; // offset 0x8, size 0x4
    int state; // offset 0xC, size 0x4
    unsigned int offset; // offset 0x10, size 0x4
    unsigned int length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned int currTransferSize; // offset 0x1C, size 0x4
    unsigned int transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
// total size: 0x24
struct _AXPBMIX {
    // Members
    unsigned short vL; // offset 0x0, size 0x2
    unsigned short vDeltaL; // offset 0x2, size 0x2
    unsigned short vR; // offset 0x4, size 0x2
    unsigned short vDeltaR; // offset 0x6, size 0x2
    unsigned short vAuxAL; // offset 0x8, size 0x2
    unsigned short vDeltaAuxAL; // offset 0xA, size 0x2
    unsigned short vAuxAR; // offset 0xC, size 0x2
    unsigned short vDeltaAuxAR; // offset 0xE, size 0x2
    unsigned short vAuxBL; // offset 0x10, size 0x2
    unsigned short vDeltaAuxBL; // offset 0x12, size 0x2
    unsigned short vAuxBR; // offset 0x14, size 0x2
    unsigned short vDeltaAuxBR; // offset 0x16, size 0x2
    unsigned short vAuxBS; // offset 0x18, size 0x2
    unsigned short vDeltaAuxBS; // offset 0x1A, size 0x2
    unsigned short vS; // offset 0x1C, size 0x2
    unsigned short vDeltaS; // offset 0x1E, size 0x2
    unsigned short vAuxAS; // offset 0x20, size 0x2
    unsigned short vDeltaAuxAS; // offset 0x22, size 0x2
};
// total size: 0xE
struct _AXPBITD {
    // Members
    unsigned short flag; // offset 0x0, size 0x2
    unsigned short bufferHi; // offset 0x2, size 0x2
    unsigned short bufferLo; // offset 0x4, size 0x2
    unsigned short shiftL; // offset 0x6, size 0x2
    unsigned short shiftR; // offset 0x8, size 0x2
    unsigned short targetShiftL; // offset 0xA, size 0x2
    unsigned short targetShiftR; // offset 0xC, size 0x2
};
// total size: 0xE
struct _AXPBUPDATE {
    // Members
    unsigned short updNum[5]; // offset 0x0, size 0xA
    unsigned short dataHi; // offset 0xA, size 0x2
    unsigned short dataLo; // offset 0xC, size 0x2
};
// total size: 0x12
struct _AXPBDPOP {
    // Members
    short aL; // offset 0x0, size 0x2
    short aAuxAL; // offset 0x2, size 0x2
    short aAuxBL; // offset 0x4, size 0x2
    short aR; // offset 0x6, size 0x2
    short aAuxAR; // offset 0x8, size 0x2
    short aAuxBR; // offset 0xA, size 0x2
    short aS; // offset 0xC, size 0x2
    short aAuxAS; // offset 0xE, size 0x2
    short aAuxBS; // offset 0x10, size 0x2
};
// total size: 0x4
struct _AXPBVE {
    // Members
    unsigned short currentVolume; // offset 0x0, size 0x2
    short currentDelta; // offset 0x2, size 0x2
};
// total size: 0x6
struct _AXPBFIR {
    // Members
    unsigned short numCoefs; // offset 0x0, size 0x2
    unsigned short coefsHi; // offset 0x2, size 0x2
    unsigned short coefsLo; // offset 0x4, size 0x2
};
// total size: 0x10
struct _AXPBADDR {
    // Members
    unsigned short loopFlag; // offset 0x0, size 0x2
    unsigned short format; // offset 0x2, size 0x2
    unsigned short loopAddressHi; // offset 0x4, size 0x2
    unsigned short loopAddressLo; // offset 0x6, size 0x2
    unsigned short endAddressHi; // offset 0x8, size 0x2
    unsigned short endAddressLo; // offset 0xA, size 0x2
    unsigned short currentAddressHi; // offset 0xC, size 0x2
    unsigned short currentAddressLo; // offset 0xE, size 0x2
};
// total size: 0x28
struct _AXPBADPCM {
    // Members
    unsigned short a[2][8]; // offset 0x0, size 0x20
    unsigned short gain; // offset 0x20, size 0x2
    unsigned short pred_scale; // offset 0x22, size 0x2
    unsigned short yn1; // offset 0x24, size 0x2
    unsigned short yn2; // offset 0x26, size 0x2
};
// total size: 0xE
struct _AXPBSRC {
    // Members
    unsigned short ratioHi; // offset 0x0, size 0x2
    unsigned short ratioLo; // offset 0x2, size 0x2
    unsigned short currentAddressFrac; // offset 0x4, size 0x2
    unsigned short last_samples[4]; // offset 0x6, size 0x8
};
// total size: 0x6
struct _AXPBADPCMLOOP {
    // Members
    unsigned short loop_pred_scale; // offset 0x0, size 0x2
    unsigned short loop_yn1; // offset 0x2, size 0x2
    unsigned short loop_yn2; // offset 0x4, size 0x2
};
// total size: 0x8
struct _AXPBLPF {
    // Members
    unsigned short on; // offset 0x0, size 0x2
    unsigned short yn1; // offset 0x2, size 0x2
    unsigned short a0; // offset 0x4, size 0x2
    unsigned short b0; // offset 0x6, size 0x2
};
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
inline int bsPlayTrackingAudioStream(struct _TBAudioStream * stream, float * pos, unsigned int flags, unsigned int volume, unsigned int frequency, void (* callback)(struct _TBAudioStream *, enum EBSoundStreamCallbackReason, void *, void *), void * context, float minDistance, float maxDistance, int startSamplePos) {}

inline void bDeleteAudioStreamSpecific(struct _TBAudioStream * stream) {}

inline void bsSetLinearFalloff(int enable) {}

inline int bsIsLinearFalloff() {}

inline int bsGetLipSyncPeak(struct _TBLipSync * lipSync) {}

// total size: 0x30
struct _TBLipSync {
    // Members
    struct _TBResourceInfo resInfo; // offset 0x0, size 0x20
    unsigned int noofSamples; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    unsigned char peakVolume; // offset 0x28, size 0x1
    unsigned char averageVolume; // offset 0x29, size 0x1
    unsigned short pseudoFreqs[3]; // offset 0x2A, size 0x6
};
inline int bsGetLipSyncAverage(struct _TBLipSync * lipSync) {}

inline void bsSetLipSyncPseudoFrequencies(struct _TBLipSync * lipSync, float f1, float f2, float f3) {}

// total size: 0x4
struct fd_set {
    // Members
    int set; // offset 0x0, size 0x4
};
inline struct fd_set * bnSocketSetInit(struct fd_set * set) {}

inline void bnSocketSetAdd(struct fd_set * set, int socket) {}

inline void bnSocketSetRemove(struct fd_set * set, int socket) {}

inline int bnSocketSetContains(struct fd_set * set, int socket) {}

inline float bnConvertToNetworkFormat(float value) {
    // Local variables
    union _TBNetConversionData data;
}

union _TBNetConversionData {
    unsigned char bValue[4]; // offset 0x0, size 0x4
    unsigned short sValue; // offset 0x0, size 0x2
    unsigned int iValue; // offset 0x0, size 0x4
    float fValue; // offset 0x0, size 0x4
};
inline unsigned int bnConvertToNetworkFormat(unsigned int value) {}

inline unsigned short bnConvertToNetworkFormat(unsigned short value) {}

inline float bnConvertToHostFormat(float value) {
    // Local variables
    union _TBNetConversionData data;
}

inline unsigned int bnConvertToHostFormat(unsigned int value) {}

inline unsigned short bnConvertToHostFormat(unsigned short value) {}

// Range: 0xFFFFFFFF -> 0x8023ED98
void bAssertErrorFunc(int errorno /* r3 */, int assert /* r0 */, char * format /* r4 */, ...) {
    // Local variables
    char assertBuffer[512]; // r1+0x70
    struct __va_list_tag argp[1]; // r1+0x270
}

// Range: 0x8023ED98 -> 0x8023EDEC
void bkSetVerboseLevel(enum EBVerboseLevel level /* r31 */, unsigned int module /* r30 */, unsigned int flags /* r29 */) {}

enum EBVerboseLevel {
    BDVERBOSE_NONE = 0,
    BDVERBOSE_ERRORS = 1,
    BDVERBOSE_ASSERTS = 2,
    BDVERBOSE_IMPORTANTMESSAGES = 3,
    BDVERBOSE_WARNINGS = 4,
    BDVERBOSE_MESSAGES = 5,
    BDVERBOSE_VERBOSEMESSAGES = 6,
    BDVERBOSE_ALL = 7,
};
// Range: 0x8023EDEC -> 0x8023EE50
void bkPushVerboseLevel(enum EBVerboseLevel level /* r3 */, unsigned int modules /* r4 */, unsigned int flags /* r5 */) {}

// Range: 0x8023EE50 -> 0x8023EE94
void bkPopVerboseLevel() {}

// Range: 0x8023EE94 -> 0x8023EF10
char * bkDataToSafeString(unsigned char * data /* r3 */, int dataSize /* r4 */, char * buffer /* r5 */, int bufferSize /* r6 */) {
    // Local variables
    int length; // r6
    char * bufPtr; // r9
}

// Range: 0xFFFFFFFF -> 0x8023EF10
void bkSetDebugStreamFlags(struct _TBDebugStream * stream /* r3 */, unsigned int flagMask /* r4 */, unsigned int newValues /* r5 */) {}

// total size: 0x108
struct _TBDebugStream {
    // Members
    char logFile[256]; // offset 0x0, size 0x100
    unsigned int flags; // offset 0x100, size 0x4
    int fp; // offset 0x104, size 0x4
};
// Range: 0xFFFFFFFF -> 0x8023EF10
void bRecordError(char * errorStr /* r3 */, int module /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x8023EF10
void bPrintError(char * format /* r28 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
    char buf[512]; // r1+0x80
}

// Range: 0x8023EF10 -> 0x8023EFA8
void bkPrintf(char * format /* r3 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
}

// Range: 0x8023EFA8 -> 0x8023F170
void bCheckSignature() {
    // Local variables
    struct _TBClock clock; // r1+0x8
    unsigned long long time; // r28
    int expYear; // r30
    int expMonth; // r29
    int expDay; // r28
    int l; // r10
    int seed; // r9
}

// total size: 0x6
struct _TBClock {
    // Members
    unsigned char second; // offset 0x0, size 0x1
    unsigned char minute; // offset 0x1, size 0x1
    unsigned char hour; // offset 0x2, size 0x1
    unsigned char day; // offset 0x3, size 0x1
    unsigned char month; // offset 0x4, size 0x1
    unsigned char year; // offset 0x5, size 0x1
};
// Range: 0x8023F170 -> 0x8023F18C
volatile char * bkGetSignatureString() {}

// Range: 0x8023F18C -> 0x8023F1CC
void bInitEvents() {}

// Range: 0x8023F1CC -> 0x8023F204
void bShutdownEvents() {}

// Range: 0x8023F204 -> 0x8023F23C
struct _TBEvent * bFindEvent(unsigned int crc /* r11 */) {
    // Local variables
    struct _TBEvent * event; // r3
}

// Range: 0x8023F23C -> 0x8023F334
int bkCreateEvent(char * eventName /* r29 */) {
    // Local variables
    struct _TBEvent * event; // r31
    unsigned int crc; // r28
}

// Range: 0x8023F334 -> 0x8023F3E0
struct _TBEventClient * bkTrapEventCallback(char * eventName /* r3 */, void (* callback)(char *, char *, void *, void *) /* r30 */, void * context /* r29 */) {
    // Local variables
    struct _TBEventClient * client; // r8
    struct _TBEvent * event; // r31
}

// Range: 0xFFFFFFFF -> 0x8023F3E0
struct _TBEventClient * bkTrapEventQueue(char * eventName /* r3 */, int queueSize /* r30 */, unsigned int flags /* r29 */) {
    // Local variables
    struct _TBEventClient * client; // r8
    struct _TBEvent * event; // r31
}

// Range: 0xFFFFFFFF -> 0x8023F3E0
int bkPopEvent(struct _TBEventClient * client /* r31 */, char * parmBuffer /* r30 */, void * data /* r29 */) {}

// Range: 0x8023F3E0 -> 0x8023F49C
static void DeleteEvent(struct _TBEvent * event /* r30 */) {
    // Local variables
    struct _TBEventClient * client; // r31
}

// Range: 0x8023F49C -> 0x8023F514
void bkDeleteEvent(char * eventName /* r3 */) {
    // Local variables
    struct _TBEvent * event; // r31
}

// Range: 0x8023F514 -> 0x8023F58C
void bkDeleteEventClient(struct _TBEventClient * client /* r31 */) {}

// Range: 0x8023F58C -> 0x8023F7C0
int bkGenerateEvent(char * eventName /* r27 */, char * parmString /* r29 */, void * data /* r28 */, int takeMutex /* r6 */) {
    // Local variables
    struct _TBEvent * event; // r3
    struct _TBEventClient * client; // r31
}

// Range: 0xFFFFFFFF -> 0x8023F7C0
void bkFlushEventQueue(struct _TBEventClient * client /* r31 */, int takeMutex /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x8023F7C0
void bkFlushAllEventQueues(char * eventName /* r3 */) {
    // Local variables
    struct _TBEventClient * client; // r31
    struct _TBEvent * event; // r30
}

// Range: 0xFFFFFFFF -> 0x8023F7C0
unsigned int bkHexToInt32(char * string /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x8023F7C0
void * bkHexToPtr(char * string /* r31 */) {
    // Local variables
    int c; // r3
    int n;
    int len;
    int shift; // r11
    unsigned int result; // r10
}

// Range: 0x8023F7C0 -> 0x8023F848
void bkDeleteEventTraps(char * eventName /* r3 */) {
    // Local variables
    struct _TBEventClient * client; // r31
    struct _TBEvent * event; // r30
}

// Range: 0x8023F848 -> 0x8023F89C
void bInitCRCTable() {
    // Local variables
    int i; // r10
    int j;
    unsigned int CRCaccum; // r11
}

// Range: 0x8023F89C -> 0x8023F8C4
void bPrepareDiskEvents() {}

// Range: 0x8023F8C4 -> 0x8023F8EC
void bInitFile() {}

// Range: 0x8023F8EC -> 0x8023F920
void bShutdownFile() {}

// Range: 0x8023F920 -> 0x8023F964
unsigned int bkCRC32(const unsigned char * data /* r10 */, int size /* r4 */, unsigned int accum /* r3 */) {
    // Local variables
    int i; // r9
    int j; // ctr
}

// Range: 0x8023F964 -> 0x8023F9A8
unsigned int bkStringCRC(const char * data /* r3 */, unsigned int accum /* r3 */) {
    // Local variables
    int i; // r0
    char * cp; // r8
}

// Range: 0x8023F9A8 -> 0x8023FA04
unsigned int bkStringLwrCRC(const char * data /* r3 */, unsigned int accum /* r3 */) {
    // Local variables
    int i;
    int ch; // r9
    char * cp; // r8
}

// Range: 0xFFFFFFFF -> 0x8023FA04
unsigned int bkStringUprCRC(const char * data /* r3 */, unsigned int accum /* r3 */) {
    // Local variables
    int i;
    int ch; // r9
    char * cp; // r8
}

// Range: 0xFFFFFFFF -> 0x8023FA04
struct _TBFileIndex * bGetPackageIndexEntry(struct _TBPackageIndex * index /* r3 */, int ordinal /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x8023FA04
int bkGetPakFileTags(struct _TBPackageIndex * index /* r29 */, char * filename /* r4 */, struct _TBFileTagInfo * tagInfo /* r30 */) {}

// total size: 0x8
struct _TBFileTagInfo {
    // Members
    unsigned int * tags; // offset 0x0, size 0x4
    int noofTags; // offset 0x4, size 0x4
};
// Range: 0xFFFFFFFF -> 0x8023FA04
int bkGetPakFileTagsByCRC(struct _TBPackageIndex * index /* r31 */, unsigned int crc /* r4 */, struct _TBFileTagInfo * tagInfo /* r30 */) {
    // Local variables
    struct _TBFileIndex * filePtr; // r11
}

// Range: 0xFFFFFFFF -> 0x8023FA04
struct _TBPackageID bkGetPackageID(struct _TBPackageIndex * index /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x8023FA04
int bkEnumPackageContents(struct _TBPackageIndex * index /* r3 */, int lastHandle /* r4 */, unsigned int matchTag /* r5 */, unsigned int * crc /* r30 */, struct _TBFileTagInfo * tagInfo /* r7 */) {
    // Local variables
    struct _TBFileIndex * filePtr; // r12
    unsigned int * tag; // r9
    int l; // ctr
}

// Range: 0x8023FA04 -> 0x8023FA0C
void bkSetLanguage(enum EBLanguageID languageId /* r3 */) {}

enum EBLanguageID {
    BLANGUAGEID_UK = 0,
    BLANGUAGEID_F = 1,
    BLANGUAGEID_D = 2,
    BLANGUAGEID_E = 3,
    BLANGUAGEID_IT = 4,
    BLANGUAGEID_NL = 5,
    BLANGUAGEID_SW = 6,
    BLANGUAGEID_FIN = 7,
    BLANGUAGEID_N = 8,
    BLANGUAGEID_DK = 9,
    BLANGUAGEID_US = 10,
    BLANGUAGEID_JP = 11,
    BLANGUAGEID_PG = 12,
    BLANGUAGEID_BR = 13,
    BLANGUAGEID_KR = 14,
    BLANGUAGEID_CH = 15,
    BLANGUAGEID_TH = 16,
    BLANGUAGEID_HW = 17,
    BLANGUAGEID_PO = 18,
    BLANGUAGEID_CZ = 19,
    BLANGUAGEID_RU = 20,
    BLANGUAGEID_USS = 21,
    BLANGUAGEID_USF = 22,
    BLANGUAGEID_UNKNOWN = 23,
};
// Range: 0x8023FA0C -> 0x8023FB04
void bkSetFileSearchPath(int flags /* r3 */, int noofPaths /* r4 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70

    /* anonymous block */ {
        // Range: 0x8023FA64 -> 0x8023FAFC
        int c; // ctr
        /* anonymous block */ {
            // Range: 0x8023FAA4 -> 0x8023FAEC
            char * * __ptr; // r11
        }
    }
}

// Range: 0x8023FB04 -> 0x8023FDBC
int bkOpenFileReadOnlyWithSearch(char * filename /* r0 */, struct _TBFileHandleType * * fp /* r27 */, char * fullpath /* r26 */, int maxlen /* r22 */, int flags /* r23 */) {
    // Local variables
    char buf[256]; // r1+0x8
    char filebuf[256]; // r1+0x108
    char pathbuf[256]; // r1+0x208
    char workbuf[256]; // r1+0x308
    int result; // r31

    /* anonymous block */ {
        // Range: 0x8023FC38 -> 0x8023FD10
        int c; // r29
    }
}

// Range: 0x8023FDBC -> 0x8023FDCC
int bkEnableFilenameTables(int enable /* r3 */) {
    // Local variables
    int tmp; // r0
}

// Range: 0x8023FDCC -> 0x8023FFFC
int bkLoadFilenameTable(struct _TBPackageIndex * index /* r30 */, char * filename /* r29 */) {
    // Local variables
    struct _TBFileIndex * file; // r11
    char * filenameData; // r29
    unsigned int * indexInfo; // r10
    struct _TBFilenameTableHeader * table; // r31
    int i; // r8
    int ret; // r28
}

// total size: 0x114
struct _TBFilenameTableHeader {
    // Members
    struct _TBPackageID package; // offset 0x0, size 0x4
    struct _TBFilenameTableHeader * prev; // offset 0x4, size 0x4
    struct _TBFilenameTableHeader * next; // offset 0x8, size 0x4
    int refCount; // offset 0xC, size 0x4
    unsigned int noofFiles; // offset 0x10, size 0x4
    char filename[256]; // offset 0x14, size 0x100
};
// Range: 0x8023FFFC -> 0x80240134
int bkDeleteFilenameTable(struct _TBPackageID id /* r31 */) {
    // Local variables
    struct _TBFilenameTableHeader * table; // r31
    struct _TBFilenameTableHeader * temp; // r30
}

// Range: 0xFFFFFFFF -> 0x80240134
char * bkFindFilenameByCRC(struct _TBPackageID id /* r3 */, unsigned int crc /* r4 */) {
    // Local variables
    struct _TBFilenameTableHeader * table; // r10
    unsigned int * indexData; // r11
    unsigned int i; // r8
    char * filenames; // r3
}

// Range: 0x80240134 -> 0x80240194
struct _TBFileIndex * bFindIndexFileByCRC(struct _TBPackageIndex * index /* r3 */, unsigned int crc /* r4 */) {
    // Local variables
    struct _TBFileIndex * fileEntry; // r3
    int current; // r11
    int first; // r8
    int last; // r10
}

// Range: 0x80240194 -> 0x802401E4
struct _TBFileIndex * bFindIndexFile(struct _TBPackageIndex * index /* r30 */, char * filename /* r4 */) {
    // Local variables
    struct _TBFileIndex * filePtr; // r0
}

// Range: 0xFFFFFFFF -> 0x802401E4
int bkFilenameTableAddRef(struct _TBPackageID id /* r31 */) {
    // Local variables
    struct _TBFilenameTableHeader * table; // r11
    int refCount; // r30
}

// Range: 0x802401E4 -> 0x80240254
int bkFileLength(char * filename /* r3 */, int flags /* r4 */) {
    // Local variables
    struct _TBFileHandleType * fp; // r1+0x8
    int len; // r30
}

// Range: 0x80240254 -> 0x802402A0
int bkFileLength(struct _TBPackageIndex * index /* r3 */, char * filename /* r4 */, int flags /* r5 */) {
    // Local variables
    struct _TBFileIndex * filePtr; // r3
}

// Range: 0x802402A0 -> 0x80240338
static unsigned char * bEnsureAlloc(unsigned char * dataPtr /* r31 */, int size /* r30 */) {
    // Local variables
    char * group; // r7

    /* anonymous block */ {
        // Range: 0x80240300 -> 0x80240300
        int largest; // r1+0x8
        int sizeFree;
    }
}

// Range: 0xFFFFFFFF -> 0x80240338
unsigned char * bLoadSingleFile(char * filename /* r3 */, unsigned char * dataPtr /* r30 */, int * retSize /* r28 */, int noofExtraBytes /* r29 */) {
    // Local variables
    struct _TBFileHandleType * fp; // r1+0x8
    int len; // r31
}

// Range: 0x80240338 -> 0x8024046C
unsigned char * bkLoadFileByCRC(struct _TBPackageIndex * index /* r30 */, unsigned int crc /* r4 */, unsigned char * dataPtr /* r29 */, int * retSize /* r27 */, struct _TBFileTagInfo * tagInfo /* r28 */, int noofExtraBytes /* r26 */) {
    // Local variables
    struct _TBFileIndex * filePtr; // r31
    int ret;
}

// Range: 0xFFFFFFFF -> 0x8024046C
char * bkGenerateUniqueFilename(char * filename /* r28 */, const char * prefix /* r30 */, const char * ext /* r29 */) {
    // Local variables
    struct _TBClock clock; // r1+0x10
}

// Range: 0xFFFFFFFF -> 0x8024046C
int bRegisterModule(int moduleType /* r31 */, void (* updateFunc)() /* r30 */) {
    // Local variables
    struct _TBKernelModuleInfo * module; // r9
}

// total size: 0xC
struct _TBKernelModuleInfo {
    // Members
    int moduleType; // offset 0x0, size 0x4
    void (* updateFunc)(); // offset 0x4, size 0x4
    struct _TBKernelModuleInfo * next; // offset 0x8, size 0x4
};
// Range: 0x8024046C -> 0x802404C8
void bUpdateModules(int modules /* r30 */) {
    // Local variables
    struct _TBKernelModuleInfo * module; // r31
}

// Range: 0x802404C8 -> 0x80240514
void bShutdownModules() {
    // Local variables
    struct _TBKernelModuleInfo * delModule; // r3
    struct _TBKernelModuleInfo * module; // r31
}

// Range: 0x80240514 -> 0x80240754
struct _TBPackageIndex * bOpenPackage(char * filename /* r28 */) {
    // Local variables
    struct _TBPackageIndex * index; // r31
    char buf[256]; // r1+0x8
    char dir[256]; // r1+0x108
    struct _TBFileHandleType * fp; // r1+0x208
}

// Range: 0xFFFFFFFF -> 0x80240754
struct _TBPackageIndex * bLoadPackage(struct _TBPackageIndex * parentIndex /* r30 */, char * filename /* r29 */, unsigned char * data /* r31 */) {
    // Local variables
    char buf[256]; // r1+0x8
    int resType; // r28
}

// Range: 0x80240754 -> 0x8024081C
void bClosePackage(struct _TBPackageIndex * index /* r31 */, int flags /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x8024081C
int bkPackageFileLength(char * filename /* r5 */, int flags /* r30 */) {
    // Local variables
    char buf[256]; // r1+0x8
}

// Range: 0x8024081C -> 0x8024087C
int bkPackageFileLength(struct _TBPackageIndex * index /* r29 */, char * filename /* r0 */, int flags /* r30 */) {
    // Local variables
    char buf[256]; // r1+0x8
}

// Range: 0x8024087C -> 0x8024097C
struct _TBPackageIndex * bFixupPackage(char * filename /* r29 */, int resType /* r4 */, unsigned char * dataPtr /* r5 */) {
    // Local variables
    struct _TBPackageIndex * index; // r31
    char * cp; // r3
}

// Range: 0x8024097C -> 0x80240984
struct _TBResourceInfo * bNullResourceLoadFunction(struct _TBPackageIndex * index /* r3 */, unsigned int crc /* r4 */) {}

// Range: 0x80240984 -> 0x80240988
void bNullResourceDeleteFunction(struct _TBResourceInfo * resPtr /* r3 */) {}

// Range: 0x80240988 -> 0x80240A30
void bInitResources() {}

// Range: 0x80240A30 -> 0x80240A90
void bAddGlobalResourceToTree(struct _TBResourceInfo * resPtr /* r3 */, struct _TBResourceInfo * parent /* r4 */) {}

// Range: 0x80240A90 -> 0x80240AF0
struct _TBResourceInfo * bFindResource(unsigned int crc /* r11 */, enum EBResourceType resType /* r4 */) {
    // Local variables
    struct _TBResourceInfo * resPtr; // r3
}

enum EBResourceType {
    EBRESTYPE_NONE = 255,
    EBRESTYPE_TEXTURE = 0,
    EBRESTYPE_ACTOR = 1,
    EBRESTYPE_SAMPLE = 2,
    EBRESTYPE_FONT = 3,
    EBRESTYPE_STRINGTABLE = 4,
    EBRESTYPE_SPLASH = 5,
    EBRESTYPE_SET = 6,
    EBRESTYPE_COLLISIONMESH = 7,
    EBRESTYPE_AUDIOSTREAM = 8,
    EBRESTYPE_LIPSYNC = 9,
    EBRESTYPE_FLAREMESH = 10,
    EBRESTYPE_FLAREWORLD = 11,
    EBRESTYPE_SOUNDBANK = 12,
    EBRESTYPE_SOUNDPATCH = 13,
    EBRESTYPE_LIGHTMATRIX = 14,
    EBRESTYPE_SIMULATIONDATA = 15,
    EBRESTYPE_SUBTITLE = 16,
    EBRESTYPE_MATERIAL = 17,
    EBRESTYPE_BLENDER = 18,
    EBRESTYPE_VERTEXSHADER = 19,
    EBRESTYPE_PIXELSHADER = 20,
    BNOOFRESTYPES = 21,
    EBRESTYPE_ANY = 22,
};
// Range: 0x80240AF0 -> 0x80240B60
struct _TBResourceInfo * bFindResourceByPackage(unsigned int crc /* r11 */, unsigned int pakCrc /* r4 */, enum EBResourceType resType /* r5 */) {
    // Local variables
    struct _TBResourceInfo * resPtr; // r3
}

// Range: 0x80240B60 -> 0x80240BDC
struct _TBResourceInfo * bFindResourceByGroup(unsigned int crc /* r11 */, int groupId /* r4 */, enum EBResourceType resType /* r5 */) {
    // Local variables
    struct _TBResourceInfo * resPtr; // r3
}

// Range: 0x80240BDC -> 0x80240C44
void bAddGlobalResource(struct _TBResourceInfo * resPtr /* r31 */, struct _TBPackageIndex * pakSrc /* r4 */, int type /* r5 */, int groupID /* r29 */) {}

// Range: 0x80240C44 -> 0x80240CEC
void bDeleteGlobalResource(struct _TBResourceInfo * resPtr /* r31 */) {}

// Range: 0x80240CEC -> 0x80240CF0
void bListResources(unsigned int typeMask /* r3 */, struct _TBResourceInfo * res /* r4 */) {}

// Range: 0x80240CF0 -> 0x80240D18
void bkListResources(unsigned int typeMask /* r3 */) {}

// Range: 0x80240D18 -> 0x80240F0C
int bLoadPackageResources(struct _TBPackageIndex * package /* r30 */, unsigned int typeMask /* r19 */, int groupId /* r23 */, unsigned int tagMatch /* r26 */) {
    // Local variables
    struct _TBFileIndex * filePtr; // r9
    struct _TBFileIndex * searchPtr;
    int l; // r31
    int k; // ctr
    int noofLoaded; // r27
    int matchMask; // r6
    int typeLoop; // r29
    int found; // r7
    unsigned int * tag; // r11
    int prevOffs; // r24
    int searchOffs; // r10

    /* anonymous block */ {
        // Range: 0x80240D74 -> 0x80240D8C
        int strLoaded; // r3
    }

    /* anonymous block */ {
        // Range: 0x80240D98 -> 0x80240DAC
        int lipsyncsLoaded; // r3
    }
}

// Range: 0x80240F0C -> 0x80240FA0
void bDeletePackageResources(struct _TBPackageID packageId, unsigned int typeMask /* r30 */, struct _TBResourceInfo * res /* r31 */) {}

// Range: 0x80240FA0 -> 0x80240FD4
void bDeletePackageResources(struct _TBPackageID packageId, unsigned int typeMask /* r4 */) {}

// Range: 0x80240FD4 -> 0x80241064
void bDeleteResourceGroup(unsigned int typeMask /* r29 */, unsigned int groupID /* r30 */, struct _TBResourceInfo * res /* r31 */) {}

// Range: 0x80241064 -> 0x8024108C
void bDeleteResourceGroup(unsigned int typeMask /* r3 */, unsigned int groupID /* r4 */) {}

// Range: 0x8024108C -> 0x802410DC
void bDeleteAllResources(struct _TBResourceInfo * res /* r31 */) {}

// Range: 0x802410DC -> 0x80241104
void bDeleteAllResources() {}

// Range: 0x80241104 -> 0x80241158
void bDeleteResource(void * resPtr /* r31 */) {
    // Local variables
    struct _TBResourceInfo * delRes;
}

// Range: 0xFFFFFFFF -> 0x80241158
struct _TBResourceInfo * bLoadResource(struct _TBPackageIndex * index /* r30 */, char * filename /* r3 */, enum EBResourceType resType /* r31 */, int groupID /* r29 */) {
    // Local variables
    unsigned int crc; // r4
    struct _TBResourceInfo * res;
}

// Range: 0x80241158 -> 0x802411EC
struct _TBResourceInfo * bLoadResourceByCRC(struct _TBPackageIndex * index /* r28 */, unsigned int crc /* r30 */, enum EBResourceType resType /* r29 */, int groupID /* r27 */) {
    // Local variables
    struct _TBResourceInfo * res; // r31
}

// Range: 0x802411EC -> 0x8024148C
struct _TBResourceInfo * bkFindResourceByCRC(enum EBResourceType resType /* r30 */, unsigned int crc /* r31 */, struct _TBPackageID packageId /* r4 */, unsigned int groupId /* r26 */, unsigned int flags /* r7 */) {
    // Local variables
    struct _TBResourceInfo * res; // r10
    int l; // r29
    struct _TBResourceInfo * prevRes[2]; // @ 0x8047CE58
    int prevIdx; // @ 0x8047CE60
    int lang; // @ 0x8047CE64
    int langExtLen; // @ 0x8047CE68
    char languageExtension[16]; // @ 0x80384270
}

// Range: 0x8024148C -> 0x8024155C
struct _TBResourceInfo * bkWalkResourceList(enum EBResourceType resType /* r10 */, struct _TBResourceInfo * resource /* r3 */) {
    // Local variables
    struct _TBResourceInfo * oldRes; // r11
}

// Range: 0xFFFFFFFF -> 0x8024155C
struct _TBResourceInfo * bkWalkGlobalResourceList(struct _TBResourceInfo * resource /* r3 */) {
    // Local variables
    struct _TBResourceInfo * oldRes; // r11
}

// total size: 0x5C
struct _TBResourceSnapshot {
    // Members
    int noofRes[21]; // offset 0x0, size 0x54
    unsigned int typeMask; // offset 0x54, size 0x4
    int noofEntries; // offset 0x58, size 0x4
};
// Range: 0xFFFFFFFF -> 0x8024155C
struct _TBResourceSnapshot * bkTakeResourceSnapshot(unsigned int typeMask /* r25 */) {
    // Local variables
    struct _TBResourceSnapshot * snap; // r31
    int noof; // r31
    int resType; // r27
    struct _TBResourceInfo * res; // r29
    struct _TBResourceSnapshotEntry * entry; // r30
}

// total size: 0x28
struct _TBResourceSnapshotEntry {
    // Members
    struct _TBResourceInfo * infoPtr; // offset 0x0, size 0x4
    struct _TBResourceInfo info; // offset 0x4, size 0x20
    int found; // offset 0x24, size 0x4
};
// Range: 0xFFFFFFFF -> 0x8024155C
void bkDeleteResourceSnapshot(struct _TBResourceSnapshot * snapshot /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x8024155C
int bkCompareResourceSnapshot(struct _TBResourceSnapshot * snap /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x8024155C
int bkIsResource(enum EBResourceType resType /* r30 */, void * ptr /* r31 */) {
    // Local variables
    struct _TBResourceInfo * res; // r4
}

// Range: 0xFFFFFFFF -> 0x8024155C
int bIsLowerCase(char * string /* r3 */) {
    // Local variables
    char * ptr; // r3
}

// Range: 0x8024155C -> 0x80241590
char * bkString16to8(char * dest /* r3 */, const unsigned short * src /* r4 */) {
    // Local variables
    char * dp; // r9
}

// Range: 0xFFFFFFFF -> 0x80241590
unsigned short * bkString8to16(unsigned short * dest /* r3 */, const unsigned char * src /* r4 */) {
    // Local variables
    unsigned short * dp; // r9
}

// Range: 0x80241590 -> 0x802415C0
unsigned short * bkString8to16(unsigned short * dest /* r3 */, const char * src /* r4 */) {
    // Local variables
    const unsigned char * sp; // r4
    unsigned short * dp; // r9
}

// Range: 0x802415C0 -> 0x802415E0
static int pow10(int exp /* ctr */) {
    // Local variables
    int result; // r0
}

// Range: 0x802415E0 -> 0x80242760
static unsigned short * bStringPrintFormat(unsigned short * target /* r31 */, int formatAt /* r4 */, int width /* r5 */, int precision /* r28 */, int pfound /* r7 */, unsigned char pad /* r8 */, unsigned short echar /* r23 */, unsigned char formatChar /* r10 */, struct __va_list_tag * argp /* r10 */) {
    // Local variables
    int i; // r30
    int j; // r9
    unsigned int ui; // r10
    unsigned int uj; // r0
    long l; // r7
    long m; // r9
    unsigned long ul; // r10
    unsigned long um; // r0
    float f; // f31
    float g; // f1
    float mag; // f30
    int digits; // r29
    int exp; // r26
    int c; // ctr
    int plen; // r0
    int wlen; // ctr
    int digitLength; // r0
    int fullLength; // r5
    unsigned char * p8; // r9
    unsigned short * p16; // r9

    /* anonymous block */ {
        // Range: 0x80241698 -> 0x802416B4
        int * __ptr; // r8
    }

    /* anonymous block */ {
        // Range: 0x802416B8 -> 0x80241710
        int * __ptr; // r8
    }

    /* anonymous block */ {
        // Range: 0x80241720 -> 0x8024176C
        unsigned char * * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x802417D8 -> 0x80241830
        unsigned short * * __ptr; // r8
    }

    /* anonymous block */ {
        // Range: 0x802418A8 -> 0x802418E0
        double * __ptr; // r9
    }

    // Range: 0x802419F4 -> 0x80241A60
    inline float bmVanillaFMod(float x, float y) {
        // Local variables
        float v; // f0
        float py;
        float px;
        int idiv; // r9

        // Range: 0x802419FC -> 0x802419FC
        inline float bmVanillaFAbs(float x) {}

        // Range: 0x802419FC -> 0x802419FC
        inline float bmVanillaFAbs(float x) {}
    }

    /* anonymous block */ {
        // Range: 0x80241AA8 -> 0x80241AE0
        double * __ptr; // r9
    }

    // Range: 0x80241C48 -> 0x80241CBC
    inline float bmVanillaFMod(float x, float y) {
        // Local variables
        float v; // f0
        float py;
        float px;
        int idiv; // r9

        // Range: 0x80241C58 -> 0x80241C58
        inline float bmVanillaFAbs(float x) {}

        // Range: 0x80241C58 -> 0x80241C58
        inline float bmVanillaFAbs(float x) {}
    }

    /* anonymous block */ {
        // Range: 0x80241DD0 -> 0x80241E08
        double * __ptr; // r9
    }

    // Range: 0x80241FA4 -> 0x80242024
    inline float bmVanillaFMod(float x, float y) {
        // Local variables
        float v; // f12
        float py;
        float px;
        int idiv; // r9

        // Range: 0x80241FB4 -> 0x80241FB4
        inline float bmVanillaFAbs(float x) {}

        // Range: 0x80241FB4 -> 0x80241FB4
        inline float bmVanillaFAbs(float x) {}
    }

    // Range: 0x802420A8 -> 0x8024211C
    inline float bmVanillaFMod(float x, float y) {
        // Local variables
        float v; // f0
        float py;
        float px;
        int idiv; // r9

        // Range: 0x802420B8 -> 0x802420B8
        inline float bmVanillaFAbs(float x) {}

        // Range: 0x802420B8 -> 0x802420B8
        inline float bmVanillaFAbs(float x) {}
    }

    /* anonymous block */ {
        // Range: 0x80242234 -> 0x8024228C
        int * __ptr; // r7
    }

    /* anonymous block */ {
        // Range: 0x80242380 -> 0x802423D8
        unsigned int * __ptr; // r7
    }

    /* anonymous block */ {
        // Range: 0x802424A8 -> 0x80242500
        long * __ptr; // r7
    }

    /* anonymous block */ {
        // Range: 0x802425F4 -> 0x8024264C
        unsigned long * __ptr; // r7
    }
}

// Range: 0x80242760 -> 0x80242A14
int bkStringVSprintf16(unsigned short * target /* r6 */, const unsigned short * format /* r31 */, struct __va_list_tag * argp /* r28 */) {
    // Local variables
    int width; // r5
    int precision; // r29
    int pfound; // r7
    unsigned char pad;
    unsigned short echar; // r30
    unsigned short * start; // r27

    /* anonymous block */ {
        // Range: 0x802427A0 -> 0x802429D4
        int formatAt; // r4
    }
}

// Range: 0x80242A14 -> 0x80242AA8
int bkStringSprintf16(unsigned short * target /* r3 */, const unsigned short * format /* r4 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
    int ret;
}

// Range: 0x80242AA8 -> 0x80242DD4
int bkStringVSprintf16(unsigned short * target /* r6 */, const char * format /* r31 */, struct __va_list_tag * argp /* r28 */) {
    // Local variables
    int width; // r5
    int precision; // r29
    int pfound; // r7
    unsigned char pad;
    unsigned short echar; // r30
    unsigned short * start; // r27

    /* anonymous block */ {
        // Range: 0x80242AE4 -> 0x80242D94
        int formatAt; // r4
    }
}

// Range: 0x80242DD4 -> 0x80242E68
int bkStringSprintf16(unsigned short * target /* r3 */, const char * format /* r4 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
    int ret;
}

// Range: 0x80242E68 -> 0x80242E9C
int bkStringLength16(const unsigned short * str /* r9 */) {
    // Local variables
    const unsigned short * eos; // r3
}

// Range: 0x80242E9C -> 0x80242ED8
unsigned short * bkStringCopy16(unsigned short * dst /* r3 */, const unsigned short * src /* r4 */) {
    // Local variables
    unsigned short * cp; // r11
}

// Range: 0x80242ED8 -> 0x80242F68
int bkStringCompare16(const unsigned short * src /* r3 */, const unsigned short * dst /* r4 */, int length /* r5 */) {
    // Local variables
    int c; // r11
    int ret; // r0
}

// Range: 0x80242F68 -> 0x80242FFC
int bkStringNSprintf16(unsigned short * target /* r3 */, unsigned int maxLen /* r4 */, const unsigned short * format /* r5 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
    int ret;
}

// Range: 0x80242FFC -> 0x80243090
int bkStringNSprintf16(unsigned short * target /* r3 */, unsigned int maxLen /* r4 */, const char * format /* r5 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
    int ret;
}

// Range: 0x80243090 -> 0x802431A4
int bkStringNPrintf(char * target /* r30 */, unsigned int maxLen /* r29 */, const char * format /* r4 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
    int ret; // r3
    int noofCharsWritten; // r31
    int cpLen;
    char * cp; // r31
}

// Range: 0xFFFFFFFF -> 0x802431A4
char * bkStringToLower(char * string /* r3 */) {
    // Local variables
    char * cp; // r11
}

// Range: 0x802431A4 -> 0x8024324C
int bkStringCompare(const char * src /* r3 */, const char * dst /* r4 */, int length /* r5 */) {
    // Local variables
    int c; // r11
    int ret; // r0
}

// Range: 0xFFFFFFFF -> 0x8024324C
int bkStringCompareIgnoreCase(const char * src /* r3 */, const char * dst /* r4 */, int length /* r5 */) {
    // Local variables
    int c; // r10
    int ret; // r0
}

// Range: 0xFFFFFFFF -> 0x8024324C
int bkStringLength(const char * str /* r9 */) {
    // Local variables
    const char * eos; // r3
}

// Range: 0xFFFFFFFF -> 0x8024324C
char * bkStringCopy(char * dst /* r3 */, const char * src /* r4 */) {
    // Local variables
    char * cp; // r11
}

// Range: 0x8024324C -> 0x802432B4
unsigned int bkFixStringTableCRC(unsigned int crc /* r30 */) {
    // Local variables
    char str[5]; // r1+0x8
}

// total size: 0x3C
struct _TBStringTable {
    // Members
    struct _TBResourceInfo resInfo; // offset 0x0, size 0x20
    struct _TBStringTableString * strings; // offset 0x20, size 0x4
    unsigned int noofStrings; // offset 0x24, size 0x4
    unsigned int flag; // offset 0x28, size 0x4
    struct _TBStringTableString * * hashTable; // offset 0x2C, size 0x4
    unsigned int noofExtraColumns; // offset 0x30, size 0x4
    struct _TBStringCommand * commands; // offset 0x34, size 0x4
    unsigned int noofCommands; // offset 0x38, size 0x4
};
// Range: 0x802432B4 -> 0x8024362C
struct _TBStringTable * bLoadStringTableByCRC(struct _TBPackageIndex * pakIndex /* r3 */, unsigned int crc /* r4 */) {
    // Local variables
    struct _TBStringTable * tablePtr; // r31
    int l; // r30
    int index; // r10
    unsigned int u; // r10

    // Range: 0x802434EC -> 0x802434EC
    inline struct _TBTexture * bkFindTextureByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}
}

// total size: 0x18
struct _TBStringTableString {
    // Members
    struct _TBStringCommand * commands; // offset 0x0, size 0x4
    unsigned short * string; // offset 0x4, size 0x4
    int length; // offset 0x8, size 0x4
    char * audioFilename; // offset 0xC, size 0x4
    unsigned int crc; // offset 0x10, size 0x4
    char * * extraColumns; // offset 0x14, size 0x4
};
// total size: 0x8
struct _TBStringCommand {
    // Inner declarations
    union {
        // total size: 0x4
        struct {
            // Inner declarations
            union {
                struct _TBTexture * glyphTexture; // offset 0x0, size 0x4
                unsigned int glyphTextureCRC; // offset 0x0, size 0x4
            };

            // Members
            union {
                struct _TBTexture * glyphTexture; // offset 0x0, size 0x4
                unsigned int glyphTextureCRC; // offset 0x0, size 0x4
            }; // offset 0x0, size 0x4
        } glyphParms; // offset 0x0, size 0x4
        // total size: 0x4
        struct {
            // Members
            unsigned char period; // offset 0x0, size 0x1
            unsigned char offset; // offset 0x1, size 0x1
            unsigned char amplitude; // offset 0x2, size 0x1
            unsigned char axes; // offset 0x3, size 0x1
        } waveParms; // offset 0x0, size 0x4
        // total size: 0x4
        struct {
            // Members
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        } colourParms; // offset 0x0, size 0x4
        // total size: 0x4
        struct {
            // Members
            unsigned char tilt; // offset 0x0, size 0x1
            unsigned char pad[3]; // offset 0x1, size 0x3
        } italicParms; // offset 0x0, size 0x4
    };

    // Members
    unsigned char commandType; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned char duration; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    union {
        // total size: 0x4
        struct {
            // Inner declarations
            union {
                struct _TBTexture * glyphTexture; // offset 0x0, size 0x4
                unsigned int glyphTextureCRC; // offset 0x0, size 0x4
            };

            // Members
            union {
                struct _TBTexture * glyphTexture; // offset 0x0, size 0x4
                unsigned int glyphTextureCRC; // offset 0x0, size 0x4
            }; // offset 0x0, size 0x4
        } glyphParms; // offset 0x0, size 0x4
        // total size: 0x4
        struct {
            // Members
            unsigned char period; // offset 0x0, size 0x1
            unsigned char offset; // offset 0x1, size 0x1
            unsigned char amplitude; // offset 0x2, size 0x1
            unsigned char axes; // offset 0x3, size 0x1
        } waveParms; // offset 0x0, size 0x4
        // total size: 0x4
        struct {
            // Members
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        } colourParms; // offset 0x0, size 0x4
        // total size: 0x4
        struct {
            // Members
            unsigned char tilt; // offset 0x0, size 0x1
            unsigned char pad[3]; // offset 0x1, size 0x3
        } italicParms; // offset 0x0, size 0x4
    }; // offset 0x4, size 0x4
};
// Range: 0x8024362C -> 0x80243678
void bDeleteStringTable(struct _TBStringTable * tablePtr /* r31 */) {}

// total size: 0x48
struct _TBSample {
    // Members
    struct _TBResourceInfo resInfo; // offset 0x0, size 0x20
    int frequency; // offset 0x20, size 0x4
    unsigned int playbackFlags; // offset 0x24, size 0x4
    unsigned char noofChannels; // offset 0x28, size 0x1
    unsigned char pad[3]; // offset 0x29, size 0x3
    unsigned int pad2; // offset 0x2C, size 0x4
    struct _TBSampleHAL hal; // offset 0x30, size 0x18
};
// Range: 0xFFFFFFFF -> 0x80243678
struct _TBSample * bkGetStringSample(struct _TBStringTable * strTable /* r3 */, int strId /* r4 */) {}

// total size: 0x18
struct _TBSampleHAL {
    // Members
    struct _TARAMBlock * aramBlock; // offset 0x0, size 0x4
    unsigned int sampleLength; // offset 0x4, size 0x4
    unsigned int dataLength; // offset 0x8, size 0x4
    unsigned int format; // offset 0xC, size 0x4
    struct _TBADPCMHeader * adpcmHeader; // offset 0x10, size 0x4
    volatile int uploadComplete; // offset 0x14, size 0x4
};
// Range: 0xFFFFFFFF -> 0x80243678
void bkGetStringSampleFileName(struct _TBStringTable * strTable /* r3 */, int strId /* r4 */, char * filename /* r9 */, int maxlen /* r6 */) {}

// Range: 0xFFFFFFFF -> 0x80243678
unsigned short * bkStringFindLetter16(const unsigned short * src /* r3 */, unsigned short letter /* r4 */) {
    // Local variables
    const unsigned short * s; // r3
}

// Range: 0xFFFFFFFF -> 0x80243678
unsigned short * bkStringFindLetterReverse16(const unsigned short * src /* r31 */, unsigned short letter /* r30 */) {
    // Local variables
    const unsigned short * s; // r3
}

// Range: 0x80243678 -> 0x80243724
struct _TBStringTableString * bkFindStringByCRC(struct _TBStringTable * stringTable /* r8 */, unsigned int crc /* r4 */, int offset /* r5 */) {
    // Local variables
    unsigned int index; // r11
}

// Range: 0x80243724 -> 0x80243804
struct _TBStringTableString * bkFindString(struct _TBStringTable * stringTable /* r31 */, char * identifier /* r4 */, int offset /* r30 */) {
    // Local variables
    unsigned int index; // r11
    unsigned int crc; // r7
}

// Range: 0x80243804 -> 0x802438B8
int bkStopStopwatchEnd(struct _TBStopwatch * stop /* r31 */) {}

// Range: 0xFFFFFFFF -> 0x802438B8
float bTimerToNanoseconds(unsigned long long value /* r30 */) {}

// Range: 0x802438B8 -> 0x802439BC
float bkTimerToMilliseconds(unsigned long long value /* r30 */) {}

// Range: 0x802439BC -> 0x80243A6C
unsigned long long bkMillisecondsToTimer(float value /* f31 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
void bRingBufferUpdateStats(struct _TBRingBuffer * buffer /* r31 */) {
    // Local variables
    float ms; // f1
}

// total size: 0x150
struct _TBRingBuffer {
    // Members
    struct OSMutex mutex; // offset 0x0, size 0x18
    char eventName[64]; // offset 0x18, size 0x40
    struct _TBEventClient * client; // offset 0x58, size 0x4
    char fileName[128]; // offset 0x5C, size 0x80
    int fileOffset; // offset 0xDC, size 0x4
    int fileSize; // offset 0xE0, size 0x4
    int blockSize; // offset 0xE4, size 0x4
    int numBlocks; // offset 0xE8, size 0x4
    int dataSize; // offset 0xEC, size 0x4
    unsigned char * data; // offset 0xF0, size 0x4
    int numBytesAvailable; // offset 0xF4, size 0x4
    int numBytesRead; // offset 0xF8, size 0x4
    int curBytePos; // offset 0xFC, size 0x4
    int destBlock; // offset 0x100, size 0x4
    int fillThreshold; // offset 0x104, size 0x4
    int maxLoadBlocks; // offset 0x108, size 0x4
    int numFileBlocksRead; // offset 0x10C, size 0x4
    int numFileBytesRead; // offset 0x110, size 0x4
    int loadSize[2]; // offset 0x114, size 0x8
    int loadsPending; // offset 0x11C, size 0x4
    unsigned int flags; // offset 0x120, size 0x4
    int bkgLoadChannel; // offset 0x124, size 0x4
    struct _TBFileHandleType * fileHandle; // offset 0x128, size 0x4
    unsigned long long startTime; // offset 0x130, size 0x8
    unsigned long long currentTime; // offset 0x138, size 0x8
    int prevBytesRead; // offset 0x140, size 0x4
    float curBytesPerSec; // offset 0x144, size 0x4
    float peakBytesPerSec; // offset 0x148, size 0x4
};
// total size: 0x18
struct OSMutex {
    // Members
    struct OSThreadQueue queue; // offset 0x0, size 0x8
    struct OSThread * thread; // offset 0x8, size 0x4
    int count; // offset 0xC, size 0x4
    struct OSMutexLink link; // offset 0x10, size 0x8
};
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
// total size: 0x318
struct OSThread {
    // Members
    struct OSContext context; // offset 0x0, size 0x2C8
    unsigned short state; // offset 0x2C8, size 0x2
    unsigned short attr; // offset 0x2CA, size 0x2
    int suspend; // offset 0x2CC, size 0x4
    int priority; // offset 0x2D0, size 0x4
    int base; // offset 0x2D4, size 0x4
    void * val; // offset 0x2D8, size 0x4
    struct OSThreadQueue * queue; // offset 0x2DC, size 0x4
    struct OSThreadLink link; // offset 0x2E0, size 0x8
    struct OSThreadQueue queueJoin; // offset 0x2E8, size 0x8
    struct OSMutex * mutex; // offset 0x2F0, size 0x4
    struct OSMutexQueue queueMutex; // offset 0x2F4, size 0x8
    struct OSThreadLink linkActive; // offset 0x2FC, size 0x8
    unsigned char * stackBase; // offset 0x304, size 0x4
    unsigned long * stackEnd; // offset 0x308, size 0x4
    int error; // offset 0x30C, size 0x4
    void * specific[2]; // offset 0x310, size 0x8
};
// total size: 0x8
struct OSMutexLink {
    // Members
    struct OSMutex * next; // offset 0x0, size 0x4
    struct OSMutex * prev; // offset 0x4, size 0x4
};
// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned int cr; // offset 0x80, size 0x4
    unsigned int lr; // offset 0x84, size 0x4
    unsigned int ctr; // offset 0x88, size 0x4
    unsigned int xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned int fpscr_pad; // offset 0x190, size 0x4
    unsigned int fpscr; // offset 0x194, size 0x4
    unsigned int srr0; // offset 0x198, size 0x4
    unsigned int srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    unsigned int psf_pad; // offset 0x1C4, size 0x4
    double psf[32]; // offset 0x1C8, size 0x100
};
// total size: 0x8
struct OSThreadLink {
    // Members
    struct OSThread * next; // offset 0x0, size 0x4
    struct OSThread * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSMutexQueue {
    // Members
    struct OSMutex * head; // offset 0x0, size 0x4
    struct OSMutex * tail; // offset 0x4, size 0x4
};
// Range: 0xFFFFFFFF -> 0x80243A6C
static void bRingBufferCallback(char * name /* r3 */, char * parms /* r4 */, void * data /* r5 */, void * context /* r31 */) {
    // Local variables
    struct _TBBkgLoadResult * result;
    struct _TBRingBuffer * buffer;
    int bytesRead; // r7
}

// total size: 0x8
struct _TBBkgLoadResult {
    // Members
    enum EBBkgError resultCode; // offset 0x0, size 0x4
    unsigned int crc; // offset 0x4, size 0x4
};
enum EBBkgError {
    EBBKGERROR_NONE = 0,
    EBBKGERROR_NOTFOUND = 1,
    EBBKGERROR_LOADBUFFERTOSMALL = 2,
    EBBKGERROR_READERROR = 3,
    EBBKGERROR_PACKAGEEMPTY = 4,
    EBBKGERROR_SYSTEMERROR = 5,
    EBBKGERROR_CANCELLED = 6,
    EBBKGERROR_NOOF = 7,
};
// Range: 0xFFFFFFFF -> 0x80243A6C
struct _TBRingBuffer * bkRingBufferCreate(struct _TBRingBuffer * buffer /* r30 */) {
    // Local variables
    struct _TBRingBuffer * buff; // r31
}

// Range: 0xFFFFFFFF -> 0x80243A6C
int bkRingBufferDestroy(struct _TBRingBuffer * buffer /* r31 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
int bkRingBufferStart(struct _TBRingBuffer * buffer /* r31 */, char * filename /* r30 */, int fileOffset /* r23 */, int fileSize /* r28 */, int blockSize /* r29 */, int numBlocks /* r26 */, int fillThreshold /* r25 */, int maxLoadBlocks /* r24 */, void * bufferData /* r22 */, int flags /* r0 */, int firstBlockOffset /* r27 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
int bkRingBufferFill(struct _TBRingBuffer * buffer /* r31 */, int numBlocks /* r28 */) {
    // Local variables
    int maxBytes; // r0
    int maxBlocks; // r30
    int totalBlocks; // r27
    int destBlock; // r26
    int blocksRead; // r29
    int load; // r23
    int bkgFlags; // r22
}

// Range: 0xFFFFFFFF -> 0x80243A6C
int bkRingBufferRead(struct _TBRingBuffer * buffer /* r30 */, void * dest /* r31 */, int numBytes /* r29 */) {
    // Local variables
    int bytesToRead; // r28
    int bytesLeft; // r29
    int copySize; // r31
    unsigned char * data; // r27
}

// Range: 0xFFFFFFFF -> 0x80243A6C
void * bkRingBufferLock(struct _TBRingBuffer * buffer /* r3 */, int * numBytes /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
void bkRingBufferUnlock(struct _TBRingBuffer * buffer /* r3 */) {}

// total size: 0xD064
struct CFlatPacker2 {
    // Functions
    inline int HasFailed() {}

    inline int GetOutCounter() {}

    void SetupInput(unsigned char * memIn, int lenIn);

    void SetupOutput(unsigned char * memOut, int lenOut);

    void InitOutputBuffer();

    int OutputChar(int data);

    int OutputPair(int current_position, int match_position, int length);

    int PostProcess();

    int OverlapTest(unsigned char * inBuf, unsigned char * outBuf, int expectedLen);

    void InitTree(int r);

    void ContractNode(int old_node, int new_node);

    void ReplaceNode(int old_node, int new_node);

    int FindNextNode(int node);

    void DeleteString(int p);

    int AddString(int new_node, int * match_position);

    int FlushOutputBuffer();

    void Setup(int posbits, int lenbits);

    int Compress();

    int WriteByte(unsigned char byte);

    int WriteBytes(unsigned char * bytes, int len);

    unsigned char GetByte();

    int GetByte(unsigned char * ptr);

    int MoveTo(int nCompressedBase);

    // Members
    unsigned char * m_memIn; // offset 0x0, size 0x4
    int m_lenIn; // offset 0x4, size 0x4
    unsigned char * m_memOut; // offset 0x8, size 0x4
    int m_lenOut; // offset 0xC, size 0x4
    int m_hasFailed; // offset 0x10, size 0x4
    int m_inCounter; // offset 0x14, size 0x4
    int m_outCounter; // offset 0x18, size 0x4
    int m_IndexBitCount; // offset 0x1C, size 0x4
    int m_LengthBitCount; // offset 0x20, size 0x4
    int m_WindowSize; // offset 0x24, size 0x4
    int m_RawLookAheadSize; // offset 0x28, size 0x4
    int m_LookAheadSize; // offset 0x2C, size 0x4
    int m_BreakEven; // offset 0x30, size 0x4
    int m_TreeRoot; // offset 0x34, size 0x4
    unsigned char m_DataBuffer[17]; // offset 0x38, size 0x11
    int m_FlagBitMask; // offset 0x4C, size 0x4
    int m_BufferOffset; // offset 0x50, size 0x4
    unsigned char m_Window[4096]; // offset 0x54, size 0x1000
    // total size: 0xC
    struct {
        // Members
        int parent; // offset 0x0, size 0x4
        int smaller_child; // offset 0x4, size 0x4
        int larger_child; // offset 0x8, size 0x4
    } m_Tree[4097]; // offset 0x1054, size 0xC00C
    int m_lenIn_PreZeroTruncation; // offset 0xD060, size 0x4
};
inline int CFlatPacker2::HasFailed() {}

inline int CFlatPacker2::GetOutCounter() {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r3
void CFlatPacker2::SetupInput(unsigned char * memIn /* r4 */, int lenIn /* r11 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r3
void CFlatPacker2::SetupOutput(unsigned char * memOut /* r4 */, int lenOut /* r5 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r3
void CFlatPacker2::InitOutputBuffer() {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r8
int CFlatPacker2::OutputChar(int data /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r7
int CFlatPacker2::OutputPair(int current_position /* r4 */, int match_position /* r5 */, int length /* r6 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r30
int CFlatPacker2::PostProcess() {
    // Local variables
    int nOverlap; // r3
    int nAllocMemoryTop; // r31
    int nFileMemoryTop; // r11
    int nCompressedBase; // r9
    int nOutputSize; // r28
    int nOutputCompressedPosition; // r29
    int nRawCompressedDataSize; // r4
    struct TPacPackHeader * pxHeader; // r9
}

// total size: 0x10
struct TPacPackHeader {
    // Members
    unsigned int nMarker; // offset 0x0, size 0x4
    unsigned int nDecompSize; // offset 0x4, size 0x4
    unsigned int nDecompMemoryRequirement; // offset 0x8, size 0x4
    unsigned int nDataOffset; // offset 0xC, size 0x4
};
// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r6
int CFlatPacker2::OverlapTest(unsigned char * inBuf /* r4 */, unsigned char * outBuf /* r5 */, int expectedLen /* r6 */) {
    // Local variables
    unsigned char * outbase; // r31
    unsigned char * inbase; // r12
    unsigned int tag; // r7
    unsigned int count; // r8
    unsigned int offset; // r9
    unsigned int loop;
    unsigned char data; // r11
    int maxOverlap; // r3
    int inOffset; // r9
    int outOffset; // r0
    volatile unsigned char * src; // r9
}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r3
void CFlatPacker2::InitTree(int r /* r4 */) {
    // Local variables
    int i; // r10
}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r3
void CFlatPacker2::ContractNode(int old_node /* r4 */, int new_node /* r5 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r10
void CFlatPacker2::ReplaceNode(int old_node /* r4 */, int new_node /* r12 */) {
    // Local variables
    int parent; // r0
}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r3
int CFlatPacker2::FindNextNode(int node /* r4 */) {
    // Local variables
    int next; // r3
}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r31
void CFlatPacker2::DeleteString(int p /* r29 */) {
    // Local variables
    int replacement; // r30
}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r3
int CFlatPacker2::AddString(int new_node /* r31 */, int * match_position /* r29 */) {
    // Local variables
    int i; // r12
    int test_node; // r4
    int delta; // r11
    int match_length; // r30
    int * child; // r9
}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r31
int CFlatPacker2::FlushOutputBuffer() {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r3
void CFlatPacker2::Setup(int posbits /* r4 */, int lenbits /* r5 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r31
int CFlatPacker2::Compress() {
    // Local variables
    int i; // r28
    int look_ahead_bytes; // r29
    int current_position; // r27
    int replace_count; // r30
    int match_length; // r26
    int match_position; // r1+0x8
}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r10
int CFlatPacker2::WriteByte(unsigned char byte /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r31
int CFlatPacker2::WriteBytes(unsigned char * bytes /* r4 */, int len /* r30 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r10
unsigned char CFlatPacker2::GetByte() {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r8
int CFlatPacker2::GetByte(unsigned char * ptr /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
// this: r31
int CFlatPacker2::MoveTo(int nCompressedBase /* r30 */) {}

// Range: 0xFFFFFFFF -> 0x80243A6C
int bCompressRLE(unsigned char * data /* r3 */, unsigned int size /* r4 */, unsigned char * output /* r5 */, unsigned int * outputSize /* r6 */) {
    // Local variables
    int lastByte; // r11
    int count; // r7
    int compressedSize; // r8
    int maxSize; // r12
    unsigned char * compressed;
    unsigned int c; // r10
}

// Range: 0xFFFFFFFF -> 0x80243A6C
int bCountColours(unsigned char * data /* r31 */, unsigned int size /* r18 */, struct TBColourHashTable * * returnHashTable /* r16 */, float msTimeout /* f1 */) {
    // Local variables
    unsigned int c; // r17
    unsigned int colours; // r22
    unsigned char r; // r29
    unsigned char g; // r25
    unsigned char b; // r26
    unsigned int h; // r31
    unsigned int colorHashTableSize;
    struct TBColourHashTable * colorHashTable; // r30
    struct TBColourHashTable * colorHashEntry; // r9
    int done; // r24
    int hashCollision;
    int hashSlotSearch;
    unsigned int col; // r0
    unsigned long long maxTime; // r27
    unsigned long long startTime; // r20
    unsigned long long currentTime; // r5
}

// total size: 0x6
struct TBColourHashTable {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char used; // offset 0x3, size 0x1
    unsigned short index; // offset 0x4, size 0x2
};
// Range: 0xFFFFFFFF -> 0x80243A6C
int bCompressBitmap24(unsigned char * data /* r31 */, unsigned int size /* r26 */, unsigned char * output /* r29 */, unsigned int * outputSize /* r25 */) {
    // Local variables
    unsigned int compressedSize; // r30
    unsigned int maxSize;
    unsigned char * compressed;
    unsigned int c; // r4
    unsigned int i; // r0
    unsigned int colours; // r3
    unsigned char r; // r8
    unsigned char g; // r6
    unsigned char b; // r7
    unsigned int h; // r9
    struct TBColourHashTable * colorHashTable; // r1+0x8
    struct TBColourHashTable * colorHashEntry; // r10
    unsigned int col; // r0
}

// Range: 0xFFFFFFFF -> 0x80243A6C
int bCompressFlatPacker2(unsigned char * data /* r30 */, unsigned int size /* r29 */, unsigned char * output /* r28 */, unsigned int * outputSize /* r31 */) {
    // Local variables
    struct CFlatPacker2 packer; // r1+0x8

    // Range: 0x80243A6C -> 0x80243A6C
    inline int CFlatPacker2::GetOutCounter() {}
}

// Range: 0xFFFFFFFF -> 0x80243A6C
int bkCompress(unsigned char * data /* r3 */, unsigned int size /* r4 */, unsigned char * output /* r5 */, unsigned int * outputSize /* r6 */, enum EBCompressionType type /* r7 */) {}

enum EBCompressionType {
    BCOMPRESSION_TYPE_NONE = -1,
    BCOMPRESSION_TYPE_RLE = 0,
    BCOMPRESSION_TYPE_BITMAP24 = 1,
    BCOMPRESSION_TYPE_FLATPACKER2 = 2,
    BCOMPRESSION_TYPES = 3,
};
// Range: 0xFFFFFFFF -> 0x80243A6C
int bDecompressRLE(unsigned char * compressedData /* r3 */, unsigned int size /* r27 */, unsigned char * output /* r26 */, unsigned int * outputSize /* r25 */) {
    // Local variables
    unsigned int c; // r29
    unsigned int count; // r5
    unsigned char value;
    unsigned int maxSize; // r28
    unsigned int uncompressedSize; // r0
}

// Range: 0xFFFFFFFF -> 0x80243A6C
int bDecompressBitmap24(unsigned char * compressedData /* r3 */, unsigned int size /* r4 */, unsigned char * output /* r5 */, unsigned int * outputSize /* r30 */) {
    // Local variables
    unsigned int colours; // r9
    unsigned int headerSize; // r0
    unsigned int maxSize; // r6
    unsigned int uncompressedSize; // r12
    unsigned char * col; // r9
    unsigned int c; // r0
    unsigned int i; // r11
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned int inc; // r31
}

// Range: 0xFFFFFFFF -> 0x80243A6C
int bDecompressFlatPacker2(unsigned char * compressedData /* r3 */, unsigned int size /* r4 */, unsigned char * output /* r5 */, unsigned int * outputSize /* r6 */) {
    // Local variables
    unsigned char * inBuf; // r11
    unsigned char * outBuf; // r5
    unsigned char * outbase; // r8
    unsigned char * inbase;
    unsigned int tag; // r10
    unsigned int count; // ctr
    unsigned int offset;
    unsigned int loop;
    unsigned char * pxDataEnd; // r3
    int nCompressedLen;
    volatile unsigned char * src; // r9
    struct TPacPackHeader * pxHeader;
}

// Range: 0xFFFFFFFF -> 0x80243A6C
int bkDecompress(unsigned char * compressedData /* r3 */, unsigned int size /* r4 */, unsigned char * output /* r5 */, unsigned int * outputSize /* r6 */, enum EBCompressionType type /* r7 */) {}

// Range: 0x80243A6C -> 0x80243B2C
int bkInit(void * base /* r30 */, unsigned int size /* r29 */, unsigned int flags /* r31 */) {}

// Range: 0x80243B2C -> 0x80243B78
void bkShutdown() {}

// Range: 0x80243B78 -> 0x80243C9C
void bkUpdate(int modules /* r29 */) {
    // Local variables
    int reenablePooling; // r28

    /* anonymous block */ {
        // Range: 0x80243BD4 -> 0x80243C70
        unsigned long long curTime; // r30
    }
}

// Range: 0x80243C9C -> 0x80243DE8
int bKernelInitBkgLoad() {
    // Local variables
    int loop;
    int priority;
}

// Range: 0x80243DE8 -> 0x80243E74
int bKernelShutdownBkgLoad() {}

// Range: 0x80243E74 -> 0x80243F34
void bUpdateBkgLoad() {
    // Local variables
    struct _TBkgSchedulerChannel * channel; // r3
    int l; // r31
}

// total size: 0x140
struct _TBkgSchedulerChannel {
    // Members
    char filename[256]; // offset 0x0, size 0x100
    struct _TBFileHandleType * fp; // offset 0x100, size 0x4
    int offset; // offset 0x104, size 0x4
    unsigned char * dest; // offset 0x108, size 0x4
    int noofBytes; // offset 0x10C, size 0x4
    int blockSize; // offset 0x110, size 0x4
    int thisBlockSize; // offset 0x114, size 0x4
    enum EBBkgChannel channel; // offset 0x118, size 0x4
    char * ident; // offset 0x11C, size 0x4
    void (* completeCallback)(void *); // offset 0x120, size 0x4
    void * callbackContext; // offset 0x124, size 0x4
    int bytesRead; // offset 0x128, size 0x4
    int orgNoofBytes; // offset 0x12C, size 0x4
    unsigned int flags; // offset 0x130, size 0x4
    unsigned int state; // offset 0x134, size 0x4
    unsigned int uid; // offset 0x138, size 0x4
    enum EBBkgError resultCode; // offset 0x13C, size 0x4
};
// Range: 0x80243F34 -> 0x80243F64
static void bGenerateLoadEvent(char * eventName /* r3 */, char * filename /* r4 */, unsigned int crc /* r5 */, enum EBBkgError resultCode /* r6 */) {
    // Local variables
    struct _TBBkgLoadResult loadResult; // r1+0x8
}

// Range: 0x80243F64 -> 0x80244038
static void bFixupResource(struct _TBBkgLoadCmd * cmd /* r31 */) {
    // Local variables
    char * cp; // r3
}

// total size: 0x3A8
struct _TBBkgLoadCmd {
    // Members
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
};
// Range: 0x80244038 -> 0x802440D4
static unsigned char * EnsureAllocBkg(unsigned char * dataPtr /* r31 */, int size /* r30 */) {
    // Local variables
    char * group; // r7

    /* anonymous block */ {
        // Range: 0x8024409C -> 0x8024409C
        int largest; // r1+0x8
        int sizeFree;
    }
}

// Range: 0x802440D4 -> 0x80244248
int bQueueBackgroundLoad(enum EBBkgChannel channel /* r27 */, char * dest /* r23 */, struct _TBFileHandleType * fp /* r29 */, char * onDiskFilename /* r28 */, char * filename /* r30 */, unsigned int crc /* r26 */, int offset /* r25 */, int noofBytes /* r24 */, int flags /* r0 */, char * event /* r1+0x3C */, int resType /* r0 */) {
    // Local variables
    struct _TBBkgLoadCmd * cmd; // r31
}

// Range: 0x80244248 -> 0x80244388
static unsigned char * LoadSingleFileBkg(char * filename /* r3 */, unsigned char * dataPtr /* r30 */, int * retSize /* r29 */, char * eventName /* r27 */, int resType /* r26 */, unsigned int crc /* r28 */) {
    // Local variables
    struct _TBFileHandleType * fp; // r1+0x118
    int len; // r31
    char buf[256]; // r1+0x18
    unsigned char * oldDataPtr; // r25
}

// Range: 0xFFFFFFFF -> 0x80244388
unsigned char * bkLoadFileBkg(struct _TBPackageIndex * index /* r30 */, char * filename /* r27 */, unsigned char * dataPtr /* r26 */, int * retSize /* r29 */, struct _TBFileTagInfo * tagInfo /* r28 */, char * eventName /* r24 */) {
    // Local variables
    struct _TBFileIndex * filePtr; // r31
    unsigned int crc; // r25
    char pakName[256]; // r1+0x18
}

// Range: 0x80244388 -> 0x80244554
struct _TBPackageIndex * bkLoadPackageBkg(struct _TBPackageIndex * parentIndex /* r31 */, char * filename /* r27 */, char * eventName /* r26 */, int * retSize /* r30 */, unsigned char * dataPtr /* r28 */) {
    // Local variables
    unsigned char * data; // r22
    char buf[256]; // r1+0x18
    struct _TBFileIndex * filePtr; // r29
    int isStatic; // r23
    unsigned int crc; // r25
    char pakFilename[256]; // r1+0x118
    char pakInPakFilename[256]; // r1+0x218
}

// Range: 0x80244554 -> 0x80244584
int bIsBkgChannelBusy(enum EBBkgChannel channel /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80244584
int bIsBkgChannelQueueEmpty(enum EBBkgChannel channel /* r3 */) {}

// Range: 0x80244584 -> 0x802446AC
static int bScheduleLoad(struct _TBBkgLoadCmd * cmd /* r30 */, void (* callback)(void *) /* r4 */, void * context /* r5 */) {
    // Local variables
    struct _TBkgSchedulerChannel * channel; // r31
}

// Range: 0x802446AC -> 0x8024473C
static void * bKernelWorkerThread(void * context /* r3 */) {}

// Range: 0x8024473C -> 0x802447F4
static int bkgOpenFile(struct _TBkgSchedulerChannel * channel /* r31 */) {
    // Local variables
    int size; // r3
}

// Range: 0x802447F4 -> 0x8024488C
static int CheckForCancelledIO(int channelID /* r3 */) {
    // Local variables
    int c; // r11
    struct _TBkgSchedulerChannel * channel; // r10
}

// Range: 0x8024488C -> 0x802449E0
static void KickScheduler(unsigned long context /* r3 */) {
    // Local variables
    struct _TBkgSchedulerChannel * channel; // r31
    int c; // r29
    int channelID; // r30
    int startChannel; // @ 0x8047CE90
}

// Range: 0x802449E0 -> 0x80244A4C
static void bEndLoad(struct _TBkgSchedulerChannel * channel /* r31 */) {}

// Range: 0x80244A4C -> 0x80244C50
static void BkgIOCompletion(int bytesTransferred /* r3 */, struct DVDFileInfo * fileInfo /* r4 */) {
    // Local variables
    unsigned long long ticksPerKb;
    unsigned long long desiredTime; // r27
    unsigned long long actualTime; // r3
    unsigned long long delay; // r9
    int sleepTime;
    int rate;
    struct _TBkgSchedulerChannel * channel; // r31
}

// Range: 0x80244C50 -> 0x80244CB4
static void BackgroundLoadComplete(void * context /* r3 */) {
    // Local variables
    struct _TBBkgLoadCmd * cmd; // r9
    struct _TBkgSchedulerChannel * channel; // r9
    int l; // r11
    unsigned int uid; // r3
}

// Range: 0x80244CB4 -> 0x80244E2C
static void BackgroundLoadFreeRequest(struct _TBkgSchedulerChannel * channel /* r29 */) {
    // Local variables
    struct _TBBkgLoadCmd * cmd; // r31
    int l; // r30
    unsigned int uid; // r11
}

// Range: 0xFFFFFFFF -> 0x80244E2C
void bkSetBkgLoadSpeed(int kbPerSec /* r3 */) {}

// Range: 0x80244E2C -> 0x80244EF4
int bkCancelLoadPackageBkg(struct _TBPackageIndex * packageIndex /* r31 */) {
    // Local variables
    int l; // r10
}

// Range: 0xFFFFFFFF -> 0x80244EF4
int bkCacheFileListAdd(char * filename /* r3 */, int priority /* r4 */, int groupId /* r5 */, int flags /* r6 */) {}

// Range: 0xFFFFFFFF -> 0x80244EF4
void bkCacheFileListRemove(char * filename /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80244EF4
int bkCacheFileListAddGroup(int priority /* r3 */, int groupId /* r4 */, int noofFiles /* r5 */, char * * fileList /* r6 */) {}

// Range: 0xFFFFFFFF -> 0x80244EF4
void bkCacheFileListRemoveGroup(int groupId /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80244EF4
int bkCacheFindFile(char * filename /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80244EF4
void bkCacheEnable(int state /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80244EF4
void bkCacheFlush(int deleteAll /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80244EF4
int bkCacheIsEnabled() {}

// Range: 0xFFFFFFFF -> 0x80244EF4
int bkCacheIsLoading() {}

// Range: 0xFFFFFFFF -> 0x80244EF4
unsigned int bkCacheFreeSpace() {}

// Range: 0x80244EF4 -> 0x80244F80
int bkReadClock(struct _TBClock * clock /* r30 */) {
    // Local variables
    long long ticks;
    struct OSCalendarTime td; // r1+0x8
}

// total size: 0x28
struct OSCalendarTime {
    // Members
    int sec; // offset 0x0, size 0x4
    int min; // offset 0x4, size 0x4
    int hour; // offset 0x8, size 0x4
    int mday; // offset 0xC, size 0x4
    int mon; // offset 0x10, size 0x4
    int year; // offset 0x14, size 0x4
    int wday; // offset 0x18, size 0x4
    int yday; // offset 0x1C, size 0x4
    int msec; // offset 0x20, size 0x4
    int usec; // offset 0x24, size 0x4
};
// Range: 0xFFFFFFFF -> 0x80244F80
void VTSetAttr(int id /* r4 */) {}

// Range: 0x80244F80 -> 0x802450D4
void bInitDebug() {
    // Local variables
    struct _TBClock clock; // r1+0x8
    char * months[12]; // @ 0x80384400
}

// Range: 0x802450D4 -> 0x80245110
void bShutdownDebug() {}

// Range: 0x80245110 -> 0x802451FC
struct _TBDebugStream * bkCreateDebugStream(struct _TBDebugStream * stream /* r31 */, char * filename /* r30 */, unsigned int flags /* r29 */) {}

// Range: 0x802451FC -> 0x80245264
void bkDeleteDebugStream(struct _TBDebugStream * stream /* r31 */) {}

// Range: 0x80245264 -> 0x80245280
void bkSetDebugStream(struct _TBDebugStream * stream /* r3 */) {}

// Range: 0x80245280 -> 0x8024547C
void bkVPrintf(char * format /* r31 */, struct __va_list_tag * argp /* r30 */) {
    // Local variables
    long long ticks;
    struct OSCalendarTime td; // r1+0x8

    /* anonymous block */ {
        // Range: 0x802453A4 -> 0x802453C4
        int len; // r5
    }

    /* anonymous block */ {
        // Range: 0x802453D0 -> 0x80245450
        unsigned long long start; // r28
        unsigned long long pause; // r30
    }
}

// Range: 0xFFFFFFFF -> 0x8024547C
void bPrintfNoMutex(char * format /* r31 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
    long long ticks;
    struct OSCalendarTime td; // r1+0x80

    /* anonymous block */ {
        // Range: 0x8024547C -> 0x8024547C
        int len; // r5
    }

    /* anonymous block */ {
        // Range: 0x8024547C -> 0x8024547C
        unsigned long long start; // r28
        unsigned long long pause; // r30
    }
}

// Range: 0xFFFFFFFF -> 0x8024547C
void bkStreamPrintf(struct _TBDebugStream * stream /* r31 */, char * format /* r30 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
    long long ticks;
    struct OSCalendarTime td; // r1+0x80

    /* anonymous block */ {
        // Range: 0x8024547C -> 0x8024547C
        int len; // r5
    }
}

// Range: 0x8024547C -> 0x802454AC
void bkAlert(char * message /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x802454AC
void bkFlushDebugStreamToFile(struct _TBDebugStream * stream /* r3 */) {}

// Range: 0x802454AC -> 0x802454D8
void bInitFileGC() {}

// Range: 0xFFFFFFFF -> 0x802454D8
unsigned char * bkLoadFile(struct _TBPackageIndex * index /* r31 */, char * filename /* r4 */, unsigned char * dataPtr /* r30 */, int * retSize /* r29 */, struct _TBFileTagInfo * tagInfo /* r27 */, int noofExtraBytes /* r28 */) {}

// Range: 0x802454D8 -> 0x802454FC
int bkOpenFileReadOnly(char * filename /* r3 */, struct _TBFileHandleType * * fpPtr /* r4 */) {}

// Range: 0x802454FC -> 0x802455D4
int bOpenFileReadOnly(char * filename /* r30 */, struct _TBFileHandleType * * fpPtr /* r28 */, int usemalloc /* r27 */) {
    // Local variables
    struct _TBFileHandleType * fp; // r29
    char buf[256]; // r1+0x8
    char * cp; // r31
}

// Range: 0x802455D4 -> 0x80245730
int bHandleDVDErrors(char * buf /* r30 */) {
    // Local variables
    int status; // r31
    int coverOpenedFlag; // r28
}

// Range: 0x80245730 -> 0x80245740
static void bForegroundLoadReadCallback(int bytesTransferred /* r3 */, struct DVDFileInfo * fileInfo /* r4 */) {}

// Range: 0x80245740 -> 0x8024598C
int bkReadFromFile(struct _TBFileHandleType * fp /* r27 */, void * data /* r26 */, int noofBytes /* r30 */) {
    // Local variables
    unsigned int dataOver;
    unsigned int noofBytesOver; // r28
    int noofBytesRead; // r31
    int totalBytesRead; // r24
    int bufferSize; // r23
    void * buffer; // r25
    int readAligned; // r5
    int read;
    int vsyncs; // r29
    int nextVsyncCount; // r31
}

// Range: 0x8024598C -> 0x80245AAC
int bkSeekFile(struct _TBFileHandleType * fp /* r29 */, int position /* r30 */, enum EBHostSeekMode mode /* r5 */) {
    // Local variables
    int ret; // r31
    unsigned int from; // r3
    int vsyncs; // r30
    int nextVsyncCount; // r31
}

enum EBHostSeekMode {
    EHOSTSEEK_SET = 0,
    EHOSTSEEK_CUR = 1,
    EHOSTSEEK_END = 2,
};
// Range: 0xFFFFFFFF -> 0x80245AAC
int bkTellFile(struct _TBFileHandleType * fp /* r3 */) {}

// Range: 0x80245AAC -> 0x80245AB4
int bFileLength(struct _TBFileHandleType * fp /* r3 */) {}

// Range: 0x80245AB4 -> 0x80245AD8
void bkCloseFile(struct _TBFileHandleType * fp /* r3 */) {}

// Range: 0x80245AD8 -> 0x80245B18
void bCloseFile(struct _TBFileHandleType * fp /* r31 */, int usemalloc /* r30 */) {}

// Range: 0xFFFFFFFF -> 0x80245B18
int bkHostOpenFileReadOnly(char * filename /* r3 */, int * fpPtr /* r30 */) {}

// Range: 0x80245B18 -> 0x80245B5C
int bkHostCreateFile(char * filename /* r3 */, int * fpPtr /* r30 */) {}

// Range: 0xFFFFFFFF -> 0x80245B5C
int bkHostReadFromFile(int fp /* r3 */, void * data /* r4 */, int noofBytes /* r5 */) {}

// Range: 0x80245B5C -> 0x80245B7C
int bkHostWriteToFile(int fp /* r3 */, void * data /* r4 */, int noofBytes /* r5 */) {}

// Range: 0xFFFFFFFF -> 0x80245B7C
int bkHostSeekFile(int fp /* r3 */, int position /* r4 */, enum EBHostSeekMode mode /* r5 */) {
    // Local variables
    int ret; // r3
}

// Range: 0xFFFFFFFF -> 0x80245B7C
int bkHostTellFile(int fp /* r3 */) {}

// Range: 0x80245B7C -> 0x80245B9C
void bkHostCloseFile(int fp /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80245B9C
int bkFileFindFirst(struct _TBFindFileInfo * info /* r31 */, char * dirname /* r4 */, char * filename /* r29 */, int maxlen /* r30 */) {}

// total size: 0xC
struct _TBFindFileInfo {
    // Members
    struct DVDDir dir; // offset 0x0, size 0xC
};
// total size: 0xC
struct DVDDir {
    // Typedefs
    typedef struct DVDDir ._14;

    // Members
    unsigned int entryNum; // offset 0x0, size 0x4
    unsigned int location; // offset 0x4, size 0x4
    unsigned int next; // offset 0x8, size 0x4
};
// Range: 0xFFFFFFFF -> 0x80245B9C
int bkFileFindNext(struct _TBFindFileInfo * info /* r27 */, char * filename /* r30 */, int maxlen /* r29 */) {
    // Local variables
    int done; // r28
    struct DVDDirEntry dirent; // r1+0x8
}

// total size: 0xC
struct DVDDirEntry {
    // Typedefs
    typedef struct DVDDirEntry ._15;

    // Members
    unsigned int entryNum; // offset 0x0, size 0x4
    int isDir; // offset 0x4, size 0x4
    char * name; // offset 0x8, size 0x4
};
// Range: 0xFFFFFFFF -> 0x80245B9C
int bkFileFindClose(struct _TBFindFileInfo * info /* r3 */) {}

// Range: 0x80245B9C -> 0x80245D08
unsigned char * bSpecificHeapInit(void * basePtr /* r29 */, unsigned int size /* r28 */) {
    // Local variables
    void * heap; // r29
    void * arenaLo; // r31
    void * arenaHi; // r30
    int old; // r27
    unsigned int base;
}

// Range: 0x80245D08 -> 0x80245D54
unsigned int bSpecificHeapDefaultSize(unsigned int size /* r3 */) {
    // Local variables
    int old; // r30
    void * arenaLo; // r28
    void * arenaHi; // r29
}

// Range: 0x80245D54 -> 0x80245D78
void bSpecificHeapShutdown(unsigned char * base /* r3 */) {}

// Range: 0x80245D78 -> 0x80245DB8
int bInitKernel() {}

// Range: 0x80245DB8 -> 0x80245E78
void bShutdownKernel() {
    // Local variables
    struct _TBPackageID pak;
}

// Range: 0x80245E78 -> 0x80245ED0
void bRun(void (* mainFunc)(void *) /* r31 */, void * context /* r30 */) {}

// Range: 0x80245ED0 -> 0x80245F00
struct OSMutex * bkCreateMutex(struct OSMutex * mutex /* r30 */) {}

// Range: 0x80245F00 -> 0x80245F54
int bkWaitMutex(struct OSMutex * mutex /* r30 */) {
    // Local variables
    int useMutex; // r31
}

// Range: 0x80245F54 -> 0x80245FA8
int bkReleaseMutex(struct OSMutex * mutex /* r30 */) {
    // Local variables
    int useMutex; // r31
}

// Range: 0x80245FA8 -> 0x80246000
int bkDeleteMutex(struct OSMutex * mutex /* r31 */) {}

// Range: 0xFFFFFFFF -> 0x80246000
unsigned int * bkCreateCriticalSection(unsigned int * criticalSection /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80246000
int bkEnterCriticalSection(unsigned int * criticalSection /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80246000
int bkTryEnterCriticalSection(unsigned int * criticalSection /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80246000
int bkLeaveCriticalSection(unsigned int * criticalSection /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80246000
int bkDeleteCriticalSection(unsigned int * criticalSection /* r3 */) {}

// Range: 0x80246000 -> 0x80246010
int bInitCommandLine(int argc /* r3 */, char * * argv /* r4 */) {}

// Range: 0x80246010 -> 0x80246014
void bShutdownCommandLine() {}

// Range: 0x80246014 -> 0x80246030
void bkGetCommandLine(int * argc /* r3 */, char * * * argv /* r4 */) {}

// Range: 0x80246030 -> 0x80246054
int bkGetSystemFreeMemory() {}

// Range: 0x80246054 -> 0x80246084
static void resetWaitForSystemToFinish() {}

// Range: 0x80246084 -> 0x80246360
int bResetCheck(int reset /* r31 */) {
    // Local variables
    struct _TBEvent * event; // r3
    int hardwareReset; // r29
    char buf[2]; // @ 0x8047CED0
}

// Range: 0xFFFFFFFF -> 0x80246360
void bkSetModulePath(char * pathName /* r3 */) {}

// Range: 0x80246360 -> 0x802463EC
enum EBLanguageID bkGetSystemLanguage() {}

// Range: 0x802463EC -> 0x80246444
struct OSThread * bkCreateThread(struct OSThread * thread /* r31 */, void * (* func)(void *) /* r4 */, void * params /* r5 */, int paramsSize /* r6 */, int priority /* r0 */, void * stack /* r8 */, int stackSize /* r9 */, char * name /* r10 */) {
    // Local variables
    void * stackEnd;
}

// Range: 0xFFFFFFFF -> 0x80246444
int bkSetThreadPriority(struct OSThread * thread /* r3 */, int priority /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x80246444
struct OSThread * bkGetCurrentThreadId() {}

// Range: 0x80246444 -> 0x8024646C
int bkSemaphoreCreate(struct OSSemaphore * sema /* r3 */, const char * name /* r4 */) {
    // Local variables
    int count;
}

// total size: 0xC
struct OSSemaphore {
    // Members
    int count; // offset 0x0, size 0x4
    struct OSThreadQueue queue; // offset 0x4, size 0x8
};
// Range: 0x8024646C -> 0x80246490
int bkSemaphoreWait(struct OSSemaphore * sema /* r3 */) {}

// Range: 0x80246490 -> 0x802464B4
int bkSemaphoreSignal(struct OSSemaphore * sema /* r3 */) {}

// Range: 0x802464B4 -> 0x802464BC
int bkSemaphoreDelete(struct OSSemaphore * sema /* r3 */) {}

// Range: 0x802464BC -> 0x802464DC
struct _TBPackageIndex * bkOpenPackage(char * filename /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x802464DC
struct _TBPackageIndex * bkLoadPackage(struct _TBPackageIndex * parentIndex /* r3 */, char * filename /* r4 */, unsigned char * dataPtr /* r5 */) {}

// Range: 0x802464DC -> 0x802465D4
int bkFreePackageMemory(struct _TBPackageIndex * * index /* r30 */) {
    // Local variables
    struct _TBPackageIndex * newIndex; // r31
}

// Range: 0x802465D4 -> 0x802465F8
void bkClosePackage(struct _TBPackageIndex * index /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x802465F8
static void * bPerfMonMalloc(unsigned int size /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x802465F8
static void bPerfMonFree(void * block /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x802465F8
static void bPerfMonReset() {}

// Range: 0xFFFFFFFF -> 0x802465F8
void bkPerfMonInit(int events /* r29 */) {
    // Local variables
    struct _GXColor color; // r1+0x1C
    int c; // r31
    char buf[16]; // r1+0x8
}

// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// Range: 0xFFFFFFFF -> 0x802465F8
void bkPerfMonEnable(int enable /* r3 */) {}

// Range: 0x802465F8 -> 0x80246638
void bkPerfMonShutdown() {}

// Range: 0x80246638 -> 0x80246684
void bPerfMonPrepare() {}

// Range: 0xFFFFFFFF -> 0x80246684
void bkPerfMonStart(int event /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80246684
void bkPerfMonEnd(int event /* r3 */) {}

// Range: 0x80246684 -> 0x802466D4
void bPerfMonFinish() {}

// Range: 0x802466D4 -> 0x8024671C
void bPerfMonDraw() {}

// Range: 0x8024671C -> 0x8024673C
void bInitTimer() {}

// Range: 0x8024673C -> 0x80246740
void bShutdownTimer() {}

// Range: 0x80246740 -> 0x80246760
unsigned long long bkTimerRead() {}

// Range: 0x80246760 -> 0x80246834
float bkTimerToFPS(unsigned long long timerValue /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80246834
float bkTimerToScanlines(unsigned long long timerValue /* r30 */, int frequency /* r29 */, int yRes /* r28 */) {}

// Range: 0x80246834 -> 0x8024686C
unsigned long long bkTimerDelta(unsigned long long startValue /* r3 */, unsigned long long endValue /* r5 */) {}

// Range: 0x8024686C -> 0x8024692C
void bkSleep(int miliseconds /* r30 */, int yield /* r4 */) {
    // Local variables
    unsigned long long now; // r28
    unsigned long long wait; // r30
}

// Range: 0xFFFFFFFF -> 0x8024692C
void bkSRAMWriteFromMemory(void * memAddr /* r0 */, void * scrAddr /* r4 */, unsigned int size /* r5 */) {}

// Range: 0x8024692C -> 0x8024694C
void bkSRAMReadToMemory(void * memAddr /* r3 */, void * scrAddr /* r4 */, unsigned int size /* r5 */) {}

// Range: 0x8024694C -> 0x80246970
void bkSRAMWait() {}

// Range: 0x80246970 -> 0x802469B8
void bkSRAMReadToCachedMemory(void * memAddr /* r29 */, void * scrAddr /* r28 */, unsigned int size /* r30 */) {}

// Range: 0xFFFFFFFF -> 0x802469B8
void bkSRAMWriteFromCachedMemory(void * memAddr /* r29 */, void * scrAddr /* r28 */, unsigned int size /* r30 */) {}

// Range: 0x802469B8 -> 0x802469D8
void bkInvalidateDataCacheRange(void * memAddr /* r3 */, unsigned int sizeInBytes /* r4 */) {}

// Range: 0x802469D8 -> 0x802469F8
void bkFlushDataCacheRange(void * memAddr /* r3 */, unsigned int sizeInBytes /* r4 */) {}

// Range: 0x802469F8 -> 0x80246B28
static void __static_initialization_and_destruction_0(int __initialize_p /* r3 */, int __priority /* r4 */) {}

// Range: 0x80246B28 -> 0x80246B54
static void _GLOBAL_.I.bAssertErrorFunc__FiiPce() {}

// total size: 0x8
struct __vtbl_ptr_type {
    // Members
    short __delta; // offset 0x0, size 0x2
    short __index; // offset 0x2, size 0x2
    union { // inferred
        void * __pfn; // offset 0x4, size 0x4
        short __delta2; // offset 0x4, size 0x2
    };
};
typedef const struct __vtbl_ptr_type __vtbl_ptr_type;
struct bad_alloc {};
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef unsigned int size_t;
typedef struct __va_list_tag __va_list[1];
typedef __va_list __gnuc_va_list;
typedef unsigned int clock_t;
typedef int time_t;
// total size: 0x24
struct tm {
    // Members
    int tm_sec; // offset 0x0, size 0x4
    int tm_min; // offset 0x4, size 0x4
    int tm_hour; // offset 0x8, size 0x4
    int tm_mday; // offset 0xC, size 0x4
    int tm_mon; // offset 0x10, size 0x4
    int tm_year; // offset 0x14, size 0x4
    int tm_wday; // offset 0x18, size 0x4
    int tm_yday; // offset 0x1C, size 0x4
    int tm_isdst; // offset 0x20, size 0x4
};
typedef unsigned int ULong;
// total size: 0xC
struct _glue {
    // Members
    struct _glue * _next; // offset 0x0, size 0x4
    int _niobs; // offset 0x4, size 0x4
    struct __sFILE * _iobs; // offset 0x8, size 0x4
};
// total size: 0x60
struct __sFILE {
    // Members
    unsigned char * _p; // offset 0x0, size 0x4
    int _r; // offset 0x4, size 0x4
    int _w; // offset 0x8, size 0x4
    short _flags; // offset 0xC, size 0x2
    short _file; // offset 0xE, size 0x2
    struct __sbuf _bf; // offset 0x10, size 0x8
    int _lbfsize; // offset 0x18, size 0x4
    void * _cookie; // offset 0x1C, size 0x4
    int (* _read)(void *, char *, int); // offset 0x20, size 0x4
    int (* _write)(void *, const char *, int); // offset 0x24, size 0x4
    int (* _seek)(void *, long, int); // offset 0x28, size 0x4
    int (* _close)(void *); // offset 0x2C, size 0x4
    struct __sbuf _ub; // offset 0x30, size 0x8
    unsigned char * _up; // offset 0x38, size 0x4
    int _ur; // offset 0x3C, size 0x4
    unsigned char _ubuf[10]; // offset 0x40, size 0xA
    unsigned char _nbuf[1]; // offset 0x4A, size 0x1
    struct __sbuf _lb; // offset 0x4C, size 0x8
    int _blksize; // offset 0x54, size 0x4
    int _offset; // offset 0x58, size 0x4
    struct _reent * _data; // offset 0x5C, size 0x4
};
// total size: 0x8
struct __sbuf {
    // Members
    unsigned char * _base; // offset 0x0, size 0x4
    int _size; // offset 0x4, size 0x4
};
// total size: 0x304
struct _reent {
    // Inner declarations
    union {
        // total size: 0x4C
        struct {
            // Members
            unsigned int _rand_next; // offset 0x0, size 0x4
            char * _strtok_last; // offset 0x4, size 0x4
            char _asctime_buf[26]; // offset 0x8, size 0x1A
            struct tm _localtime_buf; // offset 0x24, size 0x24
            int _gamma_signgam; // offset 0x48, size 0x4
        } _reent; // offset 0x0, size 0x4C
        // total size: 0xF0
        struct {
            // Members
            unsigned char * _nextf[30]; // offset 0x0, size 0x78
            unsigned int _nmalloc[30]; // offset 0x78, size 0x78
        } _unused; // offset 0x0, size 0xF0
    };

    // Members
    int _errno; // offset 0x0, size 0x4
    struct __sFILE * _stdin; // offset 0x4, size 0x4
    struct __sFILE * _stdout; // offset 0x8, size 0x4
    struct __sFILE * _stderr; // offset 0xC, size 0x4
    int _inc; // offset 0x10, size 0x4
    char _emergency[25]; // offset 0x14, size 0x19
    int _current_category; // offset 0x30, size 0x4
    const char * _current_locale; // offset 0x34, size 0x4
    int __sdidinit; // offset 0x38, size 0x4
    void (* __cleanup)(struct _reent *); // offset 0x3C, size 0x4
    struct _Bigint * _result; // offset 0x40, size 0x4
    int _result_k; // offset 0x44, size 0x4
    struct _Bigint * _p5s; // offset 0x48, size 0x4
    struct _Bigint * * _freelist; // offset 0x4C, size 0x4
    int _cvtlen; // offset 0x50, size 0x4
    char * _cvtbuf; // offset 0x54, size 0x4
    union {
        // total size: 0x4C
        struct {
            // Members
            unsigned int _rand_next; // offset 0x0, size 0x4
            char * _strtok_last; // offset 0x4, size 0x4
            char _asctime_buf[26]; // offset 0x8, size 0x1A
            struct tm _localtime_buf; // offset 0x24, size 0x24
            int _gamma_signgam; // offset 0x48, size 0x4
        } _reent; // offset 0x0, size 0x4C
        // total size: 0xF0
        struct {
            // Members
            unsigned char * _nextf[30]; // offset 0x0, size 0x78
            unsigned int _nmalloc[30]; // offset 0x78, size 0x78
        } _unused; // offset 0x0, size 0xF0
    } _new; // offset 0x58, size 0xF0
    struct _atexit * _atexit; // offset 0x148, size 0x4
    struct _atexit _atexit0; // offset 0x14C, size 0x88
    void (* * _sig_func)(int); // offset 0x1D4, size 0x4
    struct _glue __sglue; // offset 0x1D8, size 0xC
    struct __sFILE __sf[3]; // offset 0x1E4, size 0x120
};
// total size: 0x18
struct _Bigint {
    // Members
    struct _Bigint * _next; // offset 0x0, size 0x4
    int _k; // offset 0x4, size 0x4
    int _maxwds; // offset 0x8, size 0x4
    int _sign; // offset 0xC, size 0x4
    int _wds; // offset 0x10, size 0x4
    unsigned int _x[1]; // offset 0x14, size 0x4
};
// total size: 0x88
struct _atexit {
    // Members
    struct _atexit * _next; // offset 0x0, size 0x4
    int _ind; // offset 0x4, size 0x4
    void (* _fns[32])(); // offset 0x8, size 0x80
};
typedef int _fpos_t;
typedef int fpos_t;
typedef struct __sFILE FILE;
// total size: 0x8
struct div_t {
    // Typedefs
    typedef struct div_t ._3;

    // Members
    int quot; // offset 0x0, size 0x4
    int rem; // offset 0x4, size 0x4
};
typedef struct div_t div_t;
// total size: 0x8
struct ldiv_t {
    // Typedefs
    typedef struct ldiv_t ._4;

    // Members
    long quot; // offset 0x0, size 0x4
    long rem; // offset 0x4, size 0x4
};
typedef struct ldiv_t ldiv_t;
// total size: 0x60
struct __va_regsave_t {
    // Typedefs
    typedef struct __va_regsave_t ._5;

    // Members
    long __gp_save[8]; // offset 0x0, size 0x20
    double __fp_save[8]; // offset 0x20, size 0x40
};
typedef struct __va_regsave_t __va_regsave_t;
typedef __va_list va_list;
union __dmath {
    unsigned int i[2]; // offset 0x0, size 0x8
    double d; // offset 0x0, size 0x8
};
// total size: 0x28
struct __exception {
    // Members
    int type; // offset 0x0, size 0x4
    char * name; // offset 0x4, size 0x4
    double arg1; // offset 0x8, size 0x8
    double arg2; // offset 0x10, size 0x8
    double retval; // offset 0x18, size 0x8
    int err; // offset 0x20, size 0x4
};
enum __fdlibm_version {
    __fdlibm_ieee = -1,
    __fdlibm_svid = 0,
    __fdlibm_xopen = 1,
    __fdlibm_posix = 2,
};
typedef int ptrdiff_t;
typedef unsigned int wint_t;
typedef char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef volatile unsigned char vu8;
typedef volatile unsigned short vu16;
typedef volatile unsigned long vu32;
typedef volatile unsigned long long vu64;
typedef volatile signed char vs8;
typedef volatile short vs16;
typedef volatile long vs32;
typedef volatile long long vs64;
typedef float f32;
typedef double f64;
typedef volatile float vf32;
typedef volatile double vf64;
typedef char * Ptr;
typedef int BOOL;
// total size: 0x4
struct PPC_GQR_t {
    // Typedefs
    typedef struct PPC_GQR_t ._6;

    // Members
    unsigned int _pad0 : 2; // offset 0x0, size 0x4
    unsigned int loadScale : 6; // offset 0x0, size 0x4
    unsigned int _pad1 : 5; // offset 0x0, size 0x4
    unsigned int loadType : 3; // offset 0x0, size 0x4
    unsigned int _pad2 : 2; // offset 0x0, size 0x4
    unsigned int storeScale : 6; // offset 0x0, size 0x4
    unsigned int _pad3 : 5; // offset 0x0, size 0x4
    unsigned int storeType : 3; // offset 0x0, size 0x4
};
typedef struct PPC_GQR_t PPC_GQR_t;
union PPC_GQR_u {
    unsigned int val; // offset 0x0, size 0x4
    PPC_GQR_t f; // offset 0x0, size 0x4
};
typedef union PPC_GQR_u PPC_GQR_u;
// total size: 0x4
struct PPC_DMA_U_t {
    // Typedefs
    typedef struct PPC_DMA_U_t ._8;

    // Members
    unsigned int memAddr : 27; // offset 0x0, size 0x4
    unsigned int dmaLenU : 5; // offset 0x0, size 0x4
};
typedef struct PPC_DMA_U_t PPC_DMA_U_t;
union PPC_DMA_U_u {
    unsigned int val; // offset 0x0, size 0x4
    PPC_DMA_U_t f; // offset 0x0, size 0x4
};
typedef union PPC_DMA_U_u PPC_DMA_U_u;
// total size: 0x4
struct PPC_DMA_L_t {
    // Typedefs
    typedef struct PPC_DMA_L_t ._10;

    // Members
    unsigned int lcAddr : 27; // offset 0x0, size 0x4
    unsigned int dmaLd : 1; // offset 0x0, size 0x4
    unsigned int dmaLenL : 2; // offset 0x0, size 0x4
    unsigned int dmaTrigger : 1; // offset 0x0, size 0x4
    unsigned int dmaFlush : 1; // offset 0x0, size 0x4
};
typedef struct PPC_DMA_L_t PPC_DMA_L_t;
union PPC_DMA_L_u {
    unsigned int val; // offset 0x0, size 0x4
    PPC_DMA_L_t f; // offset 0x0, size 0x4
};
typedef union PPC_DMA_L_u PPC_DMA_L_u;
typedef unsigned char GXBool;
enum _GXAttr {
    GX_VA_PNMTXIDX = 0,
    GX_VA_TEX0MTXIDX = 1,
    GX_VA_TEX1MTXIDX = 2,
    GX_VA_TEX2MTXIDX = 3,
    GX_VA_TEX3MTXIDX = 4,
    GX_VA_TEX4MTXIDX = 5,
    GX_VA_TEX5MTXIDX = 6,
    GX_VA_TEX6MTXIDX = 7,
    GX_VA_TEX7MTXIDX = 8,
    GX_VA_POS = 9,
    GX_VA_NRM = 10,
    GX_VA_CLR0 = 11,
    GX_VA_CLR1 = 12,
    GX_VA_TEX0 = 13,
    GX_VA_TEX1 = 14,
    GX_VA_TEX2 = 15,
    GX_VA_TEX3 = 16,
    GX_VA_TEX4 = 17,
    GX_VA_TEX5 = 18,
    GX_VA_TEX6 = 19,
    GX_VA_TEX7 = 20,
    GX_POS_MTX_ARRAY = 21,
    GX_NRM_MTX_ARRAY = 22,
    GX_TEX_MTX_ARRAY = 23,
    GX_LIGHT_ARRAY = 24,
    GX_VA_NBT = 25,
    GX_VA_MAX_ATTR = 26,
    GX_VA_NULL = 255,
};
typedef enum _GXAttr GXAttr;
enum _GXVtxFmt {
    GX_VTXFMT0 = 0,
    GX_VTXFMT1 = 1,
    GX_VTXFMT2 = 2,
    GX_VTXFMT3 = 3,
    GX_VTXFMT4 = 4,
    GX_VTXFMT5 = 5,
    GX_VTXFMT6 = 6,
    GX_VTXFMT7 = 7,
    GX_MAX_VTXFMT = 8,
};
typedef enum _GXVtxFmt GXVtxFmt;
enum _GXAttrType {
    GX_NONE = 0,
    GX_DIRECT = 1,
    GX_INDEX8 = 2,
    GX_INDEX16 = 3,
};
typedef enum _GXAttrType GXAttrType;
typedef enum _GXTexCoordID GXTexCoordID;
typedef enum _GXTexGenType GXTexGenType;
typedef enum _GXTexGenSrc GXTexGenSrc;
enum _GXCompCnt {
    GX_POS_XY = 0,
    GX_POS_XYZ = 1,
    GX_NRM_XYZ = 0,
    GX_NRM_NBT = 1,
    GX_NRM_NBT3 = 2,
    GX_CLR_RGB = 0,
    GX_CLR_RGBA = 1,
    GX_TEX_S = 0,
    GX_TEX_ST = 1,
};
typedef enum _GXCompCnt GXCompCnt;
enum _GXCompType {
    GX_U8 = 0,
    GX_S8 = 1,
    GX_U16 = 2,
    GX_S16 = 3,
    GX_F32 = 4,
    GX_RGB565 = 0,
    GX_RGB8 = 1,
    GX_RGBX8 = 2,
    GX_RGBA4 = 3,
    GX_RGBA6 = 4,
    GX_RGBA8 = 5,
};
typedef enum _GXCompType GXCompType;
enum _GXChannelID {
    GX_COLOR0 = 0,
    GX_COLOR1 = 1,
    GX_ALPHA0 = 2,
    GX_ALPHA1 = 3,
    GX_COLOR0A0 = 4,
    GX_COLOR1A1 = 5,
    GX_COLOR_ZERO = 6,
    GX_ALPHA_BUMP = 7,
    GX_ALPHA_BUMPN = 8,
    GX_COLOR_NULL = 255,
};
typedef enum _GXChannelID GXChannelID;
enum _GXColorSrc {
    GX_SRC_REG = 0,
    GX_SRC_VTX = 1,
};
typedef enum _GXColorSrc GXColorSrc;
enum _GXLightID {
    GX_LIGHT0 = 1,
    GX_LIGHT1 = 2,
    GX_LIGHT2 = 4,
    GX_LIGHT3 = 8,
    GX_LIGHT4 = 16,
    GX_LIGHT5 = 32,
    GX_LIGHT6 = 64,
    GX_LIGHT7 = 128,
    GX_MAX_LIGHT = 256,
    GX_LIGHT_NULL = 0,
};
typedef enum _GXLightID GXLightID;
enum _GXDiffuseFn {
    GX_DF_NONE = 0,
    GX_DF_SIGN = 1,
    GX_DF_CLAMP = 2,
};
typedef enum _GXDiffuseFn GXDiffuseFn;
enum _GXAttnFn {
    GX_AF_SPEC = 0,
    GX_AF_SPOT = 1,
    GX_AF_NONE = 2,
};
typedef enum _GXAttnFn GXAttnFn;
enum _GXSpotFn {
    GX_SP_OFF = 0,
    GX_SP_FLAT = 1,
    GX_SP_COS = 2,
    GX_SP_COS2 = 3,
    GX_SP_SHARP = 4,
    GX_SP_RING1 = 5,
    GX_SP_RING2 = 6,
};
typedef enum _GXSpotFn GXSpotFn;
enum _GXDistAttnFn {
    GX_DA_OFF = 0,
    GX_DA_GENTLE = 1,
    GX_DA_MEDIUM = 2,
    GX_DA_STEEP = 3,
};
typedef enum _GXDistAttnFn GXDistAttnFn;
enum _GXPosNrmMtx {
    GX_PNMTX0 = 0,
    GX_PNMTX1 = 3,
    GX_PNMTX2 = 6,
    GX_PNMTX3 = 9,
    GX_PNMTX4 = 12,
    GX_PNMTX5 = 15,
    GX_PNMTX6 = 18,
    GX_PNMTX7 = 21,
    GX_PNMTX8 = 24,
    GX_PNMTX9 = 27,
};
typedef enum _GXPosNrmMtx GXPosNrmMtx;
enum _GXTexMtx {
    GX_TEXMTX0 = 30,
    GX_TEXMTX1 = 33,
    GX_TEXMTX2 = 36,
    GX_TEXMTX3 = 39,
    GX_TEXMTX4 = 42,
    GX_TEXMTX5 = 45,
    GX_TEXMTX6 = 48,
    GX_TEXMTX7 = 51,
    GX_TEXMTX8 = 54,
    GX_TEXMTX9 = 57,
    GX_IDENTITY = 60,
};
typedef enum _GXTexMtx GXTexMtx;
enum _GXPTTexMtx {
    GX_PTTEXMTX0 = 64,
    GX_PTTEXMTX1 = 67,
    GX_PTTEXMTX2 = 70,
    GX_PTTEXMTX3 = 73,
    GX_PTTEXMTX4 = 76,
    GX_PTTEXMTX5 = 79,
    GX_PTTEXMTX6 = 82,
    GX_PTTEXMTX7 = 85,
    GX_PTTEXMTX8 = 88,
    GX_PTTEXMTX9 = 91,
    GX_PTTEXMTX10 = 94,
    GX_PTTEXMTX11 = 97,
    GX_PTTEXMTX12 = 100,
    GX_PTTEXMTX13 = 103,
    GX_PTTEXMTX14 = 106,
    GX_PTTEXMTX15 = 109,
    GX_PTTEXMTX16 = 112,
    GX_PTTEXMTX17 = 115,
    GX_PTTEXMTX18 = 118,
    GX_PTTEXMTX19 = 121,
    GX_PTIDENTITY = 125,
};
typedef enum _GXPTTexMtx GXPTTexMtx;
enum _GXTexMtxType {
    GX_MTX3x4 = 0,
    GX_MTX2x4 = 1,
};
typedef enum _GXTexMtxType GXTexMtxType;
enum _GXPrimitive {
    GX_POINTS = 184,
    GX_LINES = 168,
    GX_LINESTRIP = 176,
    GX_TRIANGLES = 144,
    GX_TRIANGLESTRIP = 152,
    GX_TRIANGLEFAN = 160,
    GX_QUADS = 128,
};
typedef enum _GXPrimitive GXPrimitive;
enum _GXTexOffset {
    GX_TO_ZERO = 0,
    GX_TO_SIXTEENTH = 1,
    GX_TO_EIGHTH = 2,
    GX_TO_FOURTH = 3,
    GX_TO_HALF = 4,
    GX_TO_ONE = 5,
    GX_MAX_TEXOFFSET = 6,
};
typedef enum _GXTexOffset GXTexOffset;
enum _GXCullMode {
    GX_CULL_NONE = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK = 2,
    GX_CULL_ALL = 3,
};
typedef enum _GXCullMode GXCullMode;
enum _GXClipMode {
    GX_CLIP_ENABLE = 0,
    GX_CLIP_DISABLE = 1,
};
typedef enum _GXClipMode GXClipMode;
enum _GXTexWrapMode {
    GX_CLAMP = 0,
    GX_REPEAT = 1,
    GX_MIRROR = 2,
    GX_MAX_TEXWRAPMODE = 3,
};
typedef enum _GXTexWrapMode GXTexWrapMode;
enum _GXTexFilter {
    GX_NEAR = 0,
    GX_LINEAR = 1,
    GX_NEAR_MIP_NEAR = 2,
    GX_LIN_MIP_NEAR = 3,
    GX_NEAR_MIP_LIN = 4,
    GX_LIN_MIP_LIN = 5,
};
typedef enum _GXTexFilter GXTexFilter;
enum _GXCITexFmt {
    GX_TF_C4 = 8,
    GX_TF_C8 = 9,
    GX_TF_C14X2 = 10,
};
typedef enum _GXCITexFmt GXCITexFmt;
enum _GXTexFmt {
    GX_TF_I4 = 0,
    GX_TF_I8 = 1,
    GX_TF_IA4 = 2,
    GX_TF_IA8 = 3,
    GX_TF_RGB565 = 4,
    GX_TF_RGB5A3 = 5,
    GX_TF_RGBA8 = 6,
    GX_TF_CMPR = 14,
    GX_CTF_R4 = 32,
    GX_CTF_RA4 = 34,
    GX_CTF_RA8 = 35,
    GX_CTF_YUVA8 = 38,
    GX_CTF_A8 = 39,
    GX_CTF_R8 = 40,
    GX_CTF_G8 = 41,
    GX_CTF_B8 = 42,
    GX_CTF_RG8 = 43,
    GX_CTF_GB8 = 44,
    GX_TF_Z8 = 17,
    GX_TF_Z16 = 19,
    GX_TF_Z24X8 = 22,
    GX_CTF_Z4 = 48,
    GX_CTF_Z8M = 57,
    GX_CTF_Z8L = 58,
    GX_CTF_Z16L = 60,
    GX_TF_A8 = 39,
};
typedef enum _GXTexFmt GXTexFmt;
enum _GXTlutFmt {
    GX_TL_IA8 = 0,
    GX_TL_RGB565 = 1,
    GX_TL_RGB5A3 = 2,
    GX_MAX_TLUTFMT = 3,
};
typedef enum _GXTlutFmt GXTlutFmt;
enum _GXTlutSize {
    GX_TLUT_16 = 1,
    GX_TLUT_32 = 2,
    GX_TLUT_64 = 4,
    GX_TLUT_128 = 8,
    GX_TLUT_256 = 16,
    GX_TLUT_512 = 32,
    GX_TLUT_1K = 64,
    GX_TLUT_2K = 128,
    GX_TLUT_4K = 256,
    GX_TLUT_8K = 512,
    GX_TLUT_16K = 1024,
};
typedef enum _GXTlutSize GXTlutSize;
enum _GXTlut {
    GX_TLUT0 = 0,
    GX_TLUT1 = 1,
    GX_TLUT2 = 2,
    GX_TLUT3 = 3,
    GX_TLUT4 = 4,
    GX_TLUT5 = 5,
    GX_TLUT6 = 6,
    GX_TLUT7 = 7,
    GX_TLUT8 = 8,
    GX_TLUT9 = 9,
    GX_TLUT10 = 10,
    GX_TLUT11 = 11,
    GX_TLUT12 = 12,
    GX_TLUT13 = 13,
    GX_TLUT14 = 14,
    GX_TLUT15 = 15,
    GX_BIGTLUT0 = 16,
    GX_BIGTLUT1 = 17,
    GX_BIGTLUT2 = 18,
    GX_BIGTLUT3 = 19,
};
typedef enum _GXTlut GXTlut;
enum _GXTexMapID {
    GX_TEXMAP0 = 0,
    GX_TEXMAP1 = 1,
    GX_TEXMAP2 = 2,
    GX_TEXMAP3 = 3,
    GX_TEXMAP4 = 4,
    GX_TEXMAP5 = 5,
    GX_TEXMAP6 = 6,
    GX_TEXMAP7 = 7,
    GX_MAX_TEXMAP = 8,
    GX_TEXMAP_NULL = 255,
    GX_TEX_DISABLE = 256,
};
typedef enum _GXTexMapID GXTexMapID;
enum _GXTexCacheSize {
    GX_TEXCACHE_32K = 0,
    GX_TEXCACHE_128K = 1,
    GX_TEXCACHE_512K = 2,
    GX_TEXCACHE_NONE = 3,
};
typedef enum _GXTexCacheSize GXTexCacheSize;
enum _GXIndTexFormat {
    GX_ITF_8 = 0,
    GX_ITF_5 = 1,
    GX_ITF_4 = 2,
    GX_ITF_3 = 3,
    GX_MAX_ITFORMAT = 4,
};
typedef enum _GXIndTexFormat GXIndTexFormat;
enum _GXIndTexBiasSel {
    GX_ITB_NONE = 0,
    GX_ITB_S = 1,
    GX_ITB_T = 2,
    GX_ITB_ST = 3,
    GX_ITB_U = 4,
    GX_ITB_SU = 5,
    GX_ITB_TU = 6,
    GX_ITB_STU = 7,
    GX_MAX_ITBIAS = 8,
};
typedef enum _GXIndTexBiasSel GXIndTexBiasSel;
enum _GXIndTexAlphaSel {
    GX_ITBA_OFF = 0,
    GX_ITBA_S = 1,
    GX_ITBA_T = 2,
    GX_ITBA_U = 3,
    GX_MAX_ITBALPHA = 4,
};
typedef enum _GXIndTexAlphaSel GXIndTexAlphaSel;
enum _GXIndTexMtxID {
    GX_ITM_OFF = 0,
    GX_ITM_0 = 1,
    GX_ITM_1 = 2,
    GX_ITM_2 = 3,
    GX_ITM_S0 = 5,
    GX_ITM_S1 = 6,
    GX_ITM_S2 = 7,
    GX_ITM_T0 = 9,
    GX_ITM_T1 = 10,
    GX_ITM_T2 = 11,
};
typedef enum _GXIndTexMtxID GXIndTexMtxID;
enum _GXIndTexWrap {
    GX_ITW_OFF = 0,
    GX_ITW_256 = 1,
    GX_ITW_128 = 2,
    GX_ITW_64 = 3,
    GX_ITW_32 = 4,
    GX_ITW_16 = 5,
    GX_ITW_0 = 6,
    GX_MAX_ITWRAP = 7,
};
typedef enum _GXIndTexWrap GXIndTexWrap;
enum _GXIndTexScale {
    GX_ITS_1 = 0,
    GX_ITS_2 = 1,
    GX_ITS_4 = 2,
    GX_ITS_8 = 3,
    GX_ITS_16 = 4,
    GX_ITS_32 = 5,
    GX_ITS_64 = 6,
    GX_ITS_128 = 7,
    GX_ITS_256 = 8,
    GX_MAX_ITSCALE = 9,
};
typedef enum _GXIndTexScale GXIndTexScale;
enum _GXIndTexStageID {
    GX_INDTEXSTAGE0 = 0,
    GX_INDTEXSTAGE1 = 1,
    GX_INDTEXSTAGE2 = 2,
    GX_INDTEXSTAGE3 = 3,
    GX_MAX_INDTEXSTAGE = 4,
};
typedef enum _GXIndTexStageID GXIndTexStageID;
enum _GXTevStageID {
    GX_TEVSTAGE0 = 0,
    GX_TEVSTAGE1 = 1,
    GX_TEVSTAGE2 = 2,
    GX_TEVSTAGE3 = 3,
    GX_TEVSTAGE4 = 4,
    GX_TEVSTAGE5 = 5,
    GX_TEVSTAGE6 = 6,
    GX_TEVSTAGE7 = 7,
    GX_TEVSTAGE8 = 8,
    GX_TEVSTAGE9 = 9,
    GX_TEVSTAGE10 = 10,
    GX_TEVSTAGE11 = 11,
    GX_TEVSTAGE12 = 12,
    GX_TEVSTAGE13 = 13,
    GX_TEVSTAGE14 = 14,
    GX_TEVSTAGE15 = 15,
    GX_MAX_TEVSTAGE = 16,
};
typedef enum _GXTevStageID GXTevStageID;
enum _GXTevRegID {
    GX_TEVPREV = 0,
    GX_TEVREG0 = 1,
    GX_TEVREG1 = 2,
    GX_TEVREG2 = 3,
    GX_MAX_TEVREG = 4,
};
typedef enum _GXTevRegID GXTevRegID;
enum _GXTevOp {
    GX_TEV_ADD = 0,
    GX_TEV_SUB = 1,
    GX_TEV_COMP_R8_GT = 8,
    GX_TEV_COMP_R8_EQ = 9,
    GX_TEV_COMP_GR16_GT = 10,
    GX_TEV_COMP_GR16_EQ = 11,
    GX_TEV_COMP_BGR24_GT = 12,
    GX_TEV_COMP_BGR24_EQ = 13,
    GX_TEV_COMP_RGB8_GT = 14,
    GX_TEV_COMP_RGB8_EQ = 15,
    GX_TEV_COMP_A8_GT = 14,
    GX_TEV_COMP_A8_EQ = 15,
};
typedef enum _GXTevOp GXTevOp;
enum _GXTevColorArg {
    GX_CC_CPREV = 0,
    GX_CC_APREV = 1,
    GX_CC_C0 = 2,
    GX_CC_A0 = 3,
    GX_CC_C1 = 4,
    GX_CC_A1 = 5,
    GX_CC_C2 = 6,
    GX_CC_A2 = 7,
    GX_CC_TEXC = 8,
    GX_CC_TEXA = 9,
    GX_CC_RASC = 10,
    GX_CC_RASA = 11,
    GX_CC_ONE = 12,
    GX_CC_HALF = 13,
    GX_CC_KONST = 14,
    GX_CC_ZERO = 15,
};
typedef enum _GXTevColorArg GXTevColorArg;
enum _GXTevAlphaArg {
    GX_CA_APREV = 0,
    GX_CA_A0 = 1,
    GX_CA_A1 = 2,
    GX_CA_A2 = 3,
    GX_CA_TEXA = 4,
    GX_CA_RASA = 5,
    GX_CA_KONST = 6,
    GX_CA_ZERO = 7,
};
typedef enum _GXTevAlphaArg GXTevAlphaArg;
enum _GXTevBias {
    GX_TB_ZERO = 0,
    GX_TB_ADDHALF = 1,
    GX_TB_SUBHALF = 2,
    GX_MAX_TEVBIAS = 3,
};
typedef enum _GXTevBias GXTevBias;
enum _GXTevClampMode {
    GX_TC_LINEAR = 0,
    GX_TC_GE = 1,
    GX_TC_EQ = 2,
    GX_TC_LE = 3,
    GX_MAX_TEVCLAMPMODE = 4,
};
typedef enum _GXTevClampMode GXTevClampMode;
enum _GXTevKColorID {
    GX_KCOLOR0 = 0,
    GX_KCOLOR1 = 1,
    GX_KCOLOR2 = 2,
    GX_KCOLOR3 = 3,
    GX_MAX_KCOLOR = 4,
};
typedef enum _GXTevKColorID GXTevKColorID;
enum _GXTevKColorSel {
    GX_TEV_KCSEL_8_8 = 0,
    GX_TEV_KCSEL_7_8 = 1,
    GX_TEV_KCSEL_6_8 = 2,
    GX_TEV_KCSEL_5_8 = 3,
    GX_TEV_KCSEL_4_8 = 4,
    GX_TEV_KCSEL_3_8 = 5,
    GX_TEV_KCSEL_2_8 = 6,
    GX_TEV_KCSEL_1_8 = 7,
    GX_TEV_KCSEL_1 = 0,
    GX_TEV_KCSEL_3_4 = 2,
    GX_TEV_KCSEL_1_2 = 4,
    GX_TEV_KCSEL_1_4 = 6,
    GX_TEV_KCSEL_K0 = 12,
    GX_TEV_KCSEL_K1 = 13,
    GX_TEV_KCSEL_K2 = 14,
    GX_TEV_KCSEL_K3 = 15,
    GX_TEV_KCSEL_K0_R = 16,
    GX_TEV_KCSEL_K1_R = 17,
    GX_TEV_KCSEL_K2_R = 18,
    GX_TEV_KCSEL_K3_R = 19,
    GX_TEV_KCSEL_K0_G = 20,
    GX_TEV_KCSEL_K1_G = 21,
    GX_TEV_KCSEL_K2_G = 22,
    GX_TEV_KCSEL_K3_G = 23,
    GX_TEV_KCSEL_K0_B = 24,
    GX_TEV_KCSEL_K1_B = 25,
    GX_TEV_KCSEL_K2_B = 26,
    GX_TEV_KCSEL_K3_B = 27,
    GX_TEV_KCSEL_K0_A = 28,
    GX_TEV_KCSEL_K1_A = 29,
    GX_TEV_KCSEL_K2_A = 30,
    GX_TEV_KCSEL_K3_A = 31,
};
typedef enum _GXTevKColorSel GXTevKColorSel;
enum _GXTevKAlphaSel {
    GX_TEV_KASEL_8_8 = 0,
    GX_TEV_KASEL_7_8 = 1,
    GX_TEV_KASEL_6_8 = 2,
    GX_TEV_KASEL_5_8 = 3,
    GX_TEV_KASEL_4_8 = 4,
    GX_TEV_KASEL_3_8 = 5,
    GX_TEV_KASEL_2_8 = 6,
    GX_TEV_KASEL_1_8 = 7,
    GX_TEV_KASEL_1 = 0,
    GX_TEV_KASEL_3_4 = 2,
    GX_TEV_KASEL_1_2 = 4,
    GX_TEV_KASEL_1_4 = 6,
    GX_TEV_KASEL_K0_R = 16,
    GX_TEV_KASEL_K1_R = 17,
    GX_TEV_KASEL_K2_R = 18,
    GX_TEV_KASEL_K3_R = 19,
    GX_TEV_KASEL_K0_G = 20,
    GX_TEV_KASEL_K1_G = 21,
    GX_TEV_KASEL_K2_G = 22,
    GX_TEV_KASEL_K3_G = 23,
    GX_TEV_KASEL_K0_B = 24,
    GX_TEV_KASEL_K1_B = 25,
    GX_TEV_KASEL_K2_B = 26,
    GX_TEV_KASEL_K3_B = 27,
    GX_TEV_KASEL_K0_A = 28,
    GX_TEV_KASEL_K1_A = 29,
    GX_TEV_KASEL_K2_A = 30,
    GX_TEV_KASEL_K3_A = 31,
};
typedef enum _GXTevKAlphaSel GXTevKAlphaSel;
enum _GXTevSwapSel {
    GX_TEV_SWAP0 = 0,
    GX_TEV_SWAP1 = 1,
    GX_TEV_SWAP2 = 2,
    GX_TEV_SWAP3 = 3,
    GX_MAX_TEVSWAP = 4,
};
typedef enum _GXTevSwapSel GXTevSwapSel;
enum _GXTevColorChan {
    GX_CH_RED = 0,
    GX_CH_GREEN = 1,
    GX_CH_BLUE = 2,
    GX_CH_ALPHA = 3,
};
typedef enum _GXTevColorChan GXTevColorChan;
enum _GXAlphaOp {
    GX_AOP_AND = 0,
    GX_AOP_OR = 1,
    GX_AOP_XOR = 2,
    GX_AOP_XNOR = 3,
    GX_MAX_ALPHAOP = 4,
};
typedef enum _GXAlphaOp GXAlphaOp;
enum _GXTevScale {
    GX_CS_SCALE_1 = 0,
    GX_CS_SCALE_2 = 1,
    GX_CS_SCALE_4 = 2,
    GX_CS_DIVIDE_2 = 3,
    GX_MAX_TEVSCALE = 4,
};
typedef enum _GXTevScale GXTevScale;
enum _GXFogType {
    GX_FOG_NONE = 0,
    GX_FOG_PERSP_LIN = 2,
    GX_FOG_PERSP_EXP = 4,
    GX_FOG_PERSP_EXP2 = 5,
    GX_FOG_PERSP_REVEXP = 6,
    GX_FOG_PERSP_REVEXP2 = 7,
    GX_FOG_ORTHO_LIN = 10,
    GX_FOG_ORTHO_EXP = 12,
    GX_FOG_ORTHO_EXP2 = 13,
    GX_FOG_ORTHO_REVEXP = 14,
    GX_FOG_ORTHO_REVEXP2 = 15,
    GX_FOG_LIN = 2,
    GX_FOG_EXP = 4,
    GX_FOG_EXP2 = 5,
    GX_FOG_REVEXP = 6,
    GX_FOG_REVEXP2 = 7,
};
typedef enum _GXFogType GXFogType;
enum _GXBlendMode {
    GX_BM_NONE = 0,
    GX_BM_BLEND = 1,
    GX_BM_LOGIC = 2,
    GX_BM_SUBTRACT = 3,
    GX_MAX_BLENDMODE = 4,
};
typedef enum _GXBlendMode GXBlendMode;
enum _GXBlendFactor {
    GX_BL_ZERO = 0,
    GX_BL_ONE = 1,
    GX_BL_SRCCLR = 2,
    GX_BL_INVSRCCLR = 3,
    GX_BL_SRCALPHA = 4,
    GX_BL_INVSRCALPHA = 5,
    GX_BL_DSTALPHA = 6,
    GX_BL_INVDSTALPHA = 7,
    GX_BL_DSTCLR = 2,
    GX_BL_INVDSTCLR = 3,
};
typedef enum _GXBlendFactor GXBlendFactor;
enum _GXCompare {
    GX_NEVER = 0,
    GX_LESS = 1,
    GX_EQUAL = 2,
    GX_LEQUAL = 3,
    GX_GREATER = 4,
    GX_NEQUAL = 5,
    GX_GEQUAL = 6,
    GX_ALWAYS = 7,
};
typedef enum _GXCompare GXCompare;
enum _GXLogicOp {
    GX_LO_CLEAR = 0,
    GX_LO_AND = 1,
    GX_LO_REVAND = 2,
    GX_LO_COPY = 3,
    GX_LO_INVAND = 4,
    GX_LO_NOOP = 5,
    GX_LO_XOR = 6,
    GX_LO_OR = 7,
    GX_LO_NOR = 8,
    GX_LO_EQUIV = 9,
    GX_LO_INV = 10,
    GX_LO_REVOR = 11,
    GX_LO_INVCOPY = 12,
    GX_LO_INVOR = 13,
    GX_LO_NAND = 14,
    GX_LO_SET = 15,
};
typedef enum _GXLogicOp GXLogicOp;
enum _GXPixelFmt {
    GX_PF_RGB8_Z24 = 0,
    GX_PF_RGBA6_Z24 = 1,
    GX_PF_RGB565_Z16 = 2,
    GX_PF_Z24 = 3,
    GX_PF_Y8 = 4,
    GX_PF_U8 = 5,
    GX_PF_V8 = 6,
    GX_PF_YUV420 = 7,
};
typedef enum _GXPixelFmt GXPixelFmt;
enum _GXZFmt16 {
    GX_ZC_LINEAR = 0,
    GX_ZC_NEAR = 1,
    GX_ZC_MID = 2,
    GX_ZC_FAR = 3,
};
typedef enum _GXZFmt16 GXZFmt16;
enum _GXTevMode {
    GX_MODULATE = 0,
    GX_DECAL = 1,
    GX_BLEND = 2,
    GX_REPLACE = 3,
    GX_PASSCLR = 4,
};
typedef enum _GXTevMode GXTevMode;
enum _GXGamma {
    GX_GM_1_0 = 0,
    GX_GM_1_7 = 1,
    GX_GM_2_2 = 2,
};
typedef enum _GXGamma GXGamma;
enum _GXProjectionType {
    GX_PERSPECTIVE = 0,
    GX_ORTHOGRAPHIC = 1,
};
typedef enum _GXProjectionType GXProjectionType;
enum _GXEvent {
    GX_VCACHE_MISS_ALL = 0,
    GX_VCACHE_MISS_POS = 1,
    GX_VCACHE_MISS_NRM = 2,
};
typedef enum _GXEvent GXEvent;
enum _GXFBClamp {
    GX_CLAMP_NONE = 0,
    GX_CLAMP_TOP = 1,
    GX_CLAMP_BOTTOM = 2,
};
typedef enum _GXFBClamp GXFBClamp;
enum _GXAnisotropy {
    GX_ANISO_1 = 0,
    GX_ANISO_2 = 1,
    GX_ANISO_4 = 2,
    GX_MAX_ANISOTROPY = 3,
};
typedef enum _GXAnisotropy GXAnisotropy;
enum _GXZTexOp {
    GX_ZT_DISABLE = 0,
    GX_ZT_ADD = 1,
    GX_ZT_REPLACE = 2,
    GX_MAX_ZTEXOP = 3,
};
typedef enum _GXZTexOp GXZTexOp;
enum _GXAlphaReadMode {
    GX_READ_00 = 0,
    GX_READ_FF = 1,
    GX_READ_NONE = 2,
};
typedef enum _GXAlphaReadMode GXAlphaReadMode;
enum _GXPerf0 {
    GX_PERF0_VERTICES = 0,
    GX_PERF0_CLIP_VTX = 1,
    GX_PERF0_CLIP_CLKS = 2,
    GX_PERF0_XF_WAIT_IN = 3,
    GX_PERF0_XF_WAIT_OUT = 4,
    GX_PERF0_XF_XFRM_CLKS = 5,
    GX_PERF0_XF_LIT_CLKS = 6,
    GX_PERF0_XF_BOT_CLKS = 7,
    GX_PERF0_XF_REGLD_CLKS = 8,
    GX_PERF0_XF_REGRD_CLKS = 9,
    GX_PERF0_CLIP_RATIO = 10,
    GX_PERF0_TRIANGLES = 11,
    GX_PERF0_TRIANGLES_CULLED = 12,
    GX_PERF0_TRIANGLES_PASSED = 13,
    GX_PERF0_TRIANGLES_SCISSORED = 14,
    GX_PERF0_TRIANGLES_0TEX = 15,
    GX_PERF0_TRIANGLES_1TEX = 16,
    GX_PERF0_TRIANGLES_2TEX = 17,
    GX_PERF0_TRIANGLES_3TEX = 18,
    GX_PERF0_TRIANGLES_4TEX = 19,
    GX_PERF0_TRIANGLES_5TEX = 20,
    GX_PERF0_TRIANGLES_6TEX = 21,
    GX_PERF0_TRIANGLES_7TEX = 22,
    GX_PERF0_TRIANGLES_8TEX = 23,
    GX_PERF0_TRIANGLES_0CLR = 24,
    GX_PERF0_TRIANGLES_1CLR = 25,
    GX_PERF0_TRIANGLES_2CLR = 26,
    GX_PERF0_QUAD_0CVG = 27,
    GX_PERF0_QUAD_NON0CVG = 28,
    GX_PERF0_QUAD_1CVG = 29,
    GX_PERF0_QUAD_2CVG = 30,
    GX_PERF0_QUAD_3CVG = 31,
    GX_PERF0_QUAD_4CVG = 32,
    GX_PERF0_AVG_QUAD_CNT = 33,
    GX_PERF0_CLOCKS = 34,
    GX_PERF0_NONE = 35,
};
typedef enum _GXPerf0 GXPerf0;
enum _GXPerf1 {
    GX_PERF1_TEXELS = 0,
    GX_PERF1_TX_IDLE = 1,
    GX_PERF1_TX_REGS = 2,
    GX_PERF1_TX_MEMSTALL = 3,
    GX_PERF1_TC_CHECK1_2 = 4,
    GX_PERF1_TC_CHECK3_4 = 5,
    GX_PERF1_TC_CHECK5_6 = 6,
    GX_PERF1_TC_CHECK7_8 = 7,
    GX_PERF1_TC_MISS = 8,
    GX_PERF1_VC_ELEMQ_FULL = 9,
    GX_PERF1_VC_MISSQ_FULL = 10,
    GX_PERF1_VC_MEMREQ_FULL = 11,
    GX_PERF1_VC_STATUS7 = 12,
    GX_PERF1_VC_MISSREP_FULL = 13,
    GX_PERF1_VC_STREAMBUF_LOW = 14,
    GX_PERF1_VC_ALL_STALLS = 15,
    GX_PERF1_VERTICES = 16,
    GX_PERF1_FIFO_REQ = 17,
    GX_PERF1_CALL_REQ = 18,
    GX_PERF1_VC_MISS_REQ = 19,
    GX_PERF1_CP_ALL_REQ = 20,
    GX_PERF1_CLOCKS = 21,
    GX_PERF1_NONE = 22,
};
typedef enum _GXPerf1 GXPerf1;
enum _GXVCachePerf {
    GX_VC_POS = 0,
    GX_VC_NRM = 1,
    GX_VC_CLR0 = 2,
    GX_VC_CLR1 = 3,
    GX_VC_TEX0 = 4,
    GX_VC_TEX1 = 5,
    GX_VC_TEX2 = 6,
    GX_VC_TEX3 = 7,
    GX_VC_TEX4 = 8,
    GX_VC_TEX5 = 9,
    GX_VC_TEX6 = 10,
    GX_VC_TEX7 = 11,
    GX_VC_ALL = 15,
};
typedef enum _GXVCachePerf GXVCachePerf;
enum _GXCopyMode {
    GX_COPY_PROGRESSIVE = 0,
    GX_COPY_INTLC_EVEN = 2,
    GX_COPY_INTLC_ODD = 3,
};
typedef enum _GXCopyMode GXCopyMode;
enum _GXMiscToken {
    GX_MT_XF_FLUSH = 1,
    GX_MT_DL_SAVE_CONTEXT = 2,
    GX_MT_ABORT_WAIT_COPYOUT = 3,
    GX_MT_NULL = 0,
};
typedef enum _GXMiscToken GXMiscToken;
enum _GXXFFlushVal {
    GX_XF_FLUSH_NONE = 0,
    GX_XF_FLUSH_SAFE = 8,
};
typedef enum _GXXFFlushVal GXXFFlushVal;
enum VITVMode {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17,
};
typedef enum VITVMode VITVMode;
enum VIXFBMode {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
typedef enum VIXFBMode VIXFBMode;
typedef void (* VIRetraceCallback)(unsigned long);
typedef struct _GXColor GXColor;
// total size: 0x8
struct _GXColorS10 {
    // Members
    short r; // offset 0x0, size 0x2
    short g; // offset 0x2, size 0x2
    short b; // offset 0x4, size 0x2
    short a; // offset 0x6, size 0x2
};
typedef struct _GXColorS10 GXColorS10;
typedef struct _GXTexObj GXTexObj;
typedef struct _GXTlutObj GXTlutObj;
// total size: 0x40
struct _GXLightObj {
    // Members
    unsigned long dummy[16]; // offset 0x0, size 0x40
};
typedef struct _GXLightObj GXLightObj;
// total size: 0x10
struct _GXVtxAttrFmtList {
    // Members
    GXAttr attr; // offset 0x0, size 0x4
    GXCompCnt cnt; // offset 0x4, size 0x4
    GXCompType type; // offset 0x8, size 0x4
    unsigned char frac; // offset 0xC, size 0x1
};
typedef struct _GXVtxAttrFmtList GXVtxAttrFmtList;
// total size: 0x10
struct _GXTexRegion {
    // Members
    unsigned long dummy[4]; // offset 0x0, size 0x10
};
typedef struct _GXTexRegion GXTexRegion;
// total size: 0x10
struct _GXTlutRegion {
    // Members
    unsigned long dummy[4]; // offset 0x0, size 0x10
};
typedef struct _GXTlutRegion GXTlutRegion;
// total size: 0x8
struct _GXVtxDescList {
    // Members
    GXAttr attr; // offset 0x0, size 0x4
    GXAttrType type; // offset 0x4, size 0x4
};
typedef struct _GXVtxDescList GXVtxDescList;
// total size: 0x3C
struct _GXRenderModeObj {
    // Members
    VITVMode viTVmode; // offset 0x0, size 0x4
    unsigned short fbWidth; // offset 0x4, size 0x2
    unsigned short efbHeight; // offset 0x6, size 0x2
    unsigned short xfbHeight; // offset 0x8, size 0x2
    unsigned short viXOrigin; // offset 0xA, size 0x2
    unsigned short viYOrigin; // offset 0xC, size 0x2
    unsigned short viWidth; // offset 0xE, size 0x2
    unsigned short viHeight; // offset 0x10, size 0x2
    VIXFBMode xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[2][12]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
typedef struct _GXRenderModeObj GXRenderModeObj;
// total size: 0x14
struct _GXFogAdjTable {
    // Members
    unsigned short r[10]; // offset 0x0, size 0x14
};
typedef struct _GXFogAdjTable GXFogAdjTable;
typedef long long OSTime;
typedef unsigned int OSTick;
unsigned int __OSBusClock; // size: 0x4, address: 0x800000F8
unsigned int __OSCoreClock; // size: 0x4, address: 0x800000FC
typedef struct OSCalendarTime OSCalendarTime;
// total size: 0x30
struct OSStopwatch {
    // Members
    char * name; // offset 0x0, size 0x4
    unsigned int hits; // offset 0x4, size 0x4
    long long total; // offset 0x8, size 0x8
    long long min; // offset 0x10, size 0x8
    long long max; // offset 0x18, size 0x8
    long long last; // offset 0x20, size 0x8
    int running; // offset 0x28, size 0x4
    unsigned int _padding; // offset 0x2C, size 0x4
};
typedef struct OSStopwatch OSStopwatch;
typedef int OSHeapHandle;
typedef void (* OSAllocVisitor)(void *, unsigned long);
typedef struct OSContext OSContext;
// total size: 0x28
struct OSAlarm {
    // Members
    void (* handler)(struct OSAlarm *, OSContext *); // offset 0x0, size 0x4
    unsigned int tag; // offset 0x4, size 0x4
    long long fire; // offset 0x8, size 0x8
    struct OSAlarm * prev; // offset 0x10, size 0x4
    struct OSAlarm * next; // offset 0x14, size 0x4
    long long period; // offset 0x18, size 0x8
    long long start; // offset 0x20, size 0x8
};
typedef struct OSAlarm OSAlarm;
typedef void (* OSAlarmHandler)(OSAlarm *, OSContext *);
typedef unsigned char __OSException;
typedef void (* __OSExceptionHandler)(unsigned char, OSContext *);
typedef unsigned short OSError;
typedef void (* OSErrorHandler)(unsigned short, OSContext *, ...);
// total size: 0x30
struct OSFontHeader {
    // Members
    unsigned short fontType; // offset 0x0, size 0x2
    unsigned short firstChar; // offset 0x2, size 0x2
    unsigned short lastChar; // offset 0x4, size 0x2
    unsigned short invalChar; // offset 0x6, size 0x2
    unsigned short ascent; // offset 0x8, size 0x2
    unsigned short descent; // offset 0xA, size 0x2
    unsigned short width; // offset 0xC, size 0x2
    unsigned short leading; // offset 0xE, size 0x2
    unsigned short cellWidth; // offset 0x10, size 0x2
    unsigned short cellHeight; // offset 0x12, size 0x2
    unsigned int sheetSize; // offset 0x14, size 0x4
    unsigned short sheetFormat; // offset 0x18, size 0x2
    unsigned short sheetColumn; // offset 0x1A, size 0x2
    unsigned short sheetRow; // offset 0x1C, size 0x2
    unsigned short sheetWidth; // offset 0x1E, size 0x2
    unsigned short sheetHeight; // offset 0x20, size 0x2
    unsigned short widthTable; // offset 0x22, size 0x2
    unsigned int sheetImage; // offset 0x24, size 0x4
    unsigned int sheetFullSize; // offset 0x28, size 0x4
    unsigned char c0; // offset 0x2C, size 0x1
    unsigned char c1; // offset 0x2D, size 0x1
    unsigned char c2; // offset 0x2E, size 0x1
    unsigned char c3; // offset 0x2F, size 0x1
};
typedef struct OSFontHeader OSFontHeader;
typedef short __OSInterrupt;
typedef void (* __OSInterruptHandler)(short, OSContext *);
typedef unsigned int OSInterruptMask;
typedef struct OSThread OSThread;
typedef struct OSThreadQueue OSThreadQueue;
typedef struct OSThreadLink OSThreadLink;
typedef int OSPriority;
typedef struct OSMutex OSMutex;
typedef struct OSMutexQueue OSMutexQueue;
typedef struct OSMutexLink OSMutexLink;
// total size: 0x8
struct OSCond {
    // Members
    OSThreadQueue queue; // offset 0x0, size 0x8
};
typedef struct OSCond OSCond;
typedef void (* OSIdleFunction)(void *);
typedef void (* OSSwitchThreadCallback)(OSThread *, OSThread *);
enum OS_THREAD_STATE {
    OS_THREAD_STATE_READY = 1,
    OS_THREAD_STATE_RUNNING = 2,
    OS_THREAD_STATE_WAITING = 4,
    OS_THREAD_STATE_MORIBUND = 8,
};
// total size: 0x20
struct OSMessageQueue {
    // Members
    OSThreadQueue queueSend; // offset 0x0, size 0x8
    OSThreadQueue queueReceive; // offset 0x8, size 0x8
    void * * msgArray; // offset 0x10, size 0x4
    int msgCount; // offset 0x14, size 0x4
    int firstIndex; // offset 0x18, size 0x4
    int usedCount; // offset 0x1C, size 0x4
};
typedef struct OSMessageQueue OSMessageQueue;
typedef void * OSMessage;
// total size: 0x4C
struct OSModuleHeader {
    // Members
    struct OSModuleInfo info; // offset 0x0, size 0x20
    unsigned int bssSize; // offset 0x20, size 0x4
    unsigned int relOffset; // offset 0x24, size 0x4
    unsigned int impOffset; // offset 0x28, size 0x4
    unsigned int impSize; // offset 0x2C, size 0x4
    unsigned char prologSection; // offset 0x30, size 0x1
    unsigned char epilogSection; // offset 0x31, size 0x1
    unsigned char unresolvedSection; // offset 0x32, size 0x1
    unsigned char bssSection; // offset 0x33, size 0x1
    unsigned int prolog; // offset 0x34, size 0x4
    unsigned int epilog; // offset 0x38, size 0x4
    unsigned int unresolved; // offset 0x3C, size 0x4
    unsigned int align; // offset 0x40, size 0x4
    unsigned int bssAlign; // offset 0x44, size 0x4
    unsigned int fixSize; // offset 0x48, size 0x4
};
typedef struct OSModuleHeader OSModuleHeader;
// total size: 0x20
struct OSModuleInfo {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    struct OSModuleLink link; // offset 0x4, size 0x8
    unsigned int numSections; // offset 0xC, size 0x4
    unsigned int sectionInfoOffset; // offset 0x10, size 0x4
    unsigned int nameOffset; // offset 0x14, size 0x4
    unsigned int nameSize; // offset 0x18, size 0x4
    unsigned int version; // offset 0x1C, size 0x4
};
// total size: 0x8
struct OSModuleLink {
    // Members
    struct OSModuleInfo * next; // offset 0x0, size 0x4
    struct OSModuleInfo * prev; // offset 0x4, size 0x4
};
typedef unsigned int OSModuleID;
// total size: 0x8
struct OSModuleQueue {
    // Members
    struct OSModuleInfo * head; // offset 0x0, size 0x4
    struct OSModuleInfo * tail; // offset 0x4, size 0x4
};
typedef struct OSModuleQueue OSModuleQueue;
typedef struct OSModuleLink OSModuleLink;
typedef struct OSModuleInfo OSModuleInfo;
// total size: 0x8
struct OSSectionInfo {
    // Members
    unsigned int offset; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
typedef struct OSSectionInfo OSSectionInfo;
// total size: 0x8
struct OSImportInfo {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int offset; // offset 0x4, size 0x4
};
typedef struct OSImportInfo OSImportInfo;
// total size: 0x8
struct OSRel {
    // Members
    unsigned short offset; // offset 0x0, size 0x2
    unsigned char type; // offset 0x2, size 0x1
    unsigned char section; // offset 0x3, size 0x1
    unsigned int addend; // offset 0x4, size 0x4
};
typedef struct OSRel OSRel;
typedef void (* OSResetCallback)();
typedef struct OSSemaphore OSSemaphore;
typedef int (* OSResetFunction)(int);
// total size: 0x10
struct OSResetFunctionInfo {
    // Members
    int (* func)(int); // offset 0x0, size 0x4
    unsigned int priority; // offset 0x4, size 0x4
    struct OSResetFunctionInfo * next; // offset 0x8, size 0x4
    struct OSResetFunctionInfo * prev; // offset 0xC, size 0x4
};
typedef struct OSResetFunctionInfo OSResetFunctionInfo;
// total size: 0x10
struct DBInterface {
    // Members
    unsigned int bPresent; // offset 0x0, size 0x4
    unsigned int exceptionMask; // offset 0x4, size 0x4
    void (* ExceptionDestination)(); // offset 0x8, size 0x4
    void * exceptionReturn; // offset 0xC, size 0x4
};
typedef struct DBInterface DBInterface;
typedef struct DVDDiskID DVDDiskID;
typedef struct DVDCommandBlock DVDCommandBlock;
typedef void (* DVDCBCallback)(long, DVDCommandBlock *);
typedef struct DVDFileInfo DVDFileInfo;
typedef void (* DVDCallback)(long, DVDFileInfo *);
typedef struct DVDDir DVDDir;
typedef struct DVDDirEntry DVDDirEntry;
// total size: 0xC
struct PADStatus {
    // Members
    unsigned short button; // offset 0x0, size 0x2
    char stickX; // offset 0x2, size 0x1
    char stickY; // offset 0x3, size 0x1
    char substickX; // offset 0x4, size 0x1
    char substickY; // offset 0x5, size 0x1
    unsigned char triggerLeft; // offset 0x6, size 0x1
    unsigned char triggerRight; // offset 0x7, size 0x1
    unsigned char analogA; // offset 0x8, size 0x1
    unsigned char analogB; // offset 0x9, size 0x1
    char err; // offset 0xA, size 0x1
};
typedef struct PADStatus PADStatus;
typedef void (* PADSamplingCallback)();
// total size: 0xC
struct Vec {
    // Typedefs
    typedef struct Vec ._16;

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
typedef struct Vec Vec;
typedef Vec * VecPtr;
typedef Vec Point3d;
typedef Vec * Point3dPtr;
// total size: 0x6
struct S16Vec {
    // Typedefs
    typedef struct S16Vec ._17;

    // Members
    short x; // offset 0x0, size 0x2
    short y; // offset 0x2, size 0x2
    short z; // offset 0x4, size 0x2
};
typedef struct S16Vec S16Vec;
typedef S16Vec * S16VecPtr;
// total size: 0x10
struct Quaternion {
    // Typedefs
    typedef struct Quaternion ._18;

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
typedef struct Quaternion Quaternion;
typedef Quaternion * QuaternionPtr;
typedef Quaternion Qtrn;
typedef Quaternion * QtrnPtr;
typedef float Mtx[4][3];
typedef float (* MtxPtr)[4];
typedef float ROMtx[3][4];
typedef float (* ROMtxPtr)[3];
typedef float Mtx44[4][4];
typedef float (* Mtx44Ptr)[4];
// total size: 0xC
struct MtxStack {
    // Typedefs
    typedef struct MtxStack ._19;

    // Members
    unsigned int numMtx; // offset 0x0, size 0x4
    float (* stackBase)[4]; // offset 0x4, size 0x4
    float (* stackPtr)[4]; // offset 0x8, size 0x4
};
typedef struct MtxStack MtxStack;
typedef MtxStack * MtxStackPtr;
typedef GXTexRegion * (* GXTexRegionCallback)(const GXTexObj *, GXTexMapID);
typedef GXTlutRegion * (* GXTlutRegionCallback)(unsigned long);
// total size: 0x80
struct GXFifoObj {
    // Typedefs
    typedef struct GXFifoObj ._20;

    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
};
typedef struct GXFifoObj GXFifoObj;
typedef void (* GXBreakPtCallback)();
typedef void (* GXDrawSyncCallback)(unsigned short);
typedef void (* GXDrawDoneCallback)();
union uPPCWGPipe {
    unsigned char u8; // offset 0x0, size 0x1
    unsigned short u16; // offset 0x0, size 0x2
    unsigned int u32; // offset 0x0, size 0x4
    unsigned long long u64; // offset 0x0, size 0x8
    char s8; // offset 0x0, size 0x1
    short s16; // offset 0x0, size 0x2
    int s32; // offset 0x0, size 0x4
    long long s64; // offset 0x0, size 0x8
    float f32; // offset 0x0, size 0x4
    double f64; // offset 0x0, size 0x8
};
typedef union uPPCWGPipe PPCWGPipe;
volatile PPCWGPipe GXWGFifo; // size: 0x8, address: 0xCC008000
enum GXWarningLevel {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
};
typedef enum GXWarningLevel GXWarningLevel;
typedef void (* GXVerifyCallback)(GXWarningLevel, unsigned long, const char *);
typedef void (* AISCallback)(unsigned long);
typedef void (* AIDCallback)();
typedef void (* ARCallback)();
// total size: 0x38
struct _AXPROFILE {
    // Members
    long long axFrameStart; // offset 0x0, size 0x8
    long long auxProcessingStart; // offset 0x8, size 0x8
    long long auxProcessingEnd; // offset 0x10, size 0x8
    long long userCallbackStart; // offset 0x18, size 0x8
    long long userCallbackEnd; // offset 0x20, size 0x8
    long long axFrameEnd; // offset 0x28, size 0x8
    unsigned int axNumVoices; // offset 0x30, size 0x4
    unsigned int __padding; // offset 0x34, size 0x4
};
typedef struct _AXPROFILE AXPROFILE;
typedef struct _AXPBMIX AXPBMIX;
typedef struct _AXPBITD AXPBITD;
typedef struct _AXPBUPDATE AXPBUPDATE;
typedef struct _AXPBDPOP AXPBDPOP;
typedef struct _AXPBVE AXPBVE;
typedef struct _AXPBFIR AXPBFIR;
typedef struct _AXPBADDR AXPBADDR;
typedef struct _AXPBADPCM AXPBADPCM;
typedef struct _AXPBSRC AXPBSRC;
typedef struct _AXPBADPCMLOOP AXPBADPCMLOOP;
typedef struct _AXPBLPF AXPBLPF;
typedef struct _AXPB AXPB;
// total size: 0x36
struct _AXSPB {
    // Members
    unsigned short dpopLHi; // offset 0x0, size 0x2
    unsigned short dpopLLo; // offset 0x2, size 0x2
    short dpopLDelta; // offset 0x4, size 0x2
    unsigned short dpopRHi; // offset 0x6, size 0x2
    unsigned short dpopRLo; // offset 0x8, size 0x2
    short dpopRDelta; // offset 0xA, size 0x2
    unsigned short dpopSHi; // offset 0xC, size 0x2
    unsigned short dpopSLo; // offset 0xE, size 0x2
    short dpopSDelta; // offset 0x10, size 0x2
    unsigned short dpopALHi; // offset 0x12, size 0x2
    unsigned short dpopALLo; // offset 0x14, size 0x2
    short dpopALDelta; // offset 0x16, size 0x2
    unsigned short dpopARHi; // offset 0x18, size 0x2
    unsigned short dpopARLo; // offset 0x1A, size 0x2
    short dpopARDelta; // offset 0x1C, size 0x2
    unsigned short dpopASHi; // offset 0x1E, size 0x2
    unsigned short dpopASLo; // offset 0x20, size 0x2
    short dpopASDelta; // offset 0x22, size 0x2
    unsigned short dpopBLHi; // offset 0x24, size 0x2
    unsigned short dpopBLLo; // offset 0x26, size 0x2
    short dpopBLDelta; // offset 0x28, size 0x2
    unsigned short dpopBRHi; // offset 0x2A, size 0x2
    unsigned short dpopBRLo; // offset 0x2C, size 0x2
    short dpopBRDelta; // offset 0x2E, size 0x2
    unsigned short dpopBSHi; // offset 0x30, size 0x2
    unsigned short dpopBSLo; // offset 0x32, size 0x2
    short dpopBSDelta; // offset 0x34, size 0x2
};
typedef struct _AXSPB AXSPB;
typedef void (* AXUserCallback)();
typedef void (* AXAuxCallback)(void *, void *);
typedef void (* AXVoiceCallback)(void *);
typedef struct _AXVPB AXVPB;
// total size: 0x100
struct _AXPBU {
    // Members
    unsigned short data[128]; // offset 0x0, size 0x100
};
typedef struct _AXPBU AXPBU;
// total size: 0x40
struct _AXPBITDBUFFER {
    // Members
    short data[32]; // offset 0x0, size 0x40
};
typedef struct _AXPBITDBUFFER AXPBITDBUFFER;
// total size: 0x60
struct DSPADPCM {
    // Typedefs
    typedef struct DSPADPCM ._22;

    // Members
    unsigned int num_samples; // offset 0x0, size 0x4
    unsigned int num_adpcm_nibbles; // offset 0x4, size 0x4
    unsigned int sample_rate; // offset 0x8, size 0x4
    unsigned short loop_flag; // offset 0xC, size 0x2
    unsigned short format; // offset 0xE, size 0x2
    unsigned int sa; // offset 0x10, size 0x4
    unsigned int ea; // offset 0x14, size 0x4
    unsigned int ca; // offset 0x18, size 0x4
    unsigned short coef[16]; // offset 0x1C, size 0x20
    unsigned short gain; // offset 0x3C, size 0x2
    unsigned short ps; // offset 0x3E, size 0x2
    unsigned short yn1; // offset 0x40, size 0x2
    unsigned short yn2; // offset 0x42, size 0x2
    unsigned short lps; // offset 0x44, size 0x2
    unsigned short lyn1; // offset 0x46, size 0x2
    unsigned short lyn2; // offset 0x48, size 0x2
    unsigned short pad[11]; // offset 0x4A, size 0x16
};
typedef struct DSPADPCM DSPADPCM;
typedef void (* ARQCallback)(unsigned long);
// total size: 0x20
struct ARQRequest {
    // Members
    struct ARQRequest * next; // offset 0x0, size 0x4
    unsigned int owner; // offset 0x4, size 0x4
    unsigned int type; // offset 0x8, size 0x4
    unsigned int priority; // offset 0xC, size 0x4
    unsigned int source; // offset 0x10, size 0x4
    unsigned int dest; // offset 0x14, size 0x4
    unsigned int length; // offset 0x18, size 0x4
    void (* callback)(unsigned long); // offset 0x1C, size 0x4
};
typedef struct ARQRequest ARQRequest;
typedef void (* DSPCallback)(void *);
// total size: 0x50
struct STRUCT_DSP_TASK {
    // Members
    volatile unsigned long state; // offset 0x0, size 0x4
    volatile unsigned long priority; // offset 0x4, size 0x4
    volatile unsigned long flags; // offset 0x8, size 0x4
    unsigned short * iram_mmem_addr; // offset 0xC, size 0x4
    unsigned int iram_length; // offset 0x10, size 0x4
    unsigned int iram_addr; // offset 0x14, size 0x4
    unsigned short * dram_mmem_addr; // offset 0x18, size 0x4
    unsigned int dram_length; // offset 0x1C, size 0x4
    unsigned int dram_addr; // offset 0x20, size 0x4
    unsigned short dsp_init_vector; // offset 0x24, size 0x2
    unsigned short dsp_resume_vector; // offset 0x26, size 0x2
    void (* init_cb)(void *); // offset 0x28, size 0x4
    void (* res_cb)(void *); // offset 0x2C, size 0x4
    void (* done_cb)(void *); // offset 0x30, size 0x4
    void (* req_cb)(void *); // offset 0x34, size 0x4
    struct STRUCT_DSP_TASK * next; // offset 0x38, size 0x4
    struct STRUCT_DSP_TASK * prev; // offset 0x3C, size 0x4
    long long t_context; // offset 0x40, size 0x8
    long long t_task; // offset 0x48, size 0x8
};
typedef struct STRUCT_DSP_TASK DSPTaskInfo;
// total size: 0x14
struct CARDFileInfo {
    // Members
    int chan; // offset 0x0, size 0x4
    int fileNo; // offset 0x4, size 0x4
    int offset; // offset 0x8, size 0x4
    int length; // offset 0xC, size 0x4
    unsigned short iBlock; // offset 0x10, size 0x2
    unsigned short __padding; // offset 0x12, size 0x2
};
typedef struct CARDFileInfo CARDFileInfo;
// total size: 0x6C
struct CARDStat {
    // Members
    char fileName[32]; // offset 0x0, size 0x20
    unsigned int length; // offset 0x20, size 0x4
    unsigned int time; // offset 0x24, size 0x4
    unsigned char gameName[4]; // offset 0x28, size 0x4
    unsigned char company[2]; // offset 0x2C, size 0x2
    unsigned char bannerFormat; // offset 0x2E, size 0x1
    unsigned char __padding; // offset 0x2F, size 0x1
    unsigned int iconAddr; // offset 0x30, size 0x4
    unsigned short iconFormat; // offset 0x34, size 0x2
    unsigned short iconSpeed; // offset 0x36, size 0x2
    unsigned int commentAddr; // offset 0x38, size 0x4
    unsigned int offsetBanner; // offset 0x3C, size 0x4
    unsigned int offsetBannerTlut; // offset 0x40, size 0x4
    unsigned long offsetIcon[8]; // offset 0x44, size 0x20
    unsigned int offsetIconTlut; // offset 0x64, size 0x4
    unsigned int offsetData; // offset 0x68, size 0x4
};
typedef struct CARDStat CARDStat;
typedef void (* CARDCallback)(long, long);
typedef int int32;
typedef long long int64;
typedef unsigned int uint;
typedef unsigned int uint32;
typedef unsigned long long uint64;
typedef int long32;
typedef long long long64;
typedef unsigned int ulong;
typedef unsigned int ulong32;
typedef unsigned long long ulong64;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef unsigned int intptr;
typedef union UBContext32 UBContext32;
enum EBPowerErrorReasonCode {
    BPOWERCALLBACK_STANDBY = 1,
    BPOWERCALLBACK_SUSPEND = 2,
    BPOWERCALLBACK_HOLD = 3,
    BPOWERCALLBACK_RESUME = 4,
    BPOWERCALLBACK_RESUMED = 5,
    BPOWERCALLBACKS = 6,
};
typedef enum EBPowerErrorReasonCode EBPowerErrorReasonCode;
typedef void (* TBabelMainFunction)(void *);
typedef int (* TBOSEventCallback)(void *);
typedef void (* TBKernelUpdateFunc)();
typedef struct _TBKernelModuleInfo TBKernelModuleInfo;
typedef OSMutex TBMutex;
typedef unsigned int TBCriticalSection;
// total size: 0x10
struct _TBOSEvent {
    // Members
    int (* callback)(void *); // offset 0x0, size 0x4
    void * context; // offset 0x4, size 0x4
    char * description; // offset 0x8, size 0x4
    unsigned int pad; // offset 0xC, size 0x4
};
typedef struct _TBOSEvent TBOSEvent;
char bHomeDirectory[256]; // size: 0x100, address: 0x80384430
char bHomeSuffix[8]; // size: 0x8, address: 0x8047CEB8
unsigned int bBkInitFlags; // size: 0x4, address: 0x8047D640
int bOSHeap; // size: 0x4, address: 0x8047CEB4
enum EBModuleId {
    EBMODULEID_EXTERNAL = 0,
    EBMODULEID_USER = 1,
    EBMODULEID_ACTOR = 2,
    EBMODULEID_DISPLAY = 3,
    EBMODULEID_GUI = 4,
    EBMODULEID_INPUT = 5,
    EBMODULEID_KERNEL = 6,
    EBMODULEID_MATHS = 7,
    EBMODULEID_NETWORK = 8,
    EBMODULEID_COLLISION = 9,
    EBMODULEID_SOUND = 10,
    EBMODULEID_CAMERA = 11,
    EBMODULEID_EFFECTS = 12,
    EBMODULEID_FLARECORE = 13,
    EBMODULEID_FLARERUNTIME = 14,
    EBMODULEIDS = 15,
};
// total size: 0x1C
struct _TBHeapSnapshotEntry {
    // Members
    int offset; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    char * group; // offset 0x8, size 0x4
    int lineno; // offset 0xC, size 0x4
    unsigned int uid; // offset 0x10, size 0x4
    char * file; // offset 0x14, size 0x4
    void * ptr; // offset 0x18, size 0x4
};
typedef struct _TBHeapSnapshotEntry TBHeapSnapshotEntry;
// total size: 0x8
struct _TBHeapSnapshot {
    // Members
    char * group; // offset 0x0, size 0x4
    int noofEntries; // offset 0x4, size 0x4
};
typedef struct _TBHeapSnapshot TBHeapSnapshot;
// total size: 0x20
struct _TBHeapPool {
    // Members
    unsigned char * base; // offset 0x0, size 0x4
    unsigned char * ptr; // offset 0x4, size 0x4
    unsigned char * prevPtr; // offset 0x8, size 0x4
    unsigned char * end; // offset 0xC, size 0x4
    int noofAllocs; // offset 0x10, size 0x4
    int peakAllocs; // offset 0x14, size 0x4
    char userAllocated; // offset 0x18, size 0x1
    char debug; // offset 0x19, size 0x1
    int overflowBytes; // offset 0x1C, size 0x4
};
typedef struct _TBHeapPool TBHeapPool;
// total size: 0x40
struct _TBHeapBlock {
    // Members
    unsigned int offset; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    short used; // offset 0x8, size 0x2
    unsigned short flags; // offset 0xA, size 0x2
    unsigned int pad0; // offset 0xC, size 0x4
    struct _TBHeapBlock * typeNext; // offset 0x10, size 0x4
    struct _TBHeapBlock * typePrev; // offset 0x14, size 0x4
    struct _TBHeapBlock * next; // offset 0x18, size 0x4
    struct _TBHeapBlock * prev; // offset 0x1C, size 0x4
    char * group; // offset 0x20, size 0x4
    unsigned char pad[24]; // offset 0x24, size 0x18
    unsigned int marker; // offset 0x3C, size 0x4
};
typedef struct _TBHeapBlock TBHeapBlock;
// total size: 0x84
struct _TBHeapGroupStack {
    // Members
    char * group[32]; // offset 0x0, size 0x80
    int currentLevel; // offset 0x80, size 0x4
};
typedef struct _TBHeapGroupStack TBHeapGroupStack;
// total size: 0x974
struct _TBHeap {
    // Members
    int heapSize; // offset 0x0, size 0x4
    unsigned int nextUID; // offset 0x4, size 0x4
    unsigned char * realHeapBase; // offset 0x8, size 0x4
    unsigned char * heapBase; // offset 0xC, size 0x4
    int dynamicHeap; // offset 0x10, size 0x4
    OSMutex heapLock; // offset 0x14, size 0x18
    int showHeapAlloc; // offset 0x2C, size 0x4
    int showHeapAllocExternalOnly; // offset 0x30, size 0x4
    int totalAllocated; // offset 0x34, size 0x4
    int peakTotalAllocated; // offset 0x38, size 0x4
    int blocksAllocated; // offset 0x3C, size 0x4
    int peakBlocksAllocated; // offset 0x40, size 0x4
    char * defaultHeapGroup; // offset 0x44, size 0x4
    unsigned int largeMemoryBlockThreshold; // offset 0x48, size 0x4
    int forceUseSystemHeap; // offset 0x4C, size 0x4
    int forceStandardMallocFree; // offset 0x50, size 0x4
    int blocksFree; // offset 0x54, size 0x4
    TBHeapBlock * rootBlock; // offset 0x58, size 0x4
    TBHeapBlock usedRoot; // offset 0x5C, size 0x40
    TBHeapBlock freeRoot; // offset 0x9C, size 0x40
    TBHeapGroupStack groupStack; // offset 0xDC, size 0x84
    int enablePooling; // offset 0x160, size 0x4
    int maxHeapPools; // offset 0x164, size 0x4
    int debugHeapPools; // offset 0x168, size 0x4
    TBHeapPool * currPool; // offset 0x16C, size 0x4
    TBHeapPool * disabledPool; // offset 0x170, size 0x4
    TBHeapPool heapPools[64]; // offset 0x174, size 0x800
};
typedef struct _TBHeap TBHeap;
// total size: 0x768
struct _TBFont {
    // Members
    struct _TBResourceInfo resInfo; // offset 0x0, size 0x20
    int fontType; // offset 0x20, size 0x4
    float lineHeight; // offset 0x24, size 0x4
    unsigned int reserved; // offset 0x28, size 0x4
    struct _TBTexture * texture; // offset 0x2C, size 0x4
    struct _TBFontGlyphInfo glyph[229]; // offset 0x30, size 0x728
    unsigned char pading[16]; // offset 0x758, size 0x10
};
// total size: 0x8
struct _TBFontGlyphInfo {
    // Members
    short xPos; // offset 0x0, size 0x2
    short yPos; // offset 0x2, size 0x2
    short width; // offset 0x4, size 0x2
    short height; // offset 0x6, size 0x2
};
typedef OSThread TBThread;
typedef OSThread * TBThreadID;
typedef void * (* TBThreadFunction)(void *);
typedef OSSemaphore TBSema;
typedef struct _TBFileHandleType TBFileHandleType;
typedef TBFileHandleType * TBFileHandle;
typedef int TBHostFileHandle;
typedef struct _TBFindFileInfo TBFindFileInfo;
enum EBDiskErrorReasonCode {
    BDISKERROR_COVER_OPEN = 1,
    BDISKERROR_NO_DISK = 2,
    BDISKERROR_WRONG_DISK = 3,
    BDISKERROR_RETRY = 4,
    BDISKERROR_FATAL_ERROR = 5,
    BDISKERRORS = 6,
};
typedef enum EBDiskErrorReasonCode EBDiskErrorReasonCode;
typedef enum EBLanguageID EBLanguageID;
typedef struct _TBPackageID TBPackageID;
typedef struct _TBFileIndex TBFileIndex;
typedef struct _TBPackageIndex TBPackageIndex;
typedef struct _TBFileTagInfo TBFileTagInfo;
typedef struct _TBFilenameTableHeader TBFilenameTableHeader;
unsigned int bCRCtable[256]; // size: 0x400, address: 0x80424A14
EBLanguageID bLanguage; // size: 0x4, address: 0x8047CE40
char * bFileSearchPath[4]; // size: 0x10, address: 0x80424E14
int bFileSearchPaths; // size: 0x4, address: 0x8047CE44
typedef struct _TBDebugStream TBDebugStream;
int bDebuggerPresent; // size: 0x4, address: 0xFFFFFFFF
TBDebugStream * bCurrentDebugStream; // size: 0x4, address: 0x8047CE98
int bPrintPause; // size: 0x4, address: 0x8047CE9C
// total size: 0x208
struct _TBErrorMessage {
    // Members
    char error[512]; // offset 0x0, size 0x200
    int flipCount; // offset 0x200, size 0x4
    int module; // offset 0x204, size 0x4
};
typedef struct _TBErrorMessage TBErrorMessage;
enum EBVerboseLevel bVerboseLevel; // size: 0x4, address: 0x8047CE28
unsigned int bVerboseModule; // size: 0x4, address: 0x8047CE2C
unsigned int bVerboseFlags; // size: 0x4, address: 0x8047CE30
typedef int (* TBErrorMessageCallback)(char *);
int (* bErrorUserCallback)(char *); // size: 0x4, address: 0xFFFFFFFF
const char bPackage_ext[5]; // size: 0x5, address: 0x8047E70C
typedef struct _TBResourceInfo TBResourceInfo;
typedef struct _TBResourceSnapshotEntry TBResourceSnapshotEntry;
typedef struct _TBResourceSnapshot TBResourceSnapshot;
typedef struct _TBTexture TBTexture;
typedef struct _TBActor TBActor;
typedef struct _TBSample TBSample;
typedef struct _TBFont TBFont;
typedef struct _TBStringTable TBStringTable;
// total size: 0x30
struct _TBSplash {
    // Members
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    int xDim; // offset 0x20, size 0x4
    int yDim; // offset 0x24, size 0x4
    unsigned char * data[2]; // offset 0x28, size 0x8
};
typedef struct _TBSplash TBSplash;
// total size: 0x50
struct _TBSet {
    // Members
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    int method; // offset 0x20, size 0x4
    int pad1; // offset 0x24, size 0x4
    int pad2; // offset 0x28, size 0x4
    int pad3; // offset 0x2C, size 0x4
    struct _TBStoredGeometry storedGeometry; // offset 0x30, size 0x20
};
typedef struct _TBSet TBSet;
typedef struct _TBCollisionMesh TBCollisionMesh;
struct _TBACMesh {};
typedef struct _TBACMesh TBACMesh;
typedef struct _TBAudioStream TBAudioStream;
typedef struct _TBLipSync TBLipSync;
// total size: 0x40
struct _TBSoundBank {
    // Inner declarations
    union {
        struct _TBSoundPatch * patchList; // offset 0x0, size 0x4
        unsigned int _patchList; // offset 0x0, size 0x4
    };
    union {
        struct _TBSoundPart * partList; // offset 0x0, size 0x4
        unsigned int _partList; // offset 0x0, size 0x4
    };
    union {
        struct _TBSoundEnvelope * envelopeList; // offset 0x0, size 0x4
        unsigned int _envelopeList; // offset 0x0, size 0x4
    };

    // Members
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    unsigned int totalSize; // offset 0x20, size 0x4
    int numPatches; // offset 0x24, size 0x4
    int numParts; // offset 0x28, size 0x4
    int numEnvelopes; // offset 0x2C, size 0x4
    union {
        struct _TBSoundPatch * patchList; // offset 0x0, size 0x4
        unsigned int _patchList; // offset 0x0, size 0x4
    }; // offset 0x30, size 0x4
    union {
        struct _TBSoundPart * partList; // offset 0x0, size 0x4
        unsigned int _partList; // offset 0x0, size 0x4
    }; // offset 0x34, size 0x4
    union {
        struct _TBSoundEnvelope * envelopeList; // offset 0x0, size 0x4
        unsigned int _envelopeList; // offset 0x0, size 0x4
    }; // offset 0x38, size 0x4
    float * nodeCoordList; // offset 0x3C, size 0x4
};
// total size: 0x34
struct _TBSoundPatch {
    // Inner declarations
    union {
        struct _TBSoundPart * parts; // offset 0x0, size 0x4
        unsigned int _parts; // offset 0x0, size 0x4
        struct _TBSoundTrack * tracks; // offset 0x0, size 0x4
        unsigned int _tracks; // offset 0x0, size 0x4
    };
    union {
        int numParts; // offset 0x0, size 0x4
        int numTracks; // offset 0x0, size 0x4
    };

    // Members
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    unsigned short activeCount; // offset 0x20, size 0x2
    unsigned short isSequence; // offset 0x22, size 0x2
    union {
        struct _TBSoundPart * parts; // offset 0x0, size 0x4
        unsigned int _parts; // offset 0x0, size 0x4
        struct _TBSoundTrack * tracks; // offset 0x0, size 0x4
        unsigned int _tracks; // offset 0x0, size 0x4
    }; // offset 0x24, size 0x4
    union {
        int numParts; // offset 0x0, size 0x4
        int numTracks; // offset 0x0, size 0x4
    }; // offset 0x28, size 0x4
    unsigned int flags; // offset 0x2C, size 0x4
    unsigned short polyMode; // offset 0x30, size 0x2
    unsigned short priority; // offset 0x32, size 0x2
};
// total size: 0x28
struct _TBSoundPart {
    // Inner declarations
    union {
        unsigned int sampleCRC; // offset 0x0, size 0x4
        void * samplePtr; // offset 0x0, size 0x4
    };
    union {
        struct _TBSoundEnvelope * envelopeVolume; // offset 0x0, size 0x4
        unsigned int _envelopeVolume; // offset 0x0, size 0x4
    };
    union {
        struct _TBSoundEnvelope * envelopePitch; // offset 0x0, size 0x4
        unsigned int _envelopePitch; // offset 0x0, size 0x4
    };
    union {
        struct _TBSoundEnvelope * envelopePan; // offset 0x0, size 0x4
        unsigned int _envelopePan; // offset 0x0, size 0x4
    };

    // Members
    union {
        unsigned int sampleCRC; // offset 0x0, size 0x4
        void * samplePtr; // offset 0x0, size 0x4
    }; // offset 0x0, size 0x4
    union {
        struct _TBSoundEnvelope * envelopeVolume; // offset 0x0, size 0x4
        unsigned int _envelopeVolume; // offset 0x0, size 0x4
    }; // offset 0x4, size 0x4
    union {
        struct _TBSoundEnvelope * envelopePitch; // offset 0x0, size 0x4
        unsigned int _envelopePitch; // offset 0x0, size 0x4
    }; // offset 0x8, size 0x4
    union {
        struct _TBSoundEnvelope * envelopePan; // offset 0x0, size 0x4
        unsigned int _envelopePan; // offset 0x0, size 0x4
    }; // offset 0xC, size 0x4
    short masterVolume; // offset 0x10, size 0x2
    short masterPitch; // offset 0x12, size 0x2
    short masterPan; // offset 0x14, size 0x2
    short flags; // offset 0x16, size 0x2
    unsigned char varyVolume; // offset 0x18, size 0x1
    unsigned char varyPitch; // offset 0x19, size 0x1
    unsigned char varyPan; // offset 0x1A, size 0x1
    unsigned char varyVolumeFlags; // offset 0x1B, size 0x1
    unsigned char varyPitchFlags; // offset 0x1C, size 0x1
    unsigned char varyPanFlags; // offset 0x1D, size 0x1
    short pitchRange; // offset 0x1E, size 0x2
    float baseDurationMS; // offset 0x20, size 0x4
    unsigned int baseFrequency; // offset 0x24, size 0x4
};
// total size: 0x14
struct _TBSoundEnvelope {
    // Members
    float lfoFrequency; // offset 0x0, size 0x4
    float lfoAmplitude; // offset 0x4, size 0x4
    float * nodesPtr; // offset 0x8, size 0x4
    float lfoDelay; // offset 0xC, size 0x4
    unsigned short flags; // offset 0x10, size 0x2
    unsigned char numNodes; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
// total size: 0x10
struct _TBSoundTrack {
    // Inner declarations
    union {
        struct _TBSoundSegment * segments; // offset 0x0, size 0x4
        unsigned int _segments; // offset 0x0, size 0x4
    };

    // Members
    union {
        struct _TBSoundSegment * segments; // offset 0x0, size 0x4
        unsigned int _segments; // offset 0x0, size 0x4
    }; // offset 0x0, size 0x4
    int numSegments; // offset 0x4, size 0x4
    float startTime; // offset 0x8, size 0x4
    short masterVolume; // offset 0xC, size 0x2
    short pad0; // offset 0xE, size 0x2
};
// total size: 0x14
struct _TBSoundSegment {
    // Inner declarations
    union {
        struct _TBSoundPatchRef * data; // offset 0x0, size 0x4
        unsigned int _data; // offset 0x0, size 0x4
    };

    // Members
    float startTime; // offset 0x0, size 0x4
    int numPatchRefs; // offset 0x4, size 0x4
    union {
        struct _TBSoundPatchRef * data; // offset 0x0, size 0x4
        unsigned int _data; // offset 0x0, size 0x4
    }; // offset 0x8, size 0x4
    float minDelay; // offset 0xC, size 0x4
    float maxDelay; // offset 0x10, size 0x4
};
// total size: 0x8
struct _TBSoundPatchRef {
    // Members
    float delay; // offset 0x0, size 0x4
    short numRandomDummies; // offset 0x4, size 0x2
    short numRefs; // offset 0x6, size 0x2
};
typedef struct _TBSoundBank TBSoundBank;
typedef struct _TBSoundPatch TBSoundPatch;
// total size: 0x40
struct _TBLightMatrix {
    // Members
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    unsigned int flags; // offset 0x20, size 0x4
    unsigned int xPoints; // offset 0x24, size 0x4
    unsigned int yPoints; // offset 0x28, size 0x4
    unsigned int zPoints; // offset 0x2C, size 0x4
    unsigned char * data; // offset 0x30, size 0x4
    void * pad[3]; // offset 0x34, size 0xC
};
typedef struct _TBLightMatrix TBLightMatrix;
// total size: 0x24
struct _TBSubtitle {
    // Members
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    int numSubtitles; // offset 0x20, size 0x4
};
typedef struct _TBSubtitle TBSubtitle;
struct _TBMaterial {};
typedef struct _TBMaterial TBMaterial;
struct _TBBlender {};
typedef struct _TBBlender TBBlender;
struct _TBShaderHeader {};
typedef struct _TBShaderHeader TBShaderHeader;
typedef TBResourceInfo * (* TBResourceLoadFunction)(TBPackageIndex *, unsigned int);
typedef void (* TBResourceDeleteFunction)(TBResourceInfo *);
TBResourceInfo bGlobalResourceList; // size: 0x20, address: 0x80424E24
TBPackageID bNULLPackageId; // size: 0x4, address: 0xFFFFFFFF
TBResourceInfo * (* bResLoadFunction[21])(TBPackageIndex *, unsigned int); // size: 0x54, address: 0x80384174
void (* bResDeleteFunction[21])(TBResourceInfo *); // size: 0x54, address: 0x803841C8
typedef unsigned long long TBTimerValue;
unsigned long long bTimerFrequency; // size: 0x8, address: 0x8047CEE8
typedef struct _TBStopwatch TBStopwatch;
char * bLanguageCode[24]; // size: 0x60, address: 0x80384280
enum EBStringCommand {
    EBSTRINGCOMMAND_INVALID = 0,
    EBSTRINGCOMMAND_CUSTOMGLYPH = 1,
    EBSTRINGCOMMAND_WAVE = 2,
    EBSTRINGCOMMAND_ITALIC = 3,
    EBSTRINGCOMMAND_COLOUR = 4,
    EBSTRINGCOMMAND_END = 5,
    EBSTRINGCOMMAND_NEWLINE = 6,
};
typedef struct _TBStringCommand TBStringCommand;
typedef struct _TBStringTableString TBStringTableString;
typedef void (* TBEventCallback)(char *, char *, void *, void *);
typedef struct _TBEventEntry TBEventEntry;
typedef struct _TBEventClientCallback TBEventClientCallback;
typedef struct _TBEventClientQueue TBEventClientQueue;
typedef struct _TBEventClient TBEventClient;
typedef struct _TBEvent TBEvent;
int bInsideEventCallback; // size: 0x4, address: 0x8047D644
typedef struct _TBClock TBClock;
char * bBkgErrorCodeStrings[7]; // size: 0x1C, address: 0x80383E18
typedef struct _TBBkgLoadResult TBBkgLoadResult;
volatile int bBytesTransferred; // size: 0x4, address: 0x8047CE20
volatile int bLastBytesTransferred; // size: 0x4, address: 0x8047CE24
typedef void (* TBBkgLoadComplete)(void *);
volatile int bChannelBytesTransferred[3]; // size: 0xC, address: 0x803842E0
volatile int bChannelLastBytesTransferred[3]; // size: 0xC, address: 0x803842EC
int bNoofBkgLoadsInListOnChannel[3]; // size: 0xC, address: 0x80424E44
enum EBProfileSort {
    EBPROFILESORT_FUNCCHILD = 0,
    EBPROFILESORT_FUNCONLY = 1,
    EBPROFILESORT_CALLCOUNT = 2,
    EBPROFILESORT_FUNCNAME = 3,
};
typedef unsigned short TBProfileIndex;
int bPerfMonActive; // size: 0x4, address: 0x8047CED4
typedef struct _TBRingBuffer TBRingBuffer;
unsigned int bHoldRand; // size: 0x4
typedef float TBVector[4];
typedef TBVector TBQuaternion;
typedef float TBVector2D[2];
typedef Mtx44 TBMatrix;
Mtx44 bIdentityMatrix; // size: 0x40
// total size: 0x44
struct _TBMassProperties {
    // Members
    float mass; // offset 0x0, size 0x4
    Mtx44 momentOfInertia; // offset 0x4, size 0x40
};
typedef struct _TBMassProperties TBMassProperties;
// total size: 0x64
struct _TBPointMass {
    // Members
    float mass; // offset 0x0, size 0x4
    TBVector position; // offset 0x4, size 0x10
    TBVector positionRelativeToCG; // offset 0x14, size 0x10
    Mtx44 momentOfInertia; // offset 0x24, size 0x40
};
typedef struct _TBPointMass TBPointMass;
enum EBRenderStatType {
    EBRENDERSTAT_GENERAL_FIRST = 0,
    EBRENDERSTAT_POLY_TOTAL = 0,
    EBRENDERSTAT_TEXTURE_TOTAL = 1,
    EBRENDERSTAT_POLY_MESH = 2,
    EBRENDERSTAT_POLY_SKIN = 3,
    EBRENDERSTAT_POLY_ASYNC = 4,
    EBRENDERSTAT_POLY_DRAWPRIM = 5,
    EBRENDERSTAT_TEXTURE_DEFAULT = 6,
    EBRENDERSTAT_TEXTURE_ASYNC = 7,
    EBRENDERSTAT_PROJECTION = 8,
    EBRENDERSTAT_RENDERSTATES = 9,
    EBRENDERSTAT_ACTUALRENDERSTATES = 10,
    EBRENDERSTAT_RSTEXTURE_WRAP = 11,
    EBRENDERSTAT_TOTALMATRIXUPDATE = 12,
    EBRENDERSTAT_VMPAGEMISSES = 13,
    EBRENDERSTAT_STRINGCRC = 14,
    EBRENDERSTAT_SPECULARON = 15,
    EBRENDERSTAT_SPECULARACTOR = 16,
    EBRENDERSTAT_MALLOC = 17,
    EBRENDERSTAT_BBVISIBLETEST = 18,
    EBRENDERSTAT_SPHEREVISIBLETEST = 19,
    EBRENDERSTAT_SCREENTOWORLD = 20,
    EBRENDERSTAT_TEXTURE_CHANGES = 21,
    EBRENDERSTAT_TEXTURE_UPLOAD = 22,
    EBRENDERSTAT_DRAWPRIM_CALLS = 23,
    EBRENDERSTAT_DRAWPRIM_VERTS = 24,
    EBRENDERSTAT_GENERAL_LAST = 24,
    EBRENDERSTAT_MATHS_FIRST = 25,
    EBRENDERSTAT_MATHS_QUATTOMATRIX = 25,
    EBRENDERSTAT_MATHS_IDQUATTOMATRIX = 26,
    EBRENDERSTAT_MATHS_MATRIXTOQUAT = 27,
    EBRENDERSTAT_MATHS_IDMATRIXTOQUAT = 28,
    EBRENDERSTAT_MATHS_MATMULTIPLY = 29,
    EBRENDERSTAT_MATHS_TRIVIALMATMUL = 30,
    EBRENDERSTAT_MATHS_MATRIXDECOMP = 31,
    EBRENDERSTAT_MATHS_LAST = 31,
    EBRENDERSTAT_ACTOR_FIRST = 32,
    EBRENDERSTAT_ACTOR_TOTAL = 32,
    EBRENDERSTAT_ACTOR_MESH = 33,
    EBRENDERSTAT_ACTOR_SKIN = 34,
    EBRENDERSTAT_ACTOR_ASYNC = 35,
    EBRENDERSTAT_ACTOR_PATCH = 36,
    EBRENDERSTAT_ACTOR_HIERARCHY = 37,
    EBRENDERSTAT_ACTOR_HIERARCHYNODES = 38,
    EBRENDERSTAT_ACTOR_TEXTURE_CHANGES = 39,
    EBRENDERSTAT_ACTOR_TEXTURE_UPLOAD = 40,
    EBRENDERSTAT_ACTOR_SKINNED_VERTS = 41,
    EBRENDERSTAT_ACTOR_MESH_VERTS = 42,
    EBRENDERSTAT_ACTOR_ASYNC_VERTS = 43,
    EBRENDERSTAT_ACTOR_PATCH_VERTS = 44,
    EBRENDERSTAT_ACTOR_TOTAL_VERTS = 45,
    EBRENDERSTAT_ACTOR_PROCESSED_BATCHES = 46,
    EBRENDERSTAT_ACTOR_PROCESSED_PATCHES = 47,
    EBRENDERSTAT_ACTOR_DRAWPRIM_CALLS = 48,
    EBRENDERSTAT_ACTOR_RENDERSTATES = 49,
    EBRENDERSTAT_ACTOR_ACTUALRENDERSTATES = 50,
    EBRENDERSTAT_ACTOR_LAST = 50,
    EBRENDERSTAT_FE_FIRST = 51,
    EBRENDERSTAT_PREUPDATE = 51,
    EBRENDERSTAT_UPDATE = 52,
    EBRENDERSTAT_POSTUPDATE = 53,
    EBRENDERSTAT_ENDUPDATE = 54,
    EBRENDERSTAT_TESTVISIBILITY = 55,
    EBRENDERSTAT_VISIBLENODES = 56,
    EBRENDERSTAT_RENDERNODE = 57,
    EBRENDERSTAT_CHECKPORTALS = 58,
    EBRENDERSTAT_FINDWORLDNODE = 59,
    EBRENDERSTAT_FE_LAST = 59,
    EBRENDERSTAT_PHYSICS_FIRST = 60,
    EBRENDERSTAT_COLLIDE_TRI_TEST = 60,
    EBRENDERSTAT_COLLIDE_TRI = 61,
    EBRENDERSTAT_SIM_SUBSTEP = 62,
    EBRENDERSTAT_SIM_BOUNDSTEST = 63,
    EBRENDERSTAT_SIM_STATICCOLLTEST = 64,
    EBRENDERSTAT_SIM_MOVINGCOLLTEST = 65,
    EBRENDERSTAT_SIM_COLLISION = 66,
    EBRENDERSTAT_SIM_RAYTEST = 67,
    EBRENDERSTAT_SIM_SWEPTVOLUMETEST = 68,
    EBRENDERSTAT_SIM_USERCALLBACK = 69,
    EBRENDERSTAT_PHYSICS_LAST = 69,
    EBRENDERSTAT_SET_VERTS = 70,
    EBRENDERSTAT_NUM = 71,
};
enum EBMemoryGraphType {
    EBMEMORYGRAPHTYPE_BABEL = 0,
    EBMEMORYGRAPHTYPE_SYSTEM = 1,
};
// total size: 0x40
struct _TBCommonDisplayInfo {
    // Members
    int xRes; // offset 0x0, size 0x4
    int yRes; // offset 0x4, size 0x4
    int xResHalf; // offset 0x8, size 0x4
    int yResHalf; // offset 0xC, size 0x4
    unsigned int flags; // offset 0x10, size 0x4
    int bpp; // offset 0x14, size 0x4
    int zDepth; // offset 0x18, size 0x4
    int started; // offset 0x1C, size 0x4
    int inScene; // offset 0x20, size 0x4
    int noofPolysProcessed; // offset 0x24, size 0x4
    struct _TBRenderTarget * curRenderTarget; // offset 0x28, size 0x4
    int padCommon; // offset 0x2C, size 0x4
    int flipRed; // offset 0x30, size 0x4
    int flipGreen; // offset 0x34, size 0x4
    int flipBlue; // offset 0x38, size 0x4
    int flipAlpha; // offset 0x3C, size 0x4
};
// total size: 0x120
struct _TBRenderTarget {
    // Members
    TBTexture dummyTexture; // offset 0x0, size 0xA0
    struct _TBRenderTarget * next; // offset 0xA0, size 0x4
    struct _TBRenderTarget * prev; // offset 0xA4, size 0x4
    int width; // offset 0xA8, size 0x4
    int height; // offset 0xAC, size 0x4
    int rgbDepth; // offset 0xB0, size 0x4
    int zDepth; // offset 0xB4, size 0x4
    unsigned int flags; // offset 0xB8, size 0x4
    int pad; // offset 0xBC, size 0x4
    int vpX; // offset 0xC0, size 0x4
    int vpY; // offset 0xC4, size 0x4
    int vpWidth; // offset 0xC8, size 0x4
    int vpHeight; // offset 0xCC, size 0x4
    int clipXPos; // offset 0xD0, size 0x4
    int clipYPos; // offset 0xD4, size 0x4
    int clipWidth; // offset 0xD8, size 0x4
    int clipHeight; // offset 0xDC, size 0x4
    void * texData; // offset 0xE0, size 0x4
    void * zData; // offset 0xE4, size 0x4
    int textureBytes; // offset 0xE8, size 0x4
    int pad2; // offset 0xEC, size 0x4
    unsigned char padTo32[16]; // offset 0xF0, size 0x10
    GXTexObj ztextureFormat; // offset 0x100, size 0x20
};
typedef struct _TBCommonDisplayInfo TBCommonDisplayInfo;
enum _EBDPixelFormat {
    BDPIXFORMAT_555 = 0,
    BDPIXFORMAT_565 = 1,
    BDPIXFORMAT_24 = 2,
    BDPIXFORMAT_32 = 3,
    BDPIXFORMAT_RGBA6 = 4,
    BDPIXFORMAT_UNKNOWN = 5,
};
typedef enum _EBDPixelFormat EBDPixelFormat;
enum _EBDZDepthFormat {
    BDZDEPTH_LINEAR = 0,
    BDZDEPTH_NEAR = 1,
    BDZDEPTH_MID = 2,
    BDZDEPTH_FAR = 3,
};
typedef enum _EBDZDepthFormat EBDZDepthFormat;
// total size: 0xA4
struct _TBDisplayInfo : public TBCommonDisplayInfo {
    // Members
    int stencilDepth; // offset 0x40, size 0x4
    float xAspect; // offset 0x44, size 0x4
    float yAspect; // offset 0x48, size 0x4
    EBDPixelFormat pixelFormat; // offset 0x4C, size 0x4
    void * frameBuffer1; // offset 0x50, size 0x4
    void * frameBuffer2; // offset 0x54, size 0x4
    void * frameCurrentBuffer; // offset 0x58, size 0x4
    void * fifoQueue; // offset 0x5C, size 0x4
    int firstFrame; // offset 0x60, size 0x4
    GXRenderModeObj rmode; // offset 0x64, size 0x3C
    GXFifoObj * fifo; // offset 0xA0, size 0x4
};
typedef struct _TBDisplayInfo TBDisplayInfo;
typedef void (* TBVsyncCallback)(void *);
typedef int (* TBPreFlipCallback)(void *);
TBDisplayInfo bDisplayInfo; // size: 0xA4
unsigned int bFlipCount; // size: 0x4
unsigned long long bLastFrameDuration; // size: 0x8
unsigned int bProgressiveModeAvailable; // size: 0x4
enum EBViewportRotationOrder {
    BVPROTATE_XYZ = 0,
    BVPROTATE_XZY = 1,
    BVPROTATE_YXZ = 2,
    BVPROTATE_YZX = 3,
    BVPROTATE_ZXY = 4,
    BVPROTATE_ZYX = 5,
};
enum EBScreenToWorldMethod {
    BSCREENTOWORLD_OFFSETPARALLEL = 0,
    BSCREENTOWORLD_OFFSETFROMEYE = 1,
    BSCREENTOWORLD_OFFSETFROMEYERADIAL = 2,
};
enum EBMatrixStackMode {
    BMATRIXSTACK_VIEW = 0,
    BMATRIXSTACK_OBJECT = 1,
};
typedef void (* TBObjectMatrixCallback)(TBVector *, void *);
// total size: 0x3FC
struct _TBCommonViewInfo {
    // Inner declarations
    union {
        // total size: 0xC
        struct {
            // Members
            float xPos; // offset 0x0, size 0x4
            float yPos; // offset 0x4, size 0x4
            float zPos; // offset 0x8, size 0x4
        }; // offset 0x0, size 0xC
        TBVector position; // offset 0x0, size 0x10
    };

    // Members
    union {
        // total size: 0xC
        struct {
            // Members
            float xPos; // offset 0x0, size 0x4
            float yPos; // offset 0x4, size 0x4
            float zPos; // offset 0x8, size 0x4
        }; // offset 0x0, size 0xC
        TBVector position; // offset 0x0, size 0x10
    }; // offset 0x0, size 0x10
    Mtx44 rotMatrix; // offset 0x10, size 0x40
    Mtx44 invRotMatrix; // offset 0x50, size 0x40
    float nearClip; // offset 0x90, size 0x4
    float farClip; // offset 0x94, size 0x4
    float xFov; // offset 0x98, size 0x4
    float yFov; // offset 0x9C, size 0x4
    float xFovSin; // offset 0xA0, size 0x4
    float yFovSin; // offset 0xA4, size 0x4
    float xFovCos; // offset 0xA8, size 0x4
    float yFovCos; // offset 0xAC, size 0x4
    float xFovTan; // offset 0xB0, size 0x4
    float yFovTan; // offset 0xB4, size 0x4
    float xFovCot; // offset 0xB8, size 0x4
    float yFovCot; // offset 0xBC, size 0x4
    float width; // offset 0xC0, size 0x4
    float height; // offset 0xC4, size 0x4
    float halfWidth; // offset 0xC8, size 0x4
    float halfHeight; // offset 0xCC, size 0x4
    float xCentre; // offset 0xD0, size 0x4
    float yCentre; // offset 0xD4, size 0x4
    float xTopLeft; // offset 0xD8, size 0x4
    float yTopLeft; // offset 0xDC, size 0x4
    Mtx44 objectMatrix; // offset 0xE0, size 0x40
    Mtx44 worldToView; // offset 0x120, size 0x40
    Mtx44 worldToProjection; // offset 0x160, size 0x40
    Mtx44 objectToView; // offset 0x1A0, size 0x40
    Mtx44 objectToProjection; // offset 0x1E0, size 0x40
    Mtx44 objectToScreen; // offset 0x220, size 0x40
    Mtx44 viewportMatrix; // offset 0x260, size 0x40
    Mtx44 orthoPreClipMatrix; // offset 0x2A0, size 0x40
    Mtx44 orthoProjectionMatrix; // offset 0x2E0, size 0x40
    Mtx44 perspProjectionMatrix; // offset 0x320, size 0x40
    Mtx44 * projectionMatrix; // offset 0x360, size 0x4
    float clipXPos; // offset 0x364, size 0x4
    float clipYPos; // offset 0x368, size 0x4
    float clipWidth; // offset 0x36C, size 0x4
    float clipHeight; // offset 0x370, size 0x4
    Mtx44 clipMatrix; // offset 0x374, size 0x40
    float aspectH; // offset 0x3B4, size 0x4
    float aspectV; // offset 0x3B8, size 0x4
    float aspectRatio; // offset 0x3BC, size 0x4
    unsigned int projectionMode; // offset 0x3C0, size 0x4
    float xBias; // offset 0x3C4, size 0x4
    float yBias; // offset 0x3C8, size 0x4
    float zBias; // offset 0x3CC, size 0x4
    float xRatio; // offset 0x3D0, size 0x4
    float yRatio; // offset 0x3D4, size 0x4
    float oneOverXRatio; // offset 0x3D8, size 0x4
    float oneOverYRatio; // offset 0x3DC, size 0x4
    void (* objectMatrixCallback)(TBVector *, void *); // offset 0x3E0, size 0x4
    void * objectMatrixContext; // offset 0x3E4, size 0x4
    int objectMatrixIsIdentity; // offset 0x3E8, size 0x4
    int dirtyMatrix; // offset 0x3EC, size 0x4
    float viewZoom; // offset 0x3F0, size 0x4
    float xZoomCentre; // offset 0x3F4, size 0x4
    float yZoomCentre; // offset 0x3F8, size 0x4
};
typedef struct _TBCommonViewInfo TBCommonViewInfo;
// total size: 0x70
struct _TB2DZoomInfo {
    // Members
    int zoomX; // offset 0x0, size 0x4
    int zoomY; // offset 0x4, size 0x4
    int zoomWidth; // offset 0x8, size 0x4
    int zoomHeight; // offset 0xC, size 0x4
    int setX; // offset 0x10, size 0x4
    int setY; // offset 0x14, size 0x4
    int setWidth; // offset 0x18, size 0x4
    int setHeight; // offset 0x1C, size 0x4
    float screenX; // offset 0x20, size 0x4
    float screenY; // offset 0x24, size 0x4
    float screenWidth; // offset 0x28, size 0x4
    float screenHeight; // offset 0x2C, size 0x4
    TBVector worldPos; // offset 0x30, size 0x10
    int fits; // offset 0x40, size 0x4
    int pad; // offset 0x44, size 0x4
    float spriteWidth; // offset 0x48, size 0x4
    float spriteHeight; // offset 0x4C, size 0x4
    float sprite2DU0; // offset 0x50, size 0x4
    float sprite2DV0; // offset 0x54, size 0x4
    float sprite2DU1; // offset 0x58, size 0x4
    float sprite2DV1; // offset 0x5C, size 0x4
    float spriteU0; // offset 0x60, size 0x4
    float spriteV0; // offset 0x64, size 0x4
    float spriteU1; // offset 0x68, size 0x4
    float spriteV1; // offset 0x6C, size 0x4
};
typedef struct _TB2DZoomInfo TB2DZoomInfo;
// total size: 0x504
struct _TBViewInfo : public TBCommonViewInfo {
    // Members
    int objectToScreenValid; // offset 0x3FC, size 0x4
    int worldToProjectionValid; // offset 0x400, size 0x4
    Mtx44 totalMatrix; // offset 0x404, size 0x40
    Mtx44 normalMatrix; // offset 0x444, size 0x40
    Mtx44 GCTotalMatrix; // offset 0x484, size 0x40
    Mtx44 GCNormalMatrix; // offset 0x4C4, size 0x40
};
struct _TBViewInfo bViewInfo; // size: 0x504
typedef struct _TBViewInfo TBViewInfo;
enum EVertexType {
    BVERTTYPE_SINGLE = 0,
    BVERTTYPE_SINGLE2D = 1,
    BVERTTYPE_DUAL = 2,
    BVERTTYPE_DUAL2D = 3,
    BVERTTYPE_TRI = 4,
    BVERTTYPE_TRI2D = 5,
    BVERTTYPE_QUAD = 6,
    BVERTTYPE_QUAD2D = 7,
    BVERTTYPE_BLENDEDSINGLE = 8,
    BVERTTYPE_BLENDEDDUAL = 9,
    BVERTTYPE_BLENDEDTRI = 10,
    BVERTTYPE_BLENDEDQUAD = 11,
    BVERTTYPE_POINTSPRITE = 12,
    BVERTTYPE_DISPLAYLIST = 13,
    BVERTTYPE_DISPLAYLIST_2COLOUR = 14,
    BVERTTYPE_DISPLAYLIST_ENVMAP = 15,
    BVERTTYPE_DISPLAYLIST_INDEXED = 16,
    BVERTTYPE_DISPLAYLIST_INDEXED_2COLOUR = 17,
    BVERTTYPE_DISPLAYLIST_1BONE = 18,
    BVERTTYPE_DISPLAYLIST_1BONE_2COLOUR = 19,
    BVERTTYPE_DISPLAYLIST_1BONE_ENVMAP = 20,
    BVERTTYPE_DISPLAYLIST_1BONE_INDEXED = 21,
    BVERTTYPE_DISPLAYLIST_1BONE_INDEXED_2COLOUR = 22,
    BVERTTYPE_FONT = 23,
    BVERTTYPE_DISPLAYLIST_INDEXED_ENVMAP = 24,
    BVERTTYPE_DISPLAYLIST_1BONE_INDEXED_ENVMAP = 25,
    BVERTTYPE_PATCHCONTROL = 26,
};
typedef unsigned int TBPrimColour;
// total size: 0x4
struct _TBPrimColourStruct {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
        // total size: 0x4
        struct {
            // Members
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        }; // offset 0x0, size 0x4
    };

    // Members
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
        // total size: 0x4
        struct {
            // Members
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        }; // offset 0x0, size 0x4
    }; // offset 0x0, size 0x4
};
typedef struct _TBPrimColourStruct TBPrimColourStruct;
typedef struct _TBPrimVertex TBPrimVertex;
// total size: 0x18
struct _TBPrimVertex2D {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
};
typedef struct _TBPrimVertex2D TBPrimVertex2D;
// total size: 0x2C
struct _TBDualPrimVertex {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float xn; // offset 0xC, size 0x4
    float yn; // offset 0x10, size 0x4
    float zn; // offset 0x14, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0x18, size 0x4
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
    float u2; // offset 0x24, size 0x4
    float v2; // offset 0x28, size 0x4
};
typedef struct _TBDualPrimVertex TBDualPrimVertex;
// total size: 0x20
struct _TBDualPrimVertex2D {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float u2; // offset 0x18, size 0x4
    float v2; // offset 0x1C, size 0x4
};
typedef struct _TBDualPrimVertex2D TBDualPrimVertex2D;
// total size: 0x34
struct _TBTriPrimVertex {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float xn; // offset 0xC, size 0x4
    float yn; // offset 0x10, size 0x4
    float zn; // offset 0x14, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0x18, size 0x4
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
    float u2; // offset 0x24, size 0x4
    float v2; // offset 0x28, size 0x4
    float u3; // offset 0x2C, size 0x4
    float v3; // offset 0x30, size 0x4
};
typedef struct _TBTriPrimVertex TBTriPrimVertex;
// total size: 0x28
struct _TBTriPrimVertex2D {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float u2; // offset 0x18, size 0x4
    float v2; // offset 0x1C, size 0x4
    float u3; // offset 0x20, size 0x4
    float v3; // offset 0x24, size 0x4
};
typedef struct _TBTriPrimVertex2D TBTriPrimVertex2D;
// total size: 0x3C
struct _TBQuadPrimVertex {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float xn; // offset 0xC, size 0x4
    float yn; // offset 0x10, size 0x4
    float zn; // offset 0x14, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0x18, size 0x4
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
    float u2; // offset 0x24, size 0x4
    float v2; // offset 0x28, size 0x4
    float u3; // offset 0x2C, size 0x4
    float v3; // offset 0x30, size 0x4
    float u4; // offset 0x34, size 0x4
    float v4; // offset 0x38, size 0x4
};
typedef struct _TBQuadPrimVertex TBQuadPrimVertex;
// total size: 0x30
struct _TBQuadPrimVertex2D {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float u2; // offset 0x18, size 0x4
    float v2; // offset 0x1C, size 0x4
    float u3; // offset 0x20, size 0x4
    float v3; // offset 0x24, size 0x4
    float u4; // offset 0x28, size 0x4
    float v4; // offset 0x2C, size 0x4
};
typedef struct _TBQuadPrimVertex2D TBQuadPrimVertex2D;
// total size: 0x34
struct _TBBlendedPrimVertex {
    // Inner declarations
    union {
        unsigned int matrixIndices; // offset 0x0, size 0x4
        unsigned char matrixIndex[4]; // offset 0x0, size 0x4
    };
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float weight[3]; // offset 0xC, size 0xC
    union {
        unsigned int matrixIndices; // offset 0x0, size 0x4
        unsigned char matrixIndex[4]; // offset 0x0, size 0x4
    } mtx; // offset 0x18, size 0x4
    float xn; // offset 0x1C, size 0x4
    float yn; // offset 0x20, size 0x4
    float zn; // offset 0x24, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0x28, size 0x4
    float u; // offset 0x2C, size 0x4
    float v; // offset 0x30, size 0x4
};
typedef struct _TBBlendedPrimVertex TBBlendedPrimVertex;
// total size: 0x3C
struct _TBDualBlendedPrimVertex {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float weight[3]; // offset 0xC, size 0xC
    unsigned char matrixIndex[4]; // offset 0x18, size 0x4
    float xn; // offset 0x1C, size 0x4
    float yn; // offset 0x20, size 0x4
    float zn; // offset 0x24, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0x28, size 0x4
    float u; // offset 0x2C, size 0x4
    float v; // offset 0x30, size 0x4
    float u2; // offset 0x34, size 0x4
    float v2; // offset 0x38, size 0x4
};
typedef struct _TBDualBlendedPrimVertex TBDualBlendedPrimVertex;
// total size: 0x44
struct _TBTriBlendedPrimVertex {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float weight[3]; // offset 0xC, size 0xC
    unsigned char matrixIndex[4]; // offset 0x18, size 0x4
    float xn; // offset 0x1C, size 0x4
    float yn; // offset 0x20, size 0x4
    float zn; // offset 0x24, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0x28, size 0x4
    float u; // offset 0x2C, size 0x4
    float v; // offset 0x30, size 0x4
    float u2; // offset 0x34, size 0x4
    float v2; // offset 0x38, size 0x4
    float u3; // offset 0x3C, size 0x4
    float v3; // offset 0x40, size 0x4
};
typedef struct _TBTriBlendedPrimVertex TBTriBlendedPrimVertex;
// total size: 0x4C
struct _TBQuadBlendedPrimVertex {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float weight[3]; // offset 0xC, size 0xC
    unsigned char matrixIndex[4]; // offset 0x18, size 0x4
    float xn; // offset 0x1C, size 0x4
    float yn; // offset 0x20, size 0x4
    float zn; // offset 0x24, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0x28, size 0x4
    float u; // offset 0x2C, size 0x4
    float v; // offset 0x30, size 0x4
    float u2; // offset 0x34, size 0x4
    float v2; // offset 0x38, size 0x4
    float u3; // offset 0x3C, size 0x4
    float v3; // offset 0x40, size 0x4
    float u4; // offset 0x44, size 0x4
    float v4; // offset 0x48, size 0x4
};
typedef struct _TBQuadBlendedPrimVertex TBQuadBlendedPrimVertex;
// total size: 0x10
struct _TBPointSpritePrimVertex {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0xC, size 0x4
};
typedef struct _TBPointSpritePrimVertex TBPointSpritePrimVertex;
typedef struct _TBVertexBuffer TBVertexBuffer;
// total size: 0x18
struct _TBIndexBuffer {
    // Members
    void * suspendedData; // offset 0x0, size 0x4
    int noofIndices; // offset 0x4, size 0x4
    int indexBits; // offset 0x8, size 0x4
    unsigned int lastFlipUsed; // offset 0xC, size 0x4
    struct _TBIndexBuffer * next; // offset 0x10, size 0x4
    struct _TBIndexBuffer * prev; // offset 0x14, size 0x4
};
typedef struct _TBIndexBuffer TBIndexBuffer;
typedef void (* bdDrawPrimitiveVBFunc)(unsigned int, TBVertexBuffer *, int, int);
int bLastVtxFormat; // size: 0x4
enum EBVertexID {
    BVERTID_UNKNOWN = -1,
    BVERTID_SINGLE = 0,
    BVERTID_SINGLE2D = 1,
    BVERTID_DUAL = 2,
    BVERTID_DUAL2D = 3,
    BVERTID_TRI = 4,
    BVERTID_TRI2D = 5,
    BVERTID_QUAD = 6,
    BVERTID_QUAD2D = 7,
    BVERTID_BLENDEDSINGLE = 8,
    BVERTID_BLENDEDDUAL = 9,
    BVERTID_BLENDEDTRI = 10,
    BVERTID_BLENDEDQUAD = 11,
    BVERTID_POINTSPRITE = 12,
    BVERTID_DISPLAYLIST = 13,
    BVERTID_DISPLAYLIST_2COLOUR = 14,
    BVERTID_DISPLAYLIST_ENVMAP = 15,
    BVERTID_DISPLAYLIST_INDEXED = 16,
    BVERTID_DISPLAYLIST_INDEXED_2COLOUR = 17,
    BVERTID_DISPLAYLIST_1BONE = 18,
    BVERTID_DISPLAYLIST_1BONE_2COLOUR = 19,
    BVERTID_DISPLAYLIST_1BONE_ENVMAP = 20,
    BVERTID_DISPLAYLIST_1BONE_INDEXED = 21,
    BVERTID_DISPLAYLIST_1BONE_INDEXED_2COLOUR = 22,
    BVERTID_FONT = 23,
    BVERTID_DISPLAYLIST_INDEXED_ENVMAP = 24,
    BVERTID_DISPLAYLIST_1BONE_INDEXED_ENVMAP = 25,
    BVERTID_PATCHCONTROL = 26,
    BVERTID_NORMMAP = 27,
    BVERTID_BLENDEDNORMMAP = 28,
    BVERTID_SHADOWEDGEMESH = 29,
    BVERTID_SHADOWEDGESKIN1 = 30,
    BVERTID_SHADOWEDGESKIN2 = 31,
    BVERTID_SHADOWEDGESKIN3 = 32,
    BVERTID_SHADOWMESH = 33,
    BVERTID_SHADOWSKIN = 34,
    BVERTIDS = 35,
};
enum EBTextureFormat {
    BTEXTUREFORMAT_INVALID = 0,
    BTEXTUREFORMAT_8888ARGB = 1,
    BTEXTUREFORMAT_8888ABGR = 2,
    BTEXTUREFORMAT_1555ARGB = 3,
    BTEXTUREFORMAT_1555ABGR = 4,
    BTEXTUREFORMAT_256PALETTE_8888ARGB = 5,
    BTEXTUREFORMAT_256PALETTE_1555ABGR = 6,
    BTEXTUREFORMAT_16PALETTE_8888ARGB = 7,
    BTEXTUREFORMAT_16PALETTE_1555ABGR = 8,
    BTEXTUREFORMAT_4444ARGB = 9,
    BTEXTUREFORMAT_256PALETTE_8888ABGR = 10,
    BTEXTUREFORMAT_16PALETTE_8888ABGR = 11,
    BTEXTUREFORMAT_8888ARGB_LINEAR = 12,
    BTEXTUREFORMAT_565RGB_LINEAR = 13,
    BTEXTUREFORMAT_1555ARGB_LINEAR = 14,
    BTEXTUREFORMAT_TILE_8888ARGB = 15,
    BTEXTUREFORMAT_TILE_5A3ARGB = 16,
    BTEXTUREFORMAT_TILE_256PALETTE_RGB565 = 17,
    BTEXTUREFORMAT_TILE_256PALETTE_RGB5A3 = 18,
    BTEXTUREFORMAT_TILE_16PALETTE_RGB565 = 19,
    BTEXTUREFORMAT_TILE_16PALETTE_RGB5A3 = 20,
    BTEXTUREFORMAT_TILE_S3TC = 21,
    BTEXTUREFORMAT_TILE_I4 = 22,
    BTEXTUREFORMAT_TILE_565RGB = 23,
    BTEXTUREFORMAT_DXT1 = 24,
    BTEXTUREFORMAT_DXT2 = 25,
    BTEXTUREFORMAT_DXT3 = 26,
    BTEXTUREFORMAT_DXT4 = 27,
    BTEXTUREFORMAT_DXT5 = 28,
    BTEXTUREFORMAT_TILE_I8 = 29,
    BTEXTUREFORMAT_TILE_A8 = 30,
    BTEXTUREFORMAT_4444ABGR = 31,
    BTEXTUREFORMAT_PSP_8888ABGR = 32,
    BTEXTUREFORMAT_PSP_1555ABGR = 33,
    BTEXTUREFORMAT_PSP_4444ABGR = 34,
    BTEXTUREFORMAT_PSP_256PALETTE_8888ABGR = 35,
    BTEXTUREFORMAT_PSP_16PALETTE_8888ABGR = 36,
    BTEXTUREFORMAT_PSP_256PALETTE_1555ABGR = 37,
    BTEXTUREFORMAT_PSP_16PALETTE_1555ABGR = 38,
    BTEXTUREFORMAT_PS3_8888ARGB = 39,
    BTEXTUREFORMAT_FLOAT_A2B10G10R10 = 40,
    BTEXTUREFORMAT_FLOAT_A16B16G16R16 = 41,
    BTEXTUREFORMAT_FLOAT_R32F = 42,
    BTEXTUREFORMATS = 43,
};
typedef enum EBTextureFormat EBTextureFormat;
enum EBTextureMatrixType {
    BTEXTUREMATRIXTYPE_NONE = 0,
    BTEXTUREMATRIXTYPE_OBJECTSPACEPOSITION = 1,
    BTEXTUREMATRIXTYPE_OBJECTSPACENORMAL = 2,
    BTEXTUREMATRIXTYPE_OBJECTSPACEPOSITION_ANDPOST = 3,
    BTEXTUREMATRIXTYPE_OBJECTSPACENORMAL_ANDPOST = 4,
    BTEXTUREMATRIXTYPE_TEXTURECOORD = 5,
    BTEXTUREMATRIXTYPE_TEXTURECOORD_ANDPOST = 6,
    BTEXTUREMATRIXTYPE_TEXTURECOORD_NOMATRIX = 7,
    BTEXTUREMATRIXTYPE_CAMERASPACEPOSITION = 8,
    BTEXTUREMATRIXTYPE_CARTOON = 9,
    BTEXTUREMATRIXTYPE_OBJECTSPACEPOSITION_CLIP = 10,
};
enum EBTextureCallback {
    EBTEXTURECALLBACK_SET = 0,
    EBTEXTURECALLBACK_UNSET = 1,
};
// total size: 0x20
struct _TBScreenAsTextureInfo {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    int texWidth; // offset 0x8, size 0x4
    int texHeight; // offset 0xC, size 0x4
    float sScale; // offset 0x10, size 0x4
    float tScale; // offset 0x14, size 0x4
    int flags; // offset 0x18, size 0x4
    struct _TBRenderTarget * target; // offset 0x1C, size 0x4
};
typedef struct _TBScreenAsTextureInfo TBScreenAsTextureInfo;
enum EBScreenToTextureState {
    EBSCREENTOTEXTURESTATE_IDLE = 0,
    EBSCREENTOTEXTURESTATE_PROCESSING = 1,
    EBSCREENTOTEXTURESTATE_SUCCESS = 2,
    EBSCREENTOTEXTURESTATE_FAILED = 3,
};
typedef int (* TBTextureCallback)(TBTexture *, int, void *);
GXChannelID bMainColourChannel; // size: 0x4
enum EBRenderStateReturnValue {
    EBRENDERSTATE_RETURN_OK = 0,
    EBRENDERSTATE_RETURN_NOCHANGE = 1,
    EBRENDERSTATE_RETURN_FAILEDLOCKED = 2,
};
// total size: 0x88
struct _TBSavedRenderStates {
    // Inner declarations
    union {
        unsigned int states[2][17]; // offset 0x0, size 0x88
        unsigned long long states64[17]; // offset 0x0, size 0x88
    };

    // Members
    union {
        unsigned int states[2][17]; // offset 0x0, size 0x88
        unsigned long long states64[17]; // offset 0x0, size 0x88
    }; // offset 0x0, size 0x88
};
typedef struct _TBSavedRenderStates TBSavedRenderStates;
// total size: 0xA8
struct TBRenderStateBlock {
    // Inner declarations
    union {
        unsigned int states[2][17]; // offset 0x0, size 0x88
        unsigned long long states64[17]; // offset 0x0, size 0x88
    };

    // Typedefs
    typedef struct TBRenderStateBlock ._59;

    // Members
    int textureEnable[8]; // offset 0x0, size 0x20
    union {
        unsigned int states[2][17]; // offset 0x0, size 0x88
        unsigned long long states64[17]; // offset 0x0, size 0x88
    }; // offset 0x20, size 0x88
};
typedef struct TBRenderStateBlock TBRenderStateBlock;
// total size: 0xB00
struct _TBRenderStateInfo {
    // Inner declarations
    union {
        unsigned int renderState[2][17]; // offset 0x0, size 0x88
        unsigned long long renderState64[17]; // offset 0x0, size 0x88
    };
    union {
        unsigned int stateStack[2][16][17]; // offset 0x0, size 0x880
        unsigned long long stateStack64[16][17]; // offset 0x0, size 0x880
    };

    // Members
    TBTexture * currentTexture[8]; // offset 0x0, size 0x20
    unsigned int currentTextureFilterMode[8]; // offset 0x20, size 0x20
    GXChannelID currentChannelID[8]; // offset 0x40, size 0x20
    float fogNear; // offset 0x60, size 0x4
    float fogFar; // offset 0x64, size 0x4
    float fogRange; // offset 0x68, size 0x4
    GXColor fogColor; // offset 0x6C, size 0x4
    union {
        unsigned int renderState[2][17]; // offset 0x0, size 0x88
        unsigned long long renderState64[17]; // offset 0x0, size 0x88
    }; // offset 0x70, size 0x88
    union {
        unsigned int stateStack[2][16][17]; // offset 0x0, size 0x880
        unsigned long long stateStack64[16][17]; // offset 0x0, size 0x880
    }; // offset 0xF8, size 0x880
    int stateStackDepth[17]; // offset 0x978, size 0x44
    int textureEnable[8]; // offset 0x9BC, size 0x20
    int textureAlphaEnable[8]; // offset 0x9DC, size 0x20
    int renderStateLock[17]; // offset 0x9FC, size 0x44
    int wrapMode[8]; // offset 0xA40, size 0x20
    int textureGeneration[8]; // offset 0xA60, size 0x20
    int uvScrolling[8]; // offset 0xA80, size 0x20
    GXTexCoordID textureCoord[8]; // offset 0xAA0, size 0x20
    int stateActive; // offset 0xAC0, size 0x4
    int stateActiveLast; // offset 0xAC4, size 0x4
    int stateChanged; // offset 0xAC8, size 0x4
    int basicStages; // offset 0xACC, size 0x4
    int basicStagesLast; // offset 0xAD0, size 0x4
    int activeStages; // offset 0xAD4, size 0x4
    GXTexObj * zTexture; // offset 0xAD8, size 0x4
    int environmentMapActive; // offset 0xADC, size 0x4
    int specularActive; // offset 0xAE0, size 0x4
    float textureLod; // offset 0xAE4, size 0x4
    int hangCheck; // offset 0xAE8, size 0x4
    unsigned char invalidRenderState[17]; // offset 0xAEC, size 0x11
};
typedef struct _TBRenderStateInfo TBRenderStateInfo;
typedef struct _TBRenderTarget TBRenderTarget;
TBRenderStateInfo bRenderState; // size: 0xB00
enum EBFontCallbackReason {
    EBFONTCALLBACKREASON_POLY = 0,
    EBFONTCALLBACKREASON_ESCAPE = 1,
    EBFONTCALLBACKREASON_TEXTURE = 2,
    EBFONTCALLBACKREASON_COMMAND = 3,
    EBFONTCALLBACKREASON_COMPLETE = 4,
};
enum EBFontFormatting {
    EBFONTFORMATTING_LEFT = 0,
    EBFONTFORMATTING_TOP = 1,
    EBFONTFORMATTING_CENTRE = 2,
    EBFONTFORMATTING_RIGHT = 3,
    EBFONTFORMATTING_BOTTOM = 4,
    EBFONTFORMATTING_JUSTIFY = 5,
};
enum EBFontType {
    EBFONTTYPE_ASCII = 0,
    EBFONTTYPE_UNICODE = 1,
    EBFONTTYPE_COMPRESSED = 2,
};
typedef struct _TBFontGlyphInfo TBFontGlyphInfo;
typedef TBFont TBFontHeader;
// total size: 0x8
struct _TBFontUnicodeGlyphInfo {
    // Members
    unsigned short code; // offset 0x0, size 0x2
    short xPos; // offset 0x2, size 0x2
    short yPos; // offset 0x4, size 0x2
    unsigned char width; // offset 0x6, size 0x1
    unsigned char height; // offset 0x7, size 0x1
};
typedef struct _TBFontUnicodeGlyphInfo TBFontUnicodeGlyphInfo;
// total size: 0x40
struct _TBFontUnicode {
    // Members
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    unsigned int fontType; // offset 0x20, size 0x4
    float lineHeight; // offset 0x24, size 0x4
    unsigned int texturePad; // offset 0x28, size 0x4
    TBTexture * texture; // offset 0x2C, size 0x4
    int numGlyphs; // offset 0x30, size 0x4
    int halfNoofGlyphCols; // offset 0x34, size 0x4
    int halfNoofGlyphRows; // offset 0x38, size 0x4
    int pad[1]; // offset 0x3C, size 0x4
};
typedef struct _TBFontUnicode TBFontUnicode;
// total size: 0x38
struct _TBPrintFontGlyph {
    // Members
    TBTexture * texture; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    TBVector u; // offset 0xC, size 0x10
    TBVector v; // offset 0x1C, size 0x10
    int charCode; // offset 0x2C, size 0x4
    void * context; // offset 0x30, size 0x4
    unsigned short glyphFontIdx; // offset 0x34, size 0x2
};
typedef struct _TBPrintFontGlyph TBPrintFontGlyph;
// total size: 0x24
struct _TBFontCallbackInfo {
    // Members
    TBPrimVertex * vertexBase; // offset 0x0, size 0x4
    TBPrimVertex * curVertex; // offset 0x4, size 0x4
    TBPrintFontGlyph * glyphs; // offset 0x8, size 0x4
    TBPrintFontGlyph * curGlyph; // offset 0xC, size 0x4
    char * escapeString; // offset 0x10, size 0x4
    int lineNumber; // offset 0x14, size 0x4
    int glyphNumber; // offset 0x18, size 0x4
    int glyphIndex; // offset 0x1C, size 0x4
    void * context; // offset 0x20, size 0x4
};
typedef struct _TBFontCallbackInfo TBFontCallbackInfo;
typedef int (* TBPrintFontCallback)(enum EBFontCallbackReason, TBFontCallbackInfo *);
// total size: 0x20
struct _TBFontFormatting {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float width; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    enum EBFontFormatting horzFormat; // offset 0x10, size 0x4
    enum EBFontFormatting vertFormat; // offset 0x14, size 0x4
    int wrap; // offset 0x18, size 0x4
    float lineSpace; // offset 0x1C, size 0x4
};
typedef struct _TBFontFormatting TBFontFormatting;
// total size: 0x10
struct _TBFontLineInfo {
    // Members
    TBPrintFontGlyph * glyph; // offset 0x0, size 0x4
    int noofGlyphs; // offset 0x4, size 0x4
    float width; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
};
typedef struct _TBFontLineInfo TBFontLineInfo;
enum EBVideoReasonCode {
    EBVIDEOREASONCODE_INIT = 0,
    EBVIDEOREASONCODE_SHUTDOWN = 1,
    EBVIDEOREASONCODE_RENDER = 2,
    EBVIDEOREASONCODE_POSTRENDER = 3,
    EBVIDEOREASONCODE_TESTQUIT = 4,
    EBVIDEOREASONCODE_REQMEMENTRY = 5,
    EBVIDEOREASONCODE_REQMEMEXIT = 6,
    EBVIDEOREASONCODE_CLEAR = 7,
    EBVIDEOREASONCODE_POSTENDSCENE = 8,
};
typedef enum EBVideoReasonCode EBVideoReasonCode;
enum EBVideoPlayStream {
    EBVIDEOPLAYSTREAM_FINISHED = 0,
    EBVIDEOPLAYSTREAM_MEMCARDCHANGE = 1,
    EBVIDEOPLAYSTREAM_PADCHANGE = 2,
    EBVIDEOPLAYSTREAM_USERQUIT = 3,
    EBVIDEOPLAYSTREAM_CALLBACKQUIT = 4,
    EBVIDEOPLAYSTREAM_INITFAILED = 5,
    EBVIDEOPLAYSTREAM_ERROR = 6,
};
typedef enum EBVideoPlayStream EBVideoPlayStream;
enum EBVideoMemReq {
    EBVIDEOMEMREQ_GCTHPAUDIODMA = 0,
    EBVIDEOMEMREQ_GCTHPREADBUF = 1,
    EBVIDEOMEMREQ_GCTHPTEXTUREBUFA = 2,
    EBVIDEOMEMREQ_GCTHPTEXTUREBUFB = 3,
    EBVIDEOMEMREQ_GCTHPTEXTUREBUFC = 4,
    EBVIDEOMEMREQ_GCTHPAUDIOBUF = 5,
    EBVIDEOMEMREQ_GCTHPWORKING = 6,
    EBVIDEOMEMREQ_NOOF = 7,
};
typedef enum EBVideoMemReq EBVideoMemReq;
// total size: 0xC
struct TBVideoData_Init {
    // Typedefs
    typedef struct TBVideoData_Init ._66;

    // Members
    int xDim; // offset 0x0, size 0x4
    int yDim; // offset 0x4, size 0x4
    int noofFrames; // offset 0x8, size 0x4
};
typedef struct TBVideoData_Init TBVideoData_Init;
// total size: 0xC
struct TBVideoData_Shutdown {
    // Typedefs
    typedef struct TBVideoData_Shutdown ._67;

    // Members
    int xDim; // offset 0x0, size 0x4
    int yDim; // offset 0x4, size 0x4
    int noofFrames; // offset 0x8, size 0x4
};
typedef struct TBVideoData_Shutdown TBVideoData_Shutdown;
// total size: 0xF0
struct TBVideoData_Render {
    // Typedefs
    typedef struct TBVideoData_Render ._68;

    // Members
    TBPrimVertex verts[4]; // offset 0x0, size 0x90
    Mtx44 matrix; // offset 0x90, size 0x40
    TBTexture * texture; // offset 0xD0, size 0x4
    int xDim; // offset 0xD4, size 0x4
    int yDim; // offset 0xD8, size 0x4
    int noofFrames; // offset 0xDC, size 0x4
    unsigned int projectionMode; // offset 0xE0, size 0x4
};
typedef struct TBVideoData_Render TBVideoData_Render;
// total size: 0xC
struct TBVideoData_TestQuit {
    // Typedefs
    typedef struct TBVideoData_TestQuit ._69;

    // Members
    int xDim; // offset 0x0, size 0x4
    int yDim; // offset 0x4, size 0x4
    int noofFrames; // offset 0x8, size 0x4
};
typedef struct TBVideoData_TestQuit TBVideoData_TestQuit;
typedef int (* TBVideoCallback)(EBVideoReasonCode, int, void *, void *);
// total size: 0xC
struct TBVideoData_RequestMemory {
    // Typedefs
    typedef struct TBVideoData_RequestMemory ._70;

    // Members
    EBVideoMemReq memReqType; // offset 0x0, size 0x4
    void * data; // offset 0x4, size 0x4
    unsigned int sizeReqd; // offset 0x8, size 0x4
};
typedef struct TBVideoData_RequestMemory TBVideoData_RequestMemory;
int bGlobalVideoVolume; // size: 0x4
int bStopVideo; // size: 0x4
enum EBSubtitleReasonCode {
    EBSUBTITLEREASONCODE_QUERYSTRING = 0,
};
typedef enum EBSubtitleReasonCode EBSubtitleReasonCode;
// total size: 0x14
struct _TBSubtitleItem {
    // Members
    float startTime; // offset 0x0, size 0x4
    float duration; // offset 0x4, size 0x4
    unsigned char r; // offset 0x8, size 0x1
    unsigned char g; // offset 0x9, size 0x1
    unsigned char b; // offset 0xA, size 0x1
    unsigned char a; // offset 0xB, size 0x1
    char * identifier; // offset 0xC, size 0x4
    char * params; // offset 0x10, size 0x4
};
typedef struct _TBSubtitleItem TBSubtitleItem;
// total size: 0x10
struct _TBSubtitleParams {
    // Members
    float timeElapsed; // offset 0x0, size 0x4
    char * identifier; // offset 0x4, size 0x4
    char * params; // offset 0x8, size 0x4
    unsigned short * string; // offset 0xC, size 0x4
};
typedef struct _TBSubtitleParams TBSubtitleParams;
typedef int (* TBSubtitleCallback)(EBSubtitleReasonCode, TBSubtitleParams *, void *);
typedef void TBEffectBlurCallback();
// total size: 0x24
struct _TBEffectBlur {
    // Members
    int bufWidth; // offset 0x0, size 0x4
    int bufHeight; // offset 0x4, size 0x4
    int xyShift[2]; // offset 0x8, size 0x8
    int noof; // offset 0x10, size 0x4
    int showBuf; // offset 0x14, size 0x4
    int filter; // offset 0x18, size 0x4
    float mult; // offset 0x1C, size 0x4
    TBEffectBlurCallback * renderCallback; // offset 0x20, size 0x4
};
typedef struct _TBEffectBlur TBEffectBlur;
// total size: 0x40
struct _TBEffectDepthOfField {
    // Members
    int enabled; // offset 0x0, size 0x4
    float blends[3]; // offset 0x4, size 0xC
    float nearFocus; // offset 0x10, size 0x4
    float farFocus; // offset 0x14, size 0x4
    int flags; // offset 0x18, size 0x4
    TBEffectBlur blur; // offset 0x1C, size 0x24
};
typedef struct _TBEffectDepthOfField TBEffectDepthOfField;
// total size: 0x34
struct _TBEffectBloom {
    // Members
    int enabled; // offset 0x0, size 0x4
    int diffRGB[3]; // offset 0x4, size 0xC
    TBEffectBlur blur; // offset 0x10, size 0x24
};
typedef struct _TBEffectBloom TBEffectBloom;
// total size: 0x18
struct _TBEffectFog {
    // Members
    int enabled; // offset 0x0, size 0x4
    unsigned int maxZ; // offset 0x4, size 0x4
    float fogPlane; // offset 0x8, size 0x4
    TBVector2D blends; // offset 0xC, size 0x8
    int flags; // offset 0x14, size 0x4
};
typedef struct _TBEffectFog TBEffectFog;
// total size: 0x14
struct _TBEffectGreyscale {
    // Members
    int enabled; // offset 0x0, size 0x4
    float luminance[3]; // offset 0x4, size 0xC
    int flags; // offset 0x10, size 0x4
};
typedef struct _TBEffectGreyscale TBEffectGreyscale;
enum EBSplineType {
    EBSPLINETYPE_BEZIER = 0,
    EBSPLINETYPE_BSPLINE = 1,
};
// total size: 0x18
struct _TBSplineControlVertex {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0x8, size 0x4
    float x; // offset 0xC, size 0x4
    float y; // offset 0x10, size 0x4
    float z; // offset 0x14, size 0x4
};
typedef struct _TBSplineControlVertex TBSplineControlVertex;
// total size: 0x30
struct _TBSpline {
    // Members
    enum EBSplineType type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    unsigned int noofControls; // offset 0x8, size 0x4
    unsigned int form; // offset 0xC, size 0x4
    void * indexArray; // offset 0x10, size 0x4
    TBSplineControlVertex * vertices; // offset 0x14, size 0x4
    void * subVerts; // offset 0x18, size 0x4
    unsigned char tessellation; // offset 0x1C, size 0x1
    unsigned char maxTessellation; // offset 0x1D, size 0x1
    unsigned char pad[2]; // offset 0x1E, size 0x2
    unsigned int degree; // offset 0x20, size 0x4
    unsigned int pad2[3]; // offset 0x24, size 0xC
};
typedef struct _TBSpline TBSpline;
enum EBPatchType {
    EBPATCHTYPE_BEZIER = 0,
    EBPATCHTYPE_BSPLINE = 1,
};
// total size: 0x24
struct _TBPatchControlVertex {
    // Inner declarations
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
    union {
        unsigned int colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0x8, size 0x4
    float xn; // offset 0xC, size 0x4
    float yn; // offset 0x10, size 0x4
    float zn; // offset 0x14, size 0x4
    float x; // offset 0x18, size 0x4
    float y; // offset 0x1C, size 0x4
    float z; // offset 0x20, size 0x4
};
typedef struct _TBPatchControlVertex TBPatchControlVertex;
// total size: 0x40
struct _TBPatch {
    // Inner declarations
    union {
        unsigned int textureCRC1; // offset 0x0, size 0x4
        TBTexture * texture1; // offset 0x0, size 0x4
    };

    // Members
    enum EBPatchType type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    unsigned int noofUControls; // offset 0x8, size 0x4
    unsigned int noofVControls; // offset 0xC, size 0x4
    unsigned int vertexType; // offset 0x10, size 0x4
    unsigned short * indexArray; // offset 0x14, size 0x4
    unsigned char * vertices; // offset 0x18, size 0x4
    TBPrimVertex * subVerts; // offset 0x1C, size 0x4
    unsigned int form; // offset 0x20, size 0x4
    unsigned int sizeofStrip; // offset 0x24, size 0x4
    unsigned int degree; // offset 0x28, size 0x4
    unsigned char tessellationU; // offset 0x2C, size 0x1
    unsigned char tessellationV; // offset 0x2D, size 0x1
    unsigned char maxTessellationU; // offset 0x2E, size 0x1
    unsigned char maxTessellationV; // offset 0x2F, size 0x1
    union {
        unsigned int textureCRC1; // offset 0x0, size 0x4
        TBTexture * texture1; // offset 0x0, size 0x4
    }; // offset 0x30, size 0x4
    unsigned int uTile; // offset 0x34, size 0x4
    unsigned int vTile; // offset 0x38, size 0x4
    TBPrimVertex * strips; // offset 0x3C, size 0x4
};
typedef struct _TBPatch TBPatch;
enum EBCollisionMeshType {
    BCOLLISIONMESHTYPE_CELLBASED = 0,
    BCOLLISIONMESHTYPE_AABBTREE = 1,
    BCOLLISIONMESHTYPE_HIERARCHICAL = 2,
    BCOLLISIONMESHTYPES = 3,
};
enum EBCollisionSpaceRefType {
    EBCOLLISIONSPACEREF_LOCAL = 0,
    EBCOLLISIONSPACEREF_WORLD = 1,
};
enum EBTrianglePart {
    EBTRIANGLEPART_NONE = 0,
    EBTRIANGLEPART_VERT0 = 1,
    EBTRIANGLEPART_VERT1 = 2,
    EBTRIANGLEPART_VERT2 = 3,
    EBTRIANGLEPART_EDGE0 = 4,
    EBTRIANGLEPART_EDGE1 = 5,
    EBTRIANGLEPART_EDGE2 = 6,
    EBTRIANGLEPART_PLANE = 7,
    EBTRIANGLEPART_UNKNOWN = 8,
    EBTRIANGLEPART_NOOF = 9,
};
typedef struct _TBCollision3DSpecific TBCollision3DSpecific;
typedef struct _TBCollision2DSpecific TBCollision2DSpecific;
typedef struct _TBCollision TBCollision;
typedef struct _TBCollisionPoint TBCollisionPoint;
typedef struct _TBCollisionPlane TBCollisionPlane;
typedef struct _TBCollisionLine TBCollisionLine;
typedef struct _TBCollisionTriangle TBCollisionTriangle;
typedef struct _TBCollisionTriangleList TBCollisionTriangleList;
// total size: 0xB0
struct _TBCollisionBoundedPlane {
    // Members
    TBCollisionTriangleList header; // offset 0x0, size 0x30
    TBCollisionTriangle tri0; // offset 0x30, size 0x40
    TBCollisionTriangle tri1; // offset 0x70, size 0x40
};
typedef struct _TBCollisionBoundedPlane TBCollisionBoundedPlane;
typedef struct _TBCollisionSphere TBCollisionSphere;
typedef struct _TBCollisionSphereList TBCollisionSphereList;
// total size: 0x20
struct _TBCollisionAAEllipsoid {
    // Members
    TBVector centre; // offset 0x0, size 0x10
    TBVector radius; // offset 0x10, size 0x10
};
typedef struct _TBCollisionAAEllipsoid TBCollisionAAEllipsoid;
// total size: 0x30
struct _TBCollisionEllipsoid {
    // Members
    TBVector centre; // offset 0x0, size 0x10
    TBVector orientation; // offset 0x10, size 0x10
    TBVector radius; // offset 0x20, size 0x10
};
typedef struct _TBCollisionEllipsoid TBCollisionEllipsoid;
typedef struct _TBCollisionAABox TBCollisionAABox;
typedef struct _TBCollisionBox TBCollisionBox;
typedef struct _TBCollisionAACylinder TBCollisionAACylinder;
typedef struct _TBCollisionCylinder TBCollisionCylinder;
typedef struct _TBCollisionAACapsule TBCollisionAACapsule;
typedef struct _TBCollisionCapsule TBCollisionCapsule;
// total size: 0x18
struct _TBCollisionAAWheel {
    // Members
    TBVector base; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
    float height; // offset 0x14, size 0x4
};
typedef struct _TBCollisionAAWheel TBCollisionAAWheel;
// total size: 0x28
struct _TBCollisionWheel {
    // Members
    TBVector base; // offset 0x0, size 0x10
    TBVector orientation; // offset 0x10, size 0x10
    float radius; // offset 0x20, size 0x4
    float height; // offset 0x24, size 0x4
};
typedef struct _TBCollisionWheel TBCollisionWheel;
typedef struct _TBCollisionAACone TBCollisionAACone;
typedef struct _TBCollisionCone TBCollisionCone;
// total size: 0x18
struct _TBCollisionAATorus {
    // Members
    TBVector centre; // offset 0x0, size 0x10
    float radius1; // offset 0x10, size 0x4
    float radius2; // offset 0x14, size 0x4
};
typedef struct _TBCollisionAATorus TBCollisionAATorus;
// total size: 0x28
struct _TBCollisionTorus {
    // Members
    TBVector centre; // offset 0x0, size 0x10
    TBVector orientation; // offset 0x10, size 0x10
    float radius1; // offset 0x20, size 0x4
    float radius2; // offset 0x24, size 0x4
};
typedef struct _TBCollisionTorus TBCollisionTorus;
// total size: 0x14
struct _TBCollisionAADisc {
    // Members
    TBVector centre; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
};
typedef struct _TBCollisionAADisc TBCollisionAADisc;
// total size: 0x24
struct _TBCollisionDisc {
    // Members
    TBVector centre; // offset 0x0, size 0x10
    TBVector orientation; // offset 0x10, size 0x10
    float radius; // offset 0x20, size 0x4
};
typedef struct _TBCollisionDisc TBCollisionDisc;
typedef struct _TBCollMeshNodeInfo TBCollMeshNodeInfo;
// total size: 0xE4
struct _TBCollMeshQuickStartInfo {
    // Members
    TBCollMeshNodeInfo nodeInfo[4]; // offset 0x0, size 0xC0
    TBCollisionAABox limitBox; // offset 0xC0, size 0x20
    int noofNodeInfo; // offset 0xE0, size 0x4
};
typedef struct _TBCollMeshQuickStartInfo TBCollMeshQuickStartInfo;
typedef struct _TBCollisionMeshCell TBCollisionMeshCell;
typedef struct _TBCollisionMeshNode TBCollisionMeshNode;
typedef struct _TBCollisionMeshTri TBCollisionMeshTri;
typedef struct _TBCollisionMeshVertex TBCollisionMeshVertex;
typedef struct _TBCollisionMeshNormal TBCollisionMeshNormal;
typedef struct _TBCollisionMeshInstance TBCollisionMeshInstance;
// total size: 0x44
struct _TBCollisionParameters {
    // Members
    float * motion; // offset 0x0, size 0x4
    float * invMotion; // offset 0x4, size 0x4
    float * rotation; // offset 0x8, size 0x4
    float * centreOfRotation; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
    TBCollision * collisionInfo; // offset 0x14, size 0x4
    int maxCollisions; // offset 0x18, size 0x4
    const void * primitive; // offset 0x1C, size 0x4
    int collisions; // offset 0x20, size 0x4
    TBCollisionAABox objectBounds; // offset 0x24, size 0x20
};
typedef struct _TBCollisionParameters TBCollisionParameters;
// total size: 0x60
struct _TBCollRay {
    // Members
    TBVector start; // offset 0x0, size 0x10
    TBVector unitDir; // offset 0x10, size 0x10
    TBVector invDir; // offset 0x20, size 0x10
    int collisionGroups; // offset 0x30, size 0x4
    int excludeGroups; // offset 0x34, size 0x4
    float shortenFactor; // offset 0x38, size 0x4
    int pad; // offset 0x3C, size 0x4
    TBCollisionAABox aabox; // offset 0x40, size 0x20
};
typedef struct _TBCollRay TBCollRay;
// total size: 0x10
struct _TBCollSweptVolume {
    // Inner declarations
    union {
        void * geometry; // offset 0x0, size 0x4
        TBCollisionLine * line; // offset 0x0, size 0x4
        TBCollisionTriangle * triangle; // offset 0x0, size 0x4
        TBCollisionSphere * sphere; // offset 0x0, size 0x4
        TBCollisionAABox * aabox; // offset 0x0, size 0x4
        TBCollisionBox * box; // offset 0x0, size 0x4
        TBCollisionAACylinder * aacylinder; // offset 0x0, size 0x4
        TBCollisionCylinder * cylinder; // offset 0x0, size 0x4
        TBCollisionAACone * aacone; // offset 0x0, size 0x4
        TBCollisionCone * cone; // offset 0x0, size 0x4
        TBCollisionAACapsule * aacapsule; // offset 0x0, size 0x4
        TBCollisionCapsule * capsule; // offset 0x0, size 0x4
    };

    // Members
    enum EBBodyType type; // offset 0x0, size 0x4
    union {
        void * geometry; // offset 0x0, size 0x4
        TBCollisionLine * line; // offset 0x0, size 0x4
        TBCollisionTriangle * triangle; // offset 0x0, size 0x4
        TBCollisionSphere * sphere; // offset 0x0, size 0x4
        TBCollisionAABox * aabox; // offset 0x0, size 0x4
        TBCollisionBox * box; // offset 0x0, size 0x4
        TBCollisionAACylinder * aacylinder; // offset 0x0, size 0x4
        TBCollisionCylinder * cylinder; // offset 0x0, size 0x4
        TBCollisionAACone * aacone; // offset 0x0, size 0x4
        TBCollisionCone * cone; // offset 0x0, size 0x4
        TBCollisionAACapsule * aacapsule; // offset 0x0, size 0x4
        TBCollisionCapsule * capsule; // offset 0x0, size 0x4
    } data; // offset 0x4, size 0x4
    float * motion; // offset 0x8, size 0x4
    float shortenFactor; // offset 0xC, size 0x4
};
typedef struct _TBCollSweptVolume TBCollSweptVolume;
// total size: 0x60
struct _TBCollisionSpuData {
    // Members
    int flags; // offset 0x0, size 0x4
    int maxCollisions; // offset 0x4, size 0x4
    int resultFlags; // offset 0x8, size 0x4
    int pad; // offset 0xC, size 0x4
    void * mesh; // offset 0x10, size 0x4
    struct _TBSimulationContact * contact; // offset 0x14, size 0x4
    void * store; // offset 0x18, size 0x4
    void * countAddr; // offset 0x1C, size 0x4
    struct _TBBody * body1; // offset 0x20, size 0x4
    struct _TBBody * body2; // offset 0x24, size 0x4
    void * pad2[2]; // offset 0x28, size 0x8
    unsigned char data[48]; // offset 0x30, size 0x30
};
// total size: 0x100
struct _TBSimulationContact {
    // Members
    TBCollision collision; // offset 0x0, size 0x70
    struct _TBBody * body1; // offset 0x70, size 0x4
    struct _TBBody * body2; // offset 0x74, size 0x4
    struct _TBSimulationContact * constraintGroupNext; // offset 0x78, size 0x4
    struct _TBSimulationContact * constraintGroupPrev; // offset 0x7C, size 0x4
    int flags; // offset 0x80, size 0x4
    int noofSimultaneousContacts; // offset 0x84, size 0x4
    struct _TBSimulationContact * prev; // offset 0x88, size 0x4
    struct _TBSimulationContact * next; // offset 0x8C, size 0x4
    TBVector relativeVelocity; // offset 0x90, size 0x10
    TBVector tangent; // offset 0xA0, size 0x10
    TBVector originalNormal; // offset 0xB0, size 0x10
    float lastConstraintForce; // offset 0xC0, size 0x4
    float lastConstraintFrictionForce; // offset 0xC4, size 0x4
    float lastConstraintImpulse; // offset 0xC8, size 0x4
    float lastConstraintFrictionImpulse; // offset 0xCC, size 0x4
    float offsets[4][2]; // offset 0xD0, size 0x20
    int ID; // offset 0xF0, size 0x4
    int duration; // offset 0xF4, size 0x4
    struct _TBSpring * stickySpring; // offset 0xF8, size 0x4
    int pad; // offset 0xFC, size 0x4
};
// total size: 0x50
struct _TBSpring {
    // Members
    struct _TBBody * body1; // offset 0x0, size 0x4
    struct _TBBody * body2; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    int type; // offset 0xC, size 0x4
    float bodyP[4][2]; // offset 0x10, size 0x20
    float springForce; // offset 0x30, size 0x4
    float springDamping; // offset 0x34, size 0x4
    float restLength; // offset 0x38, size 0x4
    float maxSquaredForce; // offset 0x3C, size 0x4
    struct _TBSpring * prev; // offset 0x40, size 0x4
    struct _TBSpring * next; // offset 0x44, size 0x4
    UBContext32 context; // offset 0x48, size 0x4
    int pad; // offset 0x4C, size 0x4
};
typedef struct _TBCollisionSpuData TBCollisionSpuData;
typedef int (* TBTraverseCollisionAABBMeshBoundsCallback)(const float *, const float *, int, void *);
typedef int (* TBTraverseCollisionAABBMeshTriCallback)(const TBCollisionTriangle *, void *, const TBCollisionMesh *, int);
typedef int (* TBTraverseCollisionHMeshTriCallback)(TBVector *, TBCollisionMesh *, struct _TBActorNodeInstance *, void *);
typedef int (* TBTraverseMeshTriCallback)(const TBCollisionTriangle *, void *, const TBCollisionMesh *, int);
typedef int (* TBCollideCellBasedMeshBoundsCallback)(const float *, const float *, TBCollisionParameters *);
typedef int (* TBCollideAABBMeshBoundsCallback)(const TBCollisionAABox *, TBCollisionParameters *);
typedef int (* TBCollidePrimTriangle)(const void *, const TBCollisionTriangle *, const float *, const float *, const float *, int, TBCollision *, int);
typedef int (* TBCollideTrianglePrim)(const TBCollisionTriangle *, const void *, const float *, const float *, const float *, int, TBCollision *, int);
typedef int (* TBCollidePrimSphere)(const void *, const TBCollisionSphere *, const float *, const float *, const float *, int, TBCollision *, int);
typedef int (* TBCollideSpherePrim)(const TBCollisionSphere *, const void *, const float *, const float *, const float *, int, TBCollision *, int);
typedef int (* TBCollisionAABoxPlaneCallback)(const void *, const TBCollisionPlane *, const float *, const float *, const float *, int, TBCollision *, int);
typedef int (* TBCollisionAABoxLineCallback)(const void *, const TBCollisionLine *, const float *, const float *, const float *, int, TBCollision *, int);
TBCollision bLastCollision[2]; // size: 0xE0
typedef struct _TBCollisionPoint2D TBCollisionPoint2D;
typedef struct _TBCollisionLine2D TBCollisionLine2D;
typedef struct _TBCollisionPolyLine2D TBCollisionPolyLine2D;
typedef struct _TBCollisionCircle2D TBCollisionCircle2D;
typedef struct _TBCollisionPolygon2D TBCollisionPolygon2D;
typedef int (* TBCollidePrimBounds)(const void *, TBCollisionAABox *, const float *, const float *, const float *);
typedef int (* TBCollidePrimStaticBounds)(const void *, TBCollisionAABox *);
enum EBCollisionType bUniqueCollisionTypes[30]; // size: 0x78
int bColSizeList[21]; // size: 0x54
// total size: 0x18
struct _TBMaterialPair {
    // Members
    float coefficientOfRestitution; // offset 0x0, size 0x4
    float coefficientOfFriction; // offset 0x4, size 0x4
    float coefficientOfRollingFriction; // offset 0x8, size 0x4
    float coefficientOfDrag; // offset 0xC, size 0x4
    float coefficientOfAngularDrag; // offset 0x10, size 0x4
    float coefficientOfStickiness; // offset 0x14, size 0x4
};
typedef struct _TBMaterialPair TBMaterialPair;
// total size: 0x4
struct _TBSimulationMaterial {
    // Members
    float density; // offset 0x0, size 0x4
};
typedef struct _TBSimulationMaterial TBSimulationMaterial;
typedef union _UBGeometry2DType UBGeometry2DType;
typedef struct _TBCollisionGeometry2D TBCollisionGeometry2D;
typedef struct _TBRenderGeometry2D TBRenderGeometry2D;
// total size: 0x370
struct _TBSimulation2D {
    // Members
    TBMaterialPair * materialTable; // offset 0x0, size 0x4
    int noofMaterials; // offset 0x4, size 0x4
    struct _TBBody2D * bodyList; // offset 0x8, size 0x4
    int noofBodies; // offset 0xC, size 0x4
    TBVector2D gravity; // offset 0x10, size 0x8
    int flags; // offset 0x18, size 0x4
    int methodFlags; // offset 0x1C, size 0x4
    int createFlags; // offset 0x20, size 0x4
    int constraintFlags; // offset 0x24, size 0x4
    int maxCollisions; // offset 0x28, size 0x4
    int collisions; // offset 0x2C, size 0x4
    struct _TBSimulationCollision2D * collision; // offset 0x30, size 0x4
    int contacts; // offset 0x34, size 0x4
    struct _TBSimulationContact2D * contact; // offset 0x38, size 0x4
    int maxContactIndex; // offset 0x3C, size 0x4
    int joints; // offset 0x40, size 0x4
    int maxJoints; // offset 0x44, size 0x4
    struct _TBJoint2D * jointList; // offset 0x48, size 0x4
    float softContactSpring; // offset 0x4C, size 0x4
    float softContactDamping; // offset 0x50, size 0x4
    float softContactFriction; // offset 0x54, size 0x4
    float softJointSpring; // offset 0x58, size 0x4
    float softJointDamping; // offset 0x5C, size 0x4
    float subStep; // offset 0x60, size 0x4
    float subStepDesired; // offset 0x64, size 0x4
    float subStepChange; // offset 0x68, size 0x4
    int subStepMaxCollisions; // offset 0x6C, size 0x4
    float timeStepAt; // offset 0x70, size 0x4
    float timeStepMin; // offset 0x74, size 0x4
    float timeStepMax; // offset 0x78, size 0x4
    float timeStepRemainder; // offset 0x7C, size 0x4
    float timeStepLast; // offset 0x80, size 0x4
    float subStepLast; // offset 0x84, size 0x4
    TBCollision * newCollisions; // offset 0x88, size 0x4
    int integrator; // offset 0x8C, size 0x4
    float * A; // offset 0x90, size 0x4
    float * R; // offset 0x94, size 0x4
    float * A11; // offset 0x98, size 0x4
    float * v1; // offset 0x9C, size 0x4
    float * X1; // offset 0xA0, size 0x4
    float * a; // offset 0xA4, size 0x4
    float * f; // offset 0xA8, size 0x4
    float * fChange; // offset 0xAC, size 0x4
    float * aChange; // offset 0xB0, size 0x4
    float * friction; // offset 0xB4, size 0x4
    int * clamped; // offset 0xB8, size 0x4
    int * ignore; // offset 0xBC, size 0x4
    int * solverFlags; // offset 0xC0, size 0x4
    float * inverse; // offset 0xC4, size 0x4
    float * inverse2; // offset 0xC8, size 0x4
    int matrixSize; // offset 0xCC, size 0x4
    int maxPointsPerContact; // offset 0xD0, size 0x4
    struct _TBCollisionSpace2D * space; // offset 0xD4, size 0x4
    float globalFluidViscosity; // offset 0xD8, size 0x4
    void (* calculateForces)(struct _TBSimulation2D *, struct _TBBody2D *, float); // offset 0xDC, size 0x4
    void (* integrate)(struct _TBSimulation2D *, struct _TBBody2D *, float); // offset 0xE0, size 0x4
    int (* userCollisionCheck)(struct _TBBody2D *, struct _TBBody2D *); // offset 0xE4, size 0x4
    int (* subStepCallback)(struct _TBSimulation2D *); // offset 0xE8, size 0x4
    UBContext32 context; // offset 0xEC, size 0x4
    TBStopwatch stopwatch[20]; // offset 0xF0, size 0x280
};
// total size: 0x88
struct _TBSimulationCollision2D {
    // Members
    TBCollision collision; // offset 0x0, size 0x70
    struct _TBBody2D * body1; // offset 0x70, size 0x4
    struct _TBBody2D * body2; // offset 0x74, size 0x4
    int flags; // offset 0x78, size 0x4
    int pad; // offset 0x7C, size 0x4
    TBVector2D relativeVelocity; // offset 0x80, size 0x8
};
// total size: 0xB0
struct _TBSimulationContact2D {
    // Members
    TBCollision collision; // offset 0x0, size 0x70
    struct _TBBody2D * body1; // offset 0x70, size 0x4
    struct _TBBody2D * body2; // offset 0x74, size 0x4
    int flags; // offset 0x78, size 0x4
    int noofSimultaneousContacts; // offset 0x7C, size 0x4
    TBVector2D relativeVelocity; // offset 0x80, size 0x8
    TBVector2D tangent; // offset 0x88, size 0x8
    struct _TBSimulationContact2D * prev; // offset 0x90, size 0x4
    struct _TBSimulationContact2D * next; // offset 0x94, size 0x4
    int pad[2]; // offset 0x98, size 0x8
    float lastConstraintForce; // offset 0xA0, size 0x4
    float lastConstraintFrictionForce; // offset 0xA4, size 0x4
    float lastConstraintImpulse; // offset 0xA8, size 0x4
    float lastConstraintFrictionImpulse; // offset 0xAC, size 0x4
};
// total size: 0x64
struct _TBJoint2D {
    // Members
    struct _TBBody2D * body1; // offset 0x0, size 0x4
    struct _TBBody2D * body2; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    enum EBJointType type; // offset 0xC, size 0x4
    float bodyP[2][2]; // offset 0x10, size 0x10
    float worldP[2][2]; // offset 0x20, size 0x10
    TBVector2D normal; // offset 0x30, size 0x8
    UBContext32 context; // offset 0x38, size 0x4
    void * params; // offset 0x3C, size 0x4
    TBVector2D lastConstraintImpulse; // offset 0x40, size 0x8
    TBVector2D lastConstraintForce; // offset 0x48, size 0x8
    float maxForce; // offset 0x50, size 0x4
    int breakFlags; // offset 0x54, size 0x4
    float minForce; // offset 0x58, size 0x4
    struct _TBJoint2D * prev; // offset 0x5C, size 0x4
    struct _TBJoint2D * next; // offset 0x60, size 0x4
};
// total size: 0x10
struct _TBCollisionSpace2D {
    // Members
    enum EBCollisionSpaceType type; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    struct _TBCollisionNode2D * head; // offset 0x8, size 0x4
    struct _TBCollisionNode2D * staticParent; // offset 0xC, size 0x4
};
typedef void (* TBSimulationBody2DCollisionCallback)(struct _TBSimulation2D *, struct _TBBody2D *, struct _TBBody2D *, struct _TBSimulationCollision2D *, int);
typedef void (* TBSimulationBody2DContactCallback)(struct _TBSimulation2D *, struct _TBBody2D *, struct _TBBody2D *, struct _TBSimulationContact2D *, int);
typedef void (* TBSimulationBody2DDragCoefficientCallback)(struct _TBSimulation2D *, struct _TBBody2D *, float *, float, float *, float *);
// total size: 0x20
struct _TBCollisionNode2D {
    // Members
    struct _TBCollisionNode2D * spaceNext; // offset 0x0, size 0x4
    struct _TBCollisionNode2D * spacePrev; // offset 0x4, size 0x4
    struct _TBCollisionNode2D * spaceChild; // offset 0x8, size 0x4
    struct _TBCollisionNode2D * spaceParent; // offset 0xC, size 0x4
    struct _TBCollisionSpace2D * space; // offset 0x10, size 0x4
    void * body; // offset 0x14, size 0x4
    int flags; // offset 0x18, size 0x4
    int pad; // offset 0x1C, size 0x4
};
typedef struct _TBBody2D TBBody2D;
typedef struct _TBCollisionNode2D TBCollisionNode2D;
typedef struct _TBCollisionSpace2D TBCollisionSpace2D;
typedef int (* TBCollisionSpace2DCallback)(TBCollisionSpace2D *, TBCollisionNode2D *, TBCollisionNode2D *, void *);
// total size: 0x18
struct _TBJoint2DParamLimitedHinge {
    // Members
    float bodyPoints[2][2]; // offset 0x0, size 0x10
    float dist; // offset 0x10, size 0x4
    float angle; // offset 0x14, size 0x4
};
typedef struct _TBJoint2DParamLimitedHinge TBJoint2DParamLimitedHinge;
typedef struct _TBJoint2D TBJoint2D;
enum EBSimulationMethodType {
    BSIMMETHOD_PENALTYMETHODS = 0,
    BSIMMETHOD_PENALTYWITHRIGIDJOINTS = 1,
    BSIMMETHOD_IMPULSEBASED = 2,
    BSIMMETHOD_CONSTRAINTSOLVER = 3,
    BSIMMETHOD_NOPHYSICS = 4,
    BSIMMETHOD_IMPULSENOPENETRATION = 5,
};
enum EBIntegratorType {
    EBSIMINTTYPE_EULER = 0,
    EBSIMINTTYPE_QUASISTATIC = 1,
    EBSIMINTTYPE_SMOOTHEDEULER = 2,
    EBSIMINTTYPE_IMPROVEDEULER = 3,
    EBSIMINTTYPE_RUNGEKUTTA = 4,
    EBSIMINTTYPE_VERLET = 5,
};
enum EBSimStopwatchIndex {
    EBSIMSTOPWATCH_TOTAL = 0,
    EBSIMSTOPWATCH_CONSTRAINT = 1,
    EBSIMSTOPWATCH_CONSTRAINT2 = 2,
    EBSIMSTOPWATCH_CONSTRAINT3 = 3,
    EBSIMSTOPWATCH_COLLISION = 4,
    EBSIMSTOPWATCH_COLLISIONSPACE = 5,
    EBSIMSTOPWATCH_CHECKFORCONTACT = 6,
    EBSIMSTOPWATCH_AUTOUPDATENODES = 7,
    EBSIMSTOPWATCH_PRECOLLUPDATE = 8,
    EBSIMSTOPWATCH_COLLPRIMTESTS = 9,
    EBSIMSTOPWATCH_RESOLVE = 10,
    EBSIMSTOPWATCH_UPDATECONTACTS = 11,
    EBSIMSTOPWATCH_ACTOR = 12,
    EBSIMSTOPWATCH_UPDATEJOINTS = 13,
    EBSIMSTOPWATCH_JOINTFORCES = 14,
    EBSIMSTOPWATCH_INTEGRATE = 15,
    EBSIMSTOPWATCH_DISABLING = 16,
    EBSIMSTOPWATCH_FORCES = 17,
    EBSIMSTOPWATCH_SYSTEMS = 18,
    EBSIMSTOPWATCH_MISC = 19,
    EBSIMSTOPWATCHES = 20,
};
typedef struct _TBSimulationCollision2D TBSimulationCollision2D;
typedef struct _TBSimulationContact2D TBSimulationContact2D;
typedef int (* TBSimulation2DCollisionCheckCallback)(TBBody2D *, TBBody2D *);
typedef void (* TBSimulation2DCalcForcesCallback)(struct _TBSimulation2D *, TBBody2D *, float);
typedef void (* TBSimulation2DIntegrateCallback)(struct _TBSimulation2D *, TBBody2D *, float);
typedef int (* TBSimulation2DSubStepCallback)(struct _TBSimulation2D *);
typedef struct _TBSimulation2D TBSimulation2D;
// total size: 0x34
struct _TBGuiElement {
    // Inner declarations
    union {
        struct _TBGuiMenuInfo menu; // offset 0x0, size 0x1C
    };

    // Members
    enum EBGuiElement type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    int id; // offset 0x8, size 0x4
    union {
        struct _TBGuiMenuInfo menu; // offset 0x0, size 0x1C
    }; // offset 0xC, size 0x1C
    struct _TBGuiElement * next; // offset 0x28, size 0x4
    struct _TBGuiElement * prev; // offset 0x2C, size 0x4
    struct _TBGuiElement * parent; // offset 0x30, size 0x4
};
enum EBGuiElement {
    BGUIELEMENT_MENU = 0,
    BGUIELEMENT_SLIDER = 1,
};
// total size: 0x1C
struct _TBGuiMenuInfo {
    // Members
    int noofItems; // offset 0x0, size 0x4
    int noofItemsAllocated; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    struct _TBGuiMenuItem * items; // offset 0xC, size 0x4
    int focusItem; // offset 0x10, size 0x4
    int scrollStart; // offset 0x14, size 0x4
    int scrollEnd; // offset 0x18, size 0x4
};
// total size: 0x4C
struct _TBGuiMenuItem {
    // Members
    char text[60]; // offset 0x0, size 0x3C
    struct _TBGuiElement * subMenu; // offset 0x3C, size 0x4
    unsigned int id; // offset 0x40, size 0x4
    unsigned short xPos; // offset 0x44, size 0x2
    unsigned short yPos; // offset 0x46, size 0x2
    unsigned short flags; // offset 0x48, size 0x2
    unsigned short width; // offset 0x4A, size 0x2
};
// total size: 0xC
struct _TBGuiEventInfo {
    // Members
    int reason; // offset 0x0, size 0x4
    unsigned int resourceID; // offset 0x4, size 0x4
    struct _TBGuiMenuItem * itemPtr; // offset 0x8, size 0x4
};
enum EBSimObjectType {
    EBSIMOBJECT_BODY = 0,
    EBSIMOBJECT_SYSTEM = 1,
    EBSIMOBJECT_NOOF = 2,
};
typedef int (* TBCollisionUserMOI)(void *, float, TBVector *);
typedef int (* TBCollisionUserCentreOfMass)(void *, float *, float *, float *);
typedef int (* TBCollisionUserCollide)(struct _TBBody *, struct _TBBody *, const float *, const float *, const float *, int, TBCollision *, int);
typedef int (* TBCollisionUserStaticBounds)(struct _TBBody *, TBCollisionAABox *);
typedef int (* TBCollisionUserDraw)(const struct _TBCollisionGeometry *, const float *, const float *, int, int, int, int, int);
typedef struct _TBCollisionUser TBCollisionUser;
typedef struct _TBAttachedGeometry TBAttachedGeometry;
typedef union _UBGeometryType UBGeometryType;
typedef struct _TBCollisionGeometry TBCollisionGeometry;
// total size: 0x20
struct _TBCollisionGeometryStatic {
    // Inner declarations
    union {
        TBCollisionGeometry * next; // offset 0x0, size 0x4
        TBCollisionGeometry * head; // offset 0x0, size 0x4
    };

    // Members
    enum EBBodyType type; // offset 0x0, size 0x4
    UBGeometryType data; // offset 0x4, size 0x4
    UBContext32 context; // offset 0x8, size 0x4
    float boundingRadius; // offset 0xC, size 0x4
    TBCollisionGeometry * prev; // offset 0x10, size 0x4
    union {
        TBCollisionGeometry * next; // offset 0x0, size 0x4
        TBCollisionGeometry * head; // offset 0x0, size 0x4
    }; // offset 0x14, size 0x4
    int flags; // offset 0x18, size 0x4
    int refCount; // offset 0x1C, size 0x4
};
typedef struct _TBCollisionGeometryStatic TBCollisionGeometryStatic;
// total size: 0x30
struct _TBRenderGeometryCreateSphere {
    // Members
    int colour[4]; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
    int segments; // offset 0x14, size 0x4
    int flags; // offset 0x18, size 0x4
    int pad; // offset 0x1C, size 0x4
    int colour2[4]; // offset 0x20, size 0x10
};
typedef struct _TBRenderGeometryCreateSphere TBRenderGeometryCreateSphere;
// total size: 0x30
struct _TBRenderGeometryCreateAACapsule {
    // Members
    int colour[4]; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
    float height; // offset 0x14, size 0x4
    int segments; // offset 0x18, size 0x4
    int flags; // offset 0x1C, size 0x4
    int colour2[4]; // offset 0x20, size 0x10
};
typedef struct _TBRenderGeometryCreateAACapsule TBRenderGeometryCreateAACapsule;
// total size: 0x70
struct _TBRenderGeometryCreateCapsule {
    // Members
    int colour[4]; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
    float height; // offset 0x14, size 0x4
    int segments; // offset 0x18, size 0x4
    int flags; // offset 0x1C, size 0x4
    int colour2[4]; // offset 0x20, size 0x10
    Mtx44 orientation; // offset 0x30, size 0x40
};
typedef struct _TBRenderGeometryCreateCapsule TBRenderGeometryCreateCapsule;
typedef int (* TBRenderGeometryDrawFunc)(void *, const struct _TBRenderGeometry *, const float *, const float *);
typedef struct _TBRenderGeometryUserType TBRenderGeometryUserType;
struct _TBDrawPrimitive {};
typedef union _UBRenderGeometryType UBRenderGeometryType;
typedef struct _TBRenderGeometry TBRenderGeometry;
// total size: 0x428
struct _TBSimulation {
    // Members
    TBMaterialPair * materialTable; // offset 0x0, size 0x4
    TBSimulationMaterial * materialList; // offset 0x4, size 0x4
    int noofMaterials; // offset 0x8, size 0x4
    struct _TBBody * bodyList; // offset 0xC, size 0x4
    TBVector gravity; // offset 0x10, size 0x10
    int flags; // offset 0x20, size 0x4
    int methodFlags; // offset 0x24, size 0x4
    int createFlags; // offset 0x28, size 0x4
    int constraintFlags; // offset 0x2C, size 0x4
    int noofBodies; // offset 0x30, size 0x4
    int maxCollisions; // offset 0x34, size 0x4
    int collisions; // offset 0x38, size 0x4
    struct _TBSimulationCollision * collision; // offset 0x3C, size 0x4
    int contacts; // offset 0x40, size 0x4
    struct _TBSimulationContact * contact; // offset 0x44, size 0x4
    int maxContactIndex; // offset 0x48, size 0x4
    int joints; // offset 0x4C, size 0x4
    int maxJoints; // offset 0x50, size 0x4
    struct _TBJoint * jointList; // offset 0x54, size 0x4
    int springs; // offset 0x58, size 0x4
    int maxSprings; // offset 0x5C, size 0x4
    struct _TBSpring * springList; // offset 0x60, size 0x4
    float softContactSpring; // offset 0x64, size 0x4
    float softContactDamping; // offset 0x68, size 0x4
    float softContactFriction; // offset 0x6C, size 0x4
    float softJointSpring; // offset 0x70, size 0x4
    float softJointDamping; // offset 0x74, size 0x4
    float subStep; // offset 0x78, size 0x4
    float subStepDesired; // offset 0x7C, size 0x4
    float subStepChange; // offset 0x80, size 0x4
    int subStepMaxCollisions; // offset 0x84, size 0x4
    float timeStepRemainder; // offset 0x88, size 0x4
    float timeStepAt; // offset 0x8C, size 0x4
    float timeStepMin; // offset 0x90, size 0x4
    float timeStepMax; // offset 0x94, size 0x4
    float timeStepLast; // offset 0x98, size 0x4
    int maxPointsPerContact; // offset 0x9C, size 0x4
    TBCollision * newCollisions; // offset 0xA0, size 0x4
    int integrator; // offset 0xA4, size 0x4
    float * A; // offset 0xA8, size 0x4
    float * R; // offset 0xAC, size 0x4
    float * A11; // offset 0xB0, size 0x4
    float * v1; // offset 0xB4, size 0x4
    float * X1; // offset 0xB8, size 0x4
    float * a; // offset 0xBC, size 0x4
    float * f; // offset 0xC0, size 0x4
    float * fChange; // offset 0xC4, size 0x4
    float * aChange; // offset 0xC8, size 0x4
    int * clamped; // offset 0xCC, size 0x4
    int * solverFlags; // offset 0xD0, size 0x4
    int * ignore; // offset 0xD4, size 0x4
    float * friction; // offset 0xD8, size 0x4
    float * inverse; // offset 0xDC, size 0x4
    float * inverse2; // offset 0xE0, size 0x4
    TBVector * normal; // offset 0xE4, size 0x4
    TBVector * worldOffset1; // offset 0xE8, size 0x4
    TBVector * worldOffset2; // offset 0xEC, size 0x4
    int matrixSize; // offset 0xF0, size 0x4
    float subStepLast; // offset 0xF4, size 0x4
    float minSpeed; // offset 0xF8, size 0x4
    float maxSpeed; // offset 0xFC, size 0x4
    float maxAngVel; // offset 0x100, size 0x4
    void (* calculateForces)(struct _TBSimulation *, struct _TBBody *, float); // offset 0x104, size 0x4
    void (* integrate)(struct _TBSimulation *, struct _TBBody *, float, int); // offset 0x108, size 0x4
    int (* userCollisionCheck)(struct _TBBody *, struct _TBBody *); // offset 0x10C, size 0x4
    void (* penetrationResponse)(struct _TBSimulation *, struct _TBSimulationContact *, float); // offset 0x110, size 0x4
    void (* collisionResponse)(struct _TBSimulation *, struct _TBSimulationCollision *, float); // offset 0x114, size 0x4
    void (* contactResponse)(struct _TBSimulation *, struct _TBSimulationContact *, float); // offset 0x118, size 0x4
    int (* subStepCallback)(struct _TBSimulation *); // offset 0x11C, size 0x4
    UBContext32 context; // offset 0x120, size 0x4
    float disablingVelSqrd; // offset 0x124, size 0x4
    float disablingAngVelSqrd; // offset 0x128, size 0x4
    float disablingAccSqrd; // offset 0x12C, size 0x4
    float disablingAngAccSqrd; // offset 0x130, size 0x4
    struct _TBCollisionSpace * space; // offset 0x134, size 0x4
    int jointGroups; // offset 0x138, size 0x4
    float unitDistanceInWorldScale; // offset 0x13C, size 0x4
    float unitMassInWorldScale; // offset 0x140, size 0x4
    float globalFluidViscosity; // offset 0x144, size 0x4
    float accelerationConstraintEpsilon; // offset 0x148, size 0x4
    float velocityConstraintEpsilon; // offset 0x14C, size 0x4
    float displacementConstraintEpsilon; // offset 0x150, size 0x4
    struct _TBSimulationSystem * systemList; // offset 0x154, size 0x4
    struct _TBStickyParams * stickyParams; // offset 0x158, size 0x4
    float stickyForce; // offset 0x15C, size 0x4
    float stickyDamping; // offset 0x160, size 0x4
    struct _TBBody * * contactBodyList; // offset 0x164, size 0x4
    void * feSimulationNode; // offset 0x168, size 0x4
    struct _TBBodyCache * bodyCacheList; // offset 0x16C, size 0x4
    int maxBodies; // offset 0x170, size 0x4
    float stableVelocityDisableTime; // offset 0x174, size 0x4
    float stableVelocityMaxDistanceSqrd; // offset 0x178, size 0x4
    float stepSize; // offset 0x17C, size 0x4
    float stableVelocityMaxRotation; // offset 0x180, size 0x4
    int noofSystems; // offset 0x184, size 0x4
    struct _TBBody * enabledBodyList; // offset 0x188, size 0x4
    int drawFlags; // offset 0x18C, size 0x4
    TBStopwatch stopwatch[20]; // offset 0x190, size 0x280
    struct _TBBodyRemovalCallbackInfo bodyRemoveCallbackList; // offset 0x410, size 0x10
    struct _TBDeferredSimulation * deferred; // offset 0x420, size 0x4
    int pad; // offset 0x424, size 0x4
};
// total size: 0x90
struct _TBSimulationCollision {
    // Members
    TBCollision collision; // offset 0x0, size 0x70
    TBVector relativeVelocity; // offset 0x70, size 0x10
    int flags; // offset 0x80, size 0x4
    struct _TBBody * body1; // offset 0x84, size 0x4
    struct _TBBody * body2; // offset 0x88, size 0x4
    struct _TBSimulationContact * contact; // offset 0x8C, size 0x4
};
// total size: 0xC
struct _TBStickyParams {
    // Members
    int maxSprings; // offset 0x0, size 0x4
    int maxContacts; // offset 0x4, size 0x4
    struct _TBSpring * spring; // offset 0x8, size 0x4
};
// total size: 0x10
struct _TBBodyRemovalCallbackInfo {
    // Members
    struct _TBBodyRemovalCallbackInfo * next; // offset 0x0, size 0x4
    struct _TBBodyRemovalCallbackInfo * prev; // offset 0x4, size 0x4
    void (* callback)(struct _TBSimulation *, struct _TBBody *, struct _TBBodyRemovalCallbackInfo *); // offset 0x8, size 0x4
    void * context; // offset 0xC, size 0x4
};
// total size: 0x350
struct _TBDeferredSimulation {
    // Members
    float timestep; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    int constraintFlags; // offset 0x8, size 0x4
    int integrator; // offset 0xC, size 0x4
    OSThread thread; // offset 0x10, size 0x318
    OSSemaphore semaphore; // offset 0x328, size 0xC
    int threadCreated; // offset 0x334, size 0x4
    int semaphoreCreated; // offset 0x338, size 0x4
    void * stack; // offset 0x33C, size 0x4
    int running; // offset 0x340, size 0x4
    int terminate; // offset 0x344, size 0x4
    int stepping; // offset 0x348, size 0x4
};
typedef int (* TBSimulationBodyCollisionCallback)(struct _TBSimulation *, struct _TBBody *, struct _TBBody *, struct _TBSimulationCollision *, int);
typedef int (* TBSimulationBodyContactCallback)(struct _TBSimulation *, struct _TBBody *, struct _TBBody *, struct _TBSimulationContact *, int);
typedef void (* TBSimulationBodyDragCoefficientCallback)(struct _TBSimulation *, struct _TBBody *, float *, float *, float *, float *);
typedef void (* TBSimulationBodyDisableCallback)(struct _TBSimulation *, struct _TBBody *);
typedef void (* TBSimulationBodyDeleteCallback)(struct _TBSimulation *, struct _TBBody *);
typedef void (* TBSimulationBodyCalcForcesCallback)(struct _TBSimulation *, struct _TBBody *, float);
typedef struct _TBBodyActorData TBBodyActorData;
typedef struct _TBBodyContactInfo TBBodyContactInfo;
struct CFWorldNode {};
typedef struct _TBSimulationObject TBSimulationObject;
// total size: 0x40
struct _TBDeferredBody {
    // Members
    TBVector currentPosition; // offset 0x0, size 0x10
    TBVector deferredVelocity; // offset 0x10, size 0x10
    TBVector deferredPosition; // offset 0x20, size 0x10
    int deferredVelocityType; // offset 0x30, size 0x4
    int deferredPositionType; // offset 0x34, size 0x4
    int padX[2]; // offset 0x38, size 0x8
};
typedef struct _TBBody TBBody;
// total size: 0x118
struct _TBBodyStatic : public TBSimulationObject {
    // Members
    Mtx44 orientationMatrix; // offset 0x50, size 0x40
    Mtx44 invOrientationMatrix; // offset 0x90, size 0x40
    int flags; // offset 0xD0, size 0x4
    int methodFlags; // offset 0xD4, size 0x4
    TBCollisionGeometry * collision; // offset 0xD8, size 0x4
    UBGeometryType worldCollision; // offset 0xDC, size 0x4
    TBBody * prev; // offset 0xE0, size 0x4
    TBBody * next; // offset 0xE4, size 0x4
    UBContext32 context; // offset 0xE8, size 0x4
    int material; // offset 0xEC, size 0x4
    int state; // offset 0xF0, size 0x4
    struct _TBBodyCache * bodyCache; // offset 0xF4, size 0x4
    TBBodyContactInfo contact[4]; // offset 0xF8, size 0x20
};
typedef struct _TBBodyStatic TBBodyStatic;
typedef struct _TBBodyCache TBBodyCache;
struct CFWorldNodeCollisionNode {};
typedef struct _TBCollisionNode TBCollisionNode;
typedef struct _TBCollisionSpaceGridBucket TBCollisionSpaceGridBucket;
typedef struct _TBCollisionSpaceGridXZ TBCollisionSpaceGridXZ;
typedef struct _TBCollisionSpace TBCollisionSpace;
typedef int (* TBCollisionSpaceCallback)(TBCollisionSpace *, TBCollisionNode *, TBCollisionNode *, void *);
typedef int (* TBCollisionSpaceRayCallback)(TBCollisionSpace *, TBCollisionNode *, TBCollRay *, void *);
typedef void (* TBCollisionSpaceTraverseCallback)(TBCollisionSpace *, TBCollisionNode *, void *);
typedef void (* TBJointBreakCallback)(struct _TBJoint *, int);
// total size: 0x10
struct _TBJointParamSpring {
    // Members
    float springForce; // offset 0x0, size 0x4
    float springDamping; // offset 0x4, size 0x4
    float restLength; // offset 0x8, size 0x4
    float pad; // offset 0xC, size 0x4
};
typedef struct _TBJointParamSpring TBJointParamSpring;
// total size: 0x10
struct _TBJointParamHinge {
    // Members
    TBVector hingeAxis; // offset 0x0, size 0x10
};
typedef struct _TBJointParamHinge TBJointParamHinge;
// total size: 0x20
struct _TBJointParamLimitedHinge {
    // Members
    TBVector hingeAxis; // offset 0x0, size 0x10
    float minAngle; // offset 0x10, size 0x4
    float maxAngle; // offset 0x14, size 0x4
    TBVector2D pad; // offset 0x18, size 0x8
};
typedef struct _TBJointParamLimitedHinge TBJointParamLimitedHinge;
// total size: 0x20
struct _TBJointParamSprungHinge {
    // Members
    TBVector hingeAxis; // offset 0x0, size 0x10
    float minAngle; // offset 0x10, size 0x4
    float maxAngle; // offset 0x14, size 0x4
    float springAngle; // offset 0x18, size 0x4
    float springForce; // offset 0x1C, size 0x4
};
typedef struct _TBJointParamSprungHinge TBJointParamSprungHinge;
// total size: 0x30
struct _TBJointParamSlidingHinge {
    // Members
    TBVector hingeAxis; // offset 0x0, size 0x10
    TBVector slideDirection; // offset 0x10, size 0x10
    float minDist; // offset 0x20, size 0x4
    float maxDist; // offset 0x24, size 0x4
    float minAngle; // offset 0x28, size 0x4
    float maxAngle; // offset 0x2C, size 0x4
};
typedef struct _TBJointParamSlidingHinge TBJointParamSlidingHinge;
// total size: 0x40
struct _TBJointParamTwistingHinge {
    // Members
    TBVector hingeAxis; // offset 0x0, size 0x10
    TBVector twistAxis; // offset 0x10, size 0x10
    TBVector body2Direction; // offset 0x20, size 0x10
    float maxAngle; // offset 0x30, size 0x4
    float minTwist; // offset 0x34, size 0x4
    float maxTwist; // offset 0x38, size 0x4
    float pad; // offset 0x3C, size 0x4
};
typedef struct _TBJointParamTwistingHinge TBJointParamTwistingHinge;
// total size: 0x40
struct _TBJointParamWheel {
    // Members
    TBVector hingeAxis; // offset 0x0, size 0x10
    TBVector steerAxis; // offset 0x10, size 0x10
    float currentAngle; // offset 0x20, size 0x4
    float torque; // offset 0x24, size 0x4
    float suspensionLower; // offset 0x28, size 0x4
    float suspensionUpper; // offset 0x2C, size 0x4
    float suspensionForce; // offset 0x30, size 0x4
    float pad[3]; // offset 0x34, size 0xC
};
typedef struct _TBJointParamWheel TBJointParamWheel;
// total size: 0x20
struct _TBJointImplementationParamWheel {
    // Members
    TBVector centralOffset; // offset 0x0, size 0x10
    TBVector steerAxis; // offset 0x10, size 0x10
};
typedef struct _TBJointImplementationParamWheel TBJointImplementationParamWheel;
// total size: 0x20
struct _TBJointParamLine {
    // Members
    TBVector movementAxis; // offset 0x0, size 0x10
    float maxDist; // offset 0x10, size 0x4
    float pad[3]; // offset 0x14, size 0xC
};
typedef struct _TBJointParamLine TBJointParamLine;
// total size: 0x40
struct _TBJointParamLimitedLine {
    // Members
    TBVector movementAxis; // offset 0x0, size 0x10
    TBVector body1Direction; // offset 0x10, size 0x10
    TBVector body2Direction; // offset 0x20, size 0x10
    float maxDist; // offset 0x30, size 0x4
    float maxAngle; // offset 0x34, size 0x4
    float minTwist; // offset 0x38, size 0x4
    float maxTwist; // offset 0x3C, size 0x4
};
typedef struct _TBJointParamLimitedLine TBJointParamLimitedLine;
// total size: 0x10
struct _TBJointParamPrismatic {
    // Members
    TBVector movementAxis; // offset 0x0, size 0x10
};
typedef struct _TBJointParamPrismatic TBJointParamPrismatic;
// total size: 0x20
struct _TBJointParamLimitedPrismatic {
    // Members
    TBVector movementAxis; // offset 0x0, size 0x10
    float minDist; // offset 0x10, size 0x4
    float maxDist; // offset 0x14, size 0x4
    float minTwist; // offset 0x18, size 0x4
    float maxTwist; // offset 0x1C, size 0x4
};
typedef struct _TBJointParamLimitedPrismatic TBJointParamLimitedPrismatic;
// total size: 0x30
struct _TBJointParamSprungPrismatic {
    // Members
    TBVector movementAxis; // offset 0x0, size 0x10
    float minDist; // offset 0x10, size 0x4
    float maxDist; // offset 0x14, size 0x4
    float minTwist; // offset 0x18, size 0x4
    float maxTwist; // offset 0x1C, size 0x4
    float springDist; // offset 0x20, size 0x4
    float springForce; // offset 0x24, size 0x4
    TBVector2D pad; // offset 0x28, size 0x8
};
typedef struct _TBJointParamSprungPrismatic TBJointParamSprungPrismatic;
// total size: 0x10
struct _TBJointParamPlanar {
    // Members
    TBVector planeNormal; // offset 0x0, size 0x10
};
typedef struct _TBJointParamPlanar TBJointParamPlanar;
// total size: 0x50
struct _TBJointParamLimitedPlanar {
    // Members
    float planeAxis[4][2]; // offset 0x0, size 0x20
    TBVector body2Axis; // offset 0x20, size 0x10
    TBVector2D maxDist; // offset 0x30, size 0x8
    float maxAngle; // offset 0x38, size 0x4
    float minTwist; // offset 0x3C, size 0x4
    float maxTwist; // offset 0x40, size 0x4
    float pad[3]; // offset 0x44, size 0xC
};
typedef struct _TBJointParamLimitedPlanar TBJointParamLimitedPlanar;
// total size: 0x10
struct _TBJointParamTwistablePlanar {
    // Members
    TBVector planeNormal; // offset 0x0, size 0x10
};
typedef struct _TBJointParamTwistablePlanar TBJointParamTwistablePlanar;
// total size: 0x30
struct _TBJointParamBox {
    // Members
    float boxAxis[4][2]; // offset 0x0, size 0x20
    float maxDist[3]; // offset 0x20, size 0xC
    float pad; // offset 0x2C, size 0x4
};
typedef struct _TBJointParamBox TBJointParamBox;
// total size: 0x30
struct _TBJointParamLimitedBallAndSocket {
    // Members
    TBVector body1Direction; // offset 0x0, size 0x10
    TBVector body2Direction; // offset 0x10, size 0x10
    float maxAngle; // offset 0x20, size 0x4
    float minTwist; // offset 0x24, size 0x4
    float maxTwist; // offset 0x28, size 0x4
    float pad; // offset 0x2C, size 0x4
};
typedef struct _TBJointParamLimitedBallAndSocket TBJointParamLimitedBallAndSocket;
// total size: 0x20
struct _TBJointParamSuspension {
    // Members
    TBVector suspensionAxis; // offset 0x0, size 0x10
    float minDist; // offset 0x10, size 0x4
    float maxDist; // offset 0x14, size 0x4
    float force; // offset 0x18, size 0x4
    float pad; // offset 0x1C, size 0x4
};
typedef struct _TBJointParamSuspension TBJointParamSuspension;
union _UBJointParamType {
    TBJointParamLimitedHinge limitedHinge; // offset 0x0, size 0x20
    TBJointParamSprungHinge sprungHinge; // offset 0x0, size 0x20
    TBJointParamHinge hinge; // offset 0x0, size 0x10
    TBJointParamLimitedPrismatic limitedPrismatic; // offset 0x0, size 0x20
    TBJointParamSprungPrismatic sprungPrismatic; // offset 0x0, size 0x30
    TBJointParamPrismatic prismatic; // offset 0x0, size 0x10
    TBJointParamLimitedLine limitedLine; // offset 0x0, size 0x40
    TBJointParamLine line; // offset 0x0, size 0x20
    TBJointParamLimitedPlanar limitedPlanar; // offset 0x0, size 0x50
    TBJointParamPlanar planar; // offset 0x0, size 0x10
    TBJointParamTwistablePlanar twistablePlanar; // offset 0x0, size 0x10
    TBJointParamBox box; // offset 0x0, size 0x30
    TBJointParamSpring spring; // offset 0x0, size 0x10
    TBJointParamLimitedBallAndSocket limitedBall; // offset 0x0, size 0x30
    TBJointParamWheel wheel; // offset 0x0, size 0x40
    TBJointParamSlidingHinge slidingHinge; // offset 0x0, size 0x30
    TBJointParamTwistingHinge twistingHinge; // offset 0x0, size 0x40
    TBJointParamSuspension suspension; // offset 0x0, size 0x20
    unsigned char byte[80]; // offset 0x0, size 0x50
};
typedef union _UBJointParamType UBJointParamType;
// total size: 0x90
struct _TBJointParamRotationCone {
    // Members
    float bodyPoint[4][2]; // offset 0x0, size 0x20
    float worldPoint[4][2]; // offset 0x20, size 0x20
    TBVector seperation; // offset 0x40, size 0x10
    TBVector unitSeperation; // offset 0x50, size 0x10
    float seperationDist; // offset 0x60, size 0x4
    float squaredDistanceLimit; // offset 0x64, size 0x4
    float distanceLimit; // offset 0x68, size 0x4
    float squaredDistance; // offset 0x6C, size 0x4
    float distance; // offset 0x70, size 0x4
    bool maxDistance; // offset 0x74, size 0x1
    float lastConstraintForce; // offset 0x78, size 0x4
    float lastConstraintImpulse; // offset 0x7C, size 0x4
    float springForce; // offset 0x80, size 0x4
    float springForceFactor; // offset 0x84, size 0x4
    float springDamping; // offset 0x88, size 0x4
    float springDampingFactor; // offset 0x8C, size 0x4
};
typedef struct _TBJointParamRotationCone TBJointParamRotationCone;
// total size: 0xA0
struct _TBJointParamEllipticRotationCone {
    // Members
    TBJointParamRotationCone cone; // offset 0x0, size 0x90
    float scale; // offset 0x90, size 0x4
    float pad[3]; // offset 0x94, size 0xC
};
typedef struct _TBJointParamEllipticRotationCone TBJointParamEllipticRotationCone;
// total size: 0x110
struct _TBJointParamRotationPlanes {
    // Members
    Mtx44 body1Plane; // offset 0x0, size 0x40
    TBCollisionPlane worldPlane[4]; // offset 0x40, size 0x40
    TBVector body1Impact; // offset 0x80, size 0x10
    TBVector worldImpact; // offset 0x90, size 0x10
    TBVector bodyPoint; // offset 0xA0, size 0x10
    TBVector worldPoint; // offset 0xB0, size 0x10
    TBVector penetration; // offset 0xC0, size 0x10
    bool collision[4]; // offset 0xD0, size 0x4
    TBVector lastConstraintForce; // offset 0xE0, size 0x10
    TBVector lastConstraintImpulse; // offset 0xF0, size 0x10
    float springForce; // offset 0x100, size 0x4
    float springForceFactor; // offset 0x104, size 0x4
    float springDamping; // offset 0x108, size 0x4
    float springDampingFactor; // offset 0x10C, size 0x4
};
typedef struct _TBJointParamRotationPlanes TBJointParamRotationPlanes;
// total size: 0x90
struct _TBJointParamLimitedTwist {
    // Members
    float bodyPoint[4][2]; // offset 0x0, size 0x20
    float worldPoint[4][2]; // offset 0x20, size 0x20
    TBVector seperation; // offset 0x40, size 0x10
    TBVector unitSeperation; // offset 0x50, size 0x10
    float seperationDist; // offset 0x60, size 0x4
    float squaredDistanceLimit; // offset 0x64, size 0x4
    float distanceLimit; // offset 0x68, size 0x4
    float squaredDistance; // offset 0x6C, size 0x4
    float distance; // offset 0x70, size 0x4
    bool maxDistance; // offset 0x74, size 0x1
    float lastConstraintForce; // offset 0x78, size 0x4
    float lastConstraintImpulse; // offset 0x7C, size 0x4
    float springForce; // offset 0x80, size 0x4
    float springForceFactor; // offset 0x84, size 0x4
    float springDamping; // offset 0x88, size 0x4
    float springDampingFactor; // offset 0x8C, size 0x4
};
typedef struct _TBJointParamLimitedTwist TBJointParamLimitedTwist;
typedef struct _TBJoint TBJoint;
typedef struct _TBSpring TBSpring;
typedef struct _TBSimulationContact TBSimulationContact;
typedef struct _TBSimulationCollision TBSimulationCollision;
typedef struct _TBStickyParams TBStickyParams;
typedef int (* TBSimulationCollisionCheckCallback)(TBBody *, TBBody *);
typedef void (* TBSimulationCalcForcesCallback)(struct _TBSimulation *, TBBody *, float);
typedef void (* TBSimulationIntegrateCallback)(struct _TBSimulation *, TBBody *, float, int);
typedef void (* TBSimulationPenetrationResponseCallback)(struct _TBSimulation *, TBSimulationContact *, float);
typedef void (* TBSimulationCollisionResponseCallback)(struct _TBSimulation *, TBSimulationCollision *, float);
typedef void (* TBSimulationContactResponseCallback)(struct _TBSimulation *, TBSimulationContact *, float);
typedef int (* TBSimulationSubStepCallback)(struct _TBSimulation *);
typedef int (* TBSimulationRayCollisionCallback)(struct _TBSimulation *, TBBody *, const float *, const float *, TBCollision *, int, void *);
typedef int (* TBSimulationSweptVolumeCollisionCallback)(struct _TBSimulation *, TBBody *, enum EBBodyType, UBGeometryType, float *, TBCollision *, int, void *);
typedef int (* TBSimulationAABBCollisionCallback)(struct _TBSimulation *, TBBody *, const TBCollisionAABox *, void *);
typedef void (* TBSimulationBodyRemovalCallback)(struct _TBSimulation *, TBBody *, struct _TBBodyRemovalCallbackInfo *);
typedef struct _TBBodyRemovalCallbackInfo TBBodyRemovalCallbackInfo;
typedef struct _TBSimulation TBSimulation;
// total size: 0x1C
struct TBSimRayTestParams {
    // Members
    int flags; // offset 0x0, size 0x4
    int maxCollisionsPerBody; // offset 0x4, size 0x4
    int collisionGroups; // offset 0x8, size 0x4
    int excludeGroups; // offset 0xC, size 0x4
    TBCollision * collisionInfo; // offset 0x10, size 0x4
    TBBody * body; // offset 0x14, size 0x4
    int excludeMaterialFlags; // offset 0x18, size 0x4
};
typedef int (* TBSimulationBodyTraverseCallback)(TBSimulation *, TBBody *, void *);
typedef int (* TBSimulationJointTraverseCallback)(TBSimulation *, TBJoint *, void *);
typedef int (* TBSimulationSystemTraverseCallback)(TBSimulation *, struct _TBSimulationSystem *, void *);
typedef struct _TBDeferredSimulation TBDeferredSimulation;
typedef struct _TBDeferredBody TBDeferredBody;
typedef struct _TBControlGraphKey TBControlGraphKey;
typedef float (* TBControlGraphCallback)(float, void *);
typedef struct _TBControlGraph TBControlGraph;
// total size: 0x40
struct _TBBodyWingControlData {
    // Members
    unsigned int liftGraph; // offset 0x0, size 0x4
    unsigned int dragGraph; // offset 0x4, size 0x4
    float planformArea; // offset 0x8, size 0x4
    float airDensity; // offset 0xC, size 0x4
    TBVector upVector; // offset 0x10, size 0x10
    TBVector forwardVector; // offset 0x20, size 0x10
    float SpeedMultiplier; // offset 0x30, size 0x4
    int pad[3]; // offset 0x34, size 0xC
};
typedef struct _TBBodyWingControlData TBBodyWingControlData;
typedef struct _TBBodyWingControl TBBodyWingControl;
// total size: 0x30
struct _TBBodyMotorControlData {
    // Members
    TBVector axis; // offset 0x0, size 0x10
    float power; // offset 0x10, size 0x4
    int pad[7]; // offset 0x14, size 0x1C
};
typedef struct _TBBodyMotorControlData TBBodyMotorControlData;
typedef struct _TBBodyMotorControl TBBodyMotorControl;
// total size: 0x30
struct _TBBodyThrustControlData {
    // Members
    TBVector direction; // offset 0x0, size 0x10
    float power; // offset 0x10, size 0x4
    int pad[7]; // offset 0x14, size 0x1C
};
typedef struct _TBBodyThrustControlData TBBodyThrustControlData;
typedef struct _TBBodyThrustControl TBBodyThrustControl;
// total size: 0x38
struct _TBBodyDownForceControlData {
    // Members
    TBVector forceDirection; // offset 0x0, size 0x10
    TBVector movementDirection; // offset 0x10, size 0x10
    float minForce; // offset 0x20, size 0x4
    float maxForce; // offset 0x24, size 0x4
    float minSpeed; // offset 0x28, size 0x4
    float maxSpeed; // offset 0x2C, size 0x4
    float power; // offset 0x30, size 0x4
    int flags; // offset 0x34, size 0x4
};
typedef struct _TBBodyDownForceControlData TBBodyDownForceControlData;
typedef struct _TBBodyDownForceControl TBBodyDownForceControl;
// total size: 0xA0
struct _TBBodyGearBoxControlData {
    // Members
    Mtx44 axis; // offset 0x0, size 0x40
    float acceleratorPos; // offset 0x40, size 0x4
    int noofGears; // offset 0x44, size 0x4
    int gear; // offset 0x48, size 0x4
    int flags; // offset 0x4C, size 0x4
    float differentialRatio; // offset 0x50, size 0x4
    float maxEngineSpeed; // offset 0x54, size 0x4
    float minEngineSpeed; // offset 0x58, size 0x4
    float engineSpeed; // offset 0x5C, size 0x4
    unsigned int body[4]; // offset 0x60, size 0x10
    unsigned int torqueGraph; // offset 0x70, size 0x4
    float balanceFactor; // offset 0x74, size 0x4
    int noofBodies; // offset 0x78, size 0x4
    float maxContactSlipVel; // offset 0x7C, size 0x4
    float gearRatio[7]; // offset 0x80, size 0x1C
    int pad2; // offset 0x9C, size 0x4
};
typedef struct _TBBodyGearBoxControlData TBBodyGearBoxControlData;
typedef struct _TBBodyGearBoxControl TBBodyGearBoxControl;
typedef struct _TBBrakeImpulseParams TBBrakeImpulseParams;
typedef struct _TBBrakeTorqueParams TBBrakeTorqueParams;
// total size: 0x70
struct _TBBodyBrakeControlData {
    // Inner declarations
    union {
        TBBrakeImpulseParams impulseParams; // offset 0x0, size 0x8
        TBBrakeTorqueParams torqueParams; // offset 0x0, size 0x8
    };

    // Members
    Mtx44 axis; // offset 0x0, size 0x40
    unsigned int body[4]; // offset 0x40, size 0x10
    unsigned int referenceBody; // offset 0x50, size 0x4
    float brakePos; // offset 0x54, size 0x4
    int flags; // offset 0x58, size 0x4
    int noofBodies; // offset 0x5C, size 0x4
    int brakeModel; // offset 0x60, size 0x4
    int pad; // offset 0x64, size 0x4
    union {
        TBBrakeImpulseParams impulseParams; // offset 0x0, size 0x8
        TBBrakeTorqueParams torqueParams; // offset 0x0, size 0x8
    }; // offset 0x68, size 0x8
};
typedef struct _TBBodyBrakeControlData TBBodyBrakeControlData;
typedef struct _TBBodyBrakeControl TBBodyBrakeControl;
// total size: 0x50
struct _TBBodySteeringControlData {
    // Members
    float steeringWheelPos; // offset 0x0, size 0x4
    int noofJoints; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    float middleSteerAngle; // offset 0xC, size 0x4
    float steerAngleRange; // offset 0x10, size 0x4
    float steerAngle; // offset 0x14, size 0x4
    float targetSteerAngle; // offset 0x18, size 0x4
    float steerSpeed; // offset 0x1C, size 0x4
    unsigned int joint[4]; // offset 0x20, size 0x10
    int noofBodies; // offset 0x30, size 0x4
    float steeringLimitLowSpeed; // offset 0x34, size 0x4
    float steeringLimitHighSpeed; // offset 0x38, size 0x4
    float highSpeedAngleRange; // offset 0x3C, size 0x4
    unsigned int body[4]; // offset 0x40, size 0x10
};
typedef struct _TBBodySteeringControlData TBBodySteeringControlData;
typedef struct _TBBodySteeringControl TBBodySteeringControl;
// total size: 0x24
struct _TBBodyMovementControlData {
    // Members
    TBVector * targetPositions; // offset 0x0, size 0x4
    int noofPositions; // offset 0x4, size 0x4
    float desiredSpeed; // offset 0x8, size 0x4
    int flags; // offset 0xC, size 0x4
    TBVector angularVelocity; // offset 0x10, size 0x10
    float angAlternationInterval; // offset 0x20, size 0x4
};
typedef struct _TBBodyMovementControlData TBBodyMovementControlData;
typedef struct _TBBodyMovementControl TBBodyMovementControl;
typedef void (* TBBodyUserControlCallback)(TBBody *, float, void *);
// total size: 0x30
struct _TBBodyUserControlData {
    // Members
    unsigned int callback; // offset 0x0, size 0x4
    unsigned int context; // offset 0x4, size 0x4
    int pad[10]; // offset 0x8, size 0x28
};
typedef struct _TBBodyUserControlData TBBodyUserControlData;
typedef struct _TBBodyUserControl TBBodyUserControl;
union _UBControllerParamTypeData {
    TBBodyThrustControlData thruster; // offset 0x0, size 0x30
    TBBodyMotorControlData motor; // offset 0x0, size 0x30
    TBBodyGearBoxControlData gearBox; // offset 0x0, size 0xA0
    TBBodyBrakeControlData brake; // offset 0x0, size 0x70
    TBBodyWingControlData wing; // offset 0x0, size 0x40
    TBBodySteeringControlData steering; // offset 0x0, size 0x50
    TBBodyDownForceControlData downForce; // offset 0x0, size 0x38
    TBBodyMovementControlData movement; // offset 0x0, size 0x24
    TBBodyUserControlData user; // offset 0x0, size 0x30
};
typedef union _UBControllerParamTypeData UBControllerParamTypeData;
typedef union _UBControllerParamType UBControllerParamType;
typedef struct _TBBodyController TBBodyController;
typedef struct _TBConstraintSolver TBConstraintSolver;
enum ESimulationDataType {
    EBSIMDATATYPE_SYSTEM = 0,
    EBSIMDATATYPE_BIPED = 1,
    EBSIMDATATYPE_ROPE = 2,
    EBSIMDATATYPES = 3,
};
enum EBSimulationSystemType {
    EBSIMSYSTEM_SIMPLE = 0,
    EBSIMSYSTEM_SYSTEM = 1,
    EBSIMSYSTEM_BIPED = 2,
    EBSIMSYSTEM_CLOTH = 3,
    EBSIMSYSTEM_ROPE = 4,
    EBSIMSYSTEM_PARTICLE = 5,
    EBSIMSYSTEM_BUOYANCY = 6,
    EBSIMSYSTEM_SOFTBODY = 7,
    EBSIMSYSTEM_FORCEFIELD = 8,
    EBSIMSYSTEMS = 9,
};
// total size: 0xD0
struct _TBCollisionGeometryData {
    // Inner declarations
    union {
        TBCollisionSphere sphere; // offset 0x0, size 0x14
        TBCollisionCapsule capsule; // offset 0x0, size 0x28
        TBCollisionBox box; // offset 0x0, size 0x30
        TBCollisionAABox aabox; // offset 0x0, size 0x20
        TBCollisionAACapsule aacapsule; // offset 0x0, size 0x18
        TBCollisionBoundedPlane boundedPlane; // offset 0x0, size 0xB0
    };

    // Members
    enum EBBodyType type; // offset 0x0, size 0x4
    float mass; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    int nextComposite; // offset 0xC, size 0x4
    TBVector offset; // offset 0x10, size 0x10
    union {
        TBCollisionSphere sphere; // offset 0x0, size 0x14
        TBCollisionCapsule capsule; // offset 0x0, size 0x28
        TBCollisionBox box; // offset 0x0, size 0x30
        TBCollisionAABox aabox; // offset 0x0, size 0x20
        TBCollisionAACapsule aacapsule; // offset 0x0, size 0x18
        TBCollisionBoundedPlane boundedPlane; // offset 0x0, size 0xB0
    } data; // offset 0x20, size 0xB0
};
typedef struct _TBCollisionGeometryData TBCollisionGeometryData;
// total size: 0x60
struct _TBBodyData {
    // Members
    TBVector position; // offset 0x0, size 0x10
    TBVector orientation; // offset 0x10, size 0x10
    int geometry; // offset 0x20, size 0x4
    int childCrc; // offset 0x24, size 0x4
    int parentCrc; // offset 0x28, size 0x4
    int material; // offset 0x2C, size 0x4
    unsigned int crc; // offset 0x30, size 0x4
    int flags; // offset 0x34, size 0x4
    char noStaticColl; // offset 0x38, size 0x1
    char onlyStaticColl; // offset 0x39, size 0x1
    char noMeshColl; // offset 0x3A, size 0x1
    char onlyMeshColl; // offset 0x3B, size 0x1
    char noDisbledColl; // offset 0x3C, size 0x1
    char noCameraColl; // offset 0x3D, size 0x1
    char pad[2]; // offset 0x3E, size 0x2
    TBVector cogOffset; // offset 0x40, size 0x10
    int wheelChassisBody; // offset 0x50, size 0x4
    int pad2[3]; // offset 0x54, size 0xC
};
typedef struct _TBBodyData TBBodyData;
// total size: 0xA0
struct _TBJointData {
    // Members
    enum EBJointType type; // offset 0x0, size 0x4
    unsigned int body1; // offset 0x4, size 0x4
    unsigned int body2; // offset 0x8, size 0x4
    unsigned int jointDepth; // offset 0xC, size 0x4
    TBVector offset1; // offset 0x10, size 0x10
    TBVector offset2; // offset 0x20, size 0x10
    TBVector majorAxis; // offset 0x30, size 0x10
    unsigned int crc; // offset 0x40, size 0x4
    int flags; // offset 0x44, size 0x4
    float maxForce; // offset 0x48, size 0x4
    int pad; // offset 0x4C, size 0x4
    UBJointParamType parms; // offset 0x50, size 0x50
};
typedef struct _TBJointData TBJointData;
// total size: 0xB0
struct _TBControllerData {
    // Members
    enum EBBodyControllerType type; // offset 0x0, size 0x4
    unsigned int body; // offset 0x4, size 0x4
    unsigned int crc; // offset 0x8, size 0x4
    int pad; // offset 0xC, size 0x4
    UBControllerParamTypeData parms; // offset 0x10, size 0xA0
};
typedef struct _TBControllerData TBControllerData;
// total size: 0x50
struct _TBSimulationData {
    // Members
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    unsigned int type; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    int pad[2]; // offset 0x28, size 0x8
    unsigned int noofGeoms; // offset 0x30, size 0x4
    unsigned int noofBodies; // offset 0x34, size 0x4
    unsigned int noofJoints; // offset 0x38, size 0x4
    unsigned int noofControllers; // offset 0x3C, size 0x4
    TBCollisionGeometryData * geom; // offset 0x40, size 0x4
    TBBodyData * body; // offset 0x44, size 0x4
    TBJointData * joint; // offset 0x48, size 0x4
    TBControllerData * controller; // offset 0x4C, size 0x4
};
typedef struct _TBSimulationData TBSimulationData;
typedef int (* TBSimulationSystemMoveCallback)(struct _TBSimulationSystem *, const float *, enum EBSimulationSystemPositionRefType);
typedef int (* TBSimulationSystemRotateCallback)(struct _TBSimulationSystem *, const float *, enum EBSimulationSystemPositionRefType);
typedef void (* TBSimulationSystemDeleteCallback)(struct _TBSimulationSystem *);
typedef struct _TBSimulationSystem TBSimulationSystem;
// total size: 0x3AC
struct _TBCloth {
    // Members
    TBSimulationSystem system; // offset 0x0, size 0x160
    TBCollisionSphere sphere; // offset 0x160, size 0x14
    TBCollisionGeometry collision; // offset 0x174, size 0xE0
    TBCollisionTriangleList triList; // offset 0x254, size 0x30
    TBCollisionGeometry triCollision; // offset 0x284, size 0xE0
    int xSegments; // offset 0x364, size 0x4
    int ySegments; // offset 0x368, size 0x4
    TBPrimVertex * verts; // offset 0x36C, size 0x4
    TBPrimVertex * verts2; // offset 0x370, size 0x4
    int noofVerts; // offset 0x374, size 0x4
    int * bodyIndices; // offset 0x378, size 0x4
    TBTexture * texture; // offset 0x37C, size 0x4
    TBTexture * texture2; // offset 0x380, size 0x4
    TBBody * triListBody; // offset 0x384, size 0x4
    UBContext32 context; // offset 0x388, size 0x4
    TBVector * normals; // offset 0x38C, size 0x4
    int flags; // offset 0x390, size 0x4
    float dragCoefficient; // offset 0x394, size 0x4
    float lateralDragCoefficient; // offset 0x398, size 0x4
    float airPressureMultiplier; // offset 0x39C, size 0x4
    int patchTesselation; // offset 0x3A0, size 0x4
    TBPatch * patch; // offset 0x3A4, size 0x4
    TBPatchControlVertex * patchVerts; // offset 0x3A8, size 0x4
};
typedef struct _TBCloth TBCloth;
// total size: 0x1B0
struct _TBRope {
    // Members
    TBSimulationSystem system; // offset 0x0, size 0x160
    TBCollisionSphere * sphere; // offset 0x160, size 0x4
    TBCollisionGeometry * collision; // offset 0x164, size 0x4
    float worldOffset[4][2]; // offset 0x168, size 0x20
    const TBBody * userStartBody; // offset 0x188, size 0x4
    const TBBody * userEndBody; // offset 0x18C, size 0x4
    int flags; // offset 0x190, size 0x4
    int noofVerts; // offset 0x194, size 0x4
    int segments; // offset 0x198, size 0x4
    TBPrimVertex * verts; // offset 0x19C, size 0x4
    float dragCoefficient; // offset 0x1A0, size 0x4
    int pad[3]; // offset 0x1A4, size 0xC
};
typedef struct _TBRope TBRope;
enum EBSoftBodyType {
    EBSOFTBODY_CUBE = 0,
    EBSOFTBODY_GEOSPHERE = 1,
    EBSOFTBODY_CUBOID = 2,
    EBSOFTBODY_USER = 3,
    EBSOFTBODY_TYPES = 4,
};
// total size: 0x394
struct _TBSoftBody {
    // Members
    TBSimulationSystem system; // offset 0x0, size 0x160
    TBCollisionSphere sphere; // offset 0x160, size 0x14
    TBCollisionGeometry collision; // offset 0x174, size 0xE0
    TBCollisionTriangleList triList; // offset 0x254, size 0x30
    TBCollisionGeometry triCollision; // offset 0x284, size 0xE0
    TBBody * triListBody; // offset 0x364, size 0x4
    TBPrimVertex * verts; // offset 0x368, size 0x4
    int noofVerts; // offset 0x36C, size 0x4
    TBTexture * texture; // offset 0x370, size 0x4
    int * triListIndices; // offset 0x374, size 0x4
    TBVector * normals; // offset 0x378, size 0x4
    TBSimulation * simulation; // offset 0x37C, size 0x4
    UBContext32 context; // offset 0x380, size 0x4
    int flags; // offset 0x384, size 0x4
    float dragCoefficient; // offset 0x388, size 0x4
    float lateralDragCoefficient; // offset 0x38C, size 0x4
    enum EBSoftBodyType type; // offset 0x390, size 0x4
};
typedef struct _TBSoftBody TBSoftBody;
enum EBBipedAction {
    EBBIPEDACTION_NONE = 0,
    EBBIPEDACTION_GETUP = 1,
};
enum EBBipedState {
    EBBIPEDSTATE_NORMAL = 0,
    EBBIPEDSTATE_GETUPBLEND = 1,
    EBBIPEDSTATE_GETUP = 2,
};
// total size: 0x20
struct _TBBipedGetUpData {
    // Members
    float maxFloorDistance; // offset 0x0, size 0x4
    float maxBodyTilt; // offset 0x4, size 0x4
    float maxRelativeVelocity; // offset 0x8, size 0x4
    float disableWaitTime; // offset 0xC, size 0x4
    struct _TBActorAnimSegment * getupFront; // offset 0x10, size 0x4
    struct _TBActorAnimSegment * getupBack; // offset 0x14, size 0x4
    int animSpeed; // offset 0x18, size 0x4
    int pad; // offset 0x1C, size 0x4
};
typedef struct _TBBipedGetUpData TBBipedGetUpData;
// total size: 0x170
struct _TBBiped {
    // Inner declarations
    union {
        void * data; // offset 0x0, size 0x4
        TBBipedGetUpData * getUpData; // offset 0x0, size 0x4
    };

    // Members
    TBSimulationSystem system; // offset 0x0, size 0x160
    enum EBBipedState state; // offset 0x160, size 0x4
    float timer; // offset 0x164, size 0x4
    enum EBBipedAction actionType; // offset 0x168, size 0x4
    union {
        void * data; // offset 0x0, size 0x4
        TBBipedGetUpData * getUpData; // offset 0x0, size 0x4
    } action; // offset 0x16C, size 0x4
};
typedef struct _TBBiped TBBiped;
// total size: 0x40
struct _TBSimEmitterSimpleData {
    // Members
    float particleLifeTime; // offset 0x0, size 0x4
    float pad[3]; // offset 0x4, size 0xC
    TBVector randomPositionDeviation; // offset 0x10, size 0x10
    TBVector startVelocity; // offset 0x20, size 0x10
    TBVector randomVelocityDeviation; // offset 0x30, size 0x10
};
typedef struct _TBSimEmitterSimpleData TBSimEmitterSimpleData;
typedef struct _TBSimParticle TBSimParticle;
typedef void (* TBSimPSEmitterCallback)(struct _TBSimParticleSystem *, void *);
typedef int (* TBSimPSCollisionCallback)(struct _TBSimParticleSystem *, void *, float, int, TBBody *, TBCollision *);
typedef int (* TBSimPSParticleCallback)(struct _TBSimParticleSystem *, void *, void *);
typedef struct _TBSimParticleSystem TBSimParticleSystem;
// total size: 0x190
struct _TBBuoyancy {
    // Members
    TBSimulationSystem system; // offset 0x0, size 0x160
    float fluidLevel; // offset 0x160, size 0x4
    float fluidDensity; // offset 0x164, size 0x4
    float fluidViscosity; // offset 0x168, size 0x4
    float fluidDragCoefficient; // offset 0x16C, size 0x4
    float fluidCrossSection; // offset 0x170, size 0x4
    float fluidVolume; // offset 0x174, size 0x4
    float fluidDisplacedVolume; // offset 0x178, size 0x4
    float fluidDisplacedLevel; // offset 0x17C, size 0x4
    TBBody * planeBody; // offset 0x180, size 0x4
    int flags; // offset 0x184, size 0x4
    int pad[2]; // offset 0x188, size 0x8
};
typedef struct _TBBuoyancy TBBuoyancy;
// total size: 0x170
struct _TBForceField {
    // Members
    TBSimulationSystem system; // offset 0x0, size 0x160
    int (* forceCallback)(struct _TBForceField *, TBBody *, const float *, float *, float *); // offset 0x160, size 0x4
    int flags; // offset 0x164, size 0x4
    int pad[2]; // offset 0x168, size 0x8
};
typedef int (* TBForceFieldCallback)(struct _TBForceField *, TBBody *, const float *, float *, float *);
typedef struct _TBForceField TBForceField;
enum EBCollAudioReason {
    EBCOLLAUDIOREASON_IMPACT = 0,
    EBCOLLAUDIOREASON_INITIALCONTACT = 1,
    EBCOLLAUDIOREASON_CONTACT = 2,
};
enum EBCollAudioCallback {
    EBCOLLAUDIOCALLBACK_NOACTION = 0,
    EBCOLLAUDIOCALLBACK_OVERRIDE = 1,
    EBCOLLAUDIOCALLBACK_ABORT = 2,
};
// total size: 0x40
struct _TBCollAudioCallbackData {
    // Members
    TBBody * body[2]; // offset 0x0, size 0x8
    TBVector position; // offset 0x8, size 0x10
    TBVector relativeVelocity; // offset 0x18, size 0x10
    TBSample * sample; // offset 0x28, size 0x4
    TBSoundPatch * patch; // offset 0x2C, size 0x4
    int frequency; // offset 0x30, size 0x4
    int volume; // offset 0x34, size 0x4
    float minRange; // offset 0x38, size 0x4
    float maxRange; // offset 0x3C, size 0x4
};
typedef struct _TBCollAudioCallbackData TBCollAudioCallbackData;
typedef enum EBCollAudioCallback (* TBCollAudioImpactCallback)(enum EBCollAudioReason, TBCollAudioCallbackData *);
// total size: 0x78
struct _TBCollAudioSound {
    // Inner declarations
    union {
        int impactSampleChannel; // offset 0x0, size 0x4
        unsigned int impactPatchHandle; // offset 0x0, size 0x4
    };
    union {
        int contactSampleChannel; // offset 0x0, size 0x4
        unsigned int contactPatchHandle; // offset 0x0, size 0x4
    };
    union {
        int releaseSampleChannel; // offset 0x0, size 0x4
        unsigned int releasePatchHandle; // offset 0x0, size 0x4
    };

    // Members
    TBBody * body1; // offset 0x0, size 0x4
    TBBody * body2; // offset 0x4, size 0x4
    int material1; // offset 0x8, size 0x4
    int material2; // offset 0xC, size 0x4
    union {
        int impactSampleChannel; // offset 0x0, size 0x4
        unsigned int impactPatchHandle; // offset 0x0, size 0x4
    }; // offset 0x10, size 0x4
    union {
        int contactSampleChannel; // offset 0x0, size 0x4
        unsigned int contactPatchHandle; // offset 0x0, size 0x4
    }; // offset 0x14, size 0x4
    union {
        int releaseSampleChannel; // offset 0x0, size 0x4
        unsigned int releasePatchHandle; // offset 0x0, size 0x4
    }; // offset 0x18, size 0x4
    unsigned long long lastUpdateTime; // offset 0x20, size 0x8
    unsigned long long lastContactTime; // offset 0x28, size 0x8
    TBVector position; // offset 0x30, size 0x10
    int sampleFrequency; // offset 0x40, size 0x4
    int playedVolume; // offset 0x44, size 0x4
    int playedFrequency; // offset 0x48, size 0x4
    float targetVolume; // offset 0x4C, size 0x4
    float currentVolume; // offset 0x50, size 0x4
    char isContact; // offset 0x54, size 0x1
    char aliveCount; // offset 0x55, size 0x1
    TBSample * impactSample; // offset 0x58, size 0x4
    TBSample * contactSample; // offset 0x5C, size 0x4
    TBSample * releaseSample; // offset 0x60, size 0x4
    TBSoundPatch * impactPatch; // offset 0x64, size 0x4
    TBSoundPatch * contactPatch; // offset 0x68, size 0x4
    TBSoundPatch * releasePatch; // offset 0x6C, size 0x4
    struct _TBCollAudioParamSound * impactPlayed; // offset 0x70, size 0x4
    struct _TBCollAudioParamSound * contactPlayed; // offset 0x74, size 0x4
};
// total size: 0x3C
struct _TBCollAudioParamSound {
    // Members
    TBSample * sample; // offset 0x0, size 0x4
    TBSoundPatch * patch; // offset 0x4, size 0x4
    TBSample * sampleR; // offset 0x8, size 0x4
    TBSoundPatch * patchR; // offset 0xC, size 0x4
    int flip; // offset 0x10, size 0x4
    float minRelativeVel; // offset 0x14, size 0x4
    float maxRelativeVel; // offset 0x18, size 0x4
    TBVector2D minMass; // offset 0x1C, size 0x8
    TBVector2D maxMass; // offset 0x24, size 0x8
    TBVector2D minAngVel; // offset 0x2C, size 0x8
    TBVector2D maxAngVel; // offset 0x34, size 0x8
};
typedef struct _TBCollAudioSound TBCollAudioSound;
typedef struct _TBCollAudioParamSound TBCollAudioParamSound;
// total size: 0x78C
struct _TBCollAudioMaterialEntry {
    // Members
    TBCollAudioParamSound impactSounds[16]; // offset 0x0, size 0x3C0
    TBCollAudioParamSound contactSounds[16]; // offset 0x3C0, size 0x3C0
    int numImpactSounds; // offset 0x780, size 0x4
    int numContactSounds; // offset 0x784, size 0x4
    enum EBCollAudioCallback (* impactCallback)(enum EBCollAudioReason, TBCollAudioCallbackData *); // offset 0x788, size 0x4
};
typedef struct _TBCollAudioMaterialEntry TBCollAudioMaterialEntry;
enum EBInputID {
    BIINPUT_NULL = 0,
    BIINPUT_MOUSE_FIRSTID = 1,
    BIINPUT_MOUSE_B1 = 2,
    BIINPUT_MOUSE_B2 = 3,
    BIINPUT_MOUSE_B3 = 4,
    BIINPUT_MOUSE_X = 5,
    BIINPUT_MOUSE_Y = 6,
    BIINPUT_MOUSE_Z = 7,
    BIINPUT_MOUSE_LASTID = 8,
    BIINPUT_PCJOY_FIRSTID = 9,
    BIINPUT_PCJOY_B1 = 10,
    BIINPUT_PCJOY_B2 = 11,
    BIINPUT_PCJOY_B3 = 12,
    BIINPUT_PCJOY_B4 = 13,
    BIINPUT_PCJOY_B5 = 14,
    BIINPUT_PCJOY_B6 = 15,
    BIINPUT_PCJOY_B7 = 16,
    BIINPUT_PCJOY_B8 = 17,
    BIINPUT_PCJOY_B9 = 18,
    BIINPUT_PCJOY_B10 = 19,
    BIINPUT_PCJOY_B11 = 20,
    BIINPUT_PCJOY_B12 = 21,
    BIINPUT_PCJOY_B13 = 22,
    BIINPUT_PCJOY_B14 = 23,
    BIINPUT_PCJOY_B15 = 24,
    BIINPUT_PCJOY_B16 = 25,
    BIINPUT_PCJOY_B17 = 26,
    BIINPUT_PCJOY_B18 = 27,
    BIINPUT_PCJOY_B19 = 28,
    BIINPUT_PCJOY_B20 = 29,
    BIINPUT_PCJOY_B21 = 30,
    BIINPUT_PCJOY_B22 = 31,
    BIINPUT_PCJOY_B23 = 32,
    BIINPUT_PCJOY_B24 = 33,
    BIINPUT_PCJOY_B25 = 34,
    BIINPUT_PCJOY_B26 = 35,
    BIINPUT_PCJOY_B27 = 36,
    BIINPUT_PCJOY_B28 = 37,
    BIINPUT_PCJOY_B29 = 38,
    BIINPUT_PCJOY_B30 = 39,
    BIINPUT_PCJOY_B31 = 40,
    BIINPUT_PCJOY_B32 = 41,
    BIINPUT_PCJOY_X = 42,
    BIINPUT_PCJOY_Y = 43,
    BIINPUT_PCJOY_Z = 44,
    BIINPUT_PCJOY_XR = 45,
    BIINPUT_PCJOY_YR = 46,
    BIINPUT_PCJOY_ZR = 47,
    BIINPUT_PCJOY_POV1 = 48,
    BIINPUT_PCJOY_POV2 = 49,
    BIINPUT_PCJOY_POV3 = 50,
    BIINPUT_PCJOY_POV4 = 51,
    BIINPUT_PCJOY_POV1_UP = 52,
    BIINPUT_PCJOY_POV1_DOWN = 53,
    BIINPUT_PCJOY_POV1_LEFT = 54,
    BIINPUT_PCJOY_POV1_RIGHT = 55,
    BIINPUT_PCJOY_POV2_UP = 56,
    BIINPUT_PCJOY_POV2_DOWN = 57,
    BIINPUT_PCJOY_POV2_LEFT = 58,
    BIINPUT_PCJOY_POV2_RIGHT = 59,
    BIINPUT_PCJOY_POV3_UP = 60,
    BIINPUT_PCJOY_POV3_DOWN = 61,
    BIINPUT_PCJOY_POV3_LEFT = 62,
    BIINPUT_PCJOY_POV3_RIGHT = 63,
    BIINPUT_PCJOY_POV4_UP = 64,
    BIINPUT_PCJOY_POV4_DOWN = 65,
    BIINPUT_PCJOY_POV4_LEFT = 66,
    BIINPUT_PCJOY_POV4_RIGHT = 67,
    BIINPUT_PCJOY_LASTID = 68,
    BIINPUT_KEY_FIRSTID = 69,
    BIINPUT_KEY_ESCAPE = 70,
    BIINPUT_KEY_1 = 71,
    BIINPUT_KEY_2 = 72,
    BIINPUT_KEY_3 = 73,
    BIINPUT_KEY_4 = 74,
    BIINPUT_KEY_5 = 75,
    BIINPUT_KEY_6 = 76,
    BIINPUT_KEY_7 = 77,
    BIINPUT_KEY_8 = 78,
    BIINPUT_KEY_9 = 79,
    BIINPUT_KEY_0 = 80,
    BIINPUT_KEY_MINUS = 81,
    BIINPUT_KEY_EQUALS = 82,
    BIINPUT_KEY_BACK = 83,
    BIINPUT_KEY_TAB = 84,
    BIINPUT_KEY_A = 85,
    BIINPUT_KEY_B = 86,
    BIINPUT_KEY_C = 87,
    BIINPUT_KEY_D = 88,
    BIINPUT_KEY_E = 89,
    BIINPUT_KEY_F = 90,
    BIINPUT_KEY_G = 91,
    BIINPUT_KEY_H = 92,
    BIINPUT_KEY_I = 93,
    BIINPUT_KEY_J = 94,
    BIINPUT_KEY_K = 95,
    BIINPUT_KEY_L = 96,
    BIINPUT_KEY_M = 97,
    BIINPUT_KEY_N = 98,
    BIINPUT_KEY_O = 99,
    BIINPUT_KEY_P = 100,
    BIINPUT_KEY_Q = 101,
    BIINPUT_KEY_R = 102,
    BIINPUT_KEY_S = 103,
    BIINPUT_KEY_T = 104,
    BIINPUT_KEY_U = 105,
    BIINPUT_KEY_V = 106,
    BIINPUT_KEY_W = 107,
    BIINPUT_KEY_X = 108,
    BIINPUT_KEY_Y = 109,
    BIINPUT_KEY_Z = 110,
    BIINPUT_KEY_LBRACKET = 111,
    BIINPUT_KEY_RBRACKET = 112,
    BIINPUT_KEY_RETURN = 113,
    BIINPUT_KEY_SEMICOLON = 114,
    BIINPUT_KEY_APOSTROPHE = 115,
    BIINPUT_KEY_BACKSLASH = 116,
    BIINPUT_KEY_GRAVE = 117,
    BIINPUT_KEY_LCONTROL = 118,
    BIINPUT_KEY_RCONTROL = 119,
    BIINPUT_KEY_LSHIFT = 120,
    BIINPUT_KEY_RSHIFT = 121,
    BIINPUT_KEY_LALT = 122,
    BIINPUT_KEY_RALT = 123,
    BIINPUT_KEY_COMMA = 124,
    BIINPUT_KEY_PERIOD = 125,
    BIINPUT_KEY_SLASH = 126,
    BIINPUT_KEY_SPACE = 127,
    BIINPUT_KEY_F1 = 128,
    BIINPUT_KEY_F2 = 129,
    BIINPUT_KEY_F3 = 130,
    BIINPUT_KEY_F4 = 131,
    BIINPUT_KEY_F5 = 132,
    BIINPUT_KEY_F6 = 133,
    BIINPUT_KEY_F7 = 134,
    BIINPUT_KEY_F8 = 135,
    BIINPUT_KEY_F9 = 136,
    BIINPUT_KEY_F10 = 137,
    BIINPUT_KEY_F11 = 138,
    BIINPUT_KEY_F12 = 139,
    BIINPUT_KEY_F13 = 140,
    BIINPUT_KEY_F14 = 141,
    BIINPUT_KEY_F15 = 142,
    BIINPUT_KEY_NUMLOCK = 143,
    BIINPUT_KEY_SCROLLLOCK = 144,
    BIINPUT_KEY_CAPSLOCK = 145,
    BIINPUT_KEY_NUMPAD0 = 146,
    BIINPUT_KEY_NUMPAD1 = 147,
    BIINPUT_KEY_NUMPAD2 = 148,
    BIINPUT_KEY_NUMPAD3 = 149,
    BIINPUT_KEY_NUMPAD4 = 150,
    BIINPUT_KEY_NUMPAD5 = 151,
    BIINPUT_KEY_NUMPAD6 = 152,
    BIINPUT_KEY_NUMPAD7 = 153,
    BIINPUT_KEY_NUMPAD8 = 154,
    BIINPUT_KEY_NUMPAD9 = 155,
    BIINPUT_KEY_DECIMAL = 156,
    BIINPUT_KEY_MULTIPLY = 157,
    BIINPUT_KEY_SUBTRACT = 158,
    BIINPUT_KEY_ADD = 159,
    BIINPUT_KEY_DIVIDE = 160,
    BIINPUT_KEY_NUMPADENTER = 161,
    BIINPUT_KEY_SYSRQ = 162,
    BIINPUT_KEY_PAUSE = 163,
    BIINPUT_KEY_HOME = 164,
    BIINPUT_KEY_END = 165,
    BIINPUT_KEY_PRIOR = 166,
    BIINPUT_KEY_NEXT = 167,
    BIINPUT_KEY_INSERT = 168,
    BIINPUT_KEY_DELETE = 169,
    BIINPUT_KEY_UP = 170,
    BIINPUT_KEY_DOWN = 171,
    BIINPUT_KEY_LEFT = 172,
    BIINPUT_KEY_RIGHT = 173,
    BIINPUT_KEY_LWIN = 174,
    BIINPUT_KEY_RWIN = 175,
    BIINPUT_KEY_APPS = 176,
    BIINPUT_KEY_LASTID = 177,
    BIINPUT_PS_FIRSTID = 178,
    BIINPUT_PS_LEFT = 179,
    BIINPUT_PS_RIGHT = 180,
    BIINPUT_PS_UP = 181,
    BIINPUT_PS_DOWN = 182,
    BIINPUT_PS_X1 = 183,
    BIINPUT_PS_Y1 = 184,
    BIINPUT_PS_X2 = 185,
    BIINPUT_PS_Y2 = 186,
    BIINPUT_PS_CROSS = 187,
    BIINPUT_PS_TRIANGLE = 188,
    BIINPUT_PS_CIRCLE = 189,
    BIINPUT_PS_SQUARE = 190,
    BIINPUT_PS_L1 = 191,
    BIINPUT_PS_L2 = 192,
    BIINPUT_PS_L3 = 193,
    BIINPUT_PS_R1 = 194,
    BIINPUT_PS_R2 = 195,
    BIINPUT_PS_R3 = 196,
    BIINPUT_PS_SELECT = 197,
    BIINPUT_PS_START = 198,
    BIINPUT_PS_LASTID = 199,
    BIINPUT_XBOX_FIRSTID = 200,
    BIINPUT_XBOX_X1 = 201,
    BIINPUT_XBOX_Y1 = 202,
    BIINPUT_XBOX_X2 = 203,
    BIINPUT_XBOX_Y2 = 204,
    BIINPUT_XBOX_UP = 205,
    BIINPUT_XBOX_DOWN = 206,
    BIINPUT_XBOX_LEFT = 207,
    BIINPUT_XBOX_RIGHT = 208,
    BIINPUT_XBOX_START = 209,
    BIINPUT_XBOX_BACK = 210,
    BIINPUT_XBOX_STICK1 = 211,
    BIINPUT_XBOX_STICK2 = 212,
    BIINPUT_XBOX_A = 213,
    BIINPUT_XBOX_B = 214,
    BIINPUT_XBOX_X = 215,
    BIINPUT_XBOX_Y = 216,
    BIINPUT_XBOX_BLACK = 217,
    BIINPUT_XBOX_WHITE = 218,
    BIINPUT_XBOX_LTRIGGER = 219,
    BIINPUT_XBOX_RTRIGGER = 220,
    BIINPUT_XBOX_LASTID = 221,
    BIINPUT_GAMECUBE_FIRSTID = 222,
    BIINPUT_GAMECUBE_LEFT = 223,
    BIINPUT_GAMECUBE_RIGHT = 224,
    BIINPUT_GAMECUBE_UP = 225,
    BIINPUT_GAMECUBE_DOWN = 226,
    BIINPUT_GAMECUBE_X1 = 227,
    BIINPUT_GAMECUBE_Y1 = 228,
    BIINPUT_GAMECUBE_X2 = 229,
    BIINPUT_GAMECUBE_Y2 = 230,
    BIINPUT_GAMECUBE_A = 231,
    BIINPUT_GAMECUBE_B = 232,
    BIINPUT_GAMECUBE_APRESS = 233,
    BIINPUT_GAMECUBE_BPRESS = 234,
    BIINPUT_GAMECUBE_L = 235,
    BIINPUT_GAMECUBE_R = 236,
    BIINPUT_GAMECUBE_LTRIGGER = 237,
    BIINPUT_GAMECUBE_RTRIGGER = 238,
    BIINPUT_GAMECUBE_X = 239,
    BIINPUT_GAMECUBE_Y = 240,
    BIINPUT_GAMECUBE_Z = 241,
    BIINPUT_GAMECUBE_START = 242,
    BIINPUT_GAMECUBE_REVSELECT = 243,
    BIINPUT_GAMECUBE_REVHOME = 244,
    BIINPUT_GAMECUBE_REVSMALLA = 245,
    BIINPUT_GAMECUBE_REVSMALLB = 246,
    BIINPUT_GAMECUBE_REVZ1 = 247,
    BIINPUT_GAMECUBE_REVZ2 = 248,
    BIINPUT_GAMECUBE_LASTID = 249,
    BIINPUT_PSP_FIRSTID = 250,
    BIINPUT_PSP_LEFT = 251,
    BIINPUT_PSP_RIGHT = 252,
    BIINPUT_PSP_UP = 253,
    BIINPUT_PSP_DOWN = 254,
    BIINPUT_PSP_CIRCLE = 255,
    BIINPUT_PSP_CROSS = 256,
    BIINPUT_PSP_TRIANGLE = 257,
    BIINPUT_PSP_SQUARE = 258,
    BIINPUT_PSP_L1 = 259,
    BIINPUT_PSP_L2 = 260,
    BIINPUT_PSP_L3 = 261,
    BIINPUT_PSP_R1 = 262,
    BIINPUT_PSP_R2 = 263,
    BIINPUT_PSP_R3 = 264,
    BIINPUT_PSP_SELECT = 265,
    BIINPUT_PSP_START = 266,
    BIINPUT_PSP_X1 = 267,
    BIINPUT_PSP_Y1 = 268,
    BIINPUT_PSP_LASTID = 269,
    BIINPUT_XENON_FIRSTID = 270,
    BIINPUT_XENON_X1 = 271,
    BIINPUT_XENON_Y1 = 272,
    BIINPUT_XENON_X2 = 273,
    BIINPUT_XENON_Y2 = 274,
    BIINPUT_XENON_UP = 275,
    BIINPUT_XENON_DOWN = 276,
    BIINPUT_XENON_LEFT = 277,
    BIINPUT_XENON_RIGHT = 278,
    BIINPUT_XENON_START = 279,
    BIINPUT_XENON_BACK = 280,
    BIINPUT_XENON_STICK1 = 281,
    BIINPUT_XENON_STICK2 = 282,
    BIINPUT_XENON_WHITE = 283,
    BIINPUT_XENON_L1 = 283,
    BIINPUT_XENON_BLACK = 284,
    BIINPUT_XENON_R1 = 284,
    BIINPUT_XENON_A = 287,
    BIINPUT_XENON_B = 288,
    BIINPUT_XENON_X = 289,
    BIINPUT_XENON_Y = 290,
    BIINPUT_XENON_LTRIGGER = 291,
    BIINPUT_XENON_RTRIGGER = 292,
    BIINPUT_XENON_LASTID = 293,
    BIINPUT_PS3_FIRSTID = 294,
    BIINPUT_PS3_LEFT = 295,
    BIINPUT_PS3_RIGHT = 296,
    BIINPUT_PS3_UP = 297,
    BIINPUT_PS3_DOWN = 298,
    BIINPUT_PS3_CIRCLE = 299,
    BIINPUT_PS3_CROSS = 300,
    BIINPUT_PS3_TRIANGLE = 301,
    BIINPUT_PS3_SQUARE = 302,
    BIINPUT_PS3_L1 = 303,
    BIINPUT_PS3_L2 = 304,
    BIINPUT_PS3_L3 = 305,
    BIINPUT_PS3_R1 = 306,
    BIINPUT_PS3_R2 = 307,
    BIINPUT_PS3_R3 = 308,
    BIINPUT_PS3_SELECT = 309,
    BIINPUT_PS3_START = 310,
    BIINPUT_PS3_X1 = 311,
    BIINPUT_PS3_Y1 = 312,
    BIINPUT_PS3_X2 = 313,
    BIINPUT_PS3_Y2 = 314,
    BIINPUT_PS3_LASTID = 315,
    BIINPUT_REVOLUTION_FIRSTID = 316,
    BIINPUT_REVOLUTION_LEFT = 317,
    BIINPUT_REVOLUTION_RIGHT = 318,
    BIINPUT_REVOLUTION_UP = 319,
    BIINPUT_REVOLUTION_DOWN = 320,
    BIINPUT_REVOLUTION_X1 = 321,
    BIINPUT_REVOLUTION_Y1 = 322,
    BIINPUT_REVOLUTION_X2 = 323,
    BIINPUT_REVOLUTION_Y2 = 324,
    BIINPUT_REVOLUTION_A = 325,
    BIINPUT_REVOLUTION_B = 326,
    BIINPUT_REVOLUTION_APRESS = 327,
    BIINPUT_REVOLUTION_BPRESS = 328,
    BIINPUT_REVOLUTION_L = 329,
    BIINPUT_REVOLUTION_R = 330,
    BIINPUT_REVOLUTION_LTRIGGER = 331,
    BIINPUT_REVOLUTION_RTRIGGER = 332,
    BIINPUT_REVOLUTION_X = 333,
    BIINPUT_REVOLUTION_Y = 334,
    BIINPUT_REVOLUTION_Z = 335,
    BIINPUT_REVOLUTION_START = 336,
    BIINPUT_REVOLUTION_REVSELECT = 337,
    BIINPUT_REVOLUTION_REVHOME = 338,
    BIINPUT_REVOLUTION_REVSMALLA = 339,
    BIINPUT_REVOLUTION_REVSMALLB = 340,
    BIINPUT_REVOLUTION_REVZ1 = 341,
    BIINPUT_REVOLUTION_REVZ2 = 342,
    BIINPUT_REVOLUTION_LASTID = 343,
    NOOFBIINPUTS = 344,
};
enum EBIChannelType {
    BICHANNELTYPE_UNUSED = 0,
    BICHANNELTYPE_DIGITAL = 1,
    BICHANNELTYPE_ANALOGUE = 2,
    BICHANNELTYPE_BIANALOGUE = 3,
    BICHANNELTYPE_COMPOUND = 4,
};
typedef enum EBIChannelType EBIChannelType;
enum EBIDeviceType {
    EBIDEVICETYPE_UNCONNECTED = 0,
    EBIDEVICETYPE_UNKNOWN = 1,
    EBIDEVICETYPE_PSDIGITAL = 2,
    EBIDEVICETYPE_PSANALOGUE = 3,
    EBIDEVICETYPE_PSDUALSHOCK = 4,
    EBIDEVICETYPE_PS2DUALSHOCK2 = 5,
    EBIDEVICETYPE_XBOXSTANDARD = 6,
    EBIDEVICETYPE_PCKEYBOARD = 7,
    EBIDEVICETYPE_PCMOUSE = 8,
    EBIDEVICETYPE_GCSTANDARD = 9,
    EBIDEVICETYPE_GCWAVEBIRD = 10,
    EBIDEVICETYPE_GCRECEIVER = 11,
    EBIDEVICETYPE_GBA = 12,
    EBIDEVICETYPE_N64CONTROLLER = 13,
    EBIDEVICETYPE_N64MIC = 14,
    EBIDEVICETYPE_N64KEYBOARD = 15,
    EBIDEVICETYPE_N64MOUSE = 16,
    EBIDEVICETYPE_PSPSTANDARD = 17,
    EBIDEVICETYPE_XENONSTANDARD = 18,
    EBIDEVICETYPE_PS3STANDARD = 19,
    EBIDEVICETYPE_GCREVCORE = 20,
    EBIDEVICETYPE_GCREVFREESTYLE = 21,
    EBIDEVICETYPES = 22,
};
enum EBRumbleStyle {
    EBRUMBLESTYLE_SMOOTH = 0,
    EBRUMBLESTYLE_ABSSIN = 1,
    EBRUMBLESTYLE_SQUARE = 2,
    EBRUMBLESTYLE_SAWTOOTH = 3,
    EBRUMBLESTYLE_RANDOM = 4,
};
enum EBPortStatus {
    EBPORTSTATUS_INVALIDPORT = 0,
    EBPORTSTATUS_CONNECTED = 1,
    EBPORTSTATUS_DISCONNECTED = 2,
};
typedef enum EBPortStatus EBPortStatus;
// total size: 0x1C
struct _TBIBinding {
    // Members
    int inputID[6]; // offset 0x0, size 0x18
    int noofInputs; // offset 0x18, size 0x4
};
typedef struct _TBIBinding TBIBinding;
// total size: 0x108
struct _TBIInputChannel {
    // Members
    char name[16]; // offset 0x0, size 0x10
    EBIChannelType type; // offset 0x10, size 0x4
    int value; // offset 0x14, size 0x4
    int edge; // offset 0x18, size 0x4
    unsigned int flags; // offset 0x1C, size 0x4
    int maxValue; // offset 0x20, size 0x4
    int duration; // offset 0x24, size 0x4
    int idle; // offset 0x28, size 0x4
    float durationSeconds; // offset 0x2C, size 0x4
    float previousDurationSeconds; // offset 0x30, size 0x4
    float idleSeconds; // offset 0x34, size 0x4
    int disableTime; // offset 0x38, size 0x4
    TBIBinding bindings[6]; // offset 0x3C, size 0xA8
    int noofBindings; // offset 0xE4, size 0x4
    struct _TBIChannelMap * map; // offset 0xE8, size 0x4
    unsigned int autoRepeatStartDelay; // offset 0xEC, size 0x4
    unsigned long long startTime; // offset 0xF0, size 0x8
    unsigned int autoRepeatRepeatDelay; // offset 0xF8, size 0x4
    int accIncSpeed; // offset 0xFC, size 0x4
    int accDecSpeed; // offset 0x100, size 0x4
};
// total size: 0x1C
struct _TBIChannelMap {
    // Members
    struct _TBIInputChannel * channels; // offset 0x0, size 0x4
    int maxChannels; // offset 0x4, size 0x4
    int noofChannels; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    float idleTime; // offset 0x10, size 0x4
    struct _TBIChannelMap * next; // offset 0x14, size 0x4
    struct _TBIChannelMap * prev; // offset 0x18, size 0x4
};
typedef struct _TBIInputChannel TBIInputChannel;
typedef struct _TBIChannelMap TBIChannelMap;
// total size: 0x20
struct _TBInputRecording {
    // Members
    int noofChannels; // offset 0x0, size 0x4
    int noofSamples; // offset 0x4, size 0x4
    int maxSamples; // offset 0x8, size 0x4
    int curSample; // offset 0xC, size 0x4
    int clientContextSize; // offset 0x10, size 0x4
    int sampleSize; // offset 0x14, size 0x4
    int pad1; // offset 0x18, size 0x4
    int pad2; // offset 0x1C, size 0x4
};
typedef struct _TBInputRecording TBInputRecording;
// total size: 0x8
struct _TBInputRecordingChannel {
    // Members
    unsigned int crc; // offset 0x0, size 0x4
    TBIInputChannel * channel; // offset 0x4, size 0x4
};
typedef struct _TBInputRecordingChannel TBInputRecordingChannel;
// total size: 0x4
struct _TBInputStateInfo {
    // Members
    int padsHaveChanged; // offset 0x0, size 0x4
};
typedef struct _TBInputStateInfo TBInputStateInfo;
// total size: 0x1C
struct _TBRumbleBatchEffect {
    // Members
    int motorId; // offset 0x0, size 0x4
    int amplitude; // offset 0x4, size 0x4
    int duration; // offset 0x8, size 0x4
    int attack; // offset 0xC, size 0x4
    int sustain; // offset 0x10, size 0x4
    int delay; // offset 0x14, size 0x4
    enum EBRumbleStyle style; // offset 0x18, size 0x4
};
typedef struct _TBRumbleBatchEffect TBRumbleBatchEffect;
// total size: 0x28
struct _TBRumbleControllerEffect {
    // Inner declarations
    union {
        unsigned long long queuedTime; // offset 0x0, size 0x8
        unsigned long long startTime; // offset 0x0, size 0x8
    };

    // Members
    unsigned long long duration; // offset 0x0, size 0x8
    unsigned long long delay; // offset 0x8, size 0x8
    int amplitude; // offset 0x10, size 0x4
    int attack; // offset 0x14, size 0x4
    int decay; // offset 0x18, size 0x4
    enum EBRumbleStyle style; // offset 0x1C, size 0x4
    union {
        unsigned long long queuedTime; // offset 0x0, size 0x8
        unsigned long long startTime; // offset 0x0, size 0x8
    }; // offset 0x20, size 0x8
};
typedef struct _TBRumbleControllerEffect TBRumbleControllerEffect;
// total size: 0x148
struct _TBRumbleController {
    // Members
    TBRumbleControllerEffect effects[8]; // offset 0x0, size 0x140
    int noofEffects; // offset 0x140, size 0x4
};
typedef struct _TBRumbleController TBRumbleController;
typedef struct _TBIGCRevPadAccel TBIGCRevPadAccel;
typedef struct _TBIGCRevPadDPD TBIGCRevPadDPD;
enum EBGameSaveMode {
    BGAMESAVE_LOAD = 0,
    BGAMESAVE_SAVE = 1,
    BGAMESAVE_DELETE = 2,
    BGAMESAVE_DETECT = 3,
    BGAMESAVE_NONE = 4,
};
enum EBGameSaveSlotStatus {
    BGAMESAVE_SLOT_NOMEDIA = 0,
    BGAMESAVE_SLOT_MEDIAPRESENT = 1,
    BGAMESAVE_SLOT_MEDIAINVALID = 2,
    BGAMESAVE_SLOT_MEDIASIZEINVALID = 3,
    BGAMESAVE_SLOT_UNFORMATED = 4,
    BGAMESAVE_SLOT_ACTIVESLOT = 5,
};
enum EBGameSaveResponse {
    BGAMESAVE_NORESPONSE = 0,
    BGAMESAVE_OKRESPONSE = 1,
    BGAMESAVE_CANCELRESPONSE = 2,
};
enum EBGameSaveStatus {
    BGAMESAVE_NOSTATE = 0,
    BGAMESAVE_CHECKINGMEDIA = 1,
    BGAMESAVE_NOMEDIA = 2,
    BGAMESAVE_INVALIDMEDIA = 3,
    BGAMESAVE_SELECTYN = 4,
    BGAMESAVE_READINGFILESYSTEM = 5,
    BGAMESAVE_UNFORMATED = 6,
    BGAMESAVE_BROKENFORMATMEDIAYN = 7,
    BGAMESAVE_FORMATMEDIAYN = 8,
    BGAMESAVE_FORMATCONFIRMYN = 9,
    BGAMESAVE_FORMATINPROGRESS = 10,
    BGAMESAVE_FORMATFAILED = 11,
    BGAMESAVE_FORMATSUCCESSFUL = 12,
    BGAMESAVE_MEDIAFULL = 13,
    BGAMESAVE_MEDIAFULL_MANAGEYN = 14,
    BGAMESAVE_MANAGECONFIRMYN = 15,
    BGAMESAVE_SAVEYN = 16,
    BGAMESAVE_SAVEINPROGRESS = 17,
    BGAMESAVE_SAVEOK = 18,
    BGAMESAVE_SAVEFAILED = 19,
    BGAMESAVE_SAVECANCELED = 20,
    BGAMESAVE_LOADYN = 21,
    BGAMESAVE_LOADNOTFOUND = 22,
    BGAMESAVE_LOADINPROGRESS = 23,
    BGAMESAVE_LOADOK = 24,
    BGAMESAVE_LOADFAILED = 25,
    BGAMESAVE_LOADFAILEDCRC = 26,
    BGAMESAVE_LOADCANCELED = 27,
    BGAMESAVE_DAMAGEDSAVE = 28,
    BGAMESAVE_DAMAGEDCARDRETRYYN = 29,
    BGAMESAVE_DELETEYN = 30,
    BGAMESAVE_DELETENOTFOUND = 31,
    BGAMESAVE_DELETEINPROGRESS = 32,
    BGAMESAVE_DELETEOK = 33,
    BGAMESAVE_DELETEFAILED = 34,
    BGAMESAVE_DELETECANCELED = 35,
    BGAMESAVE_NOSPACEFORNEWSAVES = 36,
    BGAMESAVE_MAXSAVESPRESENT = 37,
    BGAMESAVE_FORMATABORTED = 38,
};
enum EBGameSaveDetectionResult {
    BSAVEGAMEDETECT_INVALID = 0,
    BSAVEGAMEDETECT_EXISTS = 1,
};
// total size: 0x154
struct _TBGameSaveDirEntry {
    // Members
    unsigned short filename[128]; // offset 0x0, size 0x100
    unsigned short description[32]; // offset 0x100, size 0x40
    int size; // offset 0x140, size 0x4
    char cSec; // offset 0x144, size 0x1
    char cMin; // offset 0x145, size 0x1
    char cHour; // offset 0x146, size 0x1
    char cDay; // offset 0x147, size 0x1
    char cMonth; // offset 0x148, size 0x1
    short cYear; // offset 0x14A, size 0x2
    char mSec; // offset 0x14C, size 0x1
    char mMin; // offset 0x14D, size 0x1
    char mHour; // offset 0x14E, size 0x1
    char mDay; // offset 0x14F, size 0x1
    char mMonth; // offset 0x150, size 0x1
    short mYear; // offset 0x152, size 0x2
};
typedef struct _TBGameSaveDirEntry TBGameSaveDirEntry;
// total size: 0x4C
struct _TBGameSaveInfo {
    // Members
    char gameName[32]; // offset 0x0, size 0x20
    char comment[32]; // offset 0x20, size 0x20
    TBTexture * banner; // offset 0x40, size 0x4
    TBTexture * icon; // offset 0x44, size 0x4
    unsigned char companyCode[2]; // offset 0x48, size 0x2
    unsigned char pad[2]; // offset 0x4A, size 0x2
};
typedef struct _TBGameSaveInfo TBGameSaveInfo;
enum EBSaveMenuDisplayReason {
    BSAVEMENUDISPLAYREASON_OPEN = 0,
    BSAVEMENUDISPLAYREASON_POLL = 1,
    BSAVEMENUDISPLAYREASON_CLOSE = 2,
};
// total size: 0x15C
struct _TBSaveMenuFileStatus {
    // Members
    TBGameSaveDirEntry entry; // offset 0x0, size 0x154
    int dirIndex; // offset 0x154, size 0x4
    int status; // offset 0x158, size 0x4
};
typedef struct _TBSaveMenuFileStatus TBSaveMenuFileStatus;
typedef int (* TBSaveMenuDisplayFilesCallback)(enum EBSaveMenuDisplayReason, TBSaveMenuFileStatus *, int, void *);
typedef int (* TBSaveMenuDisplayTextCallback)(int, TBStringTableString *, const TBFontFormatting *, int, int, void *);
typedef int (* TBSaveMenuStatusChangeCallback)(int, void *);
// total size: 0xBC
struct _TBSaveMenuInfo {
    // Members
    int territory; // offset 0x0, size 0x4
    char * fileName; // offset 0x4, size 0x4
    unsigned short * displayName[3]; // offset 0x8, size 0xC
    void * data; // offset 0x14, size 0x4
    int dataSize; // offset 0x18, size 0x4
    unsigned short * saveDescription; // offset 0x1C, size 0x4
    int extraSize; // offset 0x20, size 0x4
    TBStringTable * stringTable; // offset 0x24, size 0x4
    unsigned int * stringIDs; // offset 0x28, size 0x4
    TBFont * font; // offset 0x2C, size 0x4
    TBFontFormatting * messageFormat; // offset 0x30, size 0x4
    TBFontFormatting * okFormat; // offset 0x34, size 0x4
    TBFontFormatting * cancelFormat; // offset 0x38, size 0x4
    TBFontFormatting * retryFormat; // offset 0x3C, size 0x4
    TBFontFormatting * yesFormat; // offset 0x40, size 0x4
    TBFontFormatting * noFormat; // offset 0x44, size 0x4
    int (* displayFilesCallback)(enum EBSaveMenuDisplayReason, TBSaveMenuFileStatus *, int, void *); // offset 0x48, size 0x4
    void * displayFilesContext; // offset 0x4C, size 0x4
    int (* displayTextCallback)(int, TBStringTableString *, const TBFontFormatting *, int, int, void *); // offset 0x50, size 0x4
    void * displayTextContext; // offset 0x54, size 0x4
    int (* statusChangeCallback)(int, void *); // offset 0x58, size 0x4
    void * statusChangeContext; // offset 0x5C, size 0x4
    unsigned int * detectSaveIDs; // offset 0x60, size 0x4
    int * detectSaveResults; // offset 0x64, size 0x4
    int detectSaveCount; // offset 0x68, size 0x4
    TBTexture * xboxIcon; // offset 0x6C, size 0x4
    int productCode; // offset 0x70, size 0x4
    void * ps2Icon; // offset 0x74, size 0x4
    int ps2IconSize; // offset 0x78, size 0x4
    TBTexture * gamecubeBanner; // offset 0x7C, size 0x4
    TBTexture * gamecubeIcon; // offset 0x80, size 0x4
    char * gameName; // offset 0x84, size 0x4
    unsigned char companyCode[2]; // offset 0x88, size 0x2
    unsigned char pad[2]; // offset 0x8A, size 0x2
    char * pspGameTitle; // offset 0x8C, size 0x4
    char * pspSaveDataTitle; // offset 0x90, size 0x4
    char * pspDetail; // offset 0x94, size 0x4
    unsigned char parentalLevel; // offset 0x98, size 0x1
    unsigned char pad2[3]; // offset 0x99, size 0x3
    unsigned char * pspIcon0; // offset 0x9C, size 0x4
    int pspIcon0Size; // offset 0xA0, size 0x4
    unsigned char * pspIcon1; // offset 0xA4, size 0x4
    int pspIcon1Size; // offset 0xA8, size 0x4
    unsigned char * pspBackground; // offset 0xAC, size 0x4
    int pspBackgroundSize; // offset 0xB0, size 0x4
    unsigned char * pspMusic; // offset 0xB4, size 0x4
    int pspMusicSize; // offset 0xB8, size 0x4
};
typedef struct _TBSaveMenuInfo TBSaveMenuInfo;
typedef struct _TBAnimKey3 TBAnimKey3;
typedef struct _TBAnimQuantisation3 TBAnimQuantisation3;
typedef struct _TBAnimKey4 TBAnimKey4;
typedef struct _TBAnimQuantisation4 TBAnimQuantisation4;
typedef struct _TBAnimKeyTarget3 TBAnimKeyTarget3;
// total size: 0x20
struct _TBAnimQuantisationTarget3 {
    // Members
    float quantBase[3]; // offset 0x0, size 0xC
    unsigned short lastKeyOffset; // offset 0xC, size 0x2
    unsigned short pad; // offset 0xE, size 0x2
    float quantScale[3]; // offset 0x10, size 0xC
    unsigned int pad2; // offset 0x1C, size 0x4
};
typedef struct _TBAnimQuantisationTarget3 TBAnimQuantisationTarget3;
typedef struct _TBAnimTrackTarget3 TBAnimTrackTarget3;
typedef struct _TBAnimState TBAnimState;
typedef struct _TBActorAnimNode TBActorAnimNode;
// total size: 0x18
struct _TBAnimSpuData {
    // Members
    void * animNodeDataList; // offset 0x0, size 0x4
    void * nodeList; // offset 0x4, size 0x4
    int noofNodes; // offset 0x8, size 0x4
    int actorFlags; // offset 0xC, size 0x4
    int frame; // offset 0x10, size 0x4
    int pad; // offset 0x14, size 0x4
};
typedef struct _TBAnimSpuData TBAnimSpuData;
// total size: 0x20
struct _TBAnimTreeSpuData {
    // Members
    void * animNodeDataList; // offset 0x0, size 0x4
    void * nodeList; // offset 0x4, size 0x4
    void * animTreeStates; // offset 0x8, size 0x4
    void * animTreeBlends; // offset 0xC, size 0x4
    int noofNodes; // offset 0x10, size 0x4
    int frame; // offset 0x14, size 0x4
    int pad[2]; // offset 0x18, size 0x8
};
typedef struct _TBAnimTreeSpuData TBAnimTreeSpuData;
// total size: 0x18
struct _TBPrepSpuData {
    // Members
    void * motionBone; // offset 0x0, size 0x4
    void * matrixPalette; // offset 0x4, size 0x4
    int noofNodes; // offset 0x8, size 0x4
    int actorFlags; // offset 0xC, size 0x4
    int matrixPaletteSize; // offset 0x10, size 0x4
    int pad; // offset 0x14, size 0x4
};
typedef struct _TBPrepSpuData TBPrepSpuData;
typedef unsigned int TBSkinVertexColour;
typedef struct _TBSoftSkinPrim TBSoftSkinPrim;
typedef struct _TBSoftSkinBatch TBSoftSkinBatch;
typedef struct _TBDLSegment TBDLSegment;
typedef struct _TBDLTextureOffset TBDLTextureOffset;
typedef struct _TBSoftSkin TBSoftSkin;
typedef struct _TBMeshPrim TBMeshPrim;
typedef struct _TBMeshBatch TBMeshBatch;
typedef struct _TBShadowVolumeFace TBShadowVolumeFace;
typedef struct _TBShadowVolumeEdge TBShadowVolumeEdge;
// total size: 0xC
struct _TDLPosition {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
typedef struct _TDLPosition TDLPosition;
// total size: 0x3
struct _TDLNormal {
    // Members
    char x; // offset 0x0, size 0x1
    char y; // offset 0x1, size 0x1
    char z; // offset 0x2, size 0x1
};
typedef struct _TDLNormal TDLNormal;
// total size: 0x8
struct _TDLTextureCoord {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
typedef struct _TDLTextureCoord TDLTextureCoord;
// total size: 0x20
struct _TDLVertexExtraIndexedPosGCUBE {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char matrixIndex[3]; // offset 0xC, size 0x3
    unsigned char normalIndex; // offset 0xF, size 0x1
    float weight[3]; // offset 0x10, size 0xC
    float pad; // offset 0x1C, size 0x4
};
typedef struct _TDLVertexExtraIndexedPosGCUBE TDLVertexExtraIndexedPosGCUBE;
// total size: 0x20
struct _TDLVertexExtraIndexedNormGCUBE {
    // Members
    float xn; // offset 0x0, size 0x4
    float yn; // offset 0x4, size 0x4
    float zn; // offset 0x8, size 0x4
    unsigned char matrixIndex[4]; // offset 0xC, size 0x4
    float weight[3]; // offset 0x10, size 0xC
    float pad; // offset 0x1C, size 0x4
};
typedef struct _TDLVertexExtraIndexedNormGCUBE TDLVertexExtraIndexedNormGCUBE;
// total size: 0x10
struct _TDLVertexExtraIndexedPosGCUBESingleBone {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char matrixIndex[4]; // offset 0xC, size 0x4
};
typedef struct _TDLVertexExtraIndexedPosGCUBESingleBone TDLVertexExtraIndexedPosGCUBESingleBone;
// total size: 0x10
struct _TDLVertexExtraIndexedNormGCUBESingleBone {
    // Members
    float xn; // offset 0x0, size 0x4
    float yn; // offset 0x4, size 0x4
    float zn; // offset 0x8, size 0x4
    unsigned char matrixIndex[4]; // offset 0xC, size 0x4
};
typedef struct _TDLVertexExtraIndexedNormGCUBESingleBone TDLVertexExtraIndexedNormGCUBESingleBone;
typedef struct _TBMesh TBMesh;
// total size: 0x8
struct _TBActRenderMode_Custom {
    // Members
    struct CBShaderFragment * shaderFragment; // offset 0x0, size 0x4
    void * context; // offset 0x4, size 0x4
};
struct CBShaderFragment {};
typedef struct _TBActRenderMode_Custom TBActRenderMode_Custom;
// total size: 0x30
struct _TBShadowVolume {
    // Members
    TBVector lightPos; // offset 0x0, size 0x10
    TBVertexBuffer * vertexBuffer; // offset 0x10, size 0x4
    int dynamic; // offset 0x14, size 0x4
    int noofVerts; // offset 0x18, size 0x4
    unsigned int flags; // offset 0x1C, size 0x4
    struct _TBActorInstance * actorInstance; // offset 0x20, size 0x4
    float xDirExtrude; // offset 0x24, size 0x4
    float yDirExtrude; // offset 0x28, size 0x4
    float zDirExtrude; // offset 0x2C, size 0x4
};
typedef struct _TBShadowVolume TBShadowVolume;
// total size: 0x14
struct _TSoftSkinRenderModeState {
    // Members
    int usingTextures1; // offset 0x0, size 0x4
    int usingTextures2; // offset 0x4, size 0x4
    int drawingOutline; // offset 0x8, size 0x4
    int needNormal; // offset 0xC, size 0x4
    int scaling; // offset 0x10, size 0x4
};
typedef struct _TSoftSkinRenderModeState TSoftSkinRenderModeState;
typedef void (* TBDrawMeshCallback)(struct _TBActorInstance *, unsigned int, TBMeshBatch *, TBMeshPrim *, int, int, TBVertexBuffer *);
typedef void (* TBDrawSoftSkinCallback)(struct _TBActorInstance *, TSoftSkinRenderModeState *, unsigned int, TBSoftSkinBatch *, TBSoftSkinPrim *, int, int, TBVertexBuffer *);
typedef struct _TDLVertexExtra TDLVertexExtra;
typedef Mtx TBMatrixGCPos;
typedef float TBMatrixGCNorm[3][3];
typedef Mtx TBMatrixGCTex;
// total size: 0x84
struct _TBMatrixGCData {
    // Members
    Mtx vertex; // offset 0x0, size 0x30
    TBMatrixGCNorm normal; // offset 0x30, size 0x24
    Mtx texture; // offset 0x54, size 0x30
};
typedef struct _TBMatrixGCData TBMatrixGCData;
typedef struct _TBActorInfo_SoftBone TBActorInfo_SoftBone;
enum BTexelLightMapFormat {
    BTEXELLIGHTMAPFORMAT_NONE = 0,
    BTEXELLIGHTMAPFORMAT_4BITMONO = 1,
    BTEXELLIGHTMAPFORMAT_8BITMONO = 2,
    BTEXELLIGHTMAPFORMAT_8BIT = 3,
    BTEXELLIGHTMAPFORMAT_16BIT = 4,
    BTEXELLIGHTMAPFORMAT_32BIT = 5,
    BTEXELLIGHTMAPFORMAT_32BIT_RED = 5,
    BTEXELLIGHTMAPFORMAT_32BIT_GREEN = 6,
    BTEXELLIGHTMAPFORMAT_32BIT_BLUE = 7,
};
enum EBAnimEventType {
    EBANIMEVENTTYPE_EVENTSTRING = 0,
    EBANIMEVENTTYPE_ACTIONLIST = 1,
};
enum EBAnimTreeNodeTypes {
    BANIMTREENODETYPE_UNUSED = 0,
    BANIMTREENODETYPE_INVALID = 1,
    BANIMTREENODETYPE_PLAYANIM = 2,
    BANIMTREENODETYPE_STATE = 3,
    BANIMTREENODETYPE_NOOF = 4,
};
// total size: 0xC
struct _TBActRenderMode_CartoonLit {
    // Members
    TBTexture * rampTexture; // offset 0x0, size 0x4
    int rampNumber; // offset 0x4, size 0x4
    struct _TBLightsource * lightsource; // offset 0x8, size 0x4
};
// total size: 0xB0
struct _TBLightsource {
    // Inner declarations
    union {
        struct _TBLightParmsDirectional directional; // offset 0x0, size 0x40
        struct _TBLightParmsPoint point; // offset 0x0, size 0x40
        struct _TBLightParmsSpot spot; // offset 0x0, size 0x40
    };

    // Members
    enum EBLightsourceTypes type; // offset 0x0, size 0x4
    struct _TBLightsource * next; // offset 0x4, size 0x4
    struct _TBLightsource * prev; // offset 0x8, size 0x4
    float specularIntensity; // offset 0xC, size 0x4
    unsigned int flags; // offset 0x10, size 0x4
    int colour[3]; // offset 0x14, size 0xC
    struct _TBLightsourceSpecInfo specInfo; // offset 0x20, size 0x48
    union {
        struct _TBLightParmsDirectional directional; // offset 0x0, size 0x40
        struct _TBLightParmsPoint point; // offset 0x0, size 0x40
        struct _TBLightParmsSpot spot; // offset 0x0, size 0x40
    }; // offset 0x70, size 0x40
};
enum EBLightsourceTypes {
    BLIGHTTYPE_INVALID = 0,
    BLIGHTTYPE_DIRECTIONAL = 1,
    BLIGHTTYPE_POINT = 2,
    BLIGHTTYPE_SPOT = 3,
    BLIGHTTYPE_FORCE32 = 2147483647,
};
// total size: 0x48
struct _TBLightsourceSpecInfo {
    // Members
    GXLightObj light; // offset 0x0, size 0x40
    int id; // offset 0x40, size 0x4
    enum EBLightColourChannel colourChannel; // offset 0x44, size 0x4
};
// total size: 0x40
struct _TBLightParmsDirectional {
    // Members
    TBVector direction; // offset 0x0, size 0x10
    TBVector unitDirection; // offset 0x10, size 0x10
    float pad[8]; // offset 0x20, size 0x20
};
// total size: 0x40
struct _TBLightParmsPoint {
    // Members
    TBVector position; // offset 0x0, size 0x10
    float attenuation; // offset 0x10, size 0x4
    float invAttenuation; // offset 0x14, size 0x4
    TBVector2D padf; // offset 0x18, size 0x8
    float pad[8]; // offset 0x20, size 0x20
};
// total size: 0x40
struct _TBLightParmsSpot {
    // Members
    TBVector position; // offset 0x0, size 0x10
    TBVector direction; // offset 0x10, size 0x10
    TBVector unitDirection; // offset 0x20, size 0x10
    float attenuation; // offset 0x30, size 0x4
    float outerCone; // offset 0x34, size 0x4
    float outerConeCos; // offset 0x38, size 0x4
    int pad1; // offset 0x3C, size 0x4
};
enum EBLightColourChannel {
    BLIGHTCOLOURCHANNEL_DEFAULT = 0,
    BLIGHTCOLOURCHANNEL_0 = 1,
    BLIGHTCOLOURCHANNEL_1 = 2,
};
typedef struct _TBActRenderMode_CartoonLit TBActRenderMode_CartoonLit;
// total size: 0x18
struct _TBActRenderMode_Outlined {
    // Members
    float thickness; // offset 0x0, size 0x4
    int r; // offset 0x4, size 0x4
    int g; // offset 0x8, size 0x4
    int b; // offset 0xC, size 0x4
    int a; // offset 0x10, size 0x4
    unsigned int alphaCtrlRef; // offset 0x14, size 0x4
};
typedef struct _TBActRenderMode_Outlined TBActRenderMode_Outlined;
// total size: 0x14
struct _TBActRenderMode_OutlinedTexture {
    // Members
    int thickness; // offset 0x0, size 0x4
    int r; // offset 0x4, size 0x4
    int g; // offset 0x8, size 0x4
    int b; // offset 0xC, size 0x4
    int a; // offset 0x10, size 0x4
};
typedef struct _TBActRenderMode_OutlinedTexture TBActRenderMode_OutlinedTexture;
// total size: 0x8
struct _TBActRenderMode_OutlinedVertexColour {
    // Members
    float thickness; // offset 0x0, size 0x4
    int a; // offset 0x4, size 0x4
};
typedef struct _TBActRenderMode_OutlinedVertexColour TBActRenderMode_OutlinedVertexColour;
// total size: 0x14
struct _TBActRenderMode_Shell {
    // Members
    float thickness; // offset 0x0, size 0x4
    int r; // offset 0x4, size 0x4
    int g; // offset 0x8, size 0x4
    int b; // offset 0xC, size 0x4
    int a; // offset 0x10, size 0x4
};
typedef struct _TBActRenderMode_Shell TBActRenderMode_Shell;
// total size: 0x10
struct _TBActRenderMode_Shadow {
    // Members
    int r; // offset 0x0, size 0x4
    int g; // offset 0x4, size 0x4
    int b; // offset 0x8, size 0x4
    int a; // offset 0xC, size 0x4
};
typedef struct _TBActRenderMode_Shadow TBActRenderMode_Shadow;
// total size: 0x14
struct _TBActRenderMode_EnvironmentMap {
    // Members
    TBTexture * mapTexture; // offset 0x0, size 0x4
    int alphaBlendMode; // offset 0x4, size 0x4
    int alphaValue; // offset 0x8, size 0x4
    int stage; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
};
typedef struct _TBActRenderMode_EnvironmentMap TBActRenderMode_EnvironmentMap;
// total size: 0x10
struct _TBActRenderMode_LineDraw {
    // Members
    int r; // offset 0x0, size 0x4
    int g; // offset 0x4, size 0x4
    int b; // offset 0x8, size 0x4
    int a; // offset 0xC, size 0x4
};
typedef struct _TBActRenderMode_LineDraw TBActRenderMode_LineDraw;
// total size: 0x4
struct _TBActRenderMode_NormalVector {
    // Members
    float length; // offset 0x0, size 0x4
};
typedef struct _TBActRenderMode_NormalVector TBActRenderMode_NormalVector;
// total size: 0x1C
struct _TBActRenderMode_AlphaEdge {
    // Members
    int min; // offset 0x0, size 0x4
    int max; // offset 0x4, size 0x4
    int method; // offset 0x8, size 0x4
    TBVector userVector; // offset 0xC, size 0x10
};
typedef struct _TBActRenderMode_AlphaEdge TBActRenderMode_AlphaEdge;
// total size: 0x5C
struct _TBStoredGeometryStreamHeader {
    // Members
    unsigned char noofComponents; // offset 0x0, size 0x1
    unsigned char streamType; // offset 0x1, size 0x1
    unsigned short recordSize; // offset 0x2, size 0x2
    unsigned char type[24]; // offset 0x4, size 0x18
    unsigned char offset[24]; // offset 0x1C, size 0x18
    unsigned char componentMap[40]; // offset 0x34, size 0x28
};
typedef struct _TBStoredGeometryStreamHeader TBStoredGeometryStreamHeader;
typedef struct _TBStoredGeometry TBStoredGeometry;
typedef struct _TBActorInfo_Mesh TBActorInfo_Mesh;
typedef struct _TBActorInfo_Link TBActorInfo_Link;
typedef struct _TBActorInfo_AsyncMesh TBActorInfo_AsyncMesh;
typedef struct _TBActorAnimEvent TBActorAnimEvent;
typedef void (* TFixupAnimationEventCallback)(TBActor *, struct _TBActorNode *, TBActorAnimEvent *);
typedef void (* TFreeAnimationEventCallback)(TBActor *, struct _TBActorNode *, TBActorAnimEvent *);
typedef void (* TPlayAnimationEventCallback)(struct _TBActorInstance *, struct _TBActorNodeInstance *, TBActorAnimEvent *, struct _TBActorAnimSegment *, int, int);
typedef struct _TBMorphHeader TBMorphHeader;
// total size: 0x20
struct _TBMorphVertex {
    // Inner declarations
    union {
        unsigned int index; // offset 0x0, size 0x4
        unsigned int offset; // offset 0x0, size 0x4
    };

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    union {
        unsigned int index; // offset 0x0, size 0x4
        unsigned int offset; // offset 0x0, size 0x4
    }; // offset 0xC, size 0x4
    float xn; // offset 0x10, size 0x4
    float yn; // offset 0x14, size 0x4
    float zn; // offset 0x18, size 0x4
    unsigned int offsetNormal; // offset 0x1C, size 0x4
};
typedef struct _TBMorphVertex TBMorphVertex;
typedef struct _TBPatchHeader TBPatchHeader;
typedef struct _TBActorNode TBActorNode;
typedef struct _TBActorAnimSegment TBActorAnimSegment;
typedef int (* TBQueuedAnimCallback)(enum EBQueueCallbackReason, struct _TBActorInstance *, TBActorAnimSegment *, void *);
typedef struct _TBQueuedAnim TBQueuedAnim;
typedef int (* TBAnimTreeCallback)(enum EBAnimTreeCallbackReason, struct _TBActorInstance *, struct _TBAnimTreeNode *, void *);
typedef struct _TBAnimTreeAnimState TBAnimTreeAnimState;
typedef struct _TBAnimTreeAnimStateNoScale TBAnimTreeAnimStateNoScale;
typedef struct _TBAnimTreeNode TBAnimTreeNode;
typedef int (* TBNodeController)(struct _TBActorInstance *, struct _TBActorNodeInstance *, void *);
typedef struct _TBActorNodeInstance TBActorNodeInstance;
typedef struct _TBActorInstance TBActorInstance;
typedef int (* TBTraverseActorNodesCallback)(TBActorInstance *, TBActorNodeInstance *, void *);
// total size: 0x10
struct TBAnimTreeDebugInfo {
    // Typedefs
    typedef struct TBAnimTreeDebugInfo ._136;

    // Members
    int noofEvalulateInstHier; // offset 0x0, size 0x4
    int noofEvalulateInstHierNodes; // offset 0x4, size 0x4
    int noofBlendInstHierNodes; // offset 0x8, size 0x4
    int noofBlendInstHier; // offset 0xC, size 0x4
};
typedef struct TBAnimTreeDebugInfo TBAnimTreeDebugInfo;
int bGlobalActorAlphaScale; // size: 0x4
int bGlobalActorAlphaOverride; // size: 0x4
Mtx44 bDefaultEnvTextureMatrix; // size: 0x40
Mtx44 bEnvTextureMatrix; // size: 0x40
int bStencilShadowCol[3]; // size: 0xC
// total size: 0xC
struct _TBActorGroupMember {
    // Members
    TBActorInstance * instance; // offset 0x0, size 0x4
    struct _TBActorGroupMember * prev; // offset 0x4, size 0x4
    struct _TBActorGroupMember * next; // offset 0x8, size 0x4
};
typedef struct _TBActorGroupMember TBActorGroupMember;
// total size: 0x8
struct _TBActorGroup {
    // Members
    TBActorGroupMember * head; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
};
typedef struct _TBActorGroup TBActorGroup;
typedef struct _TBLightsourceSpecInfo TBLightsourceSpecInfo;
typedef struct _TBLightParmsDirectional TBLightParmsDirectional;
typedef struct _TBLightParmsPoint TBLightParmsPoint;
typedef struct _TBLightParmsSpot TBLightParmsSpot;
typedef struct _TBLightsource TBLightsource;
int bNoofActiveLights; // size: 0x4
// total size: 0xC0
struct _TBExtraSystem {
    // Members
    unsigned int crc; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    struct _TBExtraSystem * next; // offset 0x8, size 0x4
    struct _TBExtraSystem * prev; // offset 0xC, size 0x4
    int maxInstances; // offset 0x10, size 0x4
    int dataSize; // offset 0x14, size 0x4
    int noofInstances; // offset 0x18, size 0x4
    int nextInstance; // offset 0x1C, size 0x4
    void (* createFunc)(struct _TBExtraSystem *, unsigned char *, struct __va_list_tag *); // offset 0x20, size 0x4
    void (* updateFunc)(struct _TBExtraSystem *, int, unsigned char * *, float); // offset 0x24, size 0x4
    int (* deleteFunc)(struct _TBExtraSystem *, unsigned char *); // offset 0x28, size 0x4
    void (* renderFunc)(struct _TBExtraSystem *, int, unsigned char * *, void *); // offset 0x2C, size 0x4
    void (* sysInitFunc)(struct _TBExtraSystem *, int); // offset 0x30, size 0x4
    int * activeFlags; // offset 0x34, size 0x4
    unsigned char * * dataPtrs; // offset 0x38, size 0x4
    unsigned char * data; // offset 0x3C, size 0x4
    unsigned char * sysData; // offset 0x40, size 0x4
    int sysDataSize; // offset 0x44, size 0x4
    int highestNoofInstances; // offset 0x48, size 0x4
    int pad1; // offset 0x4C, size 0x4
    TBVector position; // offset 0x50, size 0x10
    TBVector orientation; // offset 0x60, size 0x10
    Mtx44 systemToWorld; // offset 0x70, size 0x40
    TBActorInstance * actorAttachedTo; // offset 0xB0, size 0x4
    TBActorNodeInstance * nodeAttachedTo; // offset 0xB4, size 0x4
    int pad2; // offset 0xB8, size 0x4
    int pad3; // offset 0xBC, size 0x4
};
typedef void (* TBExtraCreateFunc)(struct _TBExtraSystem *, unsigned char *, struct __va_list_tag *);
typedef void (* TBExtraUpdateFunc)(struct _TBExtraSystem *, int, unsigned char * *, float);
typedef int (* TBExtraDeleteFunc)(struct _TBExtraSystem *, unsigned char *);
typedef void (* TBExtraRenderFunc)(struct _TBExtraSystem *, int, unsigned char * *, void *);
typedef void (* TBExtraSystemInitFunc)(struct _TBExtraSystem *, int);
typedef struct _TBExtraSystem TBExtraSystem;
// total size: 0x48
struct _TBSparkleInstanceData {
    // Members
    TBVector position; // offset 0x0, size 0x10
    TBVector velocity; // offset 0x10, size 0x10
    TBVector acceleration; // offset 0x20, size 0x10
    short r; // offset 0x30, size 0x2
    short g; // offset 0x32, size 0x2
    short b; // offset 0x34, size 0x2
    short a; // offset 0x36, size 0x2
    int aDelta; // offset 0x38, size 0x4
    float size; // offset 0x3C, size 0x4
    float sizeDelta; // offset 0x40, size 0x4
    TBTexture * texture; // offset 0x44, size 0x4
};
typedef struct _TBSparkleInstanceData TBSparkleInstanceData;
// total size: 0x4
struct _TBSparkleSystemData {
    // Members
    TBVertexBuffer * vertexBuffer; // offset 0x0, size 0x4
};
typedef struct _TBSparkleSystemData TBSparkleSystemData;
// total size: 0x30
struct _TBSetRegCellHAL {
    // Members
    TBVertexBuffer * vertBuffer; // offset 0x0, size 0x4
    int * outCodes; // offset 0x4, size 0x4
    unsigned int totalVertices; // offset 0x8, size 0x4
    unsigned int pad; // offset 0xC, size 0x4
    TBDLSegment * displaySegments; // offset 0x10, size 0x4
    unsigned char * displayList; // offset 0x14, size 0x4
    unsigned int vertexType; // offset 0x18, size 0x4
    unsigned int pad2; // offset 0x1C, size 0x4
    unsigned char * positionData; // offset 0x20, size 0x4
    unsigned char * normalData; // offset 0x24, size 0x4
    unsigned char * textureCoordData; // offset 0x28, size 0x4
    unsigned char * colourData; // offset 0x2C, size 0x4
};
typedef struct _TBSetRegCellHAL TBSetRegCellHAL;
// total size: 0x18
struct _TBRegCellPrim {
    // Members
    int type; // offset 0x0, size 0x4
    TBTexture * texture; // offset 0x4, size 0x4
    int noofPrimVerts; // offset 0x8, size 0x4
    unsigned short noofVerts; // offset 0xC, size 0x2
    unsigned short flags; // offset 0xE, size 0x2
    TBTexture * texture2; // offset 0x10, size 0x4
    unsigned int pad; // offset 0x14, size 0x4
};
typedef struct _TBRegCellPrim TBRegCellPrim;
// total size: 0x40
struct _TBRegCell {
    // Members
    int noofPrims; // offset 0x0, size 0x4
    int noofVerts; // offset 0x4, size 0x4
    TBRegCellPrim * prims; // offset 0x8, size 0x4
    int firstVert; // offset 0xC, size 0x4
    int noofSolidPrims; // offset 0x10, size 0x4
    int noofCKeyPrims; // offset 0x14, size 0x4
    int noofAlphaPrims; // offset 0x18, size 0x4
    int firstCKeyVert; // offset 0x1C, size 0x4
    int firstAlphaVert; // offset 0x20, size 0x4
    unsigned int pad1; // offset 0x24, size 0x4
    unsigned int pad2; // offset 0x28, size 0x4
    unsigned int pad3; // offset 0x2C, size 0x4
    unsigned int pad4; // offset 0x30, size 0x4
    unsigned int pad5; // offset 0x34, size 0x4
    unsigned int pad6; // offset 0x38, size 0x4
    unsigned int pad7; // offset 0x3C, size 0x4
};
typedef struct _TBRegCell TBRegCell;
// total size: 0xB0
struct _TBSetRegCells {
    // Members
    TBSet setInfo; // offset 0x0, size 0x50
    int xNoofCells; // offset 0x50, size 0x4
    int yNoofCells; // offset 0x54, size 0x4
    int zNoofCells; // offset 0x58, size 0x4
    float xBoundMin; // offset 0x5C, size 0x4
    float xBoundMax; // offset 0x60, size 0x4
    float yBoundMin; // offset 0x64, size 0x4
    float yBoundMax; // offset 0x68, size 0x4
    float zBoundMin; // offset 0x6C, size 0x4
    float zBoundMax; // offset 0x70, size 0x4
    TBRegCell * cells; // offset 0x74, size 0x4
    unsigned int flags; // offset 0x78, size 0x4
    unsigned int pad2; // offset 0x7C, size 0x4
    TBSetRegCellHAL hal; // offset 0x80, size 0x30
};
typedef struct _TBSetRegCells TBSetRegCells;
enum EBCameraCtrlMode {
    BCAMERACTRL_POSITION = 0,
    BCAMERACTRL_TRACKING_POSITION = 1,
    BCAMERACTRL_ACTOR = 2,
    BCAMERACTRL_QUATERNION = 3,
    BCAMERACTRL_TRACKING_QUATERNION = 4,
    BCAMERACTRL_EULER = 5,
    BCAMERACTRL_TRACKING_EULER = 6,
    BCAMERACTRL_CUSTOM = 7,
};
// total size: 0x10
struct _TBCameraInstanceControlStatic {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float roll; // offset 0xC, size 0x4
};
typedef struct _TBCameraInstanceControlStatic TBCameraInstanceControlStatic;
// total size: 0x8
struct _TBCameraInstanceControlVector {
    // Members
    float * vector; // offset 0x0, size 0x4
    float roll; // offset 0x4, size 0x4
};
typedef struct _TBCameraInstanceControlVector TBCameraInstanceControlVector;
// total size: 0x18
struct _TBCameraInstanceControlActor {
    // Members
    TBActorInstance * actorInstance; // offset 0x0, size 0x4
    TBActorNodeInstance * nodeInstance; // offset 0x4, size 0x4
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float z; // offset 0x10, size 0x4
    float roll; // offset 0x14, size 0x4
};
typedef struct _TBCameraInstanceControlActor TBCameraInstanceControlActor;
// total size: 0x10
struct _TBCameraInstanceControlQuaternion {
    // Members
    TBVector quaternion; // offset 0x0, size 0x10
};
typedef struct _TBCameraInstanceControlQuaternion TBCameraInstanceControlQuaternion;
// total size: 0x4
struct _TBCameraInstanceControlTQuaternion {
    // Members
    float * quaternion; // offset 0x0, size 0x4
};
typedef struct _TBCameraInstanceControlTQuaternion TBCameraInstanceControlTQuaternion;
// total size: 0x10
struct _TBCameraInstanceControlEuler {
    // Members
    float xr; // offset 0x0, size 0x4
    float yr; // offset 0x4, size 0x4
    float zr; // offset 0x8, size 0x4
    enum EBViewportRotationOrder order; // offset 0xC, size 0x4
};
typedef struct _TBCameraInstanceControlEuler TBCameraInstanceControlEuler;
// total size: 0x8
struct _TBCameraInstanceControlTEuler {
    // Members
    float * angle; // offset 0x0, size 0x4
    enum EBViewportRotationOrder order; // offset 0x4, size 0x4
};
typedef struct _TBCameraInstanceControlTEuler TBCameraInstanceControlTEuler;
typedef void (* TBCameraInstanceCallback)(float *, float *, void *);
// total size: 0x8
struct _TBCameraInstanceControlCustom {
    // Members
    void (* callback)(float *, float *, void *); // offset 0x0, size 0x4
    void * context; // offset 0x4, size 0x4
};
typedef struct _TBCameraInstanceControlCustom TBCameraInstanceControlCustom;
// total size: 0x20
struct _TBCameraInstanceControl {
    // Inner declarations
    union {
        TBCameraInstanceControlStatic staticParms; // offset 0x0, size 0x10
        TBCameraInstanceControlVector vectorParms; // offset 0x0, size 0x8
        TBCameraInstanceControlActor actorParms; // offset 0x0, size 0x18
        TBCameraInstanceControlQuaternion quaternionParms; // offset 0x0, size 0x10
        TBCameraInstanceControlTQuaternion tQuaternionParms; // offset 0x0, size 0x4
        TBCameraInstanceControlEuler eulerParms; // offset 0x0, size 0x10
        TBCameraInstanceControlTEuler tEulerParms; // offset 0x0, size 0x8
        TBCameraInstanceControlCustom customParms; // offset 0x0, size 0x8
        char pad[28]; // offset 0x0, size 0x1C
    };

    // Members
    union {
        TBCameraInstanceControlStatic staticParms; // offset 0x0, size 0x10
        TBCameraInstanceControlVector vectorParms; // offset 0x0, size 0x8
        TBCameraInstanceControlActor actorParms; // offset 0x0, size 0x18
        TBCameraInstanceControlQuaternion quaternionParms; // offset 0x0, size 0x10
        TBCameraInstanceControlTQuaternion tQuaternionParms; // offset 0x0, size 0x4
        TBCameraInstanceControlEuler eulerParms; // offset 0x0, size 0x10
        TBCameraInstanceControlTEuler tEulerParms; // offset 0x0, size 0x8
        TBCameraInstanceControlCustom customParms; // offset 0x0, size 0x8
        char pad[28]; // offset 0x0, size 0x1C
    }; // offset 0x0, size 0x1C
    enum EBCameraCtrlMode ctrlMode; // offset 0x1C, size 0x4
};
typedef struct _TBCameraInstanceControl TBCameraInstanceControl;
// total size: 0x60
struct _TBCameraInstance {
    // Members
    TBCameraInstanceControl source; // offset 0x0, size 0x20
    TBCameraInstanceControl target; // offset 0x20, size 0x20
    unsigned int flags; // offset 0x40, size 0x4
    UBContext32 context; // offset 0x44, size 0x4
    float xFov; // offset 0x48, size 0x4
    float yFov; // offset 0x4C, size 0x4
    float nearClip; // offset 0x50, size 0x4
    float farClip; // offset 0x54, size 0x4
    struct _TBCameraInstance * next; // offset 0x58, size 0x4
    struct _TBCameraInstance * prev; // offset 0x5C, size 0x4
};
typedef struct _TBCameraInstance TBCameraInstance;
// total size: 0x60
struct MIXChannel {
    // Members
    AXVPB * axvpb; // offset 0x0, size 0x4
    unsigned int mode; // offset 0x4, size 0x4
    int input; // offset 0x8, size 0x4
    int auxA; // offset 0xC, size 0x4
    int auxB; // offset 0x10, size 0x4
    int pan; // offset 0x14, size 0x4
    int span; // offset 0x18, size 0x4
    int fader; // offset 0x1C, size 0x4
    int l; // offset 0x20, size 0x4
    int r; // offset 0x24, size 0x4
    int f; // offset 0x28, size 0x4
    int b; // offset 0x2C, size 0x4
    int l1; // offset 0x30, size 0x4
    int r1; // offset 0x34, size 0x4
    unsigned short v; // offset 0x38, size 0x2
    unsigned short v1; // offset 0x3A, size 0x2
    unsigned short vL; // offset 0x3C, size 0x2
    unsigned short vL1; // offset 0x3E, size 0x2
    unsigned short vR; // offset 0x40, size 0x2
    unsigned short vR1; // offset 0x42, size 0x2
    unsigned short vS; // offset 0x44, size 0x2
    unsigned short vS1; // offset 0x46, size 0x2
    unsigned short vAL; // offset 0x48, size 0x2
    unsigned short vAL1; // offset 0x4A, size 0x2
    unsigned short vAR; // offset 0x4C, size 0x2
    unsigned short vAR1; // offset 0x4E, size 0x2
    unsigned short vAS; // offset 0x50, size 0x2
    unsigned short vAS1; // offset 0x52, size 0x2
    unsigned short vBL; // offset 0x54, size 0x2
    unsigned short vBL1; // offset 0x56, size 0x2
    unsigned short vBR; // offset 0x58, size 0x2
    unsigned short vBR1; // offset 0x5A, size 0x2
    unsigned short vBS; // offset 0x5C, size 0x2
    unsigned short vBS1; // offset 0x5E, size 0x2
};
typedef struct MIXChannel MIXChannel;
// total size: 0x8
struct AXART_ART {
    // Typedefs
    typedef struct AXART_ART ._141;

    // Members
    void * next; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
};
typedef struct AXART_ART AXART_ART;
// total size: 0x20
struct AXART_LFO {
    // Typedefs
    typedef struct AXART_LFO ._142;

    // Members
    float * lfo; // offset 0x0, size 0x4
    unsigned int length; // offset 0x4, size 0x4
    float delta; // offset 0x8, size 0x4
    unsigned int sampleIndex; // offset 0xC, size 0x4
    float counter; // offset 0x10, size 0x4
    float sample1; // offset 0x14, size 0x4
    float sample; // offset 0x18, size 0x4
    float output; // offset 0x1C, size 0x4
};
typedef struct AXART_LFO AXART_LFO;
// total size: 0x2C
struct AXART_3D {
    // Typedefs
    typedef struct AXART_3D ._143;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    float hAngle; // offset 0x8, size 0x4
    float vAngle; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    float closingSpeed; // offset 0x14, size 0x4
    unsigned int update; // offset 0x18, size 0x4
    unsigned char pan; // offset 0x1C, size 0x1
    unsigned char span; // offset 0x1D, size 0x1
    unsigned char src; // offset 0x1E, size 0x1
    unsigned short itdL; // offset 0x20, size 0x2
    unsigned short itdR; // offset 0x22, size 0x2
    float pitch; // offset 0x24, size 0x4
    int attenuation; // offset 0x28, size 0x4
};
typedef struct AXART_3D AXART_3D;
// total size: 0xC
struct AXART_PANNING {
    // Typedefs
    typedef struct AXART_PANNING ._144;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    unsigned char pan; // offset 0x8, size 0x1
    unsigned char span; // offset 0x9, size 0x1
};
typedef struct AXART_PANNING AXART_PANNING;
// total size: 0xC
struct AXART_SRCTYPE {
    // Typedefs
    typedef struct AXART_SRCTYPE ._145;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    unsigned char src; // offset 0x8, size 0x1
};
typedef struct AXART_SRCTYPE AXART_SRCTYPE;
// total size: 0xC
struct AXART_ITD {
    // Typedefs
    typedef struct AXART_ITD ._146;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    unsigned short itdL; // offset 0x8, size 0x2
    unsigned short itdR; // offset 0xA, size 0x2
};
typedef struct AXART_ITD AXART_ITD;
// total size: 0xC
struct AXART_PITCH {
    // Typedefs
    typedef struct AXART_PITCH ._147;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int cents; // offset 0x8, size 0x4
};
typedef struct AXART_PITCH AXART_PITCH;
// total size: 0x14
struct AXART_PITCH_ENV {
    // Typedefs
    typedef struct AXART_PITCH_ENV ._148;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int delta; // offset 0x8, size 0x4
    int target; // offset 0xC, size 0x4
    int cents; // offset 0x10, size 0x4
};
typedef struct AXART_PITCH_ENV AXART_PITCH_ENV;
// total size: 0x2C
struct AXART_PITCH_MOD {
    // Typedefs
    typedef struct AXART_PITCH_MOD ._149;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    AXART_LFO lfo; // offset 0x8, size 0x20
    int cents; // offset 0x28, size 0x4
};
typedef struct AXART_PITCH_MOD AXART_PITCH_MOD;
// total size: 0xC
struct AXART_VOLUME {
    // Typedefs
    typedef struct AXART_VOLUME ._150;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int attenuation; // offset 0x8, size 0x4
};
typedef struct AXART_VOLUME AXART_VOLUME;
// total size: 0xC
struct AXART_AUXA_VOLUME {
    // Typedefs
    typedef struct AXART_AUXA_VOLUME ._151;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int attenuation; // offset 0x8, size 0x4
};
typedef struct AXART_AUXA_VOLUME AXART_AUXA_VOLUME;
// total size: 0xC
struct AXART_AUXB_VOLUME {
    // Typedefs
    typedef struct AXART_AUXB_VOLUME ._152;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int attenuation; // offset 0x8, size 0x4
};
typedef struct AXART_AUXB_VOLUME AXART_AUXB_VOLUME;
// total size: 0x14
struct AXART_VOLUME_ENV {
    // Typedefs
    typedef struct AXART_VOLUME_ENV ._153;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int delta; // offset 0x8, size 0x4
    int target; // offset 0xC, size 0x4
    int attenuation; // offset 0x10, size 0x4
};
typedef struct AXART_VOLUME_ENV AXART_VOLUME_ENV;
// total size: 0x14
struct AXART_AUXA_VOLUME_ENV {
    // Typedefs
    typedef struct AXART_AUXA_VOLUME_ENV ._154;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int delta; // offset 0x8, size 0x4
    int target; // offset 0xC, size 0x4
    int attenuation; // offset 0x10, size 0x4
};
typedef struct AXART_AUXA_VOLUME_ENV AXART_AUXA_VOLUME_ENV;
// total size: 0x14
struct AXART_AUXB_VOLUME_ENV {
    // Typedefs
    typedef struct AXART_AUXB_VOLUME_ENV ._155;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int delta; // offset 0x8, size 0x4
    int target; // offset 0xC, size 0x4
    int attenuation; // offset 0x10, size 0x4
};
typedef struct AXART_AUXB_VOLUME_ENV AXART_AUXB_VOLUME_ENV;
// total size: 0x2C
struct AXART_VOLUME_MOD {
    // Typedefs
    typedef struct AXART_VOLUME_MOD ._156;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    AXART_LFO lfo; // offset 0x8, size 0x20
    int attenuation; // offset 0x28, size 0x4
};
typedef struct AXART_VOLUME_MOD AXART_VOLUME_MOD;
// total size: 0x2C
struct AXART_AUXA_VOLUME_MOD {
    // Typedefs
    typedef struct AXART_AUXA_VOLUME_MOD ._157;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    AXART_LFO lfo; // offset 0x8, size 0x20
    int attenuation; // offset 0x28, size 0x4
};
typedef struct AXART_AUXA_VOLUME_MOD AXART_AUXA_VOLUME_MOD;
// total size: 0x2C
struct AXART_AUXB_VOLUME_MOD {
    // Typedefs
    typedef struct AXART_AUXB_VOLUME_MOD ._158;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    AXART_LFO lfo; // offset 0x8, size 0x20
    int attenuation; // offset 0x28, size 0x4
};
typedef struct AXART_AUXB_VOLUME_MOD AXART_AUXB_VOLUME_MOD;
// total size: 0x14
struct AXART_LPF {
    // Typedefs
    typedef struct AXART_LPF ._159;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    unsigned int initLPF; // offset 0x8, size 0x4
    unsigned int frequency; // offset 0xC, size 0x4
    unsigned int update; // offset 0x10, size 0x4
};
typedef struct AXART_LPF AXART_LPF;
// total size: 0x14
struct AXART_SOUND {
    // Typedefs
    typedef struct AXART_SOUND ._160;

    // Members
    void * next; // offset 0x0, size 0x4
    void * prev; // offset 0x4, size 0x4
    AXVPB * axvpb; // offset 0x8, size 0x4
    float sampleRate; // offset 0xC, size 0x4
    AXART_ART * articulators; // offset 0x10, size 0x4
};
typedef struct AXART_SOUND AXART_SOUND;
typedef void * (* AXFXAlloc)(unsigned long);
typedef void (* AXFXFree)(void *);
// total size: 0xC
struct AXFX_BUFFERUPDATE {
    // Members
    long * left; // offset 0x0, size 0x4
    long * right; // offset 0x4, size 0x4
    long * surround; // offset 0x8, size 0x4
};
typedef struct AXFX_BUFFERUPDATE AXFX_BUFFERUPDATE;
// total size: 0x10
struct AXFX_BUFFERUPDATE_DPL2 {
    // Members
    long * L; // offset 0x0, size 0x4
    long * R; // offset 0x4, size 0x4
    long * Ls; // offset 0x8, size 0x4
    long * Rs; // offset 0xC, size 0x4
};
typedef struct AXFX_BUFFERUPDATE_DPL2 AXFX_BUFFERUPDATE_DPL2;
// total size: 0x14
struct AXFX_REVHI_DELAYLINE {
    // Members
    int inPoint; // offset 0x0, size 0x4
    int outPoint; // offset 0x4, size 0x4
    int length; // offset 0x8, size 0x4
    float * inputs; // offset 0xC, size 0x4
    float lastOutput; // offset 0x10, size 0x4
};
typedef struct AXFX_REVHI_DELAYLINE AXFX_REVHI_DELAYLINE;
// total size: 0x1C4
struct AXFX_REVHI_WORK {
    // Members
    AXFX_REVHI_DELAYLINE AP[9]; // offset 0x0, size 0xB4
    AXFX_REVHI_DELAYLINE C[9]; // offset 0xB4, size 0xB4
    float allPassCoeff; // offset 0x168, size 0x4
    float combCoef[9]; // offset 0x16C, size 0x24
    float lpLastout[3]; // offset 0x190, size 0xC
    float level; // offset 0x19C, size 0x4
    float damping; // offset 0x1A0, size 0x4
    int preDelayTime; // offset 0x1A4, size 0x4
    float crosstalk; // offset 0x1A8, size 0x4
    float * preDelayLine[3]; // offset 0x1AC, size 0xC
    float * preDelayPtr[3]; // offset 0x1B8, size 0xC
};
typedef struct AXFX_REVHI_WORK AXFX_REVHI_WORK;
// total size: 0x1E0
struct AXFX_REVERBHI {
    // Members
    AXFX_REVHI_WORK rv; // offset 0x0, size 0x1C4
    unsigned char tempDisableFX; // offset 0x1C4, size 0x1
    float coloration; // offset 0x1C8, size 0x4
    float mix; // offset 0x1CC, size 0x4
    float time; // offset 0x1D0, size 0x4
    float damping; // offset 0x1D4, size 0x4
    float preDelay; // offset 0x1D8, size 0x4
    float crosstalk; // offset 0x1DC, size 0x4
};
typedef struct AXFX_REVERBHI AXFX_REVERBHI;
// total size: 0x254
struct AXFX_REVHI_WORK_DPL2 {
    // Members
    AXFX_REVHI_DELAYLINE AP[12]; // offset 0x0, size 0xF0
    AXFX_REVHI_DELAYLINE C[12]; // offset 0xF0, size 0xF0
    float allPassCoeff; // offset 0x1E0, size 0x4
    float combCoef[12]; // offset 0x1E4, size 0x30
    TBVector lpLastout; // offset 0x214, size 0x10
    float level; // offset 0x224, size 0x4
    float damping; // offset 0x228, size 0x4
    int preDelayTime; // offset 0x22C, size 0x4
    float crosstalk; // offset 0x230, size 0x4
    float * preDelayLine[4]; // offset 0x234, size 0x10
    float * preDelayPtr[4]; // offset 0x244, size 0x10
};
typedef struct AXFX_REVHI_WORK_DPL2 AXFX_REVHI_WORK_DPL2;
// total size: 0x26C
struct AXFX_REVERBHI_DPL2 {
    // Members
    AXFX_REVHI_WORK_DPL2 rv; // offset 0x0, size 0x254
    unsigned char tempDisableFX; // offset 0x254, size 0x1
    float coloration; // offset 0x258, size 0x4
    float mix; // offset 0x25C, size 0x4
    float time; // offset 0x260, size 0x4
    float damping; // offset 0x264, size 0x4
    float preDelay; // offset 0x268, size 0x4
};
typedef struct AXFX_REVERBHI_DPL2 AXFX_REVERBHI_DPL2;
// total size: 0x14
struct AXFX_REVSTD_DELAYLINE {
    // Members
    int inPoint; // offset 0x0, size 0x4
    int outPoint; // offset 0x4, size 0x4
    int length; // offset 0x8, size 0x4
    float * inputs; // offset 0xC, size 0x4
    float lastOutput; // offset 0x10, size 0x4
};
typedef struct AXFX_REVSTD_DELAYLINE AXFX_REVSTD_DELAYLINE;
// total size: 0x13C
struct AXFX_REVSTD_WORK {
    // Members
    AXFX_REVSTD_DELAYLINE AP[6]; // offset 0x0, size 0x78
    AXFX_REVSTD_DELAYLINE C[6]; // offset 0x78, size 0x78
    float allPassCoeff; // offset 0xF0, size 0x4
    float combCoef[6]; // offset 0xF4, size 0x18
    float lpLastout[3]; // offset 0x10C, size 0xC
    float level; // offset 0x118, size 0x4
    float damping; // offset 0x11C, size 0x4
    int preDelayTime; // offset 0x120, size 0x4
    float * preDelayLine[3]; // offset 0x124, size 0xC
    float * preDelayPtr[3]; // offset 0x130, size 0xC
};
typedef struct AXFX_REVSTD_WORK AXFX_REVSTD_WORK;
// total size: 0x154
struct AXFX_REVERBSTD {
    // Members
    AXFX_REVSTD_WORK rv; // offset 0x0, size 0x13C
    unsigned char tempDisableFX; // offset 0x13C, size 0x1
    float coloration; // offset 0x140, size 0x4
    float mix; // offset 0x144, size 0x4
    float time; // offset 0x148, size 0x4
    float damping; // offset 0x14C, size 0x4
    float preDelay; // offset 0x150, size 0x4
};
typedef struct AXFX_REVERBSTD AXFX_REVERBSTD;
// total size: 0x60
struct AXFX_DELAY {
    // Members
    unsigned long currentSize[3]; // offset 0x0, size 0xC
    unsigned long currentPos[3]; // offset 0xC, size 0xC
    unsigned long currentFeedback[3]; // offset 0x18, size 0xC
    unsigned long currentOutput[3]; // offset 0x24, size 0xC
    long * left; // offset 0x30, size 0x4
    long * right; // offset 0x34, size 0x4
    long * sur; // offset 0x38, size 0x4
    unsigned long delay[3]; // offset 0x3C, size 0xC
    unsigned long feedback[3]; // offset 0x48, size 0xC
    unsigned long output[3]; // offset 0x54, size 0xC
};
typedef struct AXFX_DELAY AXFX_DELAY;
// total size: 0x24
struct AXFX_CHORUS_SRCINFO {
    // Members
    long * dest; // offset 0x0, size 0x4
    long * smpBase; // offset 0x4, size 0x4
    long * old; // offset 0x8, size 0x4
    unsigned int posLo; // offset 0xC, size 0x4
    unsigned int posHi; // offset 0x10, size 0x4
    unsigned int pitchLo; // offset 0x14, size 0x4
    unsigned int pitchHi; // offset 0x18, size 0x4
    unsigned int trigger; // offset 0x1C, size 0x4
    unsigned int target; // offset 0x20, size 0x4
};
typedef struct AXFX_CHORUS_SRCINFO AXFX_CHORUS_SRCINFO;
// total size: 0x90
struct AXFX_CHORUS_WORK {
    // Members
    long * lastLeft[3]; // offset 0x0, size 0xC
    long * lastRight[3]; // offset 0xC, size 0xC
    long * lastSur[3]; // offset 0x18, size 0xC
    unsigned char currentLast; // offset 0x24, size 0x1
    long oldLeft[4]; // offset 0x28, size 0x10
    long oldRight[4]; // offset 0x38, size 0x10
    long oldSur[4]; // offset 0x48, size 0x10
    unsigned int currentPosLo; // offset 0x58, size 0x4
    unsigned int currentPosHi; // offset 0x5C, size 0x4
    int pitchOffset; // offset 0x60, size 0x4
    unsigned int pitchOffsetPeriodCount; // offset 0x64, size 0x4
    unsigned int pitchOffsetPeriod; // offset 0x68, size 0x4
    AXFX_CHORUS_SRCINFO src; // offset 0x6C, size 0x24
};
typedef struct AXFX_CHORUS_WORK AXFX_CHORUS_WORK;
// total size: 0x9C
struct AXFX_CHORUS {
    // Members
    AXFX_CHORUS_WORK work; // offset 0x0, size 0x90
    unsigned int baseDelay; // offset 0x90, size 0x4
    unsigned int variation; // offset 0x94, size 0x4
    unsigned int period; // offset 0x98, size 0x4
};
typedef struct AXFX_CHORUS AXFX_CHORUS;
typedef struct _TARAMBlock TARAMBlock;
typedef struct _TBARAMHeap TBARAMHeap;
// total size: 0x74
struct _TBSoundChannelInfoHAL {
    // Members
    AXVPB * soundBuffer; // offset 0x0, size 0x4
    AXART_SOUND axartSound; // offset 0x4, size 0x14
    AXART_3D axart3d; // offset 0x18, size 0x2C
    AXART_PITCH axartPitch; // offset 0x44, size 0xC
    AXART_VOLUME axartVolume; // offset 0x50, size 0xC
    AXART_AUXA_VOLUME axartAuxAVolume; // offset 0x5C, size 0xC
    AXART_AUXB_VOLUME axartAuxBVolume; // offset 0x68, size 0xC
};
typedef struct _TBSoundChannelInfoHAL TBSoundChannelInfoHAL;
typedef struct _TBADPCMHeader TBADPCMHeader;
typedef struct _TBSampleHAL TBSampleHAL;
enum EBSoundMode {
    BSSOUNDMODE_MONO = 0,
    BSSOUNDMODE_STEREO = 1,
    BSSOUNDMODE_SURROUND = 2,
    BSSOUNDMODE_NOOF = 3,
};
// total size: 0x10
struct TBSoundInfo {
    // Members
    int valid; // offset 0x0, size 0x4
    int support3DSound; // offset 0x4, size 0x4
    enum EBSoundMode soundMode; // offset 0x8, size 0x4
    int DSPRate; // offset 0xC, size 0x4
};
typedef struct TBSoundInfo TBSoundInfo;
// total size: 0x10
struct TBGlobalReverbSetting {
    // Members
    int reverbType; // offset 0x0, size 0x4
    int level; // offset 0x4, size 0x4
    int delay; // offset 0x8, size 0x4
    int feedback; // offset 0xC, size 0x4
};
typedef struct TBGlobalReverbSetting TBGlobalReverbSetting;
// total size: 0x10
struct TBGlobalDelaySetting {
    // Members
    int level; // offset 0x0, size 0x4
    float delayInMs; // offset 0x4, size 0x4
    int output; // offset 0x8, size 0x4
    int feedback; // offset 0xC, size 0x4
};
typedef struct TBGlobalDelaySetting TBGlobalDelaySetting;
typedef void (* TBAudioStreamCallback)(TBAudioStream *, enum EBSoundStreamCallbackReason, void *, void *);
typedef struct _TBAudioStreamMarkerBase TBAudioStreamMarkerBase;
typedef struct _TBAudioStreamMarker TBAudioStreamMarker;
// total size: 0x64
struct _TAudioStreamHeaderBase {
    // Members
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    TBPackageIndex * package; // offset 0x20, size 0x4
    unsigned int pakOffset; // offset 0x24, size 0x4
    float durationMs; // offset 0x28, size 0x4
    enum EBSoundStreamType type; // offset 0x2C, size 0x4
    int noofSamples; // offset 0x30, size 0x4
    int noofActualSamples; // offset 0x34, size 0x4
    int originalFrequency; // offset 0x38, size 0x4
    unsigned int originalFlags; // offset 0x3C, size 0x4
    int * markers; // offset 0x40, size 0x4
    TBAudioStreamMarker * markersEx; // offset 0x44, size 0x4
    unsigned short noofMarkers; // offset 0x48, size 0x2
    unsigned short noofMarkersEx; // offset 0x4A, size 0x2
    unsigned short noofBlocks; // offset 0x4C, size 0x2
    char noofStreams; // offset 0x4E, size 0x1
    char bitDepth; // offset 0x4F, size 0x1
    struct _TBActiveAudioStream * work; // offset 0x50, size 0x4
    unsigned char noofChannels[4]; // offset 0x54, size 0x4
    unsigned char firstChannel[4]; // offset 0x58, size 0x4
    int noofTotalChannels; // offset 0x5C, size 0x4
    unsigned int savedPlaybackPosition; // offset 0x60, size 0x4
};
struct _TBActiveAudioStream {};
typedef struct _TAudioStreamHeaderBase TAudioStreamHeaderBase;
// total size: 0x88
struct _TBActiveAudioStreamBase {
    // Members
    TBAudioStream * babelStream; // offset 0x0, size 0x4
    TBRingBuffer * ringBuffer; // offset 0x4, size 0x4
    void (* callback)(TBAudioStream *, enum EBSoundStreamCallbackReason, void *, void *); // offset 0x8, size 0x4
    void * context; // offset 0xC, size 0x4
    enum EBSoundStreamStatus status; // offset 0x10, size 0x4
    int frequency; // offset 0x14, size 0x4
    unsigned int flags; // offset 0x18, size 0x4
    int backgroundChannel; // offset 0x1C, size 0x4
    float prevCursorPos; // offset 0x20, size 0x4
    float cursorPos; // offset 0x24, size 0x4
    unsigned long long lastUpdateTime; // offset 0x28, size 0x8
    int nextMarkerEx; // offset 0x30, size 0x4
    int voiceSize; // offset 0x34, size 0x4
    int blockSize; // offset 0x38, size 0x4
    int streamSize; // offset 0x3C, size 0x4
    unsigned int streamNumber; // offset 0x40, size 0x4
    int volume[4]; // offset 0x44, size 0x10
    int pan[4]; // offset 0x54, size 0x10
    struct _TBSoundChannelInfo * soundChannel[8]; // offset 0x64, size 0x20
};
// total size: 0xE0
struct _TBSoundChannelInfo {
    // Members
    TBVector position; // offset 0x0, size 0x10
    TBVector oldPosition; // offset 0x10, size 0x10
    enum EBSoundChannelStatus status; // offset 0x20, size 0x4
    TBSample * sample; // offset 0x24, size 0x4
    float * positionPtr; // offset 0x28, size 0x4
    void (* trackingCallback)(float *, int, void *); // offset 0x2C, size 0x4
    void * trackingContext; // offset 0x30, size 0x4
    unsigned int flags; // offset 0x34, size 0x4
    unsigned short volume; // offset 0x38, size 0x2
    unsigned short clientVolume; // offset 0x3A, size 0x2
    unsigned short positionalFactor; // offset 0x3C, size 0x2
    short pan; // offset 0x3E, size 0x2
    float minPitchShift; // offset 0x40, size 0x4
    float maxPitchShift; // offset 0x44, size 0x4
    int frequency; // offset 0x48, size 0x4
    int actualFrequency; // offset 0x4C, size 0x4
    float maxSoundDistance; // offset 0x50, size 0x4
    float minSoundDistance; // offset 0x54, size 0x4
    unsigned int playFlags; // offset 0x58, size 0x4
    unsigned long long timeStarted; // offset 0x60, size 0x8
    TBSoundChannelInfoHAL hal; // offset 0x68, size 0x74
};
enum EBSoundChannelStatus {
    BSCHSTATUS_IDLE = 0,
    BSCHSTATUS_PLAYING = 1,
    BSCHSTATUS_PAUSED = 2,
};
typedef struct _TBActiveAudioStreamBase TBActiveAudioStreamBase;
typedef struct _TBAudioStreamBuffer TBAudioStreamBuffer;
enum EBReverbType {
    BSREVERBTYPE_NONE = 0,
    BSREVERBTYPE_DEFAULT = 1,
    BSREVERBTYPE_GENERIC = 2,
    BSREVERBTYPE_ROOM = 3,
    BSREVERBTYPE_STUDIO_A = 4,
    BSREVERBTYPE_STUDIO_B = 5,
    BSREVERBTYPE_STUDIO_C = 6,
    BSREVERBTYPE_HALL = 7,
    BSREVERBTYPE_SPACE = 8,
    BSREVERBTYPE_ECHO = 9,
    BSREVERBTYPE_DELAY = 10,
    BSREVERBTYPE_PIPE = 11,
    BSREVERBTYPE_PADDEDCELL = 12,
    BSREVERBTYPE_BATHROOM = 13,
    BSREVERBTYPE_LIVINGROOM = 14,
    BSREVERBTYPE_STONEROOM = 15,
    BSREVERBTYPE_AUDITORIUM = 16,
    BSREVERBTYPE_CONCERTHALL = 17,
    BSREVERBTYPE_CAVE = 18,
    BSREVERBTYPE_ARENA = 19,
    BSREVERBTYPE_HANGAR = 20,
    BSREVERBTYPE_HALLWAY = 21,
    BSREVERBTYPE_CARPETEDHALLWAY = 22,
    BSREVERBTYPE_STONECORRIDOR = 23,
    BSREVERBTYPE_ALLEY = 24,
    BSREVERBTYPE_FOREST = 25,
    BSREVERBTYPE_CITY = 26,
    BSREVERBTYPE_MOUNTAINS = 27,
    BSREVERBTYPE_QUARRY = 28,
    BSREVERBTYPE_PLAIN = 29,
    BSREVERBTYPE_PARKINGLOT = 30,
    BSREVERBTYPE_SEWERPIPE = 31,
    BSREVERBTYPE_UNDERWATER = 32,
    BSREVERBTYPE_SMALLROOM = 33,
    BSREVERBTYPE_MEDIUMROOM = 34,
    BSREVERBTYPE_LARGEROOM = 35,
    BSREVERBTYPE_MEDIUMHALL = 36,
    BSREVERBTYPE_LARGEHALL = 37,
    BSREVERBTYPE_PLATE = 38,
    BSREVERBTYPE_CUSTOM = 39,
    BSREVERBTYPE_MAX = 40,
};
typedef void (* TBTrackingSampleCallback)(float *, int, void *);
typedef struct _TBSoundChannelInfo TBSoundChannelInfo;
int bSoundLinearFalloff; // size: 0x4
enum EBPlayListStatus {
    BPLAYLISTSTATUS_IDLE = 0,
    BPLAYLISTSTATUS_PLAYING = 1,
    BPLAYLISTSTATUS_PAUSED = 2,
};
// total size: 0x4
struct _TBPlayList {
    // Members
    int playlist; // offset 0x0, size 0x4
};
typedef struct _TBPlayList TBPlayList;
enum EBPlayListType {
    EBPLAYLISTTYPE_PLAYLIST = 0,
    EBPLAYLISTTYPE_SONG = 1,
};
// total size: 0x14
struct TBPlayListCallbackInfo {
    // Members
    int playlist; // offset 0x0, size 0x4
    int song; // offset 0x4, size 0x4
    unsigned short * name; // offset 0x8, size 0x4
    enum EBPlayListType type; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
};
typedef struct TBPlayListCallbackInfo TBPlayListCallbackInfo;
typedef void (* TBPlayListEnumCallback)(TBPlayListCallbackInfo *, void *);
enum EBLipSyncRotationOrder {
    BLSROTATE_XYZ = 0,
    BLSROTATE_XZY = 1,
    BLSROTATE_YXZ = 2,
    BLSROTATE_YZX = 3,
    BLSROTATE_ZXY = 4,
    BLSROTATE_ZYX = 5,
};
// total size: 0x68
struct _TBLipSyncController {
    // Inner declarations
    union {
        TBVector angularMultiplier; // offset 0x0, size 0x10
        unsigned int target[4]; // offset 0x0, size 0x10
    };
    union {
        TBVector positionMultiplier; // offset 0x0, size 0x10
        TBVector targetMultiplier; // offset 0x0, size 0x10
    };

    // Members
    TBLipSync * lipSync; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    enum EBLipSyncRotationOrder order; // offset 0x8, size 0x4
    int attached; // offset 0xC, size 0x4
    union {
        TBVector angularMultiplier; // offset 0x0, size 0x10
        unsigned int target[4]; // offset 0x0, size 0x10
    }; // offset 0x10, size 0x10
    union {
        TBVector positionMultiplier; // offset 0x0, size 0x10
        TBVector targetMultiplier; // offset 0x0, size 0x10
    }; // offset 0x20, size 0x10
    TBVector threshold; // offset 0x30, size 0x10
    int (* userController)(TBActorInstance *, TBActorNodeInstance *, void *); // offset 0x40, size 0x4
    UBContext32 userContext; // offset 0x44, size 0x4
    unsigned int pad2[2]; // offset 0x48, size 0x8
    unsigned long long startTime; // offset 0x50, size 0x8
    unsigned long long pauseTime; // offset 0x58, size 0x8
    unsigned long long pausing; // offset 0x60, size 0x8
};
typedef struct _TBLipSyncController TBLipSyncController;
typedef int sbInt32;
typedef unsigned int sbUInt32;
typedef short sbShort;
typedef unsigned short sbUShort;
typedef float sbFloat;
typedef float * sbFloatPtr;
typedef void * sbVoidPtr;
enum ESOUNDPATCHPOLYMODE {
    ESOUNDPATCHPOLYMODE_ALLOW = 0,
    ESOUNDPATCHPOLYMODE_IGNORE = 1,
    ESOUNDPATCHPOLYMODE_EXCLUSIVE = 2,
    ESOUNDPATCHPOLYMODE_GROUPIGNORE = 3,
    ESOUNDPATCHPOLYMODE_GROUPEXCLUSIVE = 4,
};
enum BSPATCHSTATUS {
    BSPATCHSTATUS_STOPPED = 0,
    BSPATCHSTATUS_PENDING = 1,
    BSPATCHSTATUS_PLAYING = 2,
    BSPATCHSTATUS_PAUSED = 3,
    BSPATCHSTATUS_ENDING = 4,
};
// total size: 0x28
struct _TBSoundPatchUserParams {
    // Inner declarations
    union {
        unsigned short flags; // offset 0x0, size 0x2
        // total size: 0x4
        struct {
            // Members
            int setLfoLevelVolume : 1; // offset 0x0, size 0x4
            int setLfoLevelPitch : 1; // offset 0x0, size 0x4
            int setLfoLevelPan : 1; // offset 0x0, size 0x4
            int setLfoFrequencyVolume : 1; // offset 0x0, size 0x4
            int setLfoFrequencyPitch : 1; // offset 0x0, size 0x4
            int setLfoFrequencyPan : 1; // offset 0x0, size 0x4
            int setEnvLevelVolume : 1; // offset 0x0, size 0x4
            int setEnvLevelPitch : 1; // offset 0x0, size 0x4
            int setEnvLevelPan : 1; // offset 0x0, size 0x4
        }; // offset 0x0, size 0x4
    };
    union {
        float userLfoLevel[3]; // offset 0x0, size 0xC
        // total size: 0xC
        struct {
            // Members
            float userLfoLevelVolume; // offset 0x0, size 0x4
            float userLfoLevelPitch; // offset 0x4, size 0x4
            float userLfoLevelPan; // offset 0x8, size 0x4
        }; // offset 0x0, size 0xC
    };
    union {
        float userLfoFrequency[3]; // offset 0x0, size 0xC
        // total size: 0xC
        struct {
            // Members
            float userLfoFrequencyVolume; // offset 0x0, size 0x4
            float userLfoFrequencyPitch; // offset 0x4, size 0x4
            float userLfoFrequencyPan; // offset 0x8, size 0x4
        }; // offset 0x0, size 0xC
    };
    union {
        float userEnvLevel[3]; // offset 0x0, size 0xC
        // total size: 0xC
        struct {
            // Members
            float userEnvLevelVolume; // offset 0x0, size 0x4
            float userEnvLevelPitch; // offset 0x4, size 0x4
            float userEnvLevelPan; // offset 0x8, size 0x4
        }; // offset 0x0, size 0xC
    };

    // Members
    union {
        unsigned short flags; // offset 0x0, size 0x2
        // total size: 0x4
        struct {
            // Members
            int setLfoLevelVolume : 1; // offset 0x0, size 0x4
            int setLfoLevelPitch : 1; // offset 0x0, size 0x4
            int setLfoLevelPan : 1; // offset 0x0, size 0x4
            int setLfoFrequencyVolume : 1; // offset 0x0, size 0x4
            int setLfoFrequencyPitch : 1; // offset 0x0, size 0x4
            int setLfoFrequencyPan : 1; // offset 0x0, size 0x4
            int setEnvLevelVolume : 1; // offset 0x0, size 0x4
            int setEnvLevelPitch : 1; // offset 0x0, size 0x4
            int setEnvLevelPan : 1; // offset 0x0, size 0x4
        }; // offset 0x0, size 0x4
    }; // offset 0x0, size 0x4
    union {
        float userLfoLevel[3]; // offset 0x0, size 0xC
        // total size: 0xC
        struct {
            // Members
            float userLfoLevelVolume; // offset 0x0, size 0x4
            float userLfoLevelPitch; // offset 0x4, size 0x4
            float userLfoLevelPan; // offset 0x8, size 0x4
        }; // offset 0x0, size 0xC
    }; // offset 0x4, size 0xC
    union {
        float userLfoFrequency[3]; // offset 0x0, size 0xC
        // total size: 0xC
        struct {
            // Members
            float userLfoFrequencyVolume; // offset 0x0, size 0x4
            float userLfoFrequencyPitch; // offset 0x4, size 0x4
            float userLfoFrequencyPan; // offset 0x8, size 0x4
        }; // offset 0x0, size 0xC
    }; // offset 0x10, size 0xC
    union {
        float userEnvLevel[3]; // offset 0x0, size 0xC
        // total size: 0xC
        struct {
            // Members
            float userEnvLevelVolume; // offset 0x0, size 0x4
            float userEnvLevelPitch; // offset 0x4, size 0x4
            float userEnvLevelPan; // offset 0x8, size 0x4
        }; // offset 0x0, size 0xC
    }; // offset 0x1C, size 0xC
};
typedef struct _TBSoundPatchUserParams TBSoundPatchUserParams;
// total size: 0x3C
struct _TBSoundPatch3dInfo {
    // Members
    TBVector position; // offset 0x0, size 0x10
    float * positionPtr; // offset 0x10, size 0x4
    float minDistance; // offset 0x14, size 0x4
    float maxDistance; // offset 0x18, size 0x4
    unsigned int flags; // offset 0x1C, size 0x4
    int volume; // offset 0x20, size 0x4
    int frequency; // offset 0x24, size 0x4
    int type; // offset 0x28, size 0x4
    float minPitchShift; // offset 0x2C, size 0x4
    float maxPitchShift; // offset 0x30, size 0x4
    void * callback; // offset 0x34, size 0x4
    void * context; // offset 0x38, size 0x4
};
typedef struct _TBSoundPatch3dInfo TBSoundPatch3dInfo;
typedef struct _TBSoundEnvelope TBSoundEnvelope;
// total size: 0xCC
struct _TBSoundPartInstance {
    // Members
    TBSoundPatch3dInfo info3d; // offset 0x0, size 0x3C
    float startTime; // offset 0x3C, size 0x4
    float lastUpdateTime; // offset 0x40, size 0x4
    float elapsedTimeReal; // offset 0x44, size 0x4
    float elapsedTimeVirtual; // offset 0x48, size 0x4
    float relativeTime; // offset 0x4C, size 0x4
    unsigned int initialFrequency; // offset 0x50, size 0x4
    int initialVolume; // offset 0x54, size 0x4
    int initialPan; // offset 0x58, size 0x4
    unsigned int curFrequency; // offset 0x5C, size 0x4
    unsigned int curVolume; // offset 0x60, size 0x4
    int curPan; // offset 0x64, size 0x4
    int userVolume; // offset 0x68, size 0x4
    int userPan; // offset 0x6C, size 0x4
    int userFrequency; // offset 0x70, size 0x4
    int userFlags; // offset 0x74, size 0x4
    unsigned int lastFrequency; // offset 0x78, size 0x4
    float userPitchShift; // offset 0x7C, size 0x4
    unsigned int handle; // offset 0x80, size 0x4
    int state; // offset 0x84, size 0x4
    int prevState; // offset 0x88, size 0x4
    struct _TBSoundPart * part; // offset 0x8C, size 0x4
    TBSoundPatch * patch; // offset 0x90, size 0x4
    int * refCount; // offset 0x94, size 0x4
    int flags; // offset 0x98, size 0x4
    TBSample * sample; // offset 0x9C, size 0x4
    int channelID; // offset 0xA0, size 0x4
    TBSoundPatchUserParams userParams; // offset 0xA4, size 0x28
};
typedef struct _TBSoundPartInstance TBSoundPartInstance;
// total size: 0x2C
struct _TBSoundTrackInstance {
    // Members
    struct _TBSoundTrack * track; // offset 0x0, size 0x4
    struct _TBSoundSegment * segment; // offset 0x4, size 0x4
    int segmentNum; // offset 0x8, size 0x4
    int refCount; // offset 0xC, size 0x4
    int peakCount; // offset 0x10, size 0x4
    float startTime; // offset 0x14, size 0x4
    float lastUpdateTime; // offset 0x18, size 0x4
    float curElapsedTime; // offset 0x1C, size 0x4
    float prevElapsedTime; // offset 0x20, size 0x4
    float segmentDelay; // offset 0x24, size 0x4
    int active; // offset 0x28, size 0x4
};
typedef struct _TBSoundTrackInstance TBSoundTrackInstance;
// total size: 0xB70
struct _TBSoundSequenceInstance {
    // Members
    float startTime; // offset 0x0, size 0x4
    float lastUpdateTime; // offset 0x4, size 0x4
    float curElapsedTime; // offset 0x8, size 0x4
    float prevElapsedTime; // offset 0xC, size 0x4
    unsigned int handle; // offset 0x10, size 0x4
    int state; // offset 0x14, size 0x4
    int prevState; // offset 0x18, size 0x4
    TBSoundPatch * sequence; // offset 0x1C, size 0x4
    TBSoundTrackInstance tracks[64]; // offset 0x20, size 0xB00
    TBSoundPatch3dInfo info3d; // offset 0xB20, size 0x3C
    int userVolume; // offset 0xB5C, size 0x4
    int userPan; // offset 0xB60, size 0x4
    int userFrequency; // offset 0xB64, size 0x4
    int userFlags; // offset 0xB68, size 0x4
    float userPitchShift; // offset 0xB6C, size 0x4
};
typedef struct _TBSoundSequenceInstance TBSoundSequenceInstance;
typedef struct _TBSoundPart TBSoundPart;
typedef struct _TBSoundPatchRef TBSoundPatchRef;
// total size: 0x8
struct _TBSoundPatchRefEx {
    // Inner declarations
    union {
        TBSoundPatch * patch[]; // offset 0x0, size 0x0
        unsigned int _patch[]; // offset 0x0, size 0x0
    };

    // Members
    TBSoundPatchRef ref; // offset 0x0, size 0x8
    union {
        TBSoundPatch * patch[]; // offset 0x0, size 0x0
        unsigned int _patch[]; // offset 0x0, size 0x0
    }; // offset 0x8, size 0x0
};
typedef struct _TBSoundPatchRefEx TBSoundPatchRefEx;
typedef struct _TBSoundSegment TBSoundSegment;
typedef struct _TBSoundTrack TBSoundTrack;
enum EBGuiFillMode {
    BGUIFILLMODE_OPAQUE = 0,
    BGUIFILLMODE_TRANSPARENT = 1,
};
enum EBGuiFrameStyle {
    BGUIFRAME_RAISED = 0,
    BGUIFRAME_SUNKEN = 1,
    BGUIFRAME_FLAT = 2,
    BGUIFRAME_RAISEDX2 = 3,
    BGUIFRAME_SUNKENX2 = 4,
};
enum EBGuiIcons {
    BGUIICON_SUBMENU = 0,
    BGUIICON_TICK = 1,
    BGUIICON_SCROLLUP = 2,
    BGUIICON_SCROLLDOWN = 3,
    BGUIICON_MAX = 4,
};
enum EBGuiColourID {
    EGUICOLOUR_TEXTFORE = 0,
    EGUICOLOUR_TEXTBACK = 1,
    EGUICOLOUR_MENUFORE = 2,
    EGUICOLOUR_MENUBACK = 3,
    EGUICOLOUR_DLGFORE = 4,
    EGUICOLOUR_DLGBACK = 5,
    EGUICOLOUR_HIGHFORE = 6,
    EGUICOLOUR_HIGHBACK = 7,
};
enum EBGuiSliderType {
    BGUISLIDERTYPE_FLOAT = 0,
    BGUISLIDERTYPE_UINT = 1,
    BGUISLIDERTYPE_INT = 2,
    BGUISLIDERTYPE_USHORT = 3,
    BGUISLIDERTYPE_SHORT = 4,
    BGUISLIDERTYPE_UCHAR = 5,
    BGUISLIDERTYPE_CHAR = 6,
    BGUISLIDERTYPE_COL_RED = 7,
    BGUISLIDERTYPE_COL_GREEN = 8,
    BGUISLIDERTYPE_COL_BLUE = 9,
    BGUISLIDERTYPE_COL_ALPHA = 10,
};
// total size: 0x8
struct _TBGuiFontChar {
    // Members
    int width; // offset 0x0, size 0x4
    char * data; // offset 0x4, size 0x4
};
typedef struct _TBGuiFontChar TBGuiFontChar;
// total size: 0x324
struct _TBGuiFont {
    // Members
    int height; // offset 0x0, size 0x4
    TBGuiFontChar chars[100]; // offset 0x4, size 0x320
};
typedef struct _TBGuiFont TBGuiFont;
typedef struct _TBGuiMenuItem TBGuiMenuItem;
typedef struct _TBGuiMenuInfo TBGuiMenuInfo;
typedef struct _TBGuiElement TBGuiElement;
// total size: 0x14
struct _TBGuiSliderEventInfo {
    // Inner declarations
    union {
        float f; // offset 0x0, size 0x4
        int i; // offset 0x0, size 0x4
        short s; // offset 0x0, size 0x2
        char c; // offset 0x0, size 0x1
        unsigned int uI; // offset 0x0, size 0x4
        unsigned short uS; // offset 0x0, size 0x2
        unsigned char uC; // offset 0x0, size 0x1
    };

    // Members
    enum EBGuiSliderType type; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    union {
        float f; // offset 0x0, size 0x4
        int i; // offset 0x0, size 0x4
        short s; // offset 0x0, size 0x2
        char c; // offset 0x0, size 0x1
        unsigned int uI; // offset 0x0, size 0x4
        unsigned short uS; // offset 0x0, size 0x2
        unsigned char uC; // offset 0x0, size 0x1
    }; // offset 0x8, size 0x4
    void * context; // offset 0xC, size 0x4
    void * varPtr; // offset 0x10, size 0x4
};
typedef struct _TBGuiSliderEventInfo TBGuiSliderEventInfo;
typedef void (* TBGuiSliderCallback)(TBGuiSliderEventInfo *);
// total size: 0xFC
struct _TBGuiSlider {
    // Members
    void * varPtr; // offset 0x0, size 0x4
    float min; // offset 0x4, size 0x4
    float max; // offset 0x8, size 0x4
    float reset; // offset 0xC, size 0x4
    int step; // offset 0x10, size 0x4
    int xTop; // offset 0x14, size 0x4
    int yTop; // offset 0x18, size 0x4
    int width; // offset 0x1C, size 0x4
    char title[60]; // offset 0x20, size 0x3C
    char desc[128]; // offset 0x5C, size 0x80
    bool shown; // offset 0xDC, size 0x1
    bool inFocus; // offset 0xE0, size 0x1
    enum EBGuiSliderType type; // offset 0xE4, size 0x4
    unsigned int menuElementID; // offset 0xE8, size 0x4
    void (* callback)(TBGuiSliderEventInfo *); // offset 0xEC, size 0x4
    void * context; // offset 0xF0, size 0x4
    struct _TBGuiSlider * next; // offset 0xF4, size 0x4
    struct _TBGuiSlider * prev; // offset 0xF8, size 0x4
};
typedef struct _TBGuiSlider TBGuiSlider;
typedef struct _TBGuiEventInfo TBGuiEventInfo;
typedef int (* TBGuiEventCallback)(TBGuiEventInfo *);
// total size: 0x1F8
struct _TBGuiInfo {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int alpha; // offset 0x8, size 0x4
    int textFore[3]; // offset 0xC, size 0xC
    int textBack[3]; // offset 0x18, size 0xC
    enum EBGuiFillMode fillMode; // offset 0x24, size 0x4
    int menuFore[3]; // offset 0x28, size 0xC
    int menuBack[3]; // offset 0x34, size 0xC
    int dlgFore[3]; // offset 0x40, size 0xC
    int dlgBack[3]; // offset 0x4C, size 0xC
    int highFore[3]; // offset 0x58, size 0xC
    int highBack[3]; // offset 0x64, size 0xC
    TBIChannelMap * inputMap; // offset 0x70, size 0x4
    TBIInputChannel * chLeft; // offset 0x74, size 0x4
    TBIInputChannel * chRight; // offset 0x78, size 0x4
    TBIInputChannel * chUp; // offset 0x7C, size 0x4
    TBIInputChannel * chDown; // offset 0x80, size 0x4
    TBIInputChannel * chSelect; // offset 0x84, size 0x4
    TBIInputChannel * chDeselect; // offset 0x88, size 0x4
    TBIInputChannel * chFaster; // offset 0x8C, size 0x4
    TBIInputChannel * chSlower; // offset 0x90, size 0x4
    TBIInputChannel * chExit; // offset 0x94, size 0x4
    TBIInputChannel * chExit2; // offset 0x98, size 0x4
    TBIInputChannel * chMove; // offset 0x9C, size 0x4
    TBIInputChannel * chUser1; // offset 0xA0, size 0x4
    TBIInputChannel * chUser2; // offset 0xA4, size 0x4
    TBGuiElement elements; // offset 0xA8, size 0x34
    TBGuiElement * menuBar; // offset 0xDC, size 0x4
    TBGuiElement * focusElement; // offset 0xE0, size 0x4
    TBGuiSlider sliders; // offset 0xE4, size 0xFC
    TBGuiSlider * slidersFocus; // offset 0x1E0, size 0x4
    int noofVisibleElements; // offset 0x1E4, size 0x4
    int (* eventCallback)(TBGuiEventInfo *); // offset 0x1E8, size 0x4
    int guiChanged; // offset 0x1EC, size 0x4
    int flags; // offset 0x1F0, size 0x4
    TBFont * font; // offset 0x1F4, size 0x4
};
typedef struct _TBGuiInfo TBGuiInfo;
// total size: 0x18
struct _TBGuiHALInfo {
    // Members
    int savedZTestMode; // offset 0x0, size 0x4
    int savedZTextureFilter; // offset 0x4, size 0x4
    int savedZAlphaState; // offset 0x8, size 0x4
    int savedAlphaBlend; // offset 0xC, size 0x4
    int savedProjectionMode; // offset 0x10, size 0x4
    int guiLocked; // offset 0x14, size 0x4
};
typedef struct _TBGuiHALInfo TBGuiHALInfo;
struct CNetEndianType2<short int> {};
typedef struct CNetEndianType2<short int> CNetEShort;
// total size: 0x4
struct CNetEndianType4<int> {
    // Members
    int val; // offset 0x0, size 0x4
};
typedef struct CNetEndianType4<int> CNetEInt;
// total size: 0x4
struct CNetEndianType4<float> {
    // Members
    float val; // offset 0x0, size 0x4
};
typedef struct CNetEndianType4<float> CNetEFloat;
struct CNetEndianType4<long int> {};
typedef struct CNetEndianType4<long int> CNetELong;
// total size: 0x2
struct CNetEndianType2<short unsigned int> {
    // Members
    unsigned short val; // offset 0x0, size 0x2
};
typedef struct CNetEndianType2<short unsigned int> CNetEUShort;
// total size: 0x4
struct CNetEndianType4<unsigned int> {
    // Members
    unsigned int val; // offset 0x0, size 0x4
};
typedef struct CNetEndianType4<unsigned int> CNetEUInt;
typedef CNetEInt CNetEInt32;
typedef CNetEUInt CNetEUInt32;
struct CNetEndianType4<long unsigned int> {};
typedef struct CNetEndianType4<long unsigned int> CNetEULong;
struct CNetEndianType8<long long int> {};
typedef struct CNetEndianType8<long long int> CNetEInt64;
struct CNetEndianType8<long long unsigned int> {};
typedef struct CNetEndianType8<long long unsigned int> CNetEUInt64;
struct CNetEndianType4<void *> {};
typedef struct CNetEndianType4<void *> CNetEVoidPtr;
struct CNetEndianType4<unsigned char *> {};
typedef struct CNetEndianType4<unsigned char *> CNetEUCharPtr;
struct CNetEndianType4<char *> {};
typedef struct CNetEndianType4<char *> CNetECharPtr;
struct CNetEndianType4<short unsigned int *> {};
typedef struct CNetEndianType4<short unsigned int *> CNetEUShortPtr;
struct CNetEndianType4<short int *> {};
typedef struct CNetEndianType4<short int *> CNetEShortPtr;
struct CNetEndianType4<unsigned int *> {};
typedef struct CNetEndianType4<unsigned int *> CNetEUInt32Ptr;
struct CNetEndianType4<int *> {};
typedef struct CNetEndianType4<int *> CNetEInt32Ptr;
struct CNetEndianType4<float *> {};
typedef struct CNetEndianType4<float *> CNetEFloatPtr;
// total size: 0x4
struct in_addr {
    // Members
    int s_addr; // offset 0x0, size 0x4
};
// total size: 0x10
struct sockaddr {
    // Members
    unsigned short sin_family; // offset 0x0, size 0x2
    char sin_data[14]; // offset 0x2, size 0xE
};
// total size: 0x10
struct sockaddr_in {
    // Members
    short sin_family; // offset 0x0, size 0x2
    unsigned short sin_port; // offset 0x2, size 0x2
    struct in_addr sin_addr; // offset 0x4, size 0x4
    char sin_zero[8]; // offset 0x8, size 0x8
};
enum EBNetworkError {
    BNETERROR_NONE = 0,
    BNETERROR_UNKNOWNERROR = 1,
    BNETERROR_TRYAGAIN = 2,
    BNETERROR_WOULDBLOCK = 3,
    BNETERROR_CONNECTIONABORTED = 4,
    BNETERROR_CONNECTIONRESET = 5,
};
// total size: 0x10
struct _TBSocketAddr {
    // Inner declarations
    union {
        struct sockaddr sockAddr; // offset 0x0, size 0x10
        struct sockaddr_in sockAddrIn; // offset 0x0, size 0x10
    };

    // Members
    union {
        struct sockaddr sockAddr; // offset 0x0, size 0x10
        struct sockaddr_in sockAddrIn; // offset 0x0, size 0x10
    }; // offset 0x0, size 0x10
};
typedef struct _TBSocketAddr TBSocketAddr;
typedef struct in_addr TBInternetAddress;
typedef struct fd_set TBSocketSet;
enum EBNetDataFormat {
    BNDATAFORMAT_8BIT = 0,
    BNDATAFORMAT_16BIT = 1,
    BNDATAFORMAT_32BIT = 2,
    BNDATAFORMAT_FLOAT = 3,
};
enum EBNetworkErrorReasonCode {
    BNETWORKERROR_WLAN_SWITCH_OFF = 0,
    BNETWORKERROR_FATAL_ERROR = 1,
    BNETWORKERRORS = 2,
};
// total size: 0x70
struct _TBNetworkInfo {
    // Members
    int refCount; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    int pad[2]; // offset 0x8, size 0x8
    char localIP[32]; // offset 0x10, size 0x20
    char localSubnet[32]; // offset 0x30, size 0x20
    char broadcast[32]; // offset 0x50, size 0x20
};
typedef struct _TBNetworkInfo TBNetworkInfo;
typedef union _TBNetConversionData TBNetConversionData;
typedef unsigned char TBNetMachineID;
enum EBNetworkMessageID {
    BN_MSGID_SCAN = 0,
    BN_MSGID_SERVER_INFO = 1,
    BN_MSGID_SCAN_COMPLETE = 2,
    BN_MSGID_CONNECT = 3,
    BN_MSGID_GIVE_CONNECTION_ID = 4,
    BN_MSGID_CONFIRM_MACHINE = 5,
    BN_MSGID_CONNECTION_ABORTED = 6,
    BN_MSGID_MACHINE_ID_ASSIGNED = 7,
    BN_MSGID_MACHINE_ID_UNASSIGNED = 8,
    BN_MSGID_CLOSE_CONNECTION = 9,
    BN_MSGID_HOST_MIGRATE = 10,
    BN_MSGID_HEARTBEAT = 11,
    BN_MSGID_PING = 12,
    BN_MSGID_PING_RESPONSE = 13,
    BN_MSGID_ACKPACKET = 14,
    BN_MSGID_ADD_MACHINE = 15,
    BN_MSGID_ADD_MACHINES = 16,
    BN_MSGID_DELETE_MACHINE = 17,
    BN_MSGID_DELETE_MACHINES = 18,
    BN_MSGID_PEER_JOIN_REQUEST = 19,
    BN_MSGID_PEER_JOIN_ACCEPTED = 20,
    BN_MSGID_PEER_JOIN_REFUSAL = 21,
    BN_MSGID_NEW_PEER_JOINED = 22,
    BN_MSGID_PEER_DISCONNECTED = 23,
    BN_MSGID_PEER_LATENCY_REQUEST = 24,
    BN_MSGID_PEER_LATENCY = 25,
    BN_MSGID_REQUEST_PLAYER = 26,
    BN_MSGID_ADD_PLAYER = 27,
    BN_MSGID_ADD_PLAYERS = 28,
    BN_MSGID_SESSION_FULL = 29,
    BN_MSGID_REQUEST_DELETE_PLAYER = 30,
    BN_MSGID_DELETE_PLAYER = 31,
    BN_MSGID_DELETE_PLAYERS = 32,
    BN_MSGID_PLAYER_NOTFOUND = 33,
    BN_MSGID_VOICEDATA = 34,
    BN_MSGID_DOBS_PACKET = 35,
    BN_MSGID_DOBS_CLIENTCONNECTED = 36,
    BN_MSGID_LOBBY = 37,
    BN_MSGID_SHUTDOWN_CONNECTION = 38,
    BN_MSGID_JOIN_REFUSAL = 39,
    BN_MSGID_USER = 128,
    BN_MSGID_USERLASTLEGAL = 192,
    BN_MSGID_LASTILLEGAL = 252,
    BN_MSGID_GAMESPY_MAGIC_1 = 254,
    BN_MSGID_GAMESPY_MAGIC_2 = 253,
};
enum EBNetworkLobbyType {
    EBLOBBYTYPE_PLAYER = 0,
    EBLOBBYTYPE_STARTGAME = 1,
    EBLOBBYTYPE_CONNECT_STATS = 2,
    EBLOBBYTYPE_QUITGAME = 3,
    EBLOBBYTYPE_PLAYERUPDATE = 4,
    EBLOBBYTYPE_SERVERADD = 5,
    EBLOBBYTYPE_SERVERUPDATE = 6,
    EBLOBBYTYPE_SERVERDELETE = 7,
    EBLOBBYTYPE_MESSAGE = 8,
    EBLOBBYTYPE_GAMEATTRIBUTES = 9,
    EBLOBBYTYPE_GAMESHARECLIENT = 10,
    EBLOBBYTYPE_SESSIONJOINSTATUS = 11,
    EBLOBBYTYPE_REGISTER_ARBITRATION = 12,
};
// total size: 0x8
struct _TBPacketHeader {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    CNetEUShort size; // offset 0x2, size 0x2
    CNetEUShort seq; // offset 0x4, size 0x2
    unsigned char srcID; // offset 0x6, size 0x1
    unsigned char destID; // offset 0x7, size 0x1
};
typedef struct _TBPacketHeader TBPacketHeader;
// total size: 0xC
struct _TBPacketAck {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    CNetEUShort sequence; // offset 0x8, size 0x2
    unsigned char packetFlags; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
};
typedef struct _TBPacketAck TBPacketAck;
// total size: 0x10
struct _TBPacketScan {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    CNetEInt gameID; // offset 0x8, size 0x4
    CNetEInt version; // offset 0xC, size 0x4
};
typedef struct _TBPacketScan TBPacketScan;
// total size: 0x68
struct _TBPacketServerInfo {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    char sessionName[64]; // offset 0x8, size 0x40
    CNetEInt port; // offset 0x48, size 0x4
    CNetEInt flags; // offset 0x4C, size 0x4
    CNetEInt publicSlots; // offset 0x50, size 0x4
    CNetEInt privateSlots; // offset 0x54, size 0x4
    CNetEInt numMachines; // offset 0x58, size 0x4
    CNetEInt maxNumMachines; // offset 0x5C, size 0x4
    CNetEInt numPlayers; // offset 0x60, size 0x4
    CNetEInt maxNumPlayers; // offset 0x64, size 0x4
};
typedef struct _TBPacketServerInfo TBPacketServerInfo;
// total size: 0x8
struct _TBPacketScanComplete {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
};
typedef struct _TBPacketScanComplete TBPacketScanComplete;
// total size: 0xC
struct _TBPacketConnectionID {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char toId; // offset 0x8, size 0x1
    unsigned char fromId; // offset 0x9, size 0x1
    unsigned char maxMachines; // offset 0xA, size 0x1
    unsigned char pad[1]; // offset 0xB, size 0x1
};
typedef struct _TBPacketConnectionID TBPacketConnectionID;
// total size: 0x10
struct _TBPacketDisconnect {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char machineID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
    CNetEInt reasonCode; // offset 0xC, size 0x4
};
typedef struct _TBPacketDisconnect TBPacketDisconnect;
// total size: 0x8
struct _TBPacketShutdown {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
};
typedef struct _TBPacketShutdown TBPacketShutdown;
// total size: 0xC
struct _TBPacketConfirmation {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char confirmMachineID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
};
typedef struct _TBPacketConfirmation TBPacketConfirmation;
// total size: 0x1C
struct _TBPacketAddMachine {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char machineID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
    TBSocketAddr machineIP; // offset 0xC, size 0x10
};
typedef struct _TBPacketAddMachine TBPacketAddMachine;
// total size: 0xA
struct _TBPacketAddMachines {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char machines; // offset 0x8, size 0x1
    unsigned char machineID[]; // offset 0x9, size 0x0
};
typedef struct _TBPacketAddMachines TBPacketAddMachines;
// total size: 0xC
struct _TBPacketDeleteMachine {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char machineID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
};
typedef struct _TBPacketDeleteMachine TBPacketDeleteMachine;
// total size: 0xC
struct _TBPacketLocalMachineID {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char yourID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
};
typedef struct _TBPacketLocalMachineID TBPacketLocalMachineID;
// total size: 0xC
struct _TBPacketLocalMachineIDUnassigned {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char yourID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
};
typedef struct _TBPacketLocalMachineIDUnassigned TBPacketLocalMachineIDUnassigned;
// total size: 0x8
struct _TBPacketConnect {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
};
typedef struct _TBPacketConnect TBPacketConnect;
// total size: 0x8
struct _TBPacketConnectionAborted {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
};
typedef struct _TBPacketConnectionAborted TBPacketConnectionAborted;
// total size: 0x10
struct _TBPacketHeartbeat {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char machineID; // offset 0x8, size 0x1
    unsigned char machines; // offset 0x9, size 0x1
    unsigned char pad[2]; // offset 0xA, size 0x2
    CNetEInt latency; // offset 0xC, size 0x4
};
typedef struct _TBPacketHeartbeat TBPacketHeartbeat;
// total size: 0xA
struct _TBPacketPing {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    CNetEUShort sequence; // offset 0x8, size 0x2
};
typedef struct _TBPacketPing TBPacketPing;
// total size: 0x10
struct _TBPacketPingResponse {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    CNetEInt latency; // offset 0x8, size 0x4
    CNetEUShort sequence; // offset 0xC, size 0x2
};
typedef struct _TBPacketPingResponse TBPacketPingResponse;
// total size: 0x8C
struct _TBPacketLobby {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    enum EBNetworkLobbyType packet_type; // offset 0x8, size 0x4
    char buffer[128]; // offset 0xC, size 0x80
};
typedef struct _TBPacketLobby TBPacketLobby;
// total size: 0xF4
struct _TBPacketVoice {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned int timeStamp; // offset 0x8, size 0x4
    char buffer[232]; // offset 0xC, size 0xE8
};
typedef struct _TBPacketVoice TBPacketVoice;
enum EBNetStopwatchIndex {
    EBNETSTOPWATCH_TOTAL = 0,
    EBNETSTOPWATCH_SERVERCHECKCONNECTIONS = 1,
    EBNETSTOPWATCH_NETCHECKFORUDPCONNECTIONS = 2,
    EBNETSTOPWATCH_CLIENTCHECKCONNECTION = 3,
    EBNETSTOPWATCH_DOBSGUARANTEED = 4,
    EBNETSTOPWATCH_DOBSHIGH = 5,
    EBNETSTOPWATCH_DOBSMEDIUM = 6,
    EBNETSTOPWATCH_DOBSLOW = 7,
    EBNETSTOPWATCH_DOBSTRICKLE = 8,
    EBNETSTOPWATCH_DOBSUPDATE = 9,
    EBNETSTOPWATCH_DOBSRELEVANTSET = 10,
    EBNETSTOPWATCHES = 11,
};
enum EBNetworkConnectionModel {
    BNNOCORE = 0,
    BNCLIENTSERVER = 1,
    BNPEERTOPEER = 2,
};
enum EBNetworkState {
    BNSTATE_NODEVICE = 0,
    BNSTATE_READY = 1,
    BNSTATE_STARTING_SERVER = 2,
    BNSTATE_SERVER_STARTED = 3,
    BNSTATE_WAITING_FOR_CLIENT_ID = 4,
    BNSTATE_SCANNING = 5,
    BNSTATE_SCANCOMPLETE = 6,
    BNSTATE_SCANABORTED = 7,
    BNSTATE_CONNECTING = 8,
    BNSTATE_CONNECTED = 9,
    BNSTATE_CONNECTION_TIMED_OUT = 10,
    BNSTATE_DISCONNECTED = 11,
    BNSTATE_SESSION_TERMINATED_BY_SERVER = 12,
    BNSTATE_PEER_CONNECTING = 13,
    BNSTATE_PEER_CONNECTED = 14,
    BNSTATE_IDLE = 15,
};
enum EBNetworkDisconnectionReason {
    BNDISCONNECTREASON_TIMEOUT = 0,
    BNDISCONNECTREASON_ABNORMAL = 1,
    BNDISCONNECTREASON_NORMAL = 2,
};
// total size: 0xC8
struct _TBNetwork {
    // Members
    int connectionModel; // offset 0x0, size 0x4
    int protocol; // offset 0x4, size 0x4
    int serverPort; // offset 0x8, size 0x4
    int serverListenSocket; // offset 0xC, size 0x4
    int connectedMachines; // offset 0x10, size 0x4
    int totalNumMachines; // offset 0x14, size 0x4
    int maxMachines; // offset 0x18, size 0x4
    int localMachineID; // offset 0x1C, size 0x4
    unsigned int flags; // offset 0x20, size 0x4
    enum EBNetworkState state; // offset 0x24, size 0x4
    void * context; // offset 0x28, size 0x4
    int timeout; // offset 0x2C, size 0x4
    void (* scanMsgFuncCallback)(struct _TBNetwork *, int, const void *, void *, TBSocketAddr *, int); // offset 0x30, size 0x4
    void (* serverMsgFuncCallback)(struct _TBNetwork *, int, const void *, void *); // offset 0x34, size 0x4
    void (* clientMsgFuncCallback)(struct _TBNetwork *, int, const void *, void *); // offset 0x38, size 0x4
    void (* peerMsgFuncCallback)(struct _TBNetwork *, int, const void *, void *); // offset 0x3C, size 0x4
    void (* internetMsgFuncCallback)(struct _TBNetwork *, TBSocketAddr *, int); // offset 0x40, size 0x4
    struct _TBNetworkSession * session; // offset 0x44, size 0x4
    struct _TBNetworkSessionPrivate * sessionPrivate; // offset 0x48, size 0x4
    int lastIncomingListenNoofPackets; // offset 0x4C, size 0x4
    int incomingQueueTotalSize; // offset 0x50, size 0x4
    int maxReadRate; // offset 0x54, size 0x4
    int maxConnections; // offset 0x58, size 0x4
    struct _TBNetConnection * connection; // offset 0x5C, size 0x4
    struct _TBNetQueue * queue; // offset 0x60, size 0x4
    struct _TBNetwork * prev; // offset 0x64, size 0x4
    struct _TBNetwork * next; // offset 0x68, size 0x4
    int abortScan; // offset 0x6C, size 0x4
    int abortConnect; // offset 0x70, size 0x4
    unsigned long long startTime; // offset 0x78, size 0x8
    unsigned long long statsStart; // offset 0x80, size 0x8
    unsigned int bufferSize; // offset 0x88, size 0x4
    unsigned char * buffer; // offset 0x8C, size 0x4
    unsigned char * realBuffer; // offset 0x90, size 0x4
    int ackQueueSize; // offset 0x94, size 0x4
    int acksPerFrame; // offset 0x98, size 0x4
    int retransmitWait; // offset 0x9C, size 0x4
    int retransmitWaitAt; // offset 0xA0, size 0x4
    int retransmitWaitInc; // offset 0xA4, size 0x4
    int retransmitWaitMax; // offset 0xA8, size 0x4
    int maxRetransmits; // offset 0xAC, size 0x4
    struct _TBPeerSession peerMasterSession; // offset 0xB0, size 0x10
    int localMissedHeartbeats; // offset 0xC0, size 0x4
};
// total size: 0xA0
struct _TBNetworkSession {
    // Members
    struct _TBNetwork * network; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    int port; // offset 0x8, size 0x4
    int gameID; // offset 0xC, size 0x4
    int version; // offset 0x10, size 0x4
    int index; // offset 0x14, size 0x4
    int pad[2]; // offset 0x18, size 0x8
    char name[64]; // offset 0x20, size 0x40
    char serverAddress[32]; // offset 0x60, size 0x20
    int numMachines; // offset 0x80, size 0x4
    int maxNumMachines; // offset 0x84, size 0x4
    int numPlayers; // offset 0x88, size 0x4
    int maxNumPlayers; // offset 0x8C, size 0x4
    int localPlayers; // offset 0x90, size 0x4
    struct _TBNetworkPlayer * players; // offset 0x94, size 0x4
    int publicSlots; // offset 0x98, size 0x4
    int privateSlots; // offset 0x9C, size 0x4
};
// total size: 0xC
struct _TBNetworkSessionPrivate {
    // Members
    struct _TBNetworkSession * sessionList; // offset 0x0, size 0x4
    int * sessionCount; // offset 0x4, size 0x4
    int sessionMax; // offset 0x8, size 0x4
};
// total size: 0x78
struct _TBNetConnection {
    // Members
    int connectionSocket; // offset 0x0, size 0x4
    TBSocketAddr inetSockAddr; // offset 0x4, size 0x10
    int addrLen; // offset 0x14, size 0x4
    unsigned char machineID; // offset 0x18, size 0x1
    unsigned char pad[2]; // offset 0x19, size 0x2
    unsigned char packetLossPercent; // offset 0x1B, size 0x1
    int flags; // offset 0x1C, size 0x4
    int connectionLatency; // offset 0x20, size 0x4
    unsigned long long lastPingTime; // offset 0x28, size 0x8
    unsigned long long lastHeartTime; // offset 0x30, size 0x8
    int missedHeartbeats; // offset 0x38, size 0x4
    int pingSequenceID; // offset 0x3C, size 0x4
    int pingTimeout; // offset 0x40, size 0x4
    int pingNumber; // offset 0x44, size 0x4
    int dataSent; // offset 0x48, size 0x4
    int dataDropped; // offset 0x4C, size 0x4
    int packetsSent; // offset 0x50, size 0x4
    int packetsDropped; // offset 0x54, size 0x4
    int dataReceived; // offset 0x58, size 0x4
    int pad2; // offset 0x5C, size 0x4
    int packetsReceived; // offset 0x60, size 0x4
    int packetsLost; // offset 0x64, size 0x4
    int pad3[2]; // offset 0x68, size 0x8
    struct _TBNetConnection * next; // offset 0x70, size 0x4
    struct _TBNetConnection * prev; // offset 0x74, size 0x4
};
// total size: 0x24
struct _TBNetQueue {
    // Members
    int id; // offset 0x0, size 0x4
    int pacInfoSize; // offset 0x4, size 0x4
    unsigned short incomingSequence; // offset 0x8, size 0x2
    unsigned short outgoingSequence; // offset 0xA, size 0x2
    unsigned short guaranteedInSequence; // offset 0xC, size 0x2
    unsigned short guaranteedOutSequence; // offset 0xE, size 0x2
    unsigned short broadcastInSequence; // offset 0x10, size 0x2
    unsigned short broadcastOutSequence; // offset 0x12, size 0x2
    unsigned char * pLocalACKList; // offset 0x14, size 0x4
    int numLocalACKS; // offset 0x18, size 0x4
    int * localACKListOrder; // offset 0x1C, size 0x4
    int numOrderedACKS; // offset 0x20, size 0x4
};
// total size: 0x10
struct _TBPeerSession {
    // Members
    unsigned long long lastSendHeartTime; // offset 0x0, size 0x8
    struct _TBPeer * pPeerList; // offset 0x8, size 0x4
};
// total size: 0x10
struct _TBNetworkPlayer {
    // Members
    unsigned char machineID; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    int playerID; // offset 0x4, size 0x4
    int localPlayerID; // offset 0x8, size 0x4
    int flags; // offset 0xC, size 0x4
};
// total size: 0x48
struct _TBPeer {
    // Members
    int bOnline; // offset 0x0, size 0x4
    unsigned char machineID; // offset 0x4, size 0x1
    unsigned char pad[3]; // offset 0x5, size 0x3
    struct _TBPeer * next; // offset 0x8, size 0x4
    struct _TBPeer * prev; // offset 0xC, size 0x4
    int peerSocket; // offset 0x10, size 0x4
    TBSocketAddr peerAddr; // offset 0x14, size 0x10
    int peerAddrLen; // offset 0x24, size 0x4
    unsigned long long lastHeartTime; // offset 0x28, size 0x8
    int missedHeartbeats; // offset 0x30, size 0x4
    unsigned long long lastLatencyTime; // offset 0x38, size 0x8
    int peerLatency; // offset 0x40, size 0x4
};
typedef void (* TBNetServerMsgFuncCallback)(struct _TBNetwork *, int, const void *, void *);
typedef void (* TBNetClientMsgFuncCallback)(struct _TBNetwork *, int, const void *, void *);
typedef void (* TBNetPeerMsgFuncCallback)(struct _TBNetwork *, int, const void *, void *);
typedef void (* TBNetScanMsgFuncCallback)(struct _TBNetwork *, int, const void *, void *, TBSocketAddr *, int);
typedef void (* TBNetInternetMsgFuncCallback)(struct _TBNetwork *, TBSocketAddr *, int);
typedef struct _TBNetConnection TBNetConnection;
typedef struct _TBPeerSession TBPeerSession;
typedef struct _TBNetwork TBNetwork;
typedef struct _TBNetQueue TBNetQueue;
// total size: 0x18
struct _TBPacketInformation {
    // Inner declarations
    union {
        TBPacketHeader header; // offset 0x0, size 0x8
        char data[]; // offset 0x0, size 0x0
    };

    // Members
    unsigned long long lastSent; // offset 0x0, size 0x8
    int numRetransmits; // offset 0x8, size 0x4
    int flags; // offset 0xC, size 0x4
    union {
        TBPacketHeader header; // offset 0x0, size 0x8
        char data[]; // offset 0x0, size 0x0
    }; // offset 0x10, size 0x8
};
typedef struct _TBPacketInformation TBPacketInformation;
typedef int TBNetPlayerID;
typedef CNetEInt TBNetPlayerIDTX;
typedef struct _TBNetworkPlayer TBNetworkPlayer;
typedef struct _TBNetworkSession TBNetworkSession;
typedef struct _TBNetworkSessionPrivate TBNetworkSessionPrivate;
// total size: 0x14
struct _TBPacketAddPlayer {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char machineID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
    CNetEInt playerID; // offset 0xC, size 0x4
    CNetEInt localPlayerID; // offset 0x10, size 0x4
};
typedef struct _TBPacketAddPlayer TBPacketAddPlayer;
// total size: 0xC
struct _TBPacketPlayerInfo {
    // Members
    unsigned char machineID; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    CNetEInt playerID; // offset 0x4, size 0x4
    CNetEInt localPlayerID; // offset 0x8, size 0x4
};
typedef struct _TBPacketPlayerInfo TBPacketPlayerInfo;
// total size: 0xC
struct _TBPacketAddPlayers {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    CNetEInt players; // offset 0x8, size 0x4
    TBPacketPlayerInfo player[]; // offset 0xC, size 0x0
};
typedef struct _TBPacketAddPlayers TBPacketAddPlayers;
// total size: 0x14
struct _TBPacketRequestPlayer {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char machineID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
    CNetEInt playerID; // offset 0xC, size 0x4
    CNetEInt localPlayerID; // offset 0x10, size 0x4
};
typedef struct _TBPacketRequestPlayer TBPacketRequestPlayer;
// total size: 0x14
struct _TBPacketRequestDeletePlayer {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char machineID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
    CNetEInt playerID; // offset 0xC, size 0x4
    CNetEInt localPlayerID; // offset 0x10, size 0x4
};
typedef struct _TBPacketRequestDeletePlayer TBPacketRequestDeletePlayer;
// total size: 0x14
struct _TBPacketDeletePlayer {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char machineID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
    CNetEInt playerID; // offset 0xC, size 0x4
    CNetEInt localPlayerID; // offset 0x10, size 0x4
};
typedef struct _TBPacketDeletePlayer TBPacketDeletePlayer;
// total size: 0xC
struct _TBPacketDeletePlayers {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    CNetEInt players; // offset 0x8, size 0x4
    TBPacketPlayerInfo player[]; // offset 0xC, size 0x0
};
typedef struct _TBPacketDeletePlayers TBPacketDeletePlayers;
// total size: 0x10
struct _TBPacketSessionFull {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char machineID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
    CNetEInt localPlayerID; // offset 0xC, size 0x4
};
typedef struct _TBPacketSessionFull TBPacketSessionFull;
// total size: 0x14
struct _TBPacketPlayerNotFound {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char machineID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
    CNetEInt playerID; // offset 0xC, size 0x4
    CNetEInt localPlayerID; // offset 0x10, size 0x4
};
typedef struct _TBPacketPlayerNotFound TBPacketPlayerNotFound;
typedef struct _TBPeer TBPeer;
// total size: 0xC
struct _TBPacketPeerLatencyRequest {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char toId; // offset 0x8, size 0x1
    unsigned char fromId; // offset 0x9, size 0x1
    unsigned char pad[2]; // offset 0xA, size 0x2
};
typedef struct _TBPacketPeerLatencyRequest TBPacketPeerLatencyRequest;
// total size: 0xC
struct _TBPacketPeerLatency {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char toId; // offset 0x8, size 0x1
    unsigned char fromId; // offset 0x9, size 0x1
    unsigned char pad[2]; // offset 0xA, size 0x2
};
typedef struct _TBPacketPeerLatency TBPacketPeerLatency;
// total size: 0x8
struct _TBPacketPeerJoinRequest {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
};
typedef struct _TBPacketPeerJoinRequest TBPacketPeerJoinRequest;
// total size: 0x18
struct _TBPeerInformation {
    // Members
    CNetEInt bOnline; // offset 0x0, size 0x4
    unsigned char machineID; // offset 0x4, size 0x1
    unsigned char pad[3]; // offset 0x5, size 0x3
    TBSocketAddr peerAddr; // offset 0x8, size 0x10
};
typedef struct _TBPeerInformation TBPeerInformation;
// total size: 0x190
struct _TBPacketPeerJoinAccepted {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char peerID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
    CNetEInt numPeers; // offset 0xC, size 0x4
    TBPeerInformation PeerList[16]; // offset 0x10, size 0x180
};
typedef struct _TBPacketPeerJoinAccepted TBPacketPeerJoinAccepted;
// total size: 0xC
struct _TBPacketPeerJoinRefused {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    CNetEInt reasonCode; // offset 0x8, size 0x4
};
typedef struct _TBPacketPeerJoinRefused TBPacketPeerJoinRefused;
// total size: 0x24
struct _TBPacketNewPeerJoined {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    TBPeerInformation newPeer; // offset 0x8, size 0x18
    unsigned char peerID; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
};
typedef struct _TBPacketNewPeerJoined TBPacketNewPeerJoined;
// total size: 0xC
struct _TBPacketPeerDisconnection {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    unsigned char peerID; // offset 0x8, size 0x1
    unsigned char pad[3]; // offset 0x9, size 0x3
};
typedef struct _TBPacketPeerDisconnection TBPacketPeerDisconnection;
enum EBOVComponentType {
    EBOVCOMPONENTTYPE_CHAR = 0,
    EBOVCOMPONENTTYPE_SHORT = 1,
    EBOVCOMPONENTTYPE_USHORT = 2,
    EBOVCOMPONENTTYPE_INT = 3,
    EBOVCOMPONENTTYPE_UINT = 4,
    EBOVCOMPONENTTYPE_FLOAT = 5,
    EBOVCOMPONENTTYPE_TBVECTOR = 6,
    EBOVCOMPONENTTYPE_TBQUATERNION = 7,
    EBOVCOMPONENTTYPE_TBQUATERNION_FAST = 8,
    EBOVCOMPONENTTYPE_TBVECTOR_WORLDPOS = 9,
    EBOVCOMPONENTTYPE_TBVECTOR_WORLDVEL = 10,
    EBOVCOMPONENTTYPE_TBVECTOR_GAMEVEC1 = 11,
    EBOVCOMPONENTTYPE_TBVECTOR_GAMEVEC2 = 12,
    EBOVCOMPONENTTYPE_STRING = 13,
    EBOVCOMPONENTTYPE_EVENT = 14,
    EBOVCOMPONENTTYPE_FLAGS = 15,
    EBOVCOMPONENTTYPE_LAST = 16,
};
enum EBOVComponentPriority {
    EBOVCOMPONENTPRIORITY_DEAD = 0,
    EBOVCOMPONENTPRIORITY_GUARANTEED = 1,
    EBOVCOMPONENTPRIORITY_HIGH = 2,
    EBOVCOMPONENTPRIORITY_MEDIUM = 3,
    EBOVCOMPONENTPRIORITY_LOW = 4,
    EBOVCOMPONENTPRIORITY_INIT = 5,
    EBOVCOMPONENTPRIORITY_LAST = 6,
};
enum EBDobsRange {
    EBDOBSRANGE_NULL = 0,
    EBDOBSRANGE_WORLDPOSITION = 1,
    EBDOBSRANGE_WORLDVELOCITY = 2,
    EBDOBSRANGE_GAMEVECTOR1 = 3,
    EBDOBSRANGE_GAMEVECTOR2 = 4,
    EBDOBSRANGE_LAST = 5,
};
enum EBDobsSessionState {
    EBDDOBSSESSIONSTATE_DEAD = 0,
    EBDDOBSSESSIONSTATE_ACTIVE = 1,
    EBDDOBSSESSIONSTATE_PIGGYBACKED = 2,
    EBDDOBSSESSIONSTATE_WAITING = 3,
    EBDDOBSSESSIONSTATE_JOINED = 4,
};
// total size: 0x24
struct CBObjectView {
    // Members
    void * gameObject; // offset 0x0, size 0x4
    int gameType; // offset 0x4, size 0x4
    struct _TBOVComponent * compChain; // offset 0x8, size 0x4
    struct CBObjectView * next; // offset 0xC, size 0x4
    char owner; // offset 0x10, size 0x1
    char ovID; // offset 0x11, size 0x1
    unsigned char compID; // offset 0x12, size 0x1
    char flags; // offset 0x13, size 0x1
    bool newOV; // offset 0x14, size 0x1
    int componentMemorySize; // offset 0x18, size 0x4
    char * componentMemory; // offset 0x1C, size 0x4
    const struct __vtbl_ptr_type * _vptr.CBObjectView; // offset 0x20, size 0x4
};
typedef struct CBObjectView CBObjectView;
// total size: 0x2C
struct _TBOVComponent {
    // Members
    void * focus; // offset 0x0, size 0x4
    unsigned int focusCRC; // offset 0x4, size 0x4
    unsigned int focusCheckCRC; // offset 0x8, size 0x4
    enum EBOVComponentType type; // offset 0xC, size 0x4
    char id; // offset 0x10, size 0x1
    unsigned char priority; // offset 0x11, size 0x1
    char flags; // offset 0x12, size 0x1
    struct _TBOVComponent * next; // offset 0x14, size 0x4
    int (* gameCallback)(CBObjectView *, struct _TBOVComponent *); // offset 0x18, size 0x4
    int passFrequency; // offset 0x1C, size 0x4
    int passCount; // offset 0x20, size 0x4
    int passChecked; // offset 0x24, size 0x4
    char changes; // offset 0x28, size 0x1
    char size; // offset 0x29, size 0x1
    char focusSize; // offset 0x2A, size 0x1
    char scratch; // offset 0x2B, size 0x1
};
typedef int (* TBRelevantSetCallback)(unsigned char, CBObjectView *, void *);
typedef int (* TBOVComponentCallback)(CBObjectView *, struct _TBOVComponent *);
typedef struct _TBOVComponent TBOVComponent;
// total size: 0x30
struct _TBOVComponentChar {
    // Members
    TBOVComponent common; // offset 0x0, size 0x2C
    char copy; // offset 0x2C, size 0x1
    char threshold; // offset 0x2D, size 0x1
    char pad[2]; // offset 0x2E, size 0x2
};
typedef struct _TBOVComponentChar TBOVComponentChar;
// total size: 0x34
struct _TBOVComponentInt {
    // Members
    TBOVComponent common; // offset 0x0, size 0x2C
    int copy; // offset 0x2C, size 0x4
    int threshold; // offset 0x30, size 0x4
};
typedef struct _TBOVComponentInt TBOVComponentInt;
// total size: 0x30
struct _TBOVComponentShort {
    // Members
    TBOVComponent common; // offset 0x0, size 0x2C
    short copy; // offset 0x2C, size 0x2
    short threshold; // offset 0x2E, size 0x2
};
typedef struct _TBOVComponentShort TBOVComponentShort;
// total size: 0x34
struct _TBOVComponentFloat {
    // Members
    TBOVComponent common; // offset 0x0, size 0x2C
    float copy; // offset 0x2C, size 0x4
    float threshold; // offset 0x30, size 0x4
};
typedef struct _TBOVComponentFloat TBOVComponentFloat;
// total size: 0x40
struct _TBOVComponentTBVector {
    // Members
    TBOVComponent common; // offset 0x0, size 0x2C
    TBVector copy; // offset 0x2C, size 0x10
    float threshold; // offset 0x3C, size 0x4
};
typedef struct _TBOVComponentTBVector TBOVComponentTBVector;
// total size: 0x40
struct _TBOVComponentTBQuaternion {
    // Members
    TBOVComponent common; // offset 0x0, size 0x2C
    float x; // offset 0x2C, size 0x4
    float y; // offset 0x30, size 0x4
    float z; // offset 0x34, size 0x4
    float threshold; // offset 0x38, size 0x4
    unsigned int crc; // offset 0x3C, size 0x4
};
typedef struct _TBOVComponentTBQuaternion TBOVComponentTBQuaternion;
// total size: 0x34
struct _TBOVComponentString {
    // Members
    TBOVComponent common; // offset 0x0, size 0x2C
    int dataSize; // offset 0x2C, size 0x4
    unsigned int crc; // offset 0x30, size 0x4
};
typedef struct _TBOVComponentString TBOVComponentString;
// total size: 0x34
struct _TBOVComponentEvent {
    // Members
    TBOVComponent common; // offset 0x0, size 0x2C
    int dataSize; // offset 0x2C, size 0x4
    unsigned int crc; // offset 0x30, size 0x4
};
typedef struct _TBOVComponentEvent TBOVComponentEvent;
// total size: 0x34
struct _TBOVComponentFlags {
    // Members
    TBOVComponent common; // offset 0x0, size 0x2C
    unsigned int copy; // offset 0x2C, size 0x4
    unsigned int mask; // offset 0x30, size 0x4
};
typedef struct _TBOVComponentFlags TBOVComponentFlags;
// total size: 0xC
struct _TBPacketDobs {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    CNetEInt received; // offset 0x8, size 0x4
    char buffer[]; // offset 0xC, size 0x0
};
typedef struct _TBPacketDobs TBPacketDobs;
// total size: 0xC
struct _TBPacketDobsConnect {
    // Members
    TBPacketHeader header; // offset 0x0, size 0x8
    CNetEInt readyStates; // offset 0x8, size 0x4
};
typedef struct _TBPacketDobsConnect TBPacketDobsConnect;
// total size: 0xCC
struct _TBDOBClientInfo {
    // Members
    CBObjectView * OVFirst; // offset 0x0, size 0x4
    TBPacketDobs * clientConstruct; // offset 0x4, size 0x4
    char * clientConstructPtr; // offset 0x8, size 0x4
    int clientPacketSize; // offset 0xC, size 0x4
    int clientAccumulator[6]; // offset 0x10, size 0x18
    int clientBandwidth; // offset 0x28, size 0x4
    int bw[6]; // offset 0x2C, size 0x18
    int sentTo[8]; // offset 0x44, size 0x20
    int gotBack[8]; // offset 0x64, size 0x20
    float pcLoss; // offset 0x84, size 0x4
    int receivedBy; // offset 0x88, size 0x4
    float avgSend; // offset 0x8C, size 0x4
    float avgAck; // offset 0x90, size 0x4
    CBObjectView * restartOV[6]; // offset 0x94, size 0x18
    TBOVComponent * restartOVC[6]; // offset 0xAC, size 0x18
    char * collatedMem; // offset 0xC4, size 0x4
    unsigned char headerSet; // offset 0xC8, size 0x1
    unsigned char connected; // offset 0xC9, size 0x1
    unsigned char readyToPlay; // offset 0xCA, size 0x1
};
typedef struct _TBDOBClientInfo TBDOBClientInfo;
// total size: 0x290
struct _TBDOBControl {
    // Members
    float rangeMin[4][5]; // offset 0x0, size 0x50
    float rangeStep[4][5]; // offset 0x50, size 0x50
    int maxClients; // offset 0xA0, size 0x4
    int ovindex; // offset 0xA4, size 0x4
    int masterAccumulator; // offset 0xA8, size 0x4
    int subAccumulator; // offset 0xAC, size 0x4
    int bandwidth; // offset 0xB0, size 0x4
    int masterBandLimit; // offset 0xB4, size 0x4
    int clientBandLimit; // offset 0xB8, size 0x4
    int kbps; // offset 0xBC, size 0x4
    unsigned long long timer; // offset 0xC0, size 0x8
    float smoothedTimer; // offset 0xC8, size 0x4
    float smoothedCPS; // offset 0xCC, size 0x4
    int highPercent; // offset 0xD0, size 0x4
    int bw[6]; // offset 0xD4, size 0x18
    int bwAccumulators[6]; // offset 0xEC, size 0x18
    bool bugout[6]; // offset 0x104, size 0x6
    bool finish; // offset 0x11C, size 0x1
    int client; // offset 0x120, size 0x4
    int owner; // offset 0x124, size 0x4
    int restartAtClient[6]; // offset 0x128, size 0x18
    enum EBOVComponentPriority priorityPass; // offset 0x140, size 0x4
    int prioritiesOn; // offset 0x144, size 0x4
    int ignorePriorities; // offset 0x148, size 0x4
    int noofObjectViews; // offset 0x14C, size 0x4
    int noofComponents; // offset 0x150, size 0x4
    int thisSend; // offset 0x154, size 0x4
    int syncPass; // offset 0x158, size 0x4
    int history; // offset 0x15C, size 0x4
    TBDOBClientInfo * clientInfos; // offset 0x160, size 0x4
    TBDOBClientInfo * ci; // offset 0x164, size 0x4
    char * constructPtr; // offset 0x168, size 0x4
    int packetSize; // offset 0x16C, size 0x4
    unsigned char machineID; // offset 0x170, size 0x1
    int trickle; // offset 0x174, size 0x4
    int trickleClient; // offset 0x178, size 0x4
    int trickleOwner; // offset 0x17C, size 0x4
    CBObjectView * trickleOV; // offset 0x180, size 0x4
    TBOVComponent * trickleComponent; // offset 0x184, size 0x4
    void (* UserServerMessageCallback)(TBNetwork *, int, const void *, void *); // offset 0x188, size 0x4
    void (* UserClientMessageCallback)(TBNetwork *, int, const void *, void *); // offset 0x18C, size 0x4
    void (* HijackedServerMessageCallback)(TBNetwork *, int, const void *, void *); // offset 0x190, size 0x4
    void (* HijackedClientMessageCallback)(TBNetwork *, int, const void *, void *); // offset 0x194, size 0x4
    void * UserContext; // offset 0x198, size 0x4
    int (* RelevantSetCallback)(unsigned char, CBObjectView *, void *); // offset 0x19C, size 0x4
    void * RSCContext; // offset 0x1A0, size 0x4
    TBNetworkSession session; // offset 0x1A4, size 0xA0
    int gameID; // offset 0x244, size 0x4
    enum EBDobsSessionState sessionActive; // offset 0x248, size 0x4
    bool sentConf; // offset 0x24C, size 0x1
    CBObjectView * latestOV; // offset 0x250, size 0x4
    TBOVComponent * latestOVC; // offset 0x254, size 0x4
    bool collated; // offset 0x258, size 0x1
    int collatedSize; // offset 0x25C, size 0x4
    float passTX; // offset 0x260, size 0x4
    float avgTX; // offset 0x264, size 0x4
    float pcentTX; // offset 0x268, size 0x4
    float passRQD; // offset 0x26C, size 0x4
    float avgRQD; // offset 0x270, size 0x4
    float pcentRQD; // offset 0x274, size 0x4
    int passesPerSecond; // offset 0x278, size 0x4
    int passRate; // offset 0x27C, size 0x4
    int handicap; // offset 0x280, size 0x4
    unsigned int allReady; // offset 0x284, size 0x4
    bool broadcastMode; // offset 0x288, size 0x1
    char * broadcastBuffer; // offset 0x28C, size 0x4
};
typedef struct _TBDOBControl TBDOBControl;
// total size: 0x184
struct _TBDOBDebugData {
    // Members
    int receipts; // offset 0x0, size 0x4
    int txSize[32]; // offset 0x4, size 0x80
    int includeHeaders; // offset 0x84, size 0x4
    int txTotal; // offset 0x88, size 0x4
    int txRequired[32]; // offset 0x8C, size 0x80
    int txTotalRequired; // offset 0x10C, size 0x4
    int ovMemory; // offset 0x110, size 0x4
    int compMemory; // offset 0x114, size 0x4
    int compPri[6]; // offset 0x118, size 0x18
    int oldSyncPass; // offset 0x130, size 0x4
    int packetLoss; // offset 0x134, size 0x4
    int changes; // offset 0x138, size 0x4
    int receivedTot; // offset 0x13C, size 0x4
    int receiveCap; // offset 0x140, size 0x4
    int ovChecked; // offset 0x144, size 0x4
    int ovcTotChecked; // offset 0x148, size 0x4
    int ovcChecked[6]; // offset 0x14C, size 0x18
    int priSize[6]; // offset 0x164, size 0x18
    int checkRequired; // offset 0x17C, size 0x4
    int trickleMarked; // offset 0x180, size 0x4
};
typedef struct _TBDOBDebugData TBDOBDebugData;
enum EBNetDebugAPI {
    BN_NETDEBUGAPI_STUB = 0,
    BN_NETDEBUGAPI_NETWORK = 1,
    BN_NETDEBUGAPI_SN = 2,
};
enum EBNetDebugMessageID {
    BN_NETDEBUGMSGID_STATS = 0,
    BN_NETDEBUGMSGID_HEAP = 1,
    BN_NETDEBUGMSGID_HEAPUPDATE = 2,
    BN_NETDEBUGMSGID_VERSION = 3,
    BN_NETDEBUGMSGID_SETTINGS = 4,
    BN_NETDEBUGMSGID_GUIMENU_ADD = 5,
    BN_NETDEBUGMSGID_GUIMENU_DELETE = 6,
    BN_NETDEBUGMSGID_GUIMENU_SELECT = 7,
    BN_NETDEBUGMSGID_GUIMENU_COMMAND = 8,
    BN_NETDEBUGMSGID_SCREENSHOT = 9,
    BN_NETDEBUGMSGID_LARGESCREENSHOT = 10,
    BN_NETDEBUGMSGID_WORLDNODETRANSFORM = 11,
    BN_NETDEBUGMSGID_CONSOLE = 12,
    BN_NETDEBUGMSGID_FLARETIMERS = 13,
    BN_NETDEBUGMSGID_ENTITYCLASSDATA = 14,
    BN_NETDEBUGMSGID_WORLDNODEOVERLAY = 15,
    BN_NETDEBUGMSGID_WORLDNODECLONE = 16,
    BN_NETDEBUGMSGID_WORLDNODEDELETE = 17,
    BN_NETDEBUGMSGID_WORLDNODELIGHT = 18,
    BN_NETDEBUGMSGID_LOADWORLD = 19,
    BN_NETDEBUGMSGID_TERMINATE = 20,
    BN_NETDEBUGMSGID_DRAWPRIMITIVE = 21,
    BN_NETDEBUGMSGID_VIEWPORT = 22,
    BN_NETDEBUGMSGID_ACTIONLIST = 23,
    BN_NETDEBUGMSGID_SELECTWORLDNODE = 24,
    BN_NETDEBUGMSGID_NODETEXT = 25,
    BN_NETDEBUGMSGID_DISPLAYLIST = 26,
    BN_NETDEBUGMSGID_COMMANDSTRING = 27,
    BN_NETDEBUGMSGID_COLLSPACEEXPLORER = 28,
    BN_NETDEBUGMSGID_PROFILE = 29,
    BN_NETDEBUGMSGID_FLARETIMERS_REQUEST = 13,
    BN_NETDEBUGMSGID_PROFILE_REQUEST = 29,
    BN_NETDEBUGMSGID_USER = 128,
};
enum EBNetDebugStatID {
    BN_NETDEBUGSTATID_FLIP = 0,
    BN_NETDEBUGSTATID_HEAPSIZE = 1,
    BN_NETDEBUGSTATID_TIMER = 2,
    BN_NETDEBUGSTATID_MALLOCS = 3,
    BN_NETDEBUGSTATID_FREES = 4,
    BN_NETDEBUGSTATID_FPS = 5,
    BN_NETDEBUGSTATID_PROCESSOR_FIRST = 6,
    BN_NETDEBUGSTATID_PROCESSOR0 = 6,
    BN_NETDEBUGSTATID_PROCESSOR1 = 7,
    BN_NETDEBUGSTATID_PROCESSOR2 = 8,
    BN_NETDEBUGSTATID_PROCESSOR3 = 9,
    BN_NETDEBUGSTATID_PROCESSOR4 = 10,
    BN_NETDEBUGSTATID_PROCESSOR5 = 11,
    BN_NETDEBUGSTATID_PROCESSOR6 = 12,
    BN_NETDEBUGSTATID_PROCESSOR7 = 13,
    BN_NETDEBUGSTATID_PROCESSOR_LAST = 13,
    BN_NETDEBUGSTATID_ICACHE_MISS = 14,
    BN_NETDEBUGSTATID_STALL = 15,
    BN_NETDEBUGSTATID_DUAL_ISSUE = 16,
    BN_NETDEBUGSTATID_DUAL_COMPLETE = 17,
    BN_NETDEBUGSTATID_RENDERSTATS = 128,
    BN_NETDEBUGSTATID_USER = 256,
    BN_NETDEBUGSTATID_MAX = 512,
};
enum EBNetDebugEntityClassID {
    BN_ENTITYCLASSID_PRIMARY = 0,
    BN_ENTITYCLASSID_RENDERSTATES = 1,
    BN_ENTITYCLASSID_SIMULATION = 2,
    BN_ENTITYCLASSID_NOOF = 3,
};
// total size: 0x4
struct _TBNetDebugPacketHeader {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    CNetEUShort size; // offset 0x2, size 0x2
};
typedef struct _TBNetDebugPacketHeader TBNetDebugPacketHeader;
// total size: 0x8
struct _TBNetDebugStat {
    // Members
    CNetEInt id; // offset 0x0, size 0x4
    CNetEInt value; // offset 0x4, size 0x4
};
typedef struct _TBNetDebugStat TBNetDebugStat;
// total size: 0x8
struct _TBNetDebugPacketStats {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt noofStats; // offset 0x4, size 0x4
    TBNetDebugStat stat[]; // offset 0x8, size 0x0
};
typedef struct _TBNetDebugPacketStats TBNetDebugPacketStats;
// total size: 0x58
struct _TBNetDebugBlock {
    // Members
    CNetEInt address; // offset 0x0, size 0x4
    CNetEInt size; // offset 0x4, size 0x4
    CNetEUShort flags; // offset 0x8, size 0x2
    CNetEUShort pad; // offset 0xA, size 0x2
    CNetEInt uid; // offset 0xC, size 0x4
    CNetEInt actualSize; // offset 0x10, size 0x4
    char filename[32]; // offset 0x14, size 0x20
    CNetEInt line; // offset 0x34, size 0x4
    char group[32]; // offset 0x38, size 0x20
};
typedef struct _TBNetDebugBlock TBNetDebugBlock;
// total size: 0x10
struct _TBNetDebugPacketHeap {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt heapStart; // offset 0x4, size 0x4
    CNetEInt totalBlocks; // offset 0x8, size 0x4
    unsigned char blockControlSize; // offset 0xC, size 0x1
    unsigned char noofFreeBlocks; // offset 0xD, size 0x1
    unsigned char noofUsedBlocks; // offset 0xE, size 0x1
    unsigned char pad; // offset 0xF, size 0x1
    TBNetDebugBlock block[]; // offset 0x10, size 0x0
};
typedef struct _TBNetDebugPacketHeap TBNetDebugPacketHeap;
// total size: 0x60
struct _TBNetDebugPacketHeapUpdate {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEUShort used; // offset 0x4, size 0x2
    unsigned char pad[2]; // offset 0x6, size 0x2
    TBNetDebugBlock block; // offset 0x8, size 0x58
};
typedef struct _TBNetDebugPacketHeapUpdate TBNetDebugPacketHeapUpdate;
// total size: 0x1C
struct _TBNetDebugPacketVersion {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt platform; // offset 0x4, size 0x4
    CNetEInt build; // offset 0x8, size 0x4
    CNetEInt point; // offset 0xC, size 0x4
    CNetEInt patch; // offset 0x10, size 0x4
    CNetEInt fuse; // offset 0x14, size 0x4
    CNetEInt config; // offset 0x18, size 0x4
};
typedef struct _TBNetDebugPacketVersion TBNetDebugPacketVersion;
// total size: 0x8
struct _TBNetDebugPacketSettings {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt fps; // offset 0x4, size 0x4
};
typedef struct _TBNetDebugPacketSettings TBNetDebugPacketSettings;
// total size: 0x48
struct _TBNetDebugPacketGui {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt GuiMenuBarAddress; // offset 0x4, size 0x4
    CNetEInt address; // offset 0x8, size 0x4
    CNetEInt menuBarAddress; // offset 0xC, size 0x4
    CNetEInt index; // offset 0x10, size 0x4
    CNetEInt items; // offset 0x14, size 0x4
    char text[30]; // offset 0x18, size 0x1E
    CNetEInt subMenuAddress; // offset 0x38, size 0x4
    CNetEInt id; // offset 0x3C, size 0x4
    CNetEUShort xPos; // offset 0x40, size 0x2
    CNetEUShort yPos; // offset 0x42, size 0x2
    CNetEUShort width; // offset 0x44, size 0x2
    CNetEUShort flags; // offset 0x46, size 0x2
};
typedef struct _TBNetDebugPacketGui TBNetDebugPacketGui;
// total size: 0x8
struct _TBNetDebugPacketGuiDelete {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt address; // offset 0x4, size 0x4
};
typedef struct _TBNetDebugPacketGuiDelete TBNetDebugPacketGuiDelete;
// total size: 0x10
struct _TBNetDebugPacketGuiSelect {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt menuAddress; // offset 0x4, size 0x4
    CNetEInt index; // offset 0x8, size 0x4
    CNetEInt id; // offset 0xC, size 0x4
};
typedef struct _TBNetDebugPacketGuiSelect TBNetDebugPacketGuiSelect;
// total size: 0x10
struct _TBNetDebugPacketGuiCommand {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt menuAddress; // offset 0x4, size 0x4
    CNetEInt index; // offset 0x8, size 0x4
    CNetEInt id; // offset 0xC, size 0x4
};
typedef struct _TBNetDebugPacketGuiCommand TBNetDebugPacketGuiCommand;
// total size: 0x18
struct _TBNetDebugPacketScreenshot {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char bytesPerPixel; // offset 0x5, size 0x1
    unsigned char tile; // offset 0x6, size 0x1
    unsigned char tiles; // offset 0x7, size 0x1
    CNetEInt w; // offset 0x8, size 0x4
    CNetEInt h; // offset 0xC, size 0x4
    CNetEInt offset; // offset 0x10, size 0x4
    CNetEInt chunks; // offset 0x14, size 0x4
    unsigned char data[]; // offset 0x18, size 0x0
};
typedef struct _TBNetDebugPacketScreenshot TBNetDebugPacketScreenshot;
// total size: 0x8
struct _TBNetDebugPacketScreenshotLarge {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char tiles; // offset 0x5, size 0x1
    unsigned char pad[2]; // offset 0x6, size 0x2
};
typedef struct _TBNetDebugPacketScreenshotLarge TBNetDebugPacketScreenshotLarge;
// total size: 0x14
struct _TBNetDebugPacketProfileRequest {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt noofFrames; // offset 0x4, size 0x4
    CNetEInt worstOnly; // offset 0x8, size 0x4
    CNetEInt zeroValues; // offset 0xC, size 0x4
    CNetEInt pad; // offset 0x10, size 0x4
};
typedef struct _TBNetDebugPacketProfileRequest TBNetDebugPacketProfileRequest;
// total size: 0x8
struct _TBNetDebugPacketProfileChild {
    // Members
    CNetEInt functionId; // offset 0x0, size 0x4
    CNetEInt noofCalls; // offset 0x4, size 0x4
};
typedef struct _TBNetDebugPacketProfileChild TBNetDebugPacketProfileChild;
// total size: 0x64
struct _TBNetDebugPacketProfile {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    char functionName[64]; // offset 0x4, size 0x40
    CNetEInt functionId; // offset 0x44, size 0x4
    CNetEInt noofFunctions; // offset 0x48, size 0x4
    CNetEInt noofCalls; // offset 0x4C, size 0x4
    CNetEInt noofCalledFunctions; // offset 0x50, size 0x4
    CNetEFloat totalTime; // offset 0x54, size 0x4
    CNetEFloat localTime; // offset 0x58, size 0x4
    CNetEInt frame; // offset 0x5C, size 0x4
    CNetEInt pad; // offset 0x60, size 0x4
    TBNetDebugPacketProfileChild calledFunction[]; // offset 0x64, size 0x0
};
typedef struct _TBNetDebugPacketProfile TBNetDebugPacketProfile;
// total size: 0x38
struct _TBNetDebugPacketWorldNodeTransform {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    unsigned char request; // offset 0x4, size 0x1
    CNetEUInt worldCRC; // offset 0x8, size 0x4
    CNetEUInt nodeCRC; // offset 0xC, size 0x4
    CNetEFloat position[3]; // offset 0x10, size 0xC
    CNetEFloat orientation[4]; // offset 0x1C, size 0x10
    CNetEFloat scale[3]; // offset 0x2C, size 0xC
};
typedef struct _TBNetDebugPacketWorldNodeTransform TBNetDebugPacketWorldNodeTransform;
// total size: 0x4
struct _TBNetDebugPacketConsole {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    char consoleText[]; // offset 0x4, size 0x0
};
typedef struct _TBNetDebugPacketConsole TBNetDebugPacketConsole;
// total size: 0x2C
struct _TBNetDebugTimer {
    // Members
    char name[32]; // offset 0x0, size 0x20
    CNetEFloat msTime; // offset 0x20, size 0x4
    CNetEFloat startTime; // offset 0x24, size 0x4
    CNetEUInt typeID; // offset 0x28, size 0x4
};
typedef struct _TBNetDebugTimer TBNetDebugTimer;
// total size: 0xC
struct _TBNetDebugPacketFlareTimersRequest {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt sendTimers; // offset 0x4, size 0x4
    CNetEInt worstOnly; // offset 0x8, size 0x4
};
typedef struct _TBNetDebugPacketFlareTimersRequest TBNetDebugPacketFlareTimersRequest;
// total size: 0xC
struct _TBNetDebugPacketFlareTimers {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt noofTimers; // offset 0x4, size 0x4
    CNetEInt frame; // offset 0x8, size 0x4
    TBNetDebugTimer timer[]; // offset 0xC, size 0x0
};
typedef struct _TBNetDebugPacketFlareTimers TBNetDebugPacketFlareTimers;
// total size: 0x10
struct _TBNetDebugPacketEntityClassData {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEUInt nodeCRC; // offset 0x4, size 0x4
    CNetEUInt dataLength; // offset 0x8, size 0x4
    enum EBNetDebugEntityClassID entityClassID; // offset 0xC, size 0x4
    char data[]; // offset 0x10, size 0x0
};
typedef struct _TBNetDebugPacketEntityClassData TBNetDebugPacketEntityClassData;
// total size: 0x8
struct _TBNetDebugPacketActionList {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEUInt dataLength; // offset 0x4, size 0x4
    char data[]; // offset 0x8, size 0x0
};
typedef struct _TBNetDebugPacketActionList TBNetDebugPacketActionList;
// total size: 0xC
struct _TBNetDebugPacketSelectWorldNode {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEUInt nodeCRC; // offset 0x4, size 0x4
    CNetEInt select; // offset 0x8, size 0x4
};
typedef struct _TBNetDebugPacketSelectWorldNode TBNetDebugPacketSelectWorldNode;
// total size: 0xC
struct _TBNetDebugPacketNodeText {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEUInt nodeCRC; // offset 0x4, size 0x4
    CNetEInt first; // offset 0x8, size 0x4
    char nodeText[]; // offset 0xC, size 0x0
};
typedef struct _TBNetDebugPacketNodeText TBNetDebugPacketNodeText;
// total size: 0xC
struct _TBNetDebugPacketCollSpaceExplorer {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt nodeID; // offset 0x4, size 0x4
    CNetEInt parentNodeID; // offset 0x8, size 0x4
    char nodeName[]; // offset 0xC, size 0x0
};
typedef struct _TBNetDebugPacketCollSpaceExplorer TBNetDebugPacketCollSpaceExplorer;
// total size: 0x28
struct _TBNetDebugPacketWorldNodeOverlay {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEUInt nodeCRC; // offset 0x4, size 0x4
    CNetEFloat position[2]; // offset 0x8, size 0x8
    CNetEFloat pivot[2]; // offset 0x10, size 0x8
    CNetEFloat size[2]; // offset 0x18, size 0x8
    CNetEFloat rotation; // offset 0x20, size 0x4
    unsigned char colour[4]; // offset 0x24, size 0x4
};
typedef struct _TBNetDebugPacketWorldNodeOverlay TBNetDebugPacketWorldNodeOverlay;
// total size: 0x28
struct _TBNetDebugPacketWorldNodeClone {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEUInt nodeCRC; // offset 0x4, size 0x4
    char newNodeName[32]; // offset 0x8, size 0x20
};
typedef struct _TBNetDebugPacketWorldNodeClone TBNetDebugPacketWorldNodeClone;
// total size: 0x8
struct _TBNetDebugPacketWorldNodeDelete {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEUInt nodeCRC; // offset 0x4, size 0x4
};
typedef struct _TBNetDebugPacketWorldNodeDelete TBNetDebugPacketWorldNodeDelete;
// total size: 0x14
struct _TBNetDebugPacketWorldNodeLight {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEUInt nodeCRC; // offset 0x4, size 0x4
    unsigned char colour[3]; // offset 0x8, size 0x3
    CNetEFloat attenuation; // offset 0xC, size 0x4
    CNetEFloat cone; // offset 0x10, size 0x4
};
typedef struct _TBNetDebugPacketWorldNodeLight TBNetDebugPacketWorldNodeLight;
// total size: 0x6
struct _TBNetDebugPacketLoadWorld {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    char closeCurrent; // offset 0x4, size 0x1
    char worldName[]; // offset 0x5, size 0x0
};
typedef struct _TBNetDebugPacketLoadWorld TBNetDebugPacketLoadWorld;
// total size: 0x4
struct _TBNetDebugPacketTerminate {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
};
typedef struct _TBNetDebugPacketTerminate TBNetDebugPacketTerminate;
// total size: 0x24
struct _TBNetDebugPacketPrimVert {
    // Inner declarations
    union {
        CNetEUInt colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    };

    // Members
    CNetEFloat x; // offset 0x0, size 0x4
    CNetEFloat y; // offset 0x4, size 0x4
    CNetEFloat z; // offset 0x8, size 0x4
    CNetEFloat xn; // offset 0xC, size 0x4
    CNetEFloat yn; // offset 0x10, size 0x4
    CNetEFloat zn; // offset 0x14, size 0x4
    union {
        CNetEUInt colour; // offset 0x0, size 0x4
        unsigned char rgba[4]; // offset 0x0, size 0x4
    }; // offset 0x18, size 0x4
    CNetEFloat u; // offset 0x1C, size 0x4
    CNetEFloat v; // offset 0x20, size 0x4
};
typedef struct _TBNetDebugPacketPrimVert TBNetDebugPacketPrimVert;
// total size: 0x14
struct _TBNetDebugPacketDrawPrimitive {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEInt primType; // offset 0x4, size 0x4
    CNetEInt vertCount; // offset 0x8, size 0x4
    CNetEInt vertType; // offset 0xC, size 0x4
    CNetEInt flags; // offset 0x10, size 0x4
    unsigned char verts[]; // offset 0x14, size 0x0
};
typedef struct _TBNetDebugPacketDrawPrimitive TBNetDebugPacketDrawPrimitive;
// total size: 0x14
struct _TBNetDebugPacketViewport {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEFloat nearClip; // offset 0x4, size 0x4
    CNetEFloat farClip; // offset 0x8, size 0x4
    CNetEFloat xFov; // offset 0xC, size 0x4
    CNetEFloat yFov; // offset 0x10, size 0x4
};
typedef struct _TBNetDebugPacketViewport TBNetDebugPacketViewport;
// total size: 0x10
struct _TBNetDebugPacketDisplayList {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    CNetEUInt totalCommands; // offset 0x4, size 0x4
    CNetEUInt commandOffset; // offset 0x8, size 0x4
    CNetEUInt commands; // offset 0xC, size 0x4
    CNetEUInt command[]; // offset 0x10, size 0x0
};
typedef struct _TBNetDebugPacketDisplayList TBNetDebugPacketDisplayList;
// total size: 0x4
struct _TBNetDebugPacketCommandString {
    // Members
    TBNetDebugPacketHeader header; // offset 0x0, size 0x4
    char command[]; // offset 0x4, size 0x0
};
typedef struct _TBNetDebugPacketCommandString TBNetDebugPacketCommandString;
typedef int (* BNETDEBUGFUNC_RECEIVE)(const TBNetDebugPacketHeader *);
typedef int (* BNETDEBUGFUNC_INIT)();
typedef TBEffectBlurCallback * BNETDEBUGFUNC_SHUTDOWN;
typedef TBEffectBlurCallback * BNETDEBUGFUNC_UPDATE;
typedef int (* BNETDEBUGFUNC_CHECKCONNECTION)();
typedef int (* BNETDEBUGFUNC_SEND)(void *, int, int);
typedef int (* BNETDEBUGFUNC_WAIT)();
static int bVerboseStackSize; // size: 0x4, address: 0x8047CE34
static enum EBVerboseLevel bVerboseLevelStack[4]; // size: 0x10, address: 0x80424E50
static unsigned int bVerboseModuleStack[4]; // size: 0x10, address: 0x80424E60
static unsigned int bVerboseFlagsStack[4]; // size: 0x10, address: 0x80424E70
// total size: 0x150
struct TCodeSignature {
    // Typedefs
    typedef struct TCodeSignature ._193;

    // Members
    unsigned char magicMarker[64]; // offset 0x0, size 0x40
    char identString[256]; // offset 0x40, size 0x100
    int yearToExpire; // offset 0x140, size 0x4
    int monthToExpire; // offset 0x144, size 0x4
    int dayToExpire; // offset 0x148, size 0x4
    unsigned int doubleCheck; // offset 0x14C, size 0x4
};
typedef struct TCodeSignature TCodeSignature;
static volatile TCodeSignature codeSignature; // size: 0x150, address: 0x80383E34
static int sigDecoded; // size: 0x4, address: 0x8047CE3C
static TBEvent events; // size: 0x54, address: 0x80424E80
static OSMutex eventMutex; // size: 0x18, address: 0x80424ED4
static unsigned int hexLUT[55]; // size: 0xDC, address: 0x80383F84
int bFileSearchFlags; // size: 0x4, address: 0x8047CE48
int bLoadFilenameTables; // size: 0x4, address: 0x8047CE4C
static TBFilenameTableHeader filenameTable; // size: 0x114, address: 0x80384060
static OSMutex filenameTableMutex; // size: 0x18, address: 0x80424EEC
TBKernelModuleInfo * kernelModules; // size: 0x4, address: 0x8047CE50
TBResourceInfo bGlobalResourceSubList[2]; // size: 0x40, address: 0x80424F04
TBResourceInfo bLocalResourceList[21]; // size: 0x2A0, address: 0x80424F44
static unsigned int resourceTypeTag[21]; // size: 0x54, address: 0x804249C0
static int bResLoadOrder[21]; // size: 0x54, address: 0x8038421C
enum BFONT_SPRINTF_FORMAT {
    FONT_SPRINTF_FORMAT_INVALID = 0,
    FONT_SPRINTF_FORMAT_DOUBLE = 1,
    FONT_SPRINTF_FORMAT_EXP = 2,
    FONT_SPRINTF_FORMAT_EXP2 = 3,
    FONT_SPRINTF_FORMAT_INT = 4,
    FONT_SPRINTF_FORMAT_UINT = 5,
    FONT_SPRINTF_FORMAT_LONG = 6,
    FONT_SPRINTF_FORMAT_ULONG = 7,
    FONT_SPRINTF_FORMAT_STRING8 = 8,
    FONT_SPRINTF_FORMAT_STRING16 = 9,
    FONT_SPRINTF_FORMAT_CHAR8 = 10,
    FONT_SPRINTF_FORMAT_CHAR16 = 11,
};
typedef enum BFONT_SPRINTF_FORMAT BFONT_SPRINTF_FORMAT;
static char charBuf[1024]; // size: 0x400, address: 0x804251E4
static char * charBufPtr; // size: 0x4, address: 0x8047CE6C
typedef struct TPacPackHeader TPacPackHeader;
typedef struct TBColourHashTable TBColourHashTable;
unsigned long long bSoundTimer; // size: 0x8, address: 0x8047D648
int bSoundTimerInited; // size: 0x4, address: 0x8047CE70
float bSoundTimeMilliseconds; // size: 0x4, address: 0x8047CE74
typedef struct _TBkgSchedulerChannel TBkgSchedulerChannel;
typedef struct _TBBkgLoadCmd TBBkgLoadCmd;
static TBkgSchedulerChannel bkgChannel[3]; // size: 0x3C0, address: 0x804255E4
static TBBkgLoadCmd bkgLoadList[16]; // size: 0x3A80, address: 0x804259A4
static int noofBkgLoadsInList; // size: 0x4, address: 0x8047CE78
static TBFileHandleType bkgFileHandle[3]; // size: 0xC0, address: 0x80429424
static unsigned int bkgCommandUid; // size: 0x4, address: 0x8047CE7C
static volatile int workerThreadRunning; // size: 0x4, address: 0x8047D650
static volatile int workerThreadWaiting; // size: 0x4, address: 0x8047D654
static int quitThread; // size: 0x4, address: 0x8047CE80
static OSThread threadHandle; // size: 0x318, address: 0x804294E8
static unsigned char threadStack[4096]; // size: 0x1000, address: 0x80429800
static OSMutex bkgQueueMutex; // size: 0x18, address: 0x8042A800
static OSMutex bkgRunningMutex; // size: 0x18, address: 0x8042A818
static OSCond kickThread; // size: 0x8, address: 0x8047D658
static int bkgBusy; // size: 0x4, address: 0x8047CE84
static int bkgLoadWake; // size: 0x4, address: 0x8047CE88
static unsigned long long dataTransferStart; // size: 0x8, address: 0x8047D660
static int desiredTransferRate; // size: 0x4, address: 0x8047CE8C
// total size: 0x10
struct flock {
    // Members
    short l_type; // offset 0x0, size 0x2
    short l_whence; // offset 0x2, size 0x2
    long l_start; // offset 0x4, size 0x4
    long l_len; // offset 0x8, size 0x4
    short l_pid; // offset 0xC, size 0x2
    short l_xxx; // offset 0xE, size 0x2
};
// total size: 0x18
struct eflock {
    // Members
    short l_type; // offset 0x0, size 0x2
    short l_whence; // offset 0x2, size 0x2
    long l_start; // offset 0x4, size 0x4
    long l_len; // offset 0x8, size 0x4
    short l_pid; // offset 0xC, size 0x2
    short l_xxx; // offset 0xE, size 0x2
    long l_rpid; // offset 0x10, size 0x4
    long l_rsys; // offset 0x14, size 0x4
};
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned int u_long;
typedef int daddr_t;
typedef char * caddr_t;
typedef unsigned short ino_t;
typedef short dev_t;
typedef int off_t;
typedef unsigned short uid_t;
typedef unsigned short gid_t;
typedef int pid_t;
typedef int key_t;
typedef int ssize_t;
typedef unsigned int mode_t;
typedef unsigned short nlink_t;
typedef int fd_mask;
// total size: 0x8
struct _types_fd_set {
    // Members
    long fds_bits[2]; // offset 0x0, size 0x8
};
typedef struct _types_fd_set _types_fd_set;
// total size: 0x3C
struct stat {
    // Members
    short st_dev; // offset 0x0, size 0x2
    unsigned short st_ino; // offset 0x2, size 0x2
    unsigned int st_mode; // offset 0x4, size 0x4
    unsigned short st_nlink; // offset 0x8, size 0x2
    unsigned short st_uid; // offset 0xA, size 0x2
    unsigned short st_gid; // offset 0xC, size 0x2
    short st_rdev; // offset 0xE, size 0x2
    int st_size; // offset 0x10, size 0x4
    int st_atime; // offset 0x14, size 0x4
    long st_spare1; // offset 0x18, size 0x4
    int st_mtime; // offset 0x1C, size 0x4
    long st_spare2; // offset 0x20, size 0x4
    int st_ctime; // offset 0x24, size 0x4
    long st_spare3; // offset 0x28, size 0x4
    long st_blksize; // offset 0x2C, size 0x4
    long st_blocks; // offset 0x30, size 0x4
    long st_spare4[2]; // offset 0x34, size 0x8
};
TBDebugStream bDefaultDebugStream; // size: 0x108, address: 0x803842F8
static char debugBuffer[2048]; // size: 0x800, address: 0x8042A830
static OSMutex bPrintfMutex; // size: 0x18, address: 0x8042B030
int bDebugInit; // size: 0x4, address: 0x8047CEA0
static volatile int bForeGroundLoaded; // size: 0x4, address: 0x8047CEA4
static volatile int bForeGroundLoadedSize; // size: 0x4, address: 0x8047CEA8
char bDiskErrorString[2]; // size: 0x2, address: 0x8047CEAC
static DVDDiskID * diskID; // size: 0x4, address: 0x8047D668
int bRvlFlushHostWriteEnabled; // size: 0x4, address: 0xFFFFFFFF
int resetPending; // size: 0x4, address: 0x8047CEC0
int bResetCheckDiskDoneByUser; // size: 0x4, address: 0x8047CEC4
int bArgc; // size: 0x4, address: 0x8047CEC8
char * * bArgv; // size: 0x4, address: 0x8047CECC
typedef unsigned char PERFId;
enum PerfType {
    PERF_CPU_EVENT = 0,
    PERF_CPU_GP_EVENT = 1,
    PERF_GP_EVENT = 2,
};
typedef enum PerfType PerfType;
typedef void * (* PERFAllocator)(unsigned long);
typedef void (* PERFDeallocator)(void *);
typedef TBEffectBlurCallback * PERFDrawCallback;
int bPerfMonRunning; // size: 0x4, address: 0x8047CED8
unsigned char * bPerfMonGraphDisplayList; // size: 0x4, address: 0x8047CEDC
int bPerfMonGraphDisplayListSize; // size: 0x4, address: 0x8047CEE0

