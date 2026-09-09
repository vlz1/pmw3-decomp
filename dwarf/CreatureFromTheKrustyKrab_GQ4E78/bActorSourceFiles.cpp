/*
    Compile unit: b:/BlitzSDK/Babel/GameCube/Src/bActor/bActorSourceFiles.cpp
    Producer: GNU C++ 2.95.3 SN BUILD v1.62 for Nintendo Gamecube
    Compile directory: b:\BlitzSDK\Babel\GameCube\Src\bActor
    Language: C++
    Code range: 0x8020FBA4 -> 0x80226D40
    GCC Source File Name Offset: 0x000198FE
    GCC Source Info Offset: 0x000489D4
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

// Range: 0x8020FBA4 -> 0x8020FC0C
struct _TBActorAnimSegment * baGetFirstFrame(struct _TBActor * actor /* r3 */, int * animTime /* r4 */) {
    // Local variables
    unsigned int c; // r10
    int time; // r11
    struct _TBActorAnimSegment * animSeg; // r7
}

// Range: 0x8020FC0C -> 0x8020FC58
struct _TBActorAnimSegment * baGetAnimSegmentFromFrame(struct _TBActor * actor /* r3 */, int animTime /* r4 */) {
    // Local variables
    unsigned int c; // r11
}

// Range: 0x8020FC58 -> 0x8020FC68
void bSetAnimEventCallbacks(void (* fixupCallback)(struct _TBActor *, struct _TBActorNode *, struct _TBActorAnimEvent *) /* r3 */, void (* freeCallback)(struct _TBActor *, struct _TBActorNode *, struct _TBActorAnimEvent *) /* r4 */, void (* playCallback)(struct _TBActorInstance *, struct _TBActorNodeInstance *, struct _TBActorAnimEvent *, struct _TBActorAnimSegment *, int, int) /* r5 */) {}

// Range: 0x8020FC68 -> 0x8020FCEC
int bInitActor() {}

// Range: 0x8020FCEC -> 0x8020FD1C
void bShutdownActor() {}

// Range: 0x8020FD1C -> 0x8020FD74
static int CountActorNodes(struct _TBActorNode * rootNode /* r29 */) {
    // Local variables
    struct _TBActorNode * node; // r31
    int noofNodes; // r30
}

// Range: 0x8020FD74 -> 0x8020FDAC
static int CountActorNodesFromNode(struct _TBActorNode * rootNode /* r3 */) {
    // Local variables
    int noofNodes; // r0
}

// Range: 0x8020FDAC -> 0x8020FF50
static void InitActorAnimTree(struct _TBActorInstance * actorInstance /* r3 */, struct _TBAnimTreeNode * animTreeNodes /* r4 */, struct _TBAnimTreeAnimState * animTreeNodeAnimStates /* r30 */, unsigned char * animTreeNodeAnimBlends /* r12 */, int numNodes /* r5 */) {
    // Local variables
    int l; // r8
    int n; // r10
    struct _TBAnimTreeAnimStateNoScale * animTreeNodeAnimStatesNoScale; // r26
    unsigned short * lastOrientationKey; // r6

    // Range: 0x8020FEB4 -> 0x8020FEB4
    inline void bmVanillaQuatZero(float * dest) {}

    // Range: 0x8020FED0 -> 0x8020FED0
    inline void bmVanillaQuatZero(float * dest) {}

    // Range: 0x8020FED0 -> 0x8020FF00
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}
}

// Range: 0x8020FF50 -> 0x802103DC
static struct _TBActorNodeInstance * InitActorNodeInstances(struct _TBActorNode * rootNode /* r18 */, struct _TBActorNodeInstance * rootInstance /* r17 */, struct _TBActorNodeInstance * parentInstance /* r24 */, struct _TBActorInstance * actorInstance /* r23 */) {
    // Local variables
    struct _TBActorNode * node; // r30
    struct _TBActorNodeInstance * instance; // r31
    struct _TBActorNodeInstance * nextInstance; // r26
    int c; // r11
    int frame; // r1+0x8
    struct _TBActorAnimSegment * animSeg; // r25

    /* anonymous block */ {
        // Range: 0x8020FFC0 -> 0x8020FFD4
        struct _TBMorphHeader * header;
    }

    // Range: 0x8021011C -> 0x8021019C
    inline int baEvalAnimPositionSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        /* anonymous block */ {
            // Range: 0x80210144 -> 0x80210190
            struct _TBActorAnimNode * animNodeData; // r5

            // Range: 0x80210164 -> 0x80210180
            inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
                // Local variables
                struct _TBActorAnimNode * animNodeData;
                int noofKeys; // r5
                struct _TBAnimKey3 * keys;
            }
        }
    }

    // Range: 0x8021019C -> 0x80210214
    inline int baEvalAnimScaleSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        /* anonymous block */ {
            // Range: 0x802101BC -> 0x80210208
            struct _TBActorAnimNode * animNodeData; // r5

            // Range: 0x802101DC -> 0x802101F8
            inline int baEvalAnimScale(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
                // Local variables
                struct _TBActorAnimNode * animNodeData;
                int noofKeys; // r5
                struct _TBAnimKey3 * keys;
            }
        }
    }

    // Range: 0x80210214 -> 0x80210290
    inline int baEvalAnimOrientationSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        /* anonymous block */ {
            // Range: 0x80210234 -> 0x80210280
            struct _TBActorAnimNode * animNodeData; // r5

            // Range: 0x80210254 -> 0x80210270
            inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
                // Local variables
                struct _TBActorAnimNode * animNodeData;
                int noofKeys; // r5
                struct _TBAnimKey4 * keys;
            }
        }
    }
}

// Range: 0x802103DC -> 0x80210998
struct _TBActorInstance * bInitActorInstance(struct _TBActorInstance * actorInstance /* r31 */, struct _TBActor * actor /* r26 */, int queueSize /* r24 */, unsigned int flags /* r22 */, char * file /* r21 */, int line /* r20 */) {
    // Local variables
    int numNodes; // r28
    int l; // ctr
    int matrixMemory; // r30
    int matrixAlign;
    int blendInfoSize; // r11
    int size; // r29
    struct _TBAnimTreeNode * animTreeNodes; // r25
    struct _TBAnimTreeAnimState * animTreeNodeAnimStates; // r27
    unsigned char * animTreeNodeAnimBlends; // r30

    // Range: 0x802104C4 -> 0x802104C4
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x802104C4 -> 0x802104C4
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x802104C4 -> 0x802104C4
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802106E0 -> 0x802106E0
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x802106E0 -> 0x802106E0
    inline void bmVanillaQuatZero(float * dest) {}
}

// Range: 0x80210998 -> 0x802109FC
void baFreeActorInstance(struct _TBActorInstance * actorInstance /* r31 */) {}

// Range: 0x802109FC -> 0x80210CF4
static void FixupActorNodeList(unsigned char * basePtr /* r29 */, struct _TBActorNode * rootNode /* r26 */, int depth /* r25 */, struct _TBActor * actor /* r30 */) {
    // Local variables
    struct _TBActorNode * node; // r31
    struct _TBActorAnimSegment * animSeg; // r10
    int l; // r28
    unsigned int c; // r7
}

// Range: 0x80210CF4 -> 0x80210F34
struct _TBActor * bLoadActorByCRC(struct _TBPackageIndex * pakIndex /* r30 */, unsigned int crc /* r4 */) {
    // Local variables
    struct _TBActor * actor; // r31
    unsigned char * basePtr;
    struct _TBActorAnimSegment * animSeg; // r11
    unsigned int c; // r8
    unsigned int n; // r7
}

// Range: 0x80210F34 -> 0x80210FC0
void bPrepActorNodeMorphTargetList(struct _TBActorInstance * actorInstance /* r29 */, struct _TBActorNodeInstance * nodeInstance /* r31 */) {
    // Local variables
    struct _TBActorNodeInstance * nodeInstanceEnd; // r30
}

// Range: 0x80210FC0 -> 0x80211068
void bPrepActorInstance_Position(struct _TBActorInstance * actorInstance /* r31 */) {
    // Range: 0x80210FE0 -> 0x80210FE0
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x8
    }

    // Range: 0x8021100C -> 0x8021100C
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x8
    }
}

// Range: 0x80211068 -> 0x80211090
void bPrepActorNodeList_PosOrient(struct _TBActorInstance * actorInstance /* r4 */) {}

// Range: 0x80211090 -> 0x802110B8
void bPrepActorNodeList_PosOrient_Reference(struct _TBActorInstance * actorInstance /* r4 */) {}

// Range: 0x802110B8 -> 0x802110E0
void bPrepActorNodeList_PosOrientScale(struct _TBActorInstance * actorInstance /* r4 */) {}

// Range: 0x802110E0 -> 0x80211108
void bPrepActorNodeList_PosOrientScale_Reference(struct _TBActorInstance * actorInstance /* r4 */) {}

// Range: 0x80211108 -> 0x802111B8
void bPrepActorInstance_NodeList(struct _TBActorInstance * actorInstance /* r31 */) {}

// Range: 0xFFFFFFFF -> 0x802111B8
void baEnableActorNodePhysics(struct _TBActorNodeInstance * instanceNode /* r3 */, struct _TBActorInstance * actorInstance /* r4 */, int enable /* r5 */, float airResistance /* f1 */, float velocityLerpSpeed /* f2 */, float tolerance /* f3 */) {}

// Range: 0x802111B8 -> 0x8021186C
void bFastPrepActorNodeWithPhysics(struct _TBActorNodeInstance * instanceNode /* r31 */, struct _TBActorInstance * actorInstance /* r25 */, int deltaT60ths /* r24 */) {
    // Local variables
    struct _TBActorNodeInstance * parentNode; // r27
    float parentWorldPosition[4]; // r1+0x8
    float currentWorldPosition[4]; // r1+0x18
    float desiredWorldPosition[4]; // r1+0x28
    float newWorldPosition[4]; // r1+0x38
    float newWorldOrientation[4]; // r1+0x48
    float newParentOrientation[4]; // r1+0x58
    float extraParentOrientation[4]; // r1+0x68
    float tmpOrient[4]; // r1+0x78
    float requiredMovementThisFrame[4]; // r1+0x88
    float newBoneVector[4]; // r1+0x98
    float velocityDifference[4]; // r1+0xA8
    float movementLastFrame[4]; // r1+0xB8
    float movementThisFrame[4]; // r1+0xC8
    float fixedMovementThisFrame[4]; // r1+0xD8
    float nodeToParentMatrix[4][4]; // r1+0xE8
    float desiredWorldMatrix[4][4]; // r1+0x128
    float parentToWorldMatrix[4][4]; // r1+0x168
    float worldToParentMatrix[4][4]; // r1+0x1A8
    float difference;
    float originalBoneLength;
    float angle;
    float tolerance; // f7
    float newParentSpacePosition[4]; // r1+0x1E8
    float animParentSpacePosition[4]; // r1+0x1F8
    float axis[4]; // r1+0x208
    int i; // r26

    // Range: 0x802111D0 -> 0x802111D0
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x218
    }

    // Range: 0x802111D0 -> 0x802111D0
    inline void bmVanillaMatMultiply44(float (* dest)[4], float (* src1)[4], float (* src2)[4]) {}

    // Range: 0x802111D0 -> 0x802111D0
    inline void bmVanillaMatGetRow(const int row, float (* mat)[4], float * result) {
        // Range: 0x802111D0 -> 0x802111D0
        inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}
    }

    // Range: 0x802111D0 -> 0x802111D0
    inline void baGetNodesWorldMatrix(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float (* nodeToWorld)[4]) {}

    // Range: 0x802111D0 -> 0x802111D0
    inline void bmVanillaMatGetRow(const int row, float (* mat)[4], float * result) {
        // Range: 0x802111D0 -> 0x802111D0
        inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}
    }

    // Range: 0x802111D0 -> 0x802111D0
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802111D0 -> 0x802111D0
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802111D0 -> 0x802111D0
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802111D0 -> 0x802111D0
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802111D0 -> 0x802111D0
    inline float bmVanillaVectorLenApprox(const float * src) {
        // Range: 0x802111D0 -> 0x802111D0
        inline float bmVanillaSqrtApprox(float x) {
            // Local variables
            float fx; // f0
            int * ix;
        }
    }

    // Range: 0x80211374 -> 0x80211374
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80211374 -> 0x802113B4
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802113B4 -> 0x802113B4
    inline void bmVanillaVectorSub(float * dest, const float * src1, const float * src2) {}

    // Range: 0x80211404 -> 0x80211404
    inline void bmVanillaVectorSub(float * dest, const float * src1, const float * src2) {}

    // Range: 0x80211450 -> 0x80211450
    inline void bmVanillaVectorCMulAdd(float * dest, const float * src, const float fmul, const float * vadd) {}

    // Range: 0x80211450 -> 0x80211450
    inline void bmVanillaVectorAdd(float * dest, const float * src1, const float * src2) {}

    // Range: 0x802114A8 -> 0x802114D8
    inline void bmVanillaVectorAdd(float * dest, const float * src1, const float * src2) {}

    // Range: 0x802114D8 -> 0x802114D8
    inline void bmVanillaVectorSub(float * dest, const float * src1, const float * src2) {}

    // Range: 0x802114D8 -> 0x802114D8
    inline void bmVanillaVectorCMulAdd(float * dest, const float * src, const float fmul, const float * vadd) {}

    // Range: 0x80211540 -> 0x80211570
    inline void bmVanillaVectorAdd(float * dest, const float * src1, const float * src2) {}

    // Range: 0x80211570 -> 0x80211570
    inline void bmVanillaVectorCMul(float * src, const float val) {}

    // Range: 0x802115A8 -> 0x802115A8
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802115DC -> 0x802115DC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802115DC -> 0x802115DC
    inline void bmVanillaVectorCross(float * dest, const float * src1, const float * src2) {
        // Local variables
        float tmpDest[4]; // r1+0x218
    }

    // Range: 0x8021169C -> 0x80211794
    inline void baSetNodesParentSpacePositionOrientation(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * instanceNode, float * newPosition, float * newOrientation) {
        // Local variables
        float newNodeToParentMatrix[4][4]; // r1+0x258

        // Range: 0x8021169C -> 0x8021169C
        inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
            // Local variables
            float orientMat[4][4]; // r1+0x298
        }

        // Range: 0x80211710 -> 0x80211710
        inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
            // Local variables
            float orientMat[4][4]; // r1+0x298
        }

        // Range: 0x8021174C -> 0x80211778
        inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
            // Local variables
            float orientMat[4][4]; // r1+0x298
        }
    }

    // Range: 0x80211794 -> 0x80211794
    inline void baGetNodesWorldOrientation(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * nodeInstance, float * orientation) {
        // Local variables
        float xform[4][4]; // r1+0x218
    }

    // Range: 0x80211794 -> 0x80211794
    inline void bmVanillaQuatNormApprox(float * q) {}

    // Range: 0x802117DC -> 0x802117DC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802117DC -> 0x80211850
    inline void baSetNodesWorldPositionOrientation(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * instanceNode, float * newWorldPosition, float * newWorldOrientation) {
        // Local variables
        float newNodeToWorldMatrix[4][4]; // r1+0x218

        // Range: 0x802117DC -> 0x802117DC
        inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
            // Local variables
            float orientMat[4][4]; // r1+0x258
        }

        // Range: 0x802117DC -> 0x80211850
        inline void baSetNodesWorldMatrix(struct _TBActorInstance * actorInstance, struct _TBActorNodeInstance * instanceNode, float (* newNodeToWorldMatrix)[4]) {
            // Range: 0x802117DC -> 0x802117DC
            inline void bmVanillaMatMultiply44(float (* dest)[4], float (* src1)[4], float (* src2)[4]) {}
        }
    }
}

// Range: 0xFFFFFFFF -> 0x8021186C
void bResetActorNodePhysics(struct _TBActorNodeInstance * instanceNode /* r30 */, struct _TBActorInstance * actorInstance /* r29 */) {
    // Local variables
    struct _TBActorNodeInstance * parentNode; // r4
    float position[4]; // r1+0x8

    // Range: 0x8021186C -> 0x8021186C
    inline void bmVanillaVectorZero(float * dest) {}
}

// Range: 0xFFFFFFFF -> 0x8021186C
void baResetActorPhysics(struct _TBActorInstance * actorInstance /* r27 */) {
    // Local variables
    float nodeToParentMatrix[4][4]; // r1+0x8
    struct _TBActorNodeInstance * rootNode; // r9
    struct _TBActorNodeInstance * instanceNode; // r30
    struct _TBActorNodeInstance * instanceNodeEnd; // r26
    struct _TBActorNodeInstance * parentNode; // r29

    // Range: 0x8021186C -> 0x8021186C
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x48
    }

    // Range: 0x8021186C -> 0x8021186C
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x48
    }
}

// Range: 0x8021186C -> 0x80211BB0
void bPrepActorNodeList(struct _TBActorNodeInstance * rootNode /* r3 */, struct _TBActorInstance * actorInstance /* r25 */) {
    // Local variables
    float orientationMatrix[4][4]; // r1+0x8
    float tmpMatrix[4][4]; // r1+0x48
    float tempOrient[4][4]; // r1+0x88
    float xTrans; // f31
    float yTrans; // f30
    float zTrans; // f29
    float parentXForm[4][4]; // r1+0xC8
    float parentScale[4]; // r1+0x108
    struct _TBActorNodeInstance * instanceNode; // r31
    struct _TBActorNodeInstance * instanceNodeEnd; // r22
    struct _TBActorNodeInstance * parentNode; // r10
    struct _TBActorNodeInstance * motionBone; // r20

    // Range: 0x80211960 -> 0x80211960
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x80211A04 -> 0x80211A44
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// Range: 0xFFFFFFFF -> 0x80211BB0
void bFastPrepActorNodeListPhysicsMixedIn(struct _TBActorNodeInstance * rootNode /* r3 */, struct _TBActorInstance * actorInstance /* r28 */) {
    // Local variables
    float nodeToParentMatrix[4][4]; // r1+0x8
    struct _TBActorNodeInstance * instanceNode; // r30
    struct _TBActorNodeInstance * instanceNodeEnd; // r26
    struct _TBActorNodeInstance * parentNode; // r29
    struct _TBActorNodeInstance * motionBone; // r25
    int orFlags;
    int deltaT60ths; // r24

    // Range: 0x80211BB0 -> 0x80211BB0
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x48
    }

    // Range: 0x80211BB0 -> 0x80211BB0
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x48
    }

    // Range: 0x80211BB0 -> 0x80211BB0
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x48
    }

    // Range: 0x80211BB0 -> 0x80211BB0
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x48
    }
}

// Range: 0x80211BB0 -> 0x80211E30
void bFastPrepActorNodeList(struct _TBActorNodeInstance * rootNode /* r23 */, struct _TBActorInstance * actorInstance /* r28 */) {
    // Local variables
    float nodeToParentMatrix[4][4]; // r1+0x8
    struct _TBActorNodeInstance * instanceNode; // r31
    struct _TBActorNodeInstance * instanceNodeEnd; // r26
    struct _TBActorNodeInstance * parentNode; // r29
    struct _TBActorNodeInstance * motionBone; // r24
    int orFlags; // r25
    int deltaT60ths; // r30

    // Range: 0x80211C00 -> 0x80211C00
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x48
    }

    // Range: 0x80211C8C -> 0x80211C8C
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x48
    }

    // Range: 0x80211CD4 -> 0x80211CD4
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x48
    }

    // Range: 0x80211D60 -> 0x80211D60
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, const float * orientation) {
        // Local variables
        float orientMat[4][4]; // r1+0x48
    }
}

// Range: 0x80211E30 -> 0x80211E84
void baPrepActorInstance(struct _TBActorInstance * actorInstance /* r31 */, int flags /* r30 */) {}

// Range: 0x80211E84 -> 0x80211EE4
void baFastPrepActorInstance(struct _TBActorInstance * actorInstance /* r31 */, int flags /* r30 */) {}

// Range: 0x80211EE4 -> 0x80211F9C
void baDrawActorInstance(struct _TBActorInstance * actorInstance /* r11 */, int alpha /* r5 */) {
    // Local variables
    struct _TBActor * actor; // r9
    int nodes;
    int hasPrims; // r10
}

// Range: 0x80211F9C -> 0x80212084
static void DeleteActorNodeList(struct _TBActor * actor /* r28 */, struct _TBActorNode * rootNode /* r27 */) {
    // Local variables
    struct _TBActorNode * node; // r31
    int animEventNum; // r30
}

// Range: 0x80212084 -> 0x802120DC
void bDeleteActor(struct _TBActor * actor /* r31 */) {}

// Range: 0xFFFFFFFF -> 0x802120DC
void baSetAnimBlend(struct _TBActorInstance * actorInstance /* r30 */, struct _TBActor * actor1 /* r22 */, unsigned int frame1 /* r26 */, struct _TBActor * actor2 /* r23 */, unsigned int frame2 /* r28 */, float t /* f31 */) {
    // Local variables
    float src[4]; // r1+0x8
    float dest[4]; // r1+0x18
    struct _TBActorNodeInstance * nodeInstance; // r30
    struct _TBActorNode * actorNode1; // r31
    struct _TBActorNode * actorNode2; // r29
    int l; // r27
    struct _TBActorAnimSegment * animSeg1; // r24
    struct _TBActorAnimSegment * animSeg2; // r25

    // Range: 0x802120DC -> 0x802120DC
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802120DC -> 0x802120DC
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802120DC -> 0x802120DC
    inline int baEvalAnimScale(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802120DC -> 0x802120DC
    inline int baEvalAnimScale(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802120DC -> 0x802120DC
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802120DC -> 0x802120DC
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }
}

// Range: 0xFFFFFFFF -> 0x802120DC
void baSetAnimBlendTarget(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActor * actor /* r4 */, unsigned int frame /* r5 */, int recurse /* r6 */) {
    // Local variables
    struct _TBActorNodeInstance * nodeInstance; // r11
    int l; // r0

    // Range: 0x802120DC -> 0x802120DC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802120DC -> 0x802120DC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802120DC -> 0x802120DC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// Range: 0x802120DC -> 0x80212370
void baSetAnimBlendTargetValue(struct _TBActorInstance * actorInstance /* r30 */, struct _TBActor * actor /* r23 */, unsigned int frame /* r28 */, float t /* f31 */) {
    // Local variables
    float dest[4]; // r1+0x8
    struct _TBActorNodeInstance * nodeInstance; // r29
    struct _TBActorNode * actorNode; // r31
    int l; // r27
    struct _TBActorAnimSegment * animSeg; // r26

    // Range: 0x80212138 -> 0x80212138
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80212138 -> 0x80212138
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80212138 -> 0x80212138
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802121C0 -> 0x80212200
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80212254 -> 0x80212294
    inline int baEvalAnimScale(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802122E8 -> 0x80212328
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }
}

// Range: 0x80212370 -> 0x80212A08
void bPlayAnimEvents(struct _TBActorInstance * actorInstance /* r28 */, struct _TBActorNodeInstance * nodeInstance /* r29 */, struct _TBActorNode * node /* r27 */, int oldFrame /* r24 */, int newFrame /* r25 */, int frameMod /* r8 */, int first /* r0 */, struct _TBActorAnimSegment * animSeg /* r26 */) {
    // Local variables
    int oldEventFrame; // r22
    int newEventFrame; // r23
    int l; // r30
    int segStart; // r20
    int segEnd; // r21
    struct _TBActorAnimEvent * event; // r5
    char buf[256]; // r1+0x8
}

// Range: 0x80212A08 -> 0x80212A74
void bActorQueueCallback(enum EBQueueCallbackReason reasonCode /* r3 */, struct _TBActorInstance * actorInstance /* r4 */, struct _TBQueuedAnim * qEntry /* r5 */) {}

// Range: 0x80212A74 -> 0x80212C30
int baUpdateNodes(struct _TBActorInstance * actorInstance /* r31 */, float timeDelta /* f31 */, float * motionVector /* r28 */, float * motionQuaternion /* r29 */) {
    // Local variables
    int l; // r31
    int noofNodes; // r1+0x18
    struct _TAnimUpdateCallbackInfo * cbQueuePtr; // r30

    // Range: 0x80212B10 -> 0x80212B10
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80212B10 -> 0x80212B10
    inline void bmVanillaQuatInvRotateVector(const float * q, float * v) {
        // Local variables
        float inv[4]; // r1+0x8

        // Range: 0x80212B10 -> 0x80212B10
        inline void bmVanillaQuatInverse(float * dest, const float * src) {}
    }

    // Range: 0x80212B78 -> 0x80212B9C
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80212BA4 -> 0x80212BC8
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// total size: 0x20
struct _TAnimUpdateCallbackInfo {
    // Members
    enum EBQueueCallbackReason reasonCode; // offset 0x0, size 0x4
    struct _TBActorInstance * actor; // offset 0x4, size 0x4
    struct _TBActorNodeInstance * node; // offset 0x8, size 0x4
    struct _TBActorAnimSegment * segment; // offset 0xC, size 0x4
    void * parameters; // offset 0x10, size 0x4
    int (* callback)(enum EBQueueCallbackReason, struct _TBActorInstance *, struct _TBActorAnimSegment *, void *); // offset 0x14, size 0x4
    int pad[2]; // offset 0x18, size 0x8
};
// Range: 0x80212C30 -> 0x80212DAC
void baFlushAnimQueue(struct _TBActorInstance * actorInstance /* r29 */, int flushFrom /* r27 */) {
    // Local variables
    int loop; // r30
    int at; // r31
    struct _TBActorNodeInstance * nodeInstance; // r11

    // Range: 0x80212C68 -> 0x80212C68
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80212C68 -> 0x80212C68
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80212C68 -> 0x80212C68
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// Range: 0x80212DAC -> 0x80212F90
int baQueueAnim(struct _TBActorInstance * actorInstance /* r12 */, unsigned char animType /* r4 */, struct _TBActorAnimSegment * anim1 /* r5 */, int anim1Delta /* r6 */, int startFrame1 /* r7 */, float deltaT /* f1 */, unsigned int flags /* r11 */, int (* callback)(enum EBQueueCallbackReason, struct _TBActorInstance *, struct _TBActorAnimSegment *, void *) /* r31 */, void * context /* r29 */, int repeatCount /* r26 */) {
    // Local variables
    int queueLoop; // r8
    int queue; // r3
    int type;
}

// Range: 0x80212F90 -> 0x80212FF4
int baQueueAnimNormal(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorAnimSegment * animNum /* r4 */, int animDelta /* r0 */, int startFrame /* r30 */, unsigned int flags /* r29 */, int (* callback)(enum EBQueueCallbackReason, struct _TBActorInstance *, struct _TBActorAnimSegment *, void *) /* r28 */, void * context /* r27 */, int repeatCount /* r10 */) {}

// Range: 0xFFFFFFFF -> 0x80212FF4
int baQueueAnimBlendState(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorAnimSegment * anim /* r4 */, int animDelta /* r0 */, int startFrame /* r11 */, float deltaT /* f1 */, unsigned int flags /* r30 */, int (* callback)(enum EBQueueCallbackReason, struct _TBActorInstance *, struct _TBActorAnimSegment *, void *) /* r29 */, void * context /* r28 */, int repeatCount /* r10 */) {}

// Range: 0xFFFFFFFF -> 0x80212FF4
void baSetQueueBlendValue(struct _TBActorInstance * actorInstance /* r3 */, float t /* f1 */) {
    // Local variables
    int queue; // r9
}

// Range: 0x80212FF4 -> 0x80213490
void baRetargetActorAnimation(struct _TBActor * source /* r26 */, struct _TBActorInstance * dest /* r25 */) {
    // Local variables
    struct _TBActorNode * sNode; // r30
    struct _TBActorNodeInstance * dNode; // r31
    int l; // r10
    int n; // r10
    int frameSource; // r1+0x8
    int frameDest; // r1+0xC
    struct _TBActorAnimSegment * animSegSource; // r24
    struct _TBActorAnimSegment * animSegDest; // r27
    struct _TBActorAnimNode * animNodeDataSource; // r23

    /* anonymous block */ {
        // Range: 0x80213140 -> 0x80213140
        struct _TBMorphHeader * header;
    }

    /* anonymous block */ {
        // Range: 0x8021314C -> 0x80213164
        struct _TBMorphHeader * header;
    }

    // Range: 0x802131BC -> 0x80213224
    inline int baEvalAnimPositionSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        /* anonymous block */ {
            // Range: 0x802131E0 -> 0x80213224
            struct _TBActorAnimNode * animNodeData; // r5

            // Range: 0x80213200 -> 0x8021321C
            inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
                // Local variables
                struct _TBActorAnimNode * animNodeData;
                int noofKeys; // r5
                struct _TBAnimKey3 * keys;
            }
        }
    }

    // Range: 0x80213234 -> 0x80213270
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80213280 -> 0x802132F0
    inline int baEvalAnimScaleSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        /* anonymous block */ {
            // Range: 0x802132A4 -> 0x802132F0
            struct _TBActorAnimNode * animNodeData; // r5

            // Range: 0x802132C4 -> 0x802132E0
            inline int baEvalAnimScale(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
                // Local variables
                struct _TBActorAnimNode * animNodeData;
                int noofKeys; // r5
                struct _TBAnimKey3 * keys;
            }
        }
    }

    // Range: 0x80213300 -> 0x80213340
    inline int baEvalAnimScale(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80213350 -> 0x802133C0
    inline int baEvalAnimOrientationSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        /* anonymous block */ {
            // Range: 0x80213374 -> 0x802133C0
            struct _TBActorAnimNode * animNodeData; // r5

            // Range: 0x80213394 -> 0x802133B0
            inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
                // Local variables
                struct _TBActorAnimNode * animNodeData;
                int noofKeys; // r5
                struct _TBAnimKey4 * keys;
            }
        }
    }

    // Range: 0x802133D4 -> 0x80213414
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }
}

// Range: 0x80213490 -> 0x8021357C
static void bRetargetMeshNode(struct _TBActorNode * source /* r28 */, struct _TBActorNodeInstance * dest /* r29 */) {
    // Local variables
    struct _TBActorNode * sNode; // r30
    struct _TBActorNodeInstance * dNode; // r31

    /* anonymous block */ {
        // Range: 0x802134B8 -> 0x802134B8
        struct _TBMorphHeader * header;
    }
}

// Range: 0x8021357C -> 0x80213600
void baRetargetActorMesh(struct _TBActor * source /* r30 */, struct _TBActorInstance * dest /* r29 */) {
    // Range: 0x8021358C -> 0x8021358C
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x8021358C -> 0x802135EC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}
}

// Range: 0x80213600 -> 0x80213650
struct _TBActorAnimSegment * baFindAnimSegmentByCRC(struct _TBActor * actor /* r3 */, unsigned int crc /* r4 */) {
    // Local variables
    unsigned int loop; // r11
}

// Range: 0x80213650 -> 0x80213708
struct _TBActorAnimSegment * baFindAnimSegmentOfTypeByCRC(struct _TBActor * actor /* r3 */, unsigned int typeCrc /* r4 */, int animIndex /* r5 */) {
    // Local variables
    unsigned int loop; // r10

    // Range: 0x802136DC -> 0x802136DC
    inline int bmVanillaRand() {}
}

// Range: 0x80213708 -> 0x80213720
void baSetActorRenderMode(struct _TBActorInstance * actorInstance /* r3 */, int stage /* r4 */, enum EBActRenderMode mode /* r5 */, void * parms /* r6 */) {}

// Range: 0xFFFFFFFF -> 0x80213720
void baSetAnimSpeed(struct _TBActorInstance * actorInstance /* r3 */, int anim1Delta /* r4 */, float deltaT /* f1 */, float t /* f2 */, unsigned int flags /* r5 */) {
    // Local variables
    struct _TBQueuedAnim * qEntry; // r10
}

// Range: 0xFFFFFFFF -> 0x80213720
void * baGetActorNodeGeometry(struct _TBActorNode * actorNode /* r3 */, int stream /* r4 */, int * noofVertices /* r5 */, int * noofTris /* r6 */) {}

// Range: 0xFFFFFFFF -> 0x80213720
static struct _TBStoredGeometry * CountActorGeometry(struct _TBActorInstance * actorInstance /* r24 */, struct _TBActorNodeInstance * node /* r29 */, int stream /* r25 */, int * noofVertices /* r27 */, int * noofTris /* r28 */, int flags /* r26 */) {
    // Local variables
    struct _TBActorNodeInstance * child; // r31
    struct _TBStoredGeometry * store; // r30
    struct _TBStoredGeometry * newStore; // r3
    int countThis; // r9
}

// Range: 0xFFFFFFFF -> 0x80213720
static char * GetActorGeometry(struct _TBActorInstance * actorInstance /* r24 */, struct _TBActorNodeInstance * node /* r28 */, int stream /* r23 */, char * buf /* r30 */, int * triBase /* r27 */, unsigned int flags /* r25 */) {
    // Local variables
    struct _TBStoredGeometry * store; // r26
    struct _TBStoredGeometryStreamHeader * header;
    int l; // r10
    int k; // r8
    char * src; // r29
    float x; // f27
    float y; // f30
    float z; // f29
    float vx; // f7
    float vy; // f11
    float vz; // f6
    float nx; // f25
    float ny; // f28
    float nz; // f26
    float x1; // f21
    float y1; // f17
    float z1; // f23
    float x2; // f16
    float y2; // f22
    float z2; // f15
    float x3; // f24
    float y3; // f14
    float z3; // f31
    float nx1; // r1+0x68
    float ny1; // f5
    float nz1; // f4
    float nx2; // f3
    float ny2; // f2
    float nz2; // f20
    float nx3; // f1
    float ny3; // f19
    float nz3; // f18
    float u[3]; // r1+0x8
    float v[3]; // r1+0x18
    int texCRC; // r22
    float xform[4][4]; // r1+0x28
    struct _TBActorNodeInstance * child; // r31
    int getThis; // r9
}

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
// Range: 0xFFFFFFFF -> 0x80213720
void * baGetActorGeometry(struct _TBActorInstance * actorInstance /* r30 */, struct _TBActorNodeInstance * rootNode /* r21 */, int stream /* r26 */, int * noofVerticesPtr /* r24 */, int * noofTrisPtr /* r23 */, int * bufSizePtr /* r22 */, void * buffer /* r20 */, unsigned int flags /* r28 */) {
    // Local variables
    int triBase; // r1+0x10
    int bufSize; // r25
    int noofVertices; // r1+0x8
    int noofTris; // r1+0xC
    struct _TBStoredGeometry * store; // r3
    struct _TBStoredGeometryStreamHeader * header; // r3
    char * destBuf; // r29
    char * buf; // r3
    struct _TBActorNodeInstance * node; // r31
}

// Range: 0x80213720 -> 0x802137DC
void baSetActorNodeFlags(struct _TBActorInstance * actorInstance /* r29 */, struct _TBActorNodeInstance * nodeInstance /* r30 */, unsigned int flagValues /* r27 */, unsigned int flagMask /* r28 */, int recurse /* r31 */) {
    // Local variables
    struct _TBActorNodeInstance * child; // r31
}

// Range: 0x802137DC -> 0x8021382C
int baIsActorAnimPlaying(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorAnimSegment * * anim /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x8021382C
void baCopyAnimQueue(struct _TBActorInstance * destActorInstance /* r29 */, struct _TBActorInstance * srcActorInstance /* r28 */) {
    // Local variables
    int l; // r31
    struct _TBActorNodeInstance * destNodeInstance; // r8
    struct _TBActorNodeInstance * srcNodeInstance; // r10

    // Range: 0x8021382C -> 0x8021382C
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x8021382C -> 0x8021382C
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x8021382C -> 0x8021382C
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// Range: 0xFFFFFFFF -> 0x8021382C
void baDrawActorBoundingBox(struct _TBActorInstance * actInstance /* r31 */, int r /* r30 */, int g /* r29 */, int b /* r28 */, int a /* r27 */) {
    // Local variables
    struct _TBPrimVertex verts[24]; // r1+0x8
    struct _TBPrimVertex * vp; // r9
    int l;
}

// Range: 0xFFFFFFFF -> 0x8021382C
void baSetAnimQueueCallback(struct _TBActorInstance * actorInstance /* r3 */, int (* newCallback)(enum EBQueueCallbackReason, struct _TBActorInstance *, struct _TBActorAnimSegment *, void *) /* r4 */, void * newContext /* r5 */, unsigned int flags /* r6 */, int setFrom /* r7 */) {
    // Local variables
    int loop; // r12
    int at; // r11
}

// Range: 0xFFFFFFFF -> 0x8021382C
void baSetAnimQueueFlags(struct _TBActorInstance * actorInstance /* r3 */, unsigned int flagMask /* r4 */, unsigned int newFlagValues /* r5 */, int setFrom /* r6 */, int recurse /* r7 */) {
    // Local variables
    int loop; // r8
    int at; // r7
}

// Range: 0xFFFFFFFF -> 0x8021382C
static int patchDataNoofVerts(struct _TBPatchHeader * header /* r3 */) {
    // Local variables
    int vertices; // r29
    int c; // r31
    int n;
    int patches; // r0
    struct _TBPatch * patch; // r30
}

// total size: 0x40
struct _TBPatch {
    // Inner declarations
    union {
        unsigned int textureCRC1; // offset 0x0, size 0x4
        struct _TBTexture * texture1; // offset 0x0, size 0x4
    };

    // Members
    enum EBPatchType type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    unsigned int noofUControls; // offset 0x8, size 0x4
    unsigned int noofVControls; // offset 0xC, size 0x4
    unsigned int vertexType; // offset 0x10, size 0x4
    unsigned short * indexArray; // offset 0x14, size 0x4
    unsigned char * vertices; // offset 0x18, size 0x4
    struct _TBPrimVertex * subVerts; // offset 0x1C, size 0x4
    unsigned int form; // offset 0x20, size 0x4
    unsigned int sizeofStrip; // offset 0x24, size 0x4
    unsigned int degree; // offset 0x28, size 0x4
    unsigned char tessellationU; // offset 0x2C, size 0x1
    unsigned char tessellationV; // offset 0x2D, size 0x1
    unsigned char maxTessellationU; // offset 0x2E, size 0x1
    unsigned char maxTessellationV; // offset 0x2F, size 0x1
    union {
        unsigned int textureCRC1; // offset 0x0, size 0x4
        struct _TBTexture * texture1; // offset 0x0, size 0x4
    }; // offset 0x30, size 0x4
    unsigned int uTile; // offset 0x34, size 0x4
    unsigned int vTile; // offset 0x38, size 0x4
    struct _TBPrimVertex * strips; // offset 0x3C, size 0x4
};
enum EBPatchType {
    EBPATCHTYPE_BEZIER = 0,
    EBPATCHTYPE_BSPLINE = 1,
};
// Range: 0xFFFFFFFF -> 0x8021382C
static int actorNoofVerts(struct _TBActorNode * rootNode /* r29 */, struct _TBActor * actor /* r28 */) {
    // Local variables
    struct _TBActorNode * node; // r31
    int vertices; // r30
}

// Range: 0xFFFFFFFF -> 0x8021382C
int bActorCountNoofVerts(struct _TBActor * actor /* r4 */) {
    // Local variables
    int vertices; // r31
}

// Range: 0xFFFFFFFF -> 0x8021382C
static int actorNoofTris(struct _TBActorNode * rootNode /* r29 */, struct _TBActor * actor /* r28 */) {
    // Local variables
    struct _TBActorNode * node; // r31
    int tris; // r30
    struct _TBMeshBatch * batch; // r9
    struct _TBMeshPrim * prim; // r11
    int i; // r10
    int j; // ctr
}

// Range: 0xFFFFFFFF -> 0x8021382C
int bActorCountNoofTris(struct _TBActor * actor /* r4 */) {
    // Local variables
    int i; // r11
    int j; // ctr
    int tris; // r10
    struct _TBSoftSkinBatch * batch; // r9
    struct _TBSoftSkinPrim * prim; // r3
}

// Range: 0xFFFFFFFF -> 0x8021382C
static int patchDataNoofSubPatches(struct _TBPatchHeader * header /* r3 */) {
    // Local variables
    int subpatches; // r29
    int c; // r31
    int n;
    int patches; // r0
    struct _TBPatch * patch; // r30
}

// Range: 0xFFFFFFFF -> 0x8021382C
static int actorNoofSubPatches(struct _TBActorNode * rootNode /* r29 */, struct _TBActor * actor /* r28 */) {
    // Local variables
    struct _TBActorNode * node; // r31
    int patches; // r30
}

// Range: 0xFFFFFFFF -> 0x8021382C
int bActorCountPatches(struct _TBActor * actor /* r4 */) {
    // Local variables
    int vertices; // r9
}

// Range: 0xFFFFFFFF -> 0x8021382C
int bTraverseActorNodeList(struct _TBActorNodeInstance * rootNode /* r27 */, struct _TBActorInstance * actorInstance /* r28 */, int (* func)(struct _TBActorInstance *, struct _TBActorNodeInstance *, void *) /* r29 */, void * context /* r30 */) {
    // Local variables
    struct _TBActorNodeInstance * instanceNode; // r31
}

// Range: 0xFFFFFFFF -> 0x8021382C
static void DumpAnimEventsFromNodeList(struct _TBActorNode * rootNode /* r26 */) {
    // Local variables
    struct _TBActorNode * node; // r30
    struct _TBActorAnimEvent * event; // r31
    int l; // r29
}

// Range: 0xFFFFFFFF -> 0x8021382C
void bDumpAnimEvents(struct _TBActor * actor /* r3 */) {}

// Range: 0x8021382C -> 0x802138A4
float baAnimSegmentTimeToDelta(struct _TBActorAnimSegment * segment /* r3 */, float seconds /* f1 */) {}

// Range: 0x802138A4 -> 0x8021391C
float baAnimSegmentDeltaToTime(struct _TBActorAnimSegment * segment /* r3 */, float delta /* f1 */) {}

// Range: 0x8021391C -> 0x80213970
int baAnimSegmentDeltaToFrame(struct _TBActorAnimSegment * segment /* r3 */, float delta /* f1 */) {}

// Range: 0x80213970 -> 0x802139D0
float baAnimSegmentFrameToDelta(struct _TBActorAnimSegment * segment /* r3 */, int frame /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x802139D0
int baAnimSegmentTimeToFrame(struct _TBActorAnimSegment * segment /* r3 */, float seconds /* f1 */) {}

// Range: 0x802139D0 -> 0x802139E8
void baEnableStencilShadows() {
    // Range: 0x802139E4 -> 0x802139E4
    inline void bEnableStencilShadows() {}
}

// Range: 0x802139E8 -> 0x80213A14
void baBeginStencilShadow() {}

// Range: 0x80213A14 -> 0x80213A40
void baEndStencilShadow(int alpha /* r3 */, unsigned int flags /* r4 */) {}

// Range: 0x80213A40 -> 0x80213A58
void baDisableStencilShadows() {
    // Range: 0x80213A4C -> 0x80213A4C
    inline void bDisableStencilShadows() {}
}

// Range: 0x80213A58 -> 0x80213B3C
void baInitEnvTextureMatrix() {
    // Local variables
    float matScale[4][4]; // r1+0x8
    float matTrans[4][4]; // r1+0x48

    // Range: 0x80213A68 -> 0x80213B28
    inline void baResetEnvTextureMatrix() {}
}

// Range: 0x80213B3C -> 0x80213E84
void baSetEnvTextureMatrixForSpecular(float * lightDir /* r3 */, float * actorPos /* r11 */, float hvBias /* f31 */) {
    // Local variables
    float rotationMat[4][4]; // r1+0x8
    float halfWayVectorVS[4]; // r1+0x48
    float halfWayVectorWS[4]; // r1+0x58
    float lightDirWS[4]; // r1+0x68
    float cameraDirWS[4]; // r1+0x78
    float viewToVSHalfway[4][4]; // r1+0x88

    // Range: 0x80213B50 -> 0x80213B50
    inline void bmVanillaVectorNegate(float * dest, const float * src) {}

    // Range: 0x80213B80 -> 0x80213B80
    inline void bmVanillaVectorSub(float * dest, const float * src1, const float * src2) {}

    // Range: 0x80213BC8 -> 0x80213BF0
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80213BF0 -> 0x80213BF0
    inline void bmVanillaVectorAdd(float * dest, const float * src1, const float * src2) {}

    // Range: 0x80213BF0 -> 0x80213BF0
    inline void bmVanillaVectorCMulAdd(float * dest, const float * src, const float fmul) {}

    // Range: 0x80213BF0 -> 0x80213BF0
    inline void bmVanillaVectorNegate(float * src) {}

    // Range: 0x80213BF0 -> 0x80213D24
    inline void bmVanillaDirectionToMatrix(float (* mat)[4], const float * dirIn, const float * upApprox) {
        // Local variables
        float right[4]; // r1+0xE8
        float dir[4]; // r1+0xD8
        float up[4]; // r1+0xC8

        // Range: 0x80213BF0 -> 0x80213BF0
        inline void bmVanillaVectorNegate(float * src) {}

        // Range: 0x80213BF0 -> 0x80213BF0
        inline void bmVanillaVectorCross(float * dest, const float * src1, const float * src2) {
            // Local variables
            float tmpDest[4]; // r1+0xF8
        }

        // Range: 0x80213BF0 -> 0x80213BF0
        inline float bmVanillaFAbs(float x) {}

        // Range: 0x80213CF8 -> 0x80213CF8
        inline void bmVanillaVectorCrossX(float * dest, const float * src) {}

        // Range: 0x80213D10 -> 0x80213D24
        inline void bmVanillaVectorCrossYNeg(float * dest, const float * src) {}

        // Range: 0x80213D24 -> 0x80213D24
        inline void bmVanillaVectorCross(float * dest, const float * src1, const float * src2) {
            // Local variables
            float tmpDest[4]; // r1+0xF8
        }

        // Range: 0x80213D24 -> 0x80213D24
        inline void bmVanillaAxesToMatrix(float (* mat)[4], const float * dir, const float * up, float * right) {
            // Range: 0x80213D24 -> 0x80213D24
            inline void bmVanillaVectorCross(float * dest, const float * src1, const float * src2) {
                // Local variables
                float tmpDest[4]; // r1+0xF8
            }

            // Range: 0x80213D24 -> 0x80213D24
            inline void bmVanillaVectorCopy(float * dest, const float * src) {}

            // Range: 0x80213D24 -> 0x80213D24
            inline void bmVanillaVectorCopy(float * dest, const float * src) {}

            // Range: 0x80213D24 -> 0x80213D24
            inline void bmVanillaVectorCopy(float * dest, const float * src) {}

            // Range: 0x80213D24 -> 0x80213D24
            inline void bmVanillaVectorZero(float * dest) {}
        }
    }

    // Range: 0x80213D24 -> 0x80213E3C
    inline void baResetEnvTextureMatrix() {}
}

// Range: 0xFFFFFFFF -> 0x80213E84
void baSetEnvTextureMatrixForSpecular(float * lightDir /* r3 */, float hvBias /* f1 */) {}

// Range: 0xFFFFFFFF -> 0x80213E84
int baOptimiseActorRenderModes(struct _TBActorInstance * actorInstance /* r3 */) {
    // Local variables
    int passes; // r7

    /* anonymous block */ {
        // Range: 0x80213E84 -> 0x80213E84
        struct _TBActRenderMode_EnvironmentMap * envMapParams; // r9
    }
}

// total size: 0x14
struct _TBActRenderMode_EnvironmentMap {
    // Members
    struct _TBTexture * mapTexture; // offset 0x0, size 0x4
    int alphaBlendMode; // offset 0x4, size 0x4
    int alphaValue; // offset 0x8, size 0x4
    int stage; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
};
// Range: 0x80213E84 -> 0x80215170
static int bUpdateNormalNodeAnimState(struct _TBActorInstance * actorInstance /* r29 */, float * t /* r27 */, float timeDelta /* f31 */, int first /* r24 */, struct _TBQueuedAnim * qEntry /* r28 */) {
    // Local variables
    int diff; // r27
    float tmpPos[4]; // r1+0x8
    float tmpOrientation[4]; // r1+0x18
    float tmpOrientation2[4]; // r1+0x28
    int l; // r31
    int frameMod; // r23
    int newIndex; // r7
    struct _TBActorNodeInstance * nodeInstance; // r30
    struct _TBActorNode * actorNode; // r5
    struct _TBActorNode * motionNode; // r26
    int oldFrame1; // r25
    int remainder; // r6

    // Range: 0x80213EFC -> 0x80213F44
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80213F44 -> 0x80213F8C
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x8021413C -> 0x8021413C
    inline int bmVanillaRand() {}

    // Range: 0x80214208 -> 0x8021424C
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x8021424C -> 0x802142DC
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802142E8 -> 0x8021432C
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x8021432C -> 0x8021432C
    inline void bmVanillaQuatInverse(float * dest, const float * src) {}

    // Range: 0x8021432C -> 0x802143B0
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802143F4 -> 0x802143F4
    inline int bmVanillaRand() {}

    // Range: 0x802144B4 -> 0x802144F8
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802144F8 -> 0x80214588
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80214594 -> 0x802145D8
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802145D8 -> 0x802145D8
    inline void bmVanillaQuatInverse(float * dest, const float * src) {}

    // Range: 0x802145D8 -> 0x80214664
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802147EC -> 0x802147EC
    inline int bmVanillaRand() {}

    // Range: 0x802148AC -> 0x802148F0
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802148F0 -> 0x80214980
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x8021498C -> 0x802149D0
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802149D0 -> 0x802149D0
    inline void bmVanillaQuatInverse(float * dest, const float * src) {}

    // Range: 0x802149D0 -> 0x80214A34
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80214BEC -> 0x80214BEC
    inline int bmVanillaRand() {}

    // Range: 0x80214CAC -> 0x80214CF0
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80214CF0 -> 0x80214D80
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80214D8C -> 0x80214DD0
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80214DD0 -> 0x80214DD0
    inline void bmVanillaQuatInverse(float * dest, const float * src) {}

    // Range: 0x80214DD0 -> 0x80214E54
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80214FE0 -> 0x8021503C
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80215094 -> 0x80215094
    inline void bmVanillaQuatInverse(float * dest, const float * src) {}

    // Range: 0x80215094 -> 0x80215108
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80215108 -> 0x80215154
    inline void bmVanillaQuatMultiply(float * src1, const float * src2) {
        // Local variables
        float temp[4]; // r1+0x38

        // Range: 0x80215108 -> 0x80215108
        inline void bmVanillaQuatCopy(float * dest, const float * src) {}
    }
}

// Range: 0x80215170 -> 0x80215EF8
static int bUpdateBlendStateNodeAnimState(struct _TBActorInstance * actorInstance /* r29 */, float * t /* r26 */, float timeDelta /* f30 */, int first /* r25 */, struct _TBQueuedAnim * qEntry /* r28 */) {
    // Local variables
    int diff; // r6
    float tmpPos[4]; // r1+0x8
    float tmpOrientation[4]; // r1+0x18
    float tmpOrientation2[4]; // r1+0x28
    int frameMod; // r23
    int newIndex; // r7
    int l; // r31
    struct _TBActorNode * motionNode; // r24
    struct _TBActorNode * actorNode; // r5
    float oldT; // f31
    struct _TBActorNodeInstance * nodeInstance; // r30
    int oldFrame1; // r27
    int remainder; // r6

    // Range: 0x802151F0 -> 0x80215238
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80215238 -> 0x80215280
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80215428 -> 0x80215428
    inline int bmVanillaRand() {}

    // Range: 0x802154E8 -> 0x8021552C
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x8021552C -> 0x802155BC
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802155C8 -> 0x8021560C
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x8021560C -> 0x8021560C
    inline void bmVanillaQuatInverse(float * dest, const float * src) {}

    // Range: 0x8021560C -> 0x80215670
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802156B8 -> 0x802156B8
    inline int bmVanillaRand() {}

    // Range: 0x80215778 -> 0x802157BC
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802157BC -> 0x8021584C
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80215858 -> 0x8021589C
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x8021589C -> 0x8021589C
    inline void bmVanillaQuatInverse(float * dest, const float * src) {}

    // Range: 0x8021589C -> 0x80215928
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80215D64 -> 0x80215DC0
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80215E18 -> 0x80215E18
    inline void bmVanillaQuatInverse(float * dest, const float * src) {}

    // Range: 0x80215E18 -> 0x80215E8C
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80215E8C -> 0x80215ED8
    inline void bmVanillaQuatMultiply(float * src1, const float * src2) {
        // Local variables
        float temp[4]; // r1+0x38

        // Range: 0x80215E8C -> 0x80215E8C
        inline void bmVanillaQuatCopy(float * dest, const float * src) {}
    }
}

// Range: 0x80215EF8 -> 0x8021618C
void bUpdateNodesLite(struct _TBActorInstance * actorInstance /* r29 */, float timeDelta /* f31 */, int * noofNodes /* r28 */) {
    // Local variables
    struct _TBActorNodeInstance * node; // r31
    float t; // r1+0x8
    int first; // r30
    struct _TBQueuedAnim * qEntry; // r31
    int l; // r30
    int n; // r27

    // Range: 0x80215F38 -> 0x80215F38
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x80215F38 -> 0x80215F70
    inline void bmVanillaQuatZero(float * dest) {}
}

// Range: 0x8021618C -> 0x802163E0
void bPrepActorNode(struct _TBActorInstance * actorInstance /* r28 */, struct _TBActorNodeInstance * instanceNode /* r30 */, int recurse /* r29 */) {
    // Local variables
    float orientationMatrix[4][4]; // r1+0x8
    float tmpMatrix[4][4]; // r1+0x48
    float trans[4]; // r1+0x88
    struct _TBActorNodeInstance * child; // r31

    // Range: 0x802161C0 -> 0x802161C0
    inline void bmVanillaVectorMul(float * dest, const float * src1, const float * src2) {}

    // Range: 0x802161C0 -> 0x802161C0
    inline void bmVanillaMatTransOrScale(float (* dest)[4], const float * trans, float (* orientation)[4], const float * scale) {}

    // Range: 0x80216238 -> 0x80216238
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80216238 -> 0x80216284
    inline void bmVanillaMatTransOrScale(float (* dest)[4], const float * trans, float (* orientation)[4], const float * scale) {}

    // Range: 0x80216300 -> 0x80216300
    inline void bmVanillaMatTransOr(float (* dest)[4], const float * trans, float (* orientation)[4]) {}
}

// Range: 0x802163E0 -> 0x802165C8
void baSetActorInstanceFrame(struct _TBActorInstance * actorInstance /* r26 */, struct _TBActor * actor /* r25 */, unsigned int frame /* r29 */) {
    // Local variables
    struct _TBActorNodeInstance * nodeInstance; // r31
    struct _TBActorNode * actorNode; // r30
    int l; // r28
    struct _TBActorAnimSegment * animSeg; // r27

    // Range: 0x80216470 -> 0x802164B0
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802164C8 -> 0x80216508
    inline int baEvalAnimScale(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80216520 -> 0x80216560
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }
}

// Range: 0x802165C8 -> 0x80216638
void baSetAnimSegmentFrame(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorAnimSegment * segment /* r4 */, float animPos /* f1 */) {
    // Local variables
    int frame;

    // Range: 0x802165D4 -> 0x802165D4
    inline int bmVanillaFloatToInt(float val) {}
}

// Range: 0x80216638 -> 0x802167F8
void baForceNodeInstanceFrame(struct _TBActorInstance * actorInstance /* r30 */, struct _TBActor * actor /* r25 */, unsigned int frame /* r28 */) {
    // Local variables
    struct _TBActorNodeInstance * nodeInstance; // r31
    struct _TBActorNode * actorNode; // r30
    int l; // r27
    struct _TBActorAnimSegment * animSeg; // r26

    /* anonymous block */ {
        // Range: 0x80216688 -> 0x802167D8
        struct _TBActorAnimNode * animNodeData; // r29

        // Range: 0x802166B8 -> 0x802166E4
        inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
            // Local variables
            struct _TBAnimKey3 * keys;
            int noofKeys; // r5
            struct _TBActorAnimNode * animNodeData;
        }

        // Range: 0x802166FC -> 0x8021673C
        inline int baEvalAnimScale(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
            // Local variables
            struct _TBAnimKey3 * keys; // r6
            int noofKeys; // r5
            struct _TBActorAnimNode * animNodeData; // r6
        }

        // Range: 0x80216754 -> 0x80216794
        inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
            // Local variables
            struct _TBAnimKey4 * keys; // r6
            int noofKeys; // r5
            struct _TBActorAnimNode * animNodeData; // r6
        }
    }
}

// Range: 0xFFFFFFFF -> 0x802167F8
unsigned int baGetNodeFrame(struct _TBActorInstance * actorInstance /* r3 */) {
    // Local variables
    struct _TBQueuedAnim * qEntry;
}

// Range: 0x802167F8 -> 0x8021686C
struct _TBActorNodeInstance * baFindNodeByCRC(struct _TBActorNodeInstance * nodeInstance /* r29 */, unsigned int crc /* r30 */) {
    // Local variables
    struct _TBActorNodeInstance * node; // r31
    struct _TBActorNodeInstance * result; // r3
}

// Range: 0x8021686C -> 0x802168AC
struct _TBActorNodeInstance * baFindNode(struct _TBActorNodeInstance * nodeInstance /* r30 */, char * nodeName /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x802168AC
void baHideNode(struct _TBActorNodeInstance * nodeInstance /* r30 */, int recurse /* r4 */, int stagemask /* r29 */) {
    // Local variables
    struct _TBActorNodeInstance * child; // r31
}

// Range: 0xFFFFFFFF -> 0x802168AC
void baShowNode(struct _TBActorNodeInstance * nodeInstance /* r30 */, int recurse /* r4 */, int stagemask /* r5 */) {
    // Local variables
    struct _TBActorNodeInstance * child; // r31
}

// Range: 0xFFFFFFFF -> 0x802168AC
void baNodeLookAt(struct _TBActorInstance * actorInstance /* r17 */, struct _TBActorNodeInstance * nodeInstance /* r29 */, float * worldFocusPoint /* r28 */, float xConstraintNeg /* f28 */, float xConstraintPos /* f29 */, float xAngleOffset /* f23 */, float yConstraintNeg /* f24 */, float yConstraintPos /* f25 */, float yAngleOffset /* f22 */, float t /* f21 */, unsigned int flags /* r19 */) {
    // Local variables
    float worldToNode[4][4]; // r1+0x8
    float nodeToWorld[4][4]; // r1+0x48
    float lookAtXForm[4][4]; // r1+0x88
    float transMat[4][4]; // r1+0xC8
    float localPoint[4]; // r1+0x108
    float lookAtQuat[4]; // r1+0x118
    float rotateXToZ[4]; // r1+0x128
    float basicVector[4]; // r1+0x138
    float xOrientation[4]; // r1+0x148
    float yOrientation[4]; // r1+0x158
    float tmpOrientation[4]; // r1+0x168
    float xHeight;
    float yHeight; // f27
    float zHeight; // f30
    float nodePosition[4]; // r1+0x178
    float xAxis[4]; // r1+0x188
    float yAxis[4]; // r1+0x198
    float hyp;
    float posDiff; // f31
    float negDiff; // f1
    float final[4]; // r1+0x1A8

    // Range: 0x802168AC -> 0x802168AC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x802168AC -> 0x802168AC
    inline void bmVanillaVectorSub(float * dest, const float * src1, const float * src2) {}

    // Range: 0x802168AC -> 0x802168AC
    inline float bmVanillaVectorLen(const float * src) {
        // Range: 0x802168AC -> 0x802168AC
        inline float bmVanillaSqrt(float x) {}
    }

    // Range: 0x802168AC -> 0x802168AC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x802168AC -> 0x802168AC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x802168AC -> 0x802168AC
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x802168AC -> 0x802168AC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x802168AC -> 0x802168AC
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x802168AC -> 0x802168AC
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x802168AC -> 0x802168AC
    inline float bmVanillaASin(float val) {}

    // Range: 0x802168AC -> 0x802168AC
    inline float bmVanillaFAbs(float x) {}

    // Range: 0x802168AC -> 0x802168AC
    inline float bmVanillaFAbs(float x) {}

    // Range: 0x802168AC -> 0x802168AC
    inline float bmVanillaASin(float val) {}

    // Range: 0x802168AC -> 0x802168AC
    inline float bmVanillaFAbs(float x) {}

    // Range: 0x802168AC -> 0x802168AC
    inline float bmVanillaFAbs(float x) {}

    // Range: 0x802168AC -> 0x802168AC
    inline void bmVanillaQuatCopy(float * dest, const float * src) {}

    // Range: 0x802168AC -> 0x802168AC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x802168AC -> 0x802168AC
    inline void bmVanillaQuatCopy(float * dest, const float * src) {}
}

// Range: 0x802168AC -> 0x80216ACC
void baNodeLookAtUnconstrained(struct _TBActorInstance * actorInstance /* r27 */, struct _TBActorNodeInstance * nodeInstance /* r31 */, float * worldFocusPoint /* r29 */, float * refVector /* r28 */, float t /* f29 */, float maxAngleFactor /* f30 */, unsigned int flags /* r26 */) {
    // Local variables
    float worldToNode[4][4]; // r1+0x8
    float nodeToWorld[4][4]; // r1+0x48
    float localPoint[4]; // r1+0x88
    float angAxis[4]; // r1+0x98
    float refPoint[4]; // r1+0xA8
    float lookAtQuat[4]; // r1+0xB8
    float destQuat[4]; // r1+0xC8
    float dot; // f1

    // Range: 0x80216920 -> 0x80216920
    inline void bmVanillaVectorCross(float * dest, const float * src1, const float * src2) {
        // Local variables
        float tmpDest[4]; // r1+0xD8
    }

    // Range: 0x80216920 -> 0x80216920
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x80216A34 -> 0x80216A34
    inline float bmVanillaACos(float val) {}

    // Range: 0x80216A40 -> 0x80216A40
    inline void bmVanillaQuatCopy(float * dest, const float * src) {}
}

// Range: 0xFFFFFFFF -> 0x80216ACC
void baNodeLookAtAdditional(struct _TBActorInstance * instance /* r27 */, struct _TBActorNodeInstance * nodeInstance /* r29 */, float * worldFocus /* r28 */, float xConstraintNeg /* f27 */, float xConstraintPos /* f31 */, float yConstraintNeg /* f25 */, float yConstraintPos /* f26 */, float t /* f24 */, unsigned int flags /* r19 */) {
    // Local variables
    float worldToNode[4][4]; // r1+0x8
    float localFocus[4]; // r1+0x48
    float totalLookAt[4]; // r1+0x58
    float lookAt[4]; // r1+0x68
    float localWorldToNode[4][4]; // r1+0x78
    float xOrientation[4]; // r1+0xB8
    float yOrientation[4]; // r1+0xC8
    float xHeight; // f1
    float yHeight; // f28
    float zHeight; // f29
    float xAxis[4]; // r1+0xD8
    float yAxis[4]; // r1+0xE8
    float zAxis[4]; // r1+0xF8
    float hyp;
    float final[4]; // r1+0x108

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaVectorLen(const float * src) {
        // Range: 0x80216ACC -> 0x80216ACC
        inline float bmVanillaSqrt(float x) {}
    }

    // Range: 0x80216ACC -> 0x80216ACC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaASin(float val) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaASin(float val) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline void bmVanillaQuatCopy(float * dest, const float * src) {}
}

// Range: 0xFFFFFFFF -> 0x80216ACC
void baNodeLookAtAdditionalUnconstrained(struct _TBActorInstance * instance /* r27 */, struct _TBActorNodeInstance * nodeInstance /* r28 */, float * worldFocus /* r29 */, float t /* f27 */, unsigned int flags /* r19 */) {
    // Local variables
    float worldToNode[4][4]; // r1+0x8
    float localFocus[4]; // r1+0x48
    float totalLookAt[4]; // r1+0x58
    float lookAt[4]; // r1+0x68
    float localWorldToNode[4][4]; // r1+0x78
    float xOrientation[4]; // r1+0xB8
    float yOrientation[4]; // r1+0xC8
    float xHeight; // f1
    float yHeight; // f28
    float zHeight; // f29
    float xAxis[4]; // r1+0xD8
    float yAxis[4]; // r1+0xE8
    float zAxis[4]; // r1+0xF8
    float hyp;
    float final[4]; // r1+0x108

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaVectorLen(const float * src) {
        // Range: 0x80216ACC -> 0x80216ACC
        inline float bmVanillaSqrt(float x) {}
    }

    // Range: 0x80216ACC -> 0x80216ACC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaASin(float val) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline float bmVanillaASin(float val) {}

    // Range: 0x80216ACC -> 0x80216ACC
    inline void bmVanillaQuatCopy(float * dest, const float * src) {}
}

// Range: 0x80216ACC -> 0x80216B04
void baSetAdditionalNodePosition(struct _TBActorNodeInstance * const node /* r3 */, const float * pos /* r4 */, struct _TBActorInstance * const actorInstance /* r5 */) {}

// Range: 0x80216B04 -> 0x80216B94
void baSetAdditionalNodeOrientation(struct _TBActorNodeInstance * const node /* r31 */, const float * orientation /* r4 */, struct _TBActorInstance * actorInstance /* r29 */) {
    // Local variables
    float rotationVec[4]; // r1+0x8
    float translatedOrientation[4]; // r1+0x18
}

// Range: 0xFFFFFFFF -> 0x80216B94
void baSetActorNodeController(struct _TBActorNodeInstance * node /* r3 */, int (* controller)(struct _TBActorInstance *, struct _TBActorNodeInstance *, void *) /* r4 */, void * context /* r5 */) {}

// Range: 0x80216B94 -> 0x80216C6C
unsigned int baCountMorphTargets(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorNodeInstance * nodeInstance /* r4 */) {
    // Local variables
    struct _TBActorNodeInstance * nodePtr; // r11
    struct _TBMorphHeader * morphHeader;
    unsigned int morphCount; // r8
    int traverseRootSiblings; // r7
}

// Range: 0x80216C6C -> 0x80216D54
void baSetActorNodeScale(struct _TBActorNodeInstance * node /* r3 */, const float * scale /* r4 */, struct _TBActorInstance * actorInstance /* r5 */) {
    // Local variables
    float scaleMatrix[4][4]; // r1+0x8
}

// Range: 0xFFFFFFFF -> 0x80216D54
void baSetActorNodeUniformScale(struct _TBActorNodeInstance * node /* r3 */, float scale /* f1 */, struct _TBActorInstance * actorInstance /* r4 */) {
    // Local variables
    float scaleMatrix[4][4]; // r1+0x8
}

// total size: 0x8
struct _TBActorGroup {
    // Members
    struct _TBActorGroupMember * head; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
};
// Range: 0xFFFFFFFF -> 0x80216D54
struct _TBActorGroup * baActorGroupCreate(int flags /* r28 */) {
    // Local variables
    struct _TBActorGroup * group; // r30
}

// total size: 0xC
struct _TBActorGroupMember {
    // Members
    struct _TBActorInstance * instance; // offset 0x0, size 0x4
    struct _TBActorGroupMember * prev; // offset 0x4, size 0x4
    struct _TBActorGroupMember * next; // offset 0x8, size 0x4
};
// Range: 0xFFFFFFFF -> 0x80216D54
void baActorGroupDelete(struct _TBActorGroup * group /* r30 */) {
    // Local variables
    struct _TBActorGroupMember * at; // r31
    struct _TBActorGroupMember * del; // r3
}

// Range: 0xFFFFFFFF -> 0x80216D54
void baActorGroupAddInstance(struct _TBActorGroup * group /* r31 */, struct _TBActorInstance * instance /* r30 */) {
    // Local variables
    struct _TBActorGroupMember * member; // r3
    struct _TBActorGroupMember * at; // r10
    struct _TBActorGroupMember * prev; // r11
    struct _TBActorGroupMember * next; // r9
}

// Range: 0xFFFFFFFF -> 0x80216D54
int baActorGroupDeleteInstance(struct _TBActorGroup * group /* r3 */, struct _TBActorInstance * instance /* r4 */) {
    // Local variables
    struct _TBActorGroupMember * at; // r10
}

// Range: 0xFFFFFFFF -> 0x80216D54
void baActorGroupSort(struct _TBActorGroup * group /* r3 */) {
    // Local variables
    struct _TBActorGroupMember * at; // r7
    struct _TBActorGroupMember * a;
    struct _TBActorGroupMember * b;
    struct _TBActorGroupMember * prev; // r9
    struct _TBActorGroupMember * next; // r11
    int done; // r6
}

// Range: 0xFFFFFFFF -> 0x80216D54
int baActorGroupUpdate(struct _TBActorGroup * group /* r30 */, float timeDelta /* f31 */, float * motionVector /* r28 */) {
    // Local variables
    struct _TBActorGroupMember * at; // r31
    int total; // r29
}

// Range: 0xFFFFFFFF -> 0x80216D54
void baActorGroupPrep(struct _TBActorGroup * group /* r30 */, int flags /* r29 */) {
    // Local variables
    struct _TBActorGroupMember * at; // r31
}

// Range: 0xFFFFFFFF -> 0x80216D54
int baActorGroupDraw(struct _TBActorGroup * group /* r30 */, int alpha /* r4 */, int flags /* r5 */) {
    // Local variables
    struct _TBActorGroupMember * at; // r31
    int noofDrawn; // r29
}

// Range: 0x80216D54 -> 0x80216D6C
int bInitCamera() {}

// Range: 0x80216D6C -> 0x80216D90
void bShutdownCamera() {}

// Range: 0x80216D90 -> 0x80216E2C
void baDeleteCameraInstance(struct _TBCameraInstance * camera /* r31 */) {}

// total size: 0x60
struct _TBCameraInstance {
    // Members
    struct _TBCameraInstanceControl source; // offset 0x0, size 0x20
    struct _TBCameraInstanceControl target; // offset 0x20, size 0x20
    unsigned int flags; // offset 0x40, size 0x4
    union UBContext32 context; // offset 0x44, size 0x4
    float xFov; // offset 0x48, size 0x4
    float yFov; // offset 0x4C, size 0x4
    float nearClip; // offset 0x50, size 0x4
    float farClip; // offset 0x54, size 0x4
    struct _TBCameraInstance * next; // offset 0x58, size 0x4
    struct _TBCameraInstance * prev; // offset 0x5C, size 0x4
};
// total size: 0x20
struct _TBCameraInstanceControl {
    // Inner declarations
    union {
        struct _TBCameraInstanceControlStatic staticParms; // offset 0x0, size 0x10
        struct _TBCameraInstanceControlVector vectorParms; // offset 0x0, size 0x8
        struct _TBCameraInstanceControlActor actorParms; // offset 0x0, size 0x18
        struct _TBCameraInstanceControlQuaternion quaternionParms; // offset 0x0, size 0x10
        struct _TBCameraInstanceControlTQuaternion tQuaternionParms; // offset 0x0, size 0x4
        struct _TBCameraInstanceControlEuler eulerParms; // offset 0x0, size 0x10
        struct _TBCameraInstanceControlTEuler tEulerParms; // offset 0x0, size 0x8
        struct _TBCameraInstanceControlCustom customParms; // offset 0x0, size 0x8
        char pad[28]; // offset 0x0, size 0x1C
    };

    // Members
    union {
        struct _TBCameraInstanceControlStatic staticParms; // offset 0x0, size 0x10
        struct _TBCameraInstanceControlVector vectorParms; // offset 0x0, size 0x8
        struct _TBCameraInstanceControlActor actorParms; // offset 0x0, size 0x18
        struct _TBCameraInstanceControlQuaternion quaternionParms; // offset 0x0, size 0x10
        struct _TBCameraInstanceControlTQuaternion tQuaternionParms; // offset 0x0, size 0x4
        struct _TBCameraInstanceControlEuler eulerParms; // offset 0x0, size 0x10
        struct _TBCameraInstanceControlTEuler tEulerParms; // offset 0x0, size 0x8
        struct _TBCameraInstanceControlCustom customParms; // offset 0x0, size 0x8
        char pad[28]; // offset 0x0, size 0x1C
    }; // offset 0x0, size 0x1C
    enum EBCameraCtrlMode ctrlMode; // offset 0x1C, size 0x4
};
// total size: 0x10
struct _TBCameraInstanceControlStatic {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float roll; // offset 0xC, size 0x4
};
// total size: 0x8
struct _TBCameraInstanceControlVector {
    // Members
    float * vector; // offset 0x0, size 0x4
    float roll; // offset 0x4, size 0x4
};
// total size: 0x18
struct _TBCameraInstanceControlActor {
    // Members
    struct _TBActorInstance * actorInstance; // offset 0x0, size 0x4
    struct _TBActorNodeInstance * nodeInstance; // offset 0x4, size 0x4
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float z; // offset 0x10, size 0x4
    float roll; // offset 0x14, size 0x4
};
// total size: 0x10
struct _TBCameraInstanceControlQuaternion {
    // Members
    float quaternion[4]; // offset 0x0, size 0x10
};
// total size: 0x4
struct _TBCameraInstanceControlTQuaternion {
    // Members
    float * quaternion; // offset 0x0, size 0x4
};
// total size: 0x10
struct _TBCameraInstanceControlEuler {
    // Members
    float xr; // offset 0x0, size 0x4
    float yr; // offset 0x4, size 0x4
    float zr; // offset 0x8, size 0x4
    enum EBViewportRotationOrder order; // offset 0xC, size 0x4
};
// total size: 0x8
struct _TBCameraInstanceControlTEuler {
    // Members
    float * angle; // offset 0x0, size 0x4
    enum EBViewportRotationOrder order; // offset 0x4, size 0x4
};
// total size: 0x8
struct _TBCameraInstanceControlCustom {
    // Members
    void (* callback)(float *, float *, void *); // offset 0x0, size 0x4
    void * context; // offset 0x4, size 0x4
};
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
enum EBViewportRotationOrder {
    BVPROTATE_XYZ = 0,
    BVPROTATE_XZY = 1,
    BVPROTATE_YXZ = 2,
    BVPROTATE_YZX = 3,
    BVPROTATE_ZXY = 4,
    BVPROTATE_ZYX = 5,
};
// Range: 0x80216E2C -> 0x80216E3C
struct _TBCameraInstance * baSetCameraInstance(struct _TBCameraInstance * camera /* r3 */) {
    // Local variables
    struct _TBCameraInstance * oldCamera; // r0
}

// Range: 0xFFFFFFFF -> 0x80216E3C
struct _TBCameraInstance * baGetCurrentCameraInstance() {}

// Range: 0xFFFFFFFF -> 0x80216E3C
static void SetCameraControl(struct _TBCameraInstanceControl * control /* r3 */, struct __va_list_tag * argp /* r4 */, struct __va_list_tag (* argr)[1] /* r5 */) {
    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        int * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        float * * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        struct _TBActorInstance * * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        struct _TBActorNodeInstance * * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        float * * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        int * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        float * * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        int * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        void * * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80216E3C -> 0x80216E3C
        void * * __ptr; // r10
    }
}

// Range: 0xFFFFFFFF -> 0x80216E3C
struct _TBCameraInstance * baCreateCameraInstance(struct _TBCameraInstance * camera /* r31 */, const unsigned int flags /* r30 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
}

// Range: 0xFFFFFFFF -> 0x80216E3C
void baSetCameraInstanceSource(struct _TBCameraInstance * camera /* r3 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
}

// Range: 0xFFFFFFFF -> 0x80216E3C
void baSetCameraInstanceTarget(struct _TBCameraInstance * camera /* r3 */, ...) {
    // Local variables
    struct __va_list_tag argp[1]; // r1+0x70
}

// Range: 0xFFFFFFFF -> 0x80216E3C
void baSetCameraInstanceView(struct _TBCameraInstance * camera /* r3 */, const float xFov /* f1 */, const float yFov /* f2 */, const float nearClip /* f3 */, const float farClip /* f4 */, const unsigned int flags /* r4 */) {}

// Range: 0x80216E3C -> 0x80216F94
static void EvalCameraControl(float * pos /* r29 */, float * roll /* r28 */, struct _TBCameraInstanceControl * control /* r31 */) {
    // Local variables
    float tmpVec1[4]; // r1+0x8
    float tmpVec2[4]; // r1+0x18
}

// Range: 0x80216F94 -> 0x80217198
int bUpdateViewFromCamera() {
    // Local variables
    float sVec[4]; // r1+0x8
    float dVec[4]; // r1+0x18
    float roll; // r1+0x28
}

// Range: 0x80217198 -> 0x802171B0
int bInitExtras() {}

// Range: 0x802171B0 -> 0x802171D4
void bShutdownExtras() {}

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
    float position[4]; // offset 0x50, size 0x10
    float orientation[4]; // offset 0x60, size 0x10
    float systemToWorld[4][4]; // offset 0x70, size 0x40
    struct _TBActorInstance * actorAttachedTo; // offset 0xB0, size 0x4
    struct _TBActorNodeInstance * nodeAttachedTo; // offset 0xB4, size 0x4
    int pad2; // offset 0xB8, size 0x4
    int pad3; // offset 0xBC, size 0x4
};
// Range: 0xFFFFFFFF -> 0x802171D4
struct _TBExtraSystem * baCreateExtraSystem(char * ident /* r27 */, void (* create)(struct _TBExtraSystem *, unsigned char *, struct __va_list_tag *) /* r23 */, void (* update)(struct _TBExtraSystem *, int, unsigned char * *, float) /* r22 */, int (* del)(struct _TBExtraSystem *, unsigned char *) /* r21 */, void (* render)(struct _TBExtraSystem *, int, unsigned char * *, void *) /* r24 */, void (* sysInit)(struct _TBExtraSystem *, int) /* r29 */, int dataSize /* r25 */, int maxInstances /* r26 */, unsigned int flags /* r0 */, int systemDataSize /* r30 */) {
    // Local variables
    struct _TBExtraSystem * eSystem; // r31
}

// Range: 0x802171D4 -> 0x80217274
void baDeleteExtraSystem(struct _TBExtraSystem * eSystem /* r31 */) {}

// Range: 0xFFFFFFFF -> 0x80217274
struct _TBExtraSystem * baFindExtraSystem(char * ident /* r3 */) {
    // Local variables
    unsigned int crc; // r11
    struct _TBExtraSystem * eSystem; // r3
}

// Range: 0xFFFFFFFF -> 0x80217274
unsigned char * baCreateExtra(struct _TBExtraSystem * eSystem /* r30 */, ...) {
    // Local variables
    int ok; // r3
    int l; // r31
    struct __va_list_tag args[1]; // r1+0x70
}

// Range: 0xFFFFFFFF -> 0x80217274
unsigned char * baCloneExtra(struct _TBExtraSystem * eSystem /* r31 */, void * parmTemplate /* r29 */) {
    // Local variables
    int ok; // r3
    int l; // r30
}

// Range: 0x80217274 -> 0x8021733C
void baResetExtraSystem(struct _TBExtraSystem * eSystem /* r31 */) {}

// Range: 0xFFFFFFFF -> 0x8021733C
static void CalculateSystemXForm(struct _TBExtraSystem * eSystem /* r31 */) {
    // Local variables
    float tMat[4][4]; // r1+0x8
    float oMat[4][4]; // r1+0x48
    float xMat[4][4]; // r1+0x88
}

// Range: 0xFFFFFFFF -> 0x8021733C
void baSetExtraSystemPosition(struct _TBExtraSystem * eSystem /* r3 */, float x /* f1 */, float y /* f2 */, float z /* f3 */) {}

// Range: 0xFFFFFFFF -> 0x8021733C
void baSetExtraSystemOrientation(struct _TBExtraSystem * eSystem /* r3 */, float * orientation /* r4 */) {
    // Range: 0x8021733C -> 0x8021733C
    inline void bmVanillaQuatCopy(float * dest, const float * src) {}
}

// Range: 0xFFFFFFFF -> 0x8021733C
void baSetExtraSystemAttachment(struct _TBExtraSystem * eSystem /* r3 */, struct _TBActorInstance * actInstance /* r4 */, struct _TBActorNodeInstance * nodeInstance /* r5 */) {}

// Range: 0xFFFFFFFF -> 0x8021733C
void baUpdateExtraSystem(struct _TBExtraSystem * eSystem /* r31 */, float t /* f31 */) {}

// Range: 0xFFFFFFFF -> 0x8021733C
void baRenderExtraSystem(struct _TBExtraSystem * eSystem /* r31 */, void * context /* r30 */) {}

// Range: 0xFFFFFFFF -> 0x8021733C
int baDeleteExtraInstance(struct _TBExtraSystem * eSystem /* r31 */, int instanceIndex /* r30 */) {
    // Local variables
    int absIndex; // r9
}

// Range: 0xFFFFFFFF -> 0x8021733C
struct _TBExtraSystem * baSetExtraSystemLimit(struct _TBExtraSystem * eSystem /* r3 */, int newMaxInstances /* r31 */) {
    // Local variables
    struct _TBExtraSystem headerCopy; // r1+0x10
}

static inline void * GDGetGDLObjStart(const struct _GDLObj * dl) {}

// total size: 0x10
struct _GDLObj {
    // Members
    unsigned char * start; // offset 0x0, size 0x4
    unsigned int length; // offset 0x4, size 0x4
    unsigned char * ptr; // offset 0x8, size 0x4
    unsigned char * top; // offset 0xC, size 0x4
};
static inline unsigned int GDGetGDLObjLength(const struct _GDLObj * dl) {}

static inline void * GDGetGDLObjPointer(const struct _GDLObj * dl) {}

static inline unsigned int GDGetGDLObjOffset(const struct _GDLObj * dl) {}

static inline void GDSetCurrent(struct _GDLObj * dl) {}

static inline struct _GDLObj * GDGetCurrent() {}

static inline unsigned char GDIsCurrent(const struct _GDLObj * dl) {}

static inline unsigned int GDGetCurrOffset() {}

static inline void GDSetCurrOffset(unsigned int offset) {}

static inline void GDAdvCurrOffset(int delta) {}

static inline void * GDGetCurrPointer() {}

static inline void * GDGetCurrStart() {}

static inline unsigned int GDGetCurrLength() {}

static inline void GDOverflowCheck(unsigned int size) {}

static inline void __GDWrite(unsigned char data) {}

static inline void GDWrite_u8(unsigned char data) {}

static inline void GDWrite_s8(char data) {}

static inline void GDWrite_u16(unsigned short data) {}

static inline void GDWrite_s16(short data) {}

static inline void GDWrite_u32(unsigned int data) {}

static inline void GDWrite_s32(int data) {}

static inline void GDWrite_f32(float data) {
    // Inner declarations
    union _FloatInt {
        float f; // offset 0x0, size 0x4
        unsigned int u; // offset 0x0, size 0x4
    };

    // Typedefs
    typedef union _FloatInt _FloatInt;

    // Local variables
    union _FloatInt fid;
}

static inline void GDWrite_u24(unsigned int data) {}

static inline void GDWriteBPCmd(unsigned int regval) {}

static inline void GDWriteCPCmd(unsigned char addr, unsigned int val) {}

static inline void GDWriteXFCmd(unsigned short addr, unsigned int val) {}

static inline void GDWriteXFCmdHdr(unsigned short addr, unsigned char len) {}

static inline void GDWriteXFIndxACmd(unsigned short addr, unsigned char len, unsigned short index) {}

static inline void GDWriteXFIndxBCmd(unsigned short addr, unsigned char len, unsigned short index) {}

static inline void GDWriteXFIndxCCmd(unsigned short addr, unsigned char len, unsigned short index) {}

static inline void GDWriteXFIndxDCmd(unsigned short addr, unsigned char len, unsigned short index) {}

static inline void GDBegin(enum _GXPrimitive type, enum _GXVtxFmt vtxfmt, unsigned short nverts) {}

enum _GXPrimitive {
    GX_POINTS = 184,
    GX_LINES = 168,
    GX_LINESTRIP = 176,
    GX_TRIANGLES = 144,
    GX_TRIANGLESTRIP = 152,
    GX_TRIANGLEFAN = 160,
    GX_QUADS = 128,
};
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
static inline void GDEnd() {}

static inline void GDSetLightShininess(enum _GXLightID light, float shininess) {}

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
static inline unsigned short __GDLightID2Index(enum _GXLightID id) {
    // Local variables
    unsigned short idx;
}

static inline unsigned short __GDLightID2Offset(enum _GXLightID id) {}

static inline void GDPatchTlutPtr(void * tlut_ptr) {}

static inline void GDCmd1u8(const unsigned char x) {}

static inline void GDCmd1u16(const unsigned short x) {}

static inline void GDCmd1u32(const unsigned long x) {}

static inline void GDParam1u8(const unsigned char x) {}

static inline void GDParam1u16(const unsigned short x) {}

static inline void GDParam1u32(const unsigned long x) {}

static inline void GDParam1s8(const signed char x) {}

static inline void GDParam1s16(const short x) {}

static inline void GDParam1s32(const long x) {}

static inline void GDParam1f32(const float x) {}

static inline void GDParam3f32(const float x, const float y, const float z) {}

static inline void GDParam4f32(const float x, const float y, const float z, const float w) {}

static inline void GDPosition3f32(const float x, const float y, const float z) {}

static inline void GDPosition3u8(const unsigned char x, const unsigned char y, const unsigned char z) {}

static inline void GDPosition3s8(const signed char x, const signed char y, const signed char z) {}

static inline void GDPosition3u16(const unsigned short x, const unsigned short y, const unsigned short z) {}

static inline void GDPosition3s16(const short x, const short y, const short z) {}

static inline void GDPosition2f32(const float x, const float y) {}

static inline void GDPosition2u8(const unsigned char x, const unsigned char y) {}

static inline void GDPosition2s8(const signed char x, const signed char y) {}

static inline void GDPosition2u16(const unsigned short x, const unsigned short y) {}

static inline void GDPosition2s16(const short x, const short y) {}

static inline void GDPosition1x16(const unsigned short x) {}

static inline void GDPosition1x8(const unsigned char x) {}

static inline void GDNormal3f32(const float x, const float y, const float z) {}

static inline void GDNormal3s16(const short x, const short y, const short z) {}

static inline void GDNormal3s8(const signed char x, const signed char y, const signed char z) {}

static inline void GDNormal1x16(const unsigned short x) {}

static inline void GDNormal1x8(const unsigned char x) {}

static inline void GDColor4u8(const unsigned char x, const unsigned char y, const unsigned char z, const unsigned char w) {}

static inline void GDColor1u32(const unsigned long x) {}

static inline void GDColor3u8(const unsigned char x, const unsigned char y, const unsigned char z) {}

static inline void GDColor1u16(const unsigned short x) {}

static inline void GDColor1x16(const unsigned short x) {}

static inline void GDColor1x8(const unsigned char x) {}

static inline void GDTexCoord2f32(const float x, const float y) {}

static inline void GDTexCoord2s16(const short x, const short y) {}

static inline void GDTexCoord2u16(const unsigned short x, const unsigned short y) {}

static inline void GDTexCoord2s8(const signed char x, const signed char y) {}

static inline void GDTexCoord2u8(const unsigned char x, const unsigned char y) {}

static inline void GDTexCoord1f32(const float x) {}

static inline void GDTexCoord1s16(const short x) {}

static inline void GDTexCoord1u16(const unsigned short x) {}

static inline void GDTexCoord1s8(const signed char x) {}

static inline void GDTexCoord1u8(const unsigned char x) {}

static inline void GDTexCoord1x16(const unsigned short x) {}

static inline void GDTexCoord1x8(const unsigned char x) {}

static inline void GDMatrixIndex1u8(const unsigned char x) {}

// Range: 0x8021733C -> 0x8021735C
int bInitActorPlatformSpecific() {}

// Range: 0x8021735C -> 0x80217360
void bShutdownActorPlatformSpecific() {}

// Range: 0x80217360 -> 0x8021766C
static void bFixupMeshData(unsigned char * basePtr /* r3 */, struct _TBMesh * mesh /* r30 */, struct _TBActor * actor /* r28 */) {
    // Local variables
    int l; // r27
    int k; // r9
    int noofTex1; // r24
    int noofTex2; // r25
    unsigned int flags; // r26
    struct _TBVertexBuffer * vertexBuffer; // r1+0x10
    struct _TBMeshBatch * batch; // r31
    struct _TBMeshPrim * prim; // r29

    // Range: 0x802174C4 -> 0x802174C4
    inline struct _TBTexture * bkFindTextureByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

    // Range: 0x802174C4 -> 0x802174C4
    inline struct _TBTexture * bkFindTextureByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}
}

// Range: 0x8021766C -> 0x8021777C
void bFixupAsyncMesh(struct _TBMesh * asyncMesh /* r29 */, unsigned char * basePtr /* r4 */, struct _TBActor * actor /* r5 */) {
    // Local variables
    void * cp; // r31
    int c; // r27
    struct _TBMesh * mesh;
    struct _GDLObj dlObj; // r1+0x8
    struct _TBMeshBatch * batch; // r30

    // Range: 0x8021767C -> 0x8021767C
    inline void GDSetCurrent(struct _GDLObj * dl) {}

    // Range: 0x802176EC -> 0x802176EC
    inline void GDSetCurrOffset(unsigned int offset) {}

    // Range: 0x802176EC -> 0x802176EC
    inline void * GDGetCurrPointer() {}

    // Range: 0x80217728 -> 0x80217728
    inline void GDSetCurrOffset(unsigned int offset) {}

    // Range: 0x80217728 -> 0x80217728
    inline void * GDGetCurrPointer() {}
}

// Range: 0x8021777C -> 0x802177CC
void bDrawPatchMesh(struct _TBPatchHeader * header /* r3 */) {
    // Local variables
    unsigned int c; // r30
    unsigned int n; // r29
    struct _TBPatch * patch; // r31
}

// Range: 0x802177CC -> 0x80217938
int bSetupActorNodeList(struct _TBActorNodeInstance * rootNode /* r27 */, struct _TBActorInstance * actorInstance /* r30 */, int alpha /* r28 */) {
    // Local variables
    struct _TBActorNodeInstance * instanceNode; // r31
    float m[4][4]; // r1+0x8
    int c; // r29
}

// Range: 0x80217938 -> 0x80217D34
void bFixupSoftSkin(struct _TBActor * actor /* r31 */) {
    // Local variables
    unsigned int l; // r28
    unsigned int noofTex1; // r25
    unsigned int noofTex2; // r27
    int k; // r9
    struct _TBVertexBuffer * vertexBuffer; // r1+0x10
    struct _TBSoftSkinPrim * prim; // r29
    void * texture1; // r24
    void * texture2; // r26

    // Range: 0x80217B10 -> 0x80217B10
    inline struct _TBTexture * bkFindTextureByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

    // Range: 0x80217B10 -> 0x80217B10
    inline struct _TBTexture * bkFindTextureByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}
}

// Range: 0x80217D34 -> 0x80218080
void bMatMultiplyTranspose(float * dest /* r3 */, float (* src1)[4] /* r4 */, float (* src2)[4] /* r5 */, int rows /* r6 */) {}

// Range: 0x80218080 -> 0x80218104
void bMatCopyTranspose(float (* dest)[4] /* r3 */, const float * src /* r4 */) {}

// Range: 0x80218104 -> 0x80218168
void bmMatTransposeGCPos(float (* dest)[4] /* r3 */, float (* src)[4] /* r4 */) {}

// Range: 0x80218168 -> 0x80218474
int bmMatInverseGCNorm(float (* dest)[3] /* r3 */, float (* tex)[4] /* r4 */, float (* in)[4] /* r5 */) {
    // Local variables
    float det_1; // f10
    float pos; // f8
    float neg; // f9
    float temp; // f0
    const float * in0; // r5
    const float * in1; // r10
    const float * in2; // r11

    // Range: 0x802182C0 -> 0x802182C0
    inline float bmVanillaFAbs(float x) {}
}

// Range: 0x80218474 -> 0x802184D8
void bmMatTransposeGCTex(float (* dest)[4] /* r3 */, float (* src)[4] /* r4 */) {}

// Range: 0x802184D8 -> 0x80218518
void bSetMatrixPaletteEntry(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorNodeInstance * nodeInstance /* r4 */) {
    // Local variables
    int index; // r3
}

// Range: 0x80218518 -> 0x8021853C
void bFixupMesh(unsigned char * basePtr /* r3 */, struct _TBActorNode * node /* r4 */, struct _TBActor * actor /* r5 */) {}

// Range: 0x8021853C -> 0x80218600
void bFixupPatchMesh(unsigned char * basePtr /* r27 */, struct _TBPatchHeader * patchData /* r28 */, struct _TBActor * actor /* r29 */) {
    // Local variables
    unsigned int c; // r30
    struct _TBPatch * patch; // r31

    // Range: 0x802185AC -> 0x802185AC
    inline struct _TBTexture * bkFindTextureByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}
}

// Range: 0x80218600 -> 0x8021865C
void bDeletePatchMesh(struct _TBPatchHeader * patchData /* r29 */) {
    // Local variables
    unsigned int c; // r30
    struct _TBPatch * patch; // r31
}

// Range: 0x8021865C -> 0x80218688
static void DrawMeshBatches_Async(struct _TBActorInstance * actorInstance /* r3 */, unsigned int noofBatches /* r4 */, struct _TBMeshBatch * batchPtr /* r5 */, struct _TBMeshPrim * prim /* r6 */, int startVert /* r7 */, int isAlphaPass /* r8 */, struct _TBVertexBuffer * vertexBuffer /* r9 */) {}

// Range: 0x80218688 -> 0x8021873C
static void DrawMeshBatches_NoTextureNotComplex(struct _TBActorInstance * actorInstance /* r3 */, unsigned int noofBatches /* r29 */, struct _TBMeshBatch * batchPtr /* r27 */, struct _TBMeshPrim * prim /* r30 */, int startVert /* r28 */, int isAlphaPass /* r8 */, struct _TBVertexBuffer * vertexBuffer /* r26 */) {
    // Local variables
    int primNum; // r31
}

// Range: 0x8021873C -> 0x802188FC
static void DrawMeshBatches_Texture1NotComplex(struct _TBActorInstance * actorInstance /* r3 */, unsigned int noofBatches /* r29 */, struct _TBMeshBatch * batchPtr /* r28 */, struct _TBMeshPrim * prim /* r30 */, int startVert /* r27 */, int isAlphaPass /* r31 */, struct _TBVertexBuffer * vertexBuffer /* r25 */) {
    // Local variables
    int primNum; // r31
}

// Range: 0x802188FC -> 0x80218C94
static void DrawMeshBatches_Texture1Complex(struct _TBActorInstance * actorInstance /* r3 */, unsigned int noofBatches /* r27 */, struct _TBMeshBatch * batchPtr /* r29 */, struct _TBMeshPrim * prim /* r30 */, int startVert /* r28 */, int isAlphaPass /* r31 */, struct _TBVertexBuffer * vertexBuffer /* r26 */) {
    // Local variables
    int primNum; // r31
    int primFlags; // r0
    int uTexAddr; // r4
    int vTexAddr; // r0
}

// Range: 0x80218C94 -> 0x80218F2C
static void DrawMeshBatches_Texture1and2NotComplex(struct _TBActorInstance * actorInstance /* r3 */, unsigned int noofBatches /* r28 */, struct _TBMeshBatch * batchPtr /* r31 */, struct _TBMeshPrim * prim /* r29 */, int startVert /* r27 */, int isAlphaPass /* r30 */, struct _TBVertexBuffer * vertexBuffer /* r26 */) {
    // Local variables
    int primNum; // r30
}

// Range: 0x80218F2C -> 0x8021920C
static void DrawMeshBatches_Texture1and2Complex(struct _TBActorInstance * actorInstance /* r3 */, unsigned int noofBatches /* r28 */, struct _TBMeshBatch * batchPtr /* r29 */, struct _TBMeshPrim * prim /* r30 */, int startVert /* r27 */, int isAlphaPass /* r8 */, struct _TBVertexBuffer * vertexBuffer /* r26 */) {
    // Local variables
    int primNum; // r31
    int primFlags; // r0
    int uTexAddr; // r4
    int vTexAddr; // r0
}

// Range: 0x8021920C -> 0x8021925C
void bDrawPrimitiveDL(unsigned int primType /* r3 */, struct _TBVertexBuffer * vbPtr /* r4 */, int firstVertex /* r5 */, int vertCount /* r6 */) {
    // Local variables
    unsigned char * DLVerts;
    unsigned int DLSize;
}

// Range: 0x8021925C -> 0x80219600
void bDrawMesh(struct _TBMesh * mesh /* r31 */, struct _TBActorInstance * actorInstance /* r28 */, int alpha /* r24 */, struct _TBActorNodeInstance * nodeInstance /* r25 */) {
    // Local variables
    int alphaModeMask; // r30
    int noofTextures; // r9
    int tiling; // r11
    void (* drawFunc)(struct _TBActorInstance *, unsigned int, struct _TBMeshBatch *, struct _TBMeshPrim *, int, int, struct _TBVertexBuffer *); // r29
    int i; // r27
}

// Range: 0x80219600 -> 0x802196D4
int bSetActorTextureFramesNodes(struct _TBActorNode * root /* r26 */, int frame /* r28 */) {
    // Local variables
    struct _TBActorNode * node; // r29
    struct _TBMeshBatch * batch; // r30
    int noof; // r31
    int found; // r27
}

// Range: 0x802196D4 -> 0x80219788
int baSetActorTextureFrames(struct _TBActor * actor /* r30 */, int frame /* r29 */) {
    // Local variables
    struct _TBSoftSkinBatch * batch; // r30
    int noof; // r31
    int found; // r9
}

// Range: 0x80219788 -> 0x8021985C
int bSetActorTextureFramesByTimeNodes(struct _TBActorNode * root /* r26 */, int time /* r28 */) {
    // Local variables
    struct _TBActorNode * node; // r29
    struct _TBMeshBatch * batch; // r30
    int noof; // r31
    int found; // r27
}

// Range: 0x8021985C -> 0x80219910
int baSetActorTextureFramesByTime(struct _TBActor * actor /* r30 */, int time /* r29 */) {
    // Local variables
    struct _TBSoftSkinBatch * batch; // r30
    int noof; // r31
    int found; // r9
}

// Range: 0xFFFFFFFF -> 0x80219910
static void FindShadowVolumeSizeNodeList(struct _TBActorNodeInstance * rootNode /* r25 */, float (* objectToWorld)[4] /* r26 */, struct _TCalcShadowVolumeInfo * svInfo /* r28 */) {
    // Local variables
    struct _TBActorNodeInstance * instanceNode; // r27
    float nodeToWorld[4][4]; // r1+0x8
    float worldToNode[4][4]; // r1+0x48
    struct _TBMesh * mesh; // r30
    struct _TBShadowVolumeFace * svFace; // r31
    float * vert; // r9
    float lx; // f12
    float ly; // f0
    float lz; // f13
    float nodeLightPos[4]; // r1+0x88
    struct _TBShadowVolumeEdge * svEdge; // r29
    int l; // r8
}

// total size: 0x30
struct _TCalcShadowVolumeInfo {
    // Members
    float lightPos[4]; // offset 0x0, size 0x10
    float extrudeDist; // offset 0x10, size 0x4
    int noofVerts; // offset 0x14, size 0x4
    struct _TBPrimVertex * vertices; // offset 0x18, size 0x4
    struct _TBPrimVertex * nextVertex; // offset 0x1C, size 0x4
    int directional; // offset 0x20, size 0x4
    float xDirExtrude; // offset 0x24, size 0x4
    float yDirExtrude; // offset 0x28, size 0x4
    float zDirExtrude; // offset 0x2C, size 0x4
};
// Range: 0xFFFFFFFF -> 0x80219910
static void GenerateShadowVolumeNodeList(struct _TBActorNodeInstance * rootNode /* r27 */, float (* objectToWorld)[4] /* r28 */, struct _TCalcShadowVolumeInfo * svInfo /* r31 */) {
    // Local variables
    struct _TBActorNodeInstance * instanceNode; // r29
    float nodeToWorld[4][4]; // r1+0x8
    struct _TBMesh * mesh; // r30
    float * vert; // r8
    float xWorld; // f4
    float yWorld; // f5
    float zWorld; // f8
    float x; // f11
    float y; // f9
    float z; // f10
    float len; // f12
    struct _TBShadowVolumeEdge * svEdge; // r7
    int l; // r6
    int v1; // r11
    int v2; // r10

    // Range: 0x80219910 -> 0x80219910
    inline float bmVanillaSqrtApprox(float x) {
        // Local variables
        int * ix;
        float fx; // f13
    }

    // Range: 0x80219910 -> 0x80219910
    inline float bmVanillaSqrtApprox(float x) {
        // Local variables
        int * ix;
        float fx; // f13
    }
}

// total size: 0x30
struct _TBShadowVolume {
    // Members
    float lightPos[4]; // offset 0x0, size 0x10
    struct _TBVertexBuffer * vertexBuffer; // offset 0x10, size 0x4
    int dynamic; // offset 0x14, size 0x4
    int noofVerts; // offset 0x18, size 0x4
    unsigned int flags; // offset 0x1C, size 0x4
    struct _TBActorInstance * actorInstance; // offset 0x20, size 0x4
    float xDirExtrude; // offset 0x24, size 0x4
    float yDirExtrude; // offset 0x28, size 0x4
    float zDirExtrude; // offset 0x2C, size 0x4
};
// Range: 0xFFFFFFFF -> 0x80219910
struct _TBShadowVolume * baCreateShadowVolume(struct _TBActorInstance * actorInstance /* r28 */, struct _TBShadowVolume * shadowVolume /* r31 */, float * lightPos /* r30 */, float extrudeDist /* f31 */, unsigned int flags /* r29 */) {
    // Local variables
    struct _TCalcShadowVolumeInfo svInfo; // r1+0x8

    // Range: 0x80219910 -> 0x80219910
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80219910 -> 0x80219910
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// Range: 0xFFFFFFFF -> 0x80219910
void baDeleteShadowVolume(struct _TBShadowVolume * shadowVolume /* r31 */) {}

// Range: 0xFFFFFFFF -> 0x80219910
void baRenderShadowVolume(struct _TBShadowVolume * shadowVolume /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x80219910
void baFillStencilShadows(int r /* r3 */, int g /* r4 */, int b /* r5 */, int a /* r6 */) {}

// Range: 0x80219910 -> 0x80219964
void bDeleteMesh(struct _TBActorNode * meshNode /* r31 */) {}

// Range: 0x80219964 -> 0x80219968
void bDeleteAsyncMesh(struct _TBActorNode * meshNode /* r3 */) {}

// Range: 0x80219968 -> 0x802199BC
void bDeleteSoftSkin(struct _TBActor * actor /* r31 */) {}

inline void bmMatMultiplyVector2T(float * v, const float * m, const float * vIn) {
    // Local variables
    float * pV;
}

inline void bmMatMultiply3x3Vector2T(float * v, const float * m, float * vIn) {
    // Local variables
    float x;
    float y;
    float z;
}

inline void bCombine1BoneNormalMatrices(const float * m, float * v) {
    // Local variables
    float w;
    float * pV;
}

inline void bCombine1BoneNormalMatrices2(const float * m, float * vIn, float * v) {}

inline void bCombine2BoneMatrices(const float * m1, const float * m2, const float w1, const float w2, float * v) {
    // Local variables
    float * pV;
}

inline void bCombine2BoneMatrices2(const float * m1, const float * m2, const float w1, const float w2, float * vin, float * v) {
    // Local variables
    float * pV;
}

inline void bCombine3BoneMatrices(const float * m1, const float * m2, const float * m3, const float w1, const float w2, const float w3, float * v) {
    // Local variables
    float * pV;
}

inline void bCombine3BoneMatrices2(const float * m1, const float * m2, const float * m3, const float w1, const float w2, const float w3, float * vin, float * v) {
    // Local variables
    float * pV;
}

inline void bCombine2BoneNormalMatrices(const float * m1, const float * m2, const float w1, const float w2, float * v) {
    // Local variables
    float w;
    float * pV;
}

inline void bCombine2BoneNormalMatrices2(const float * m1, const float * m2, const float w1, const float w2, float * vin, float * v) {
    // Local variables
    float w;
    float * pV;
}

inline void bCombine3BoneNormalMatrices(const float * m1, const float * m2, const float * m3, const float w1, const float w2, const float w3, float * v) {
    // Local variables
    float w;
    float * pV;
}

inline void bCombine3BoneNormalMatrices2(const float * m1, const float * m2, const float * m3, const float w1, const float w2, const float w3, float * vin, float * v) {
    // Local variables
    float w;
    float * pV;
}

// Range: 0x802199BC -> 0x8021A55C
static void DrawSoftSkinBatches_Texture1and2Complex(struct _TBActorInstance * actorInstance /* r1+0x30 */, struct _TSoftSkinRenderModeState * renderModeState /* r14 */, unsigned int noofBatches /* r1+0x34 */, struct _TBSoftSkinBatch * batchPtr /* r18 */, struct _TBSoftSkinPrim * prim /* r28 */, int startVert /* r20 */, int isAlphaPass /* r9 */, struct _TBVertexBuffer * vertexBuffer /* r1+0x38 */) {
    // Local variables
    struct _TBBlendedPrimVertex * vertList; // r16
    struct _TBBlendedPrimVertex * verts; // r5
    float * sverts; // r4
    float * m1; // r8
    float * m2; // r11
    float * m3; // r10
    int mn1; // r0
    int mn2; // r9
    int mn3; // r0
    int p; // r30
    int k; // r29
    int l;
    int uTile; // r1+0x3C
    int vTile; // r1+0x40
    int primNum; // r31
    int inc; // r17
    unsigned int batchNum; // r30
    struct _TBSoftSkin * softSkin; // r1+0x44
    bool usingTextures; // r1+0x48
    int needNormal; // r1+0x4C
    int cpu; // r1+0x50
    int patchId; // r1+0x54

    // Range: 0x80219CC0 -> 0x80219CC0
    inline void bCombine3BoneMatrices(const float * m1, const float * m2, const float * m3, const float w1, const float w2, const float w3, float * v) {
        // Local variables
        float * pV; // r7
    }

    // Range: 0x80219E30 -> 0x80219F70
    inline void bCombine3BoneNormalMatrices(const float * m1, const float * m2, const float * m3, const float w1, const float w2, const float w3, float * v) {
        // Local variables
        float * pV; // r9
        float w; // f0
    }

    // Range: 0x80219FF0 -> 0x80219FF0
    inline void bCombine2BoneMatrices(const float * m1, const float * m2, const float w1, const float w2, float * v) {
        // Local variables
        float * pV; // r10
    }

    // Range: 0x8021A0F8 -> 0x8021A1E8
    inline void bCombine2BoneNormalMatrices(const float * m1, const float * m2, const float w1, const float w2, float * v) {
        // Local variables
        float * pV; // r9
        float w; // f0
    }

    // Range: 0x8021A250 -> 0x8021A250
    inline void bmMatMultiplyVector2T(float * v, const float * m, const float * vIn) {
        // Local variables
        float * pV; // r9
    }

    // Range: 0x8021A2DC -> 0x8021A350
    inline void bCombine1BoneNormalMatrices(const float * m, float * v) {
        // Local variables
        float * pV; // r9
        float w; // f0
    }

    /* anonymous block */ {
        // Range: 0x8021A3A0 -> 0x8021A3A0
        struct _TBPatch * patch; // r9
    }
}

// total size: 0x14
struct _TSoftSkinRenderModeState {
    // Members
    int usingTextures1; // offset 0x0, size 0x4
    int usingTextures2; // offset 0x4, size 0x4
    int drawingOutline; // offset 0x8, size 0x4
    int needNormal; // offset 0xC, size 0x4
    int scaling; // offset 0x10, size 0x4
};
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
// Range: 0x8021A55C -> 0x8021A7E4
static void DLCopyIndexedVerts(struct _TBActorInstance * actorInstance /* r30 */) {
    // Local variables
    struct _TBSoftSkin * softSkin; // r31
    unsigned int c; // r6
    struct _TDLPosition * tpos; // r3
    struct _TDLNormal * tnorm; // r3

    /* anonymous block */ {
        // Range: 0x8021A5CC -> 0x8021A6B8
        struct _TDLVertexExtraIndexedPosGCUBESingleBone * pos; // r0
        struct _TDLVertexExtraIndexedNormGCUBESingleBone * norm; // r11
    }

    /* anonymous block */ {
        // Range: 0x8021A6D0 -> 0x8021A7D0
        struct _TDLVertexExtraIndexedPosGCUBE * pos; // r0
        struct _TDLVertexExtraIndexedNormGCUBE * norm; // r11
    }
}

// total size: 0xC
struct _TDLPosition {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x3
struct _TDLNormal {
    // Members
    char x; // offset 0x0, size 0x1
    char y; // offset 0x1, size 0x1
    char z; // offset 0x2, size 0x1
};
// total size: 0x10
struct _TDLVertexExtraIndexedPosGCUBESingleBone {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char matrixIndex[4]; // offset 0xC, size 0x4
};
// total size: 0x10
struct _TDLVertexExtraIndexedNormGCUBESingleBone {
    // Members
    float xn; // offset 0x0, size 0x4
    float yn; // offset 0x4, size 0x4
    float zn; // offset 0x8, size 0x4
    unsigned char matrixIndex[4]; // offset 0xC, size 0x4
};
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
// Range: 0x8021A7E4 -> 0x8021A854
static void skinDLIndexed(struct _TBActorInstance * actorInstance /* r3 */, struct _TBSoftSkinPrim * prim /* r28 */, int startVert /* r5 */, unsigned char * DLVerts /* r6 */, int DLVertSize /* r7 */, int needNormal /* r8 */, int scale /* r9 */) {
    // Local variables
    int l;
    int k; // r29
}

// Range: 0x8021A854 -> 0x8021A8DC
static void skinDLEnvMap(struct _TBActorInstance * actorInstance /* r3 */, struct _TBSoftSkinPrim * prim /* r28 */, int startVert /* r5 */, unsigned char * DLVerts /* r6 */, int DLVertSize /* r7 */, int needNormal /* r8 */, int scale /* r9 */) {
    // Local variables
    int l;
    int k; // r29
}

// Range: 0x8021A8DC -> 0x8021AA30
static void skinDLIndexed1CPUVerts(struct _TBActorInstance * actorInstance /* r3 */) {
    // Local variables
    float * m1; // r9
    int mn1; // r9
    struct _TBSoftSkin * softSkin; // r30
    unsigned int c; // r8
    struct _TDLVertexExtraIndexedPosGCUBESingleBone * pos; // r10
    float * matrixPalette; // r27
    struct _TDLVertexExtraIndexedPosGCUBESingleBone * posCache[2]; // r1+0x8
    struct _TDLVertexExtraIndexedPosGCUBESingleBone * posFrom; // r31
    int next; // r28
    volatile void * port; // r26
    unsigned int b; // r29
    unsigned int n; // r0

    // Range: 0x8021A99C -> 0x8021A99C
    inline void bmMatMultiplyVector2T(float * v, const float * m, const float * vIn) {
        // Local variables
        float * pV; // r11
    }
}

// Range: 0x8021AA30 -> 0x8021ABFC
static void skinDLIndexed1CPUNormals(struct _TBActorInstance * actorInstance /* r3 */) {
    // Local variables
    float * m1; // r9
    int mn1; // r0
    struct _TBSoftSkin * softSkin; // r28
    unsigned int c; // r4
    struct _TDLVertexExtraIndexedNormGCUBESingleBone * norm; // r7
    float * matrixPalette; // r27
    struct _TDLVertexExtraIndexedNormGCUBESingleBone * normCache[2]; // r1+0x18
    struct _TDLVertexExtraIndexedNormGCUBESingleBone * normFrom; // r29
    int next; // r26
    unsigned int b; // r30
    unsigned int n; // r6
    char * port; // r31
    float vTmp[4]; // r1+0x8

    // Range: 0x8021AAF4 -> 0x8021AAF4
    inline void bCombine1BoneNormalMatrices2(const float * m, float * vIn, float * v) {
        // Range: 0x8021AAF4 -> 0x8021AAF4
        inline void bmMatMultiply3x3Vector2T(float * v, const float * m, float * vIn) {
            // Local variables
            float x; // f9
            float y; // f7
            float z; // f8
        }
    }
}

// Range: 0x8021ABFC -> 0x8021AE78
static void skinDLIndexed1CPU(struct _TBActorInstance * actorInstance /* r31 */, int needNormal /* r26 */, int scale /* r30 */) {
    // Local variables
    struct _TBActor * actor; // r29
    struct _TBSoftSkin * softSkin; // r27
    unsigned int c; // r28
    struct _TDLPosition * tpos; // r31
    struct _TDLNormal * tnorm; // r30
    int changed; // r28

    /* anonymous block */ {
        // Range: 0x8021AD38 -> 0x8021AD38
        float vNorm[4]; // r1+0x8

        // Range: 0x8021AD38 -> 0x8021AD38
        inline void bmVanillaVectorMulAdd(float * dest, const float * src, const float * vmul, const float * vadd) {}
    }
}

// Range: 0x8021AE78 -> 0x8021B044
static void skinDLIndexed2CPUVerts(struct _TBActorInstance * actorInstance /* r3 */) {
    // Local variables
    float * m1; // r11
    float * m2; // r9
    int mn1; // r11
    int mn2; // r9
    struct _TBSoftSkin * softSkin; // r29
    unsigned int c; // r7
    struct _TDLVertexExtraIndexedPosGCUBE * pos; // r8
    float * matrixPalette; // r30
    struct _TDLVertexExtraIndexedPosGCUBE * posCache[2]; // r1+0x8
    struct _TDLVertexExtraIndexedPosGCUBE * posFrom; // r31
    int next; // r27
    volatile void * port; // r26
    unsigned int b; // r28
    unsigned int n; // r0

    // Range: 0x8021AF40 -> 0x8021AF40
    inline void bCombine2BoneMatrices2(const float * m1, const float * m2, const float w1, const float w2, float * vin, float * v) {
        // Local variables
        float * pV; // r10
    }
}

// Range: 0x8021B044 -> 0x8021B2A4
static void skinDLIndexed2CPUNormals(struct _TBActorInstance * actorInstance /* r3 */) {
    // Local variables
    float * m1; // r11
    float * m2; // r9
    int mn1; // r11
    int mn2; // r9
    struct _TBSoftSkin * softSkin; // r28
    unsigned int c; // r7
    struct _TDLVertexExtraIndexedNormGCUBE * norm; // r8
    float * matrixPalette; // r27
    struct _TDLVertexExtraIndexedNormGCUBE * normCache[2]; // r1+0x18
    struct _TDLVertexExtraIndexedNormGCUBE * normFrom; // r29
    int next; // r26
    unsigned int b; // r30
    unsigned int n; // r0
    char * port; // r31
    float vTmp[4]; // r1+0x8

    // Range: 0x8021B118 -> 0x8021B118
    inline void bCombine2BoneNormalMatrices2(const float * m1, const float * m2, const float w1, const float w2, float * vin, float * v) {
        // Local variables
        float * pV; // r10
        float w; // f0
    }
}

// Range: 0x8021B2A4 -> 0x8021B4E8
static void skinDLIndexed2CPU(struct _TBActorInstance * actorInstance /* r31 */, int needNormal /* r26 */, int scale /* r30 */) {
    // Local variables
    struct _TBActor * actor; // r29
    struct _TBSoftSkin * softSkin; // r28
    unsigned int c; // r8
    struct _TDLPosition * tpos; // r31
    struct _TDLNormal * tnorm; // r30
    int changed; // r27

    /* anonymous block */ {
        // Range: 0x8021B3D8 -> 0x8021B3D8
        float vNorm[4]; // r1+0x8

        // Range: 0x8021B3D8 -> 0x8021B3D8
        inline void bmVanillaVectorMulAdd(float * dest, const float * src, const float * vmul, const float * vadd) {}
    }
}

// Range: 0x8021B4E8 -> 0x8021B6F8
static void skinDLIndexed3CPUVerts(struct _TBActorInstance * actorInstance /* r3 */) {
    // Local variables
    float * m1; // r10
    float * m2; // r11
    float * m3; // r9
    int mn1; // r10
    int mn2; // r11
    int mn3; // r9
    struct _TBSoftSkin * softSkin; // r29
    unsigned int c; // r4
    struct _TDLVertexExtraIndexedPosGCUBE * pos; // r5
    float * matrixPalette; // r31
    struct _TDLVertexExtraIndexedPosGCUBE * posCache[2]; // r1+0x8
    struct _TDLVertexExtraIndexedPosGCUBE * posFrom; // r30
    int next; // r26
    volatile void * port; // r27
    unsigned int b; // r28
    unsigned int n; // r0
}

// Range: 0x8021B6F8 -> 0x8021B994
static void skinDLIndexed3CPUNormals(struct _TBActorInstance * actorInstance /* r3 */) {
    // Local variables
    float * m1; // r10
    float * m2; // r11
    float * m3; // r9
    int mn1; // r10
    int mn2; // r11
    int mn3; // r9
    struct _TBSoftSkin * softSkin; // r26
    unsigned int c; // r4
    struct _TDLVertexExtraIndexedNormGCUBE * norm; // r5
    float * matrixPalette; // r29
    struct _TDLVertexExtraIndexedNormGCUBE * normCache[2]; // r1+0x18
    struct _TDLVertexExtraIndexedNormGCUBE * normFrom; // r27
    int next; // r25
    unsigned int b; // r28
    unsigned int n; // r0
    char * skinNormals; // r31
    float swWGPipe[4]; // r1+0x8
    float * port; // r30
}

// Range: 0x8021B994 -> 0x8021BBD8
static void skinDLIndexed3CPU(struct _TBActorInstance * actorInstance /* r31 */, int needNormal /* r26 */, int scale /* r30 */) {
    // Local variables
    struct _TBActor * actor; // r29
    struct _TBSoftSkin * softSkin; // r28
    unsigned int c; // r8
    struct _TDLPosition * tpos; // r31
    struct _TDLNormal * tnorm; // r30
    int changed; // r27

    /* anonymous block */ {
        // Range: 0x8021BAC8 -> 0x8021BAC8
        float vNorm[4]; // r1+0x8

        // Range: 0x8021BAC8 -> 0x8021BAC8
        inline void bmVanillaVectorMulAdd(float * dest, const float * src, const float * vmul, const float * vadd) {}
    }
}

// Range: 0x8021BBD8 -> 0x8021BD88
static void (* DLIndexed_PickSkinningFunc(struct _TBActorInstance * actorInstance /* r28 */, struct _TSoftSkinRenderModeState * renderModeState /* r29 */, int * cpu /* r5 */, int * needNormal /* r26 */))(struct _TBActorInstance *, struct _TBSoftSkinPrim *, int, unsigned char *, int, int, int) {
    // Local variables
    struct _TBActor * actor; // r11
    struct _TBSoftSkin * softSkin; // r31
    bool usingTextures;
    void (* skinStartFunc)(struct _TBActorInstance *, int, int); // r30
    void (* skinFunc)(struct _TBActorInstance *, struct _TBSoftSkinPrim *, int, unsigned char *, int, int, int); // r27
}

// Range: 0x8021BD88 -> 0x8021BDF0
static void DLIndexed_Reset(struct _TBActorInstance * actorInstance /* r31 */, struct _TSoftSkinRenderModeState * renderModeState /* r4 */, int cpu /* r5 */) {}

// Range: 0x8021BDF0 -> 0x8021C020
static void DrawSoftSkinBatches_DLIndexed_NoTextureNotComplex(struct _TBActorInstance * actorInstance /* r20 */, struct _TSoftSkinRenderModeState * renderModeState /* r19 */, unsigned int noofBatches /* r18 */, struct _TBSoftSkinBatch * batchPtr /* r26 */, struct _TBSoftSkinPrim * prim /* r28 */, int startVert /* r27 */, int isAlphaPass /* r9 */, struct _TBVertexBuffer * vertexBuffer /* r10 */) {
    // Local variables
    int primNum; // r25
    struct _TBActor * actor; // r9
    struct _TBSoftSkin * softSkin; // r21
    unsigned int batchNum; // r11
    void (* skinFunc)(struct _TBActorInstance *, struct _TBSoftSkinPrim *, int, unsigned char *, int, int, int); // r22
    unsigned char * DLVerts; // r31
    int DLSize; // r29
    int cpu; // r1+0x8
    int needNormal; // r1+0xC
    struct _TBDLSegment * displaySegments; // r30
}

// Range: 0x8021C020 -> 0x8021C2A8
static void DrawSoftSkinBatches_DLIndexed_Texture1NotComplex(struct _TBActorInstance * actorInstance /* r20 */, struct _TSoftSkinRenderModeState * renderModeState /* r19 */, unsigned int noofBatches /* r18 */, struct _TBSoftSkinBatch * batchPtr /* r27 */, struct _TBSoftSkinPrim * prim /* r28 */, int startVert /* r26 */, int isAlphaPass /* r9 */, struct _TBVertexBuffer * vertexBuffer /* r10 */) {
    // Local variables
    int primNum; // r25
    struct _TBActor * actor; // r30
    struct _TBSoftSkin * softSkin; // r21
    unsigned int batchNum; // r31
    void (* skinFunc)(struct _TBActorInstance *, struct _TBSoftSkinPrim *, int, unsigned char *, int, int, int); // r22
    unsigned char * DLVerts; // r30
    int DLSize; // r31
    int cpu; // r1+0x8
    int needNormal; // r1+0xC
    struct _TBDLSegment * displaySegments; // r29
}

// Range: 0x8021C2A8 -> 0x8021C5FC
static void DrawSoftSkinBatches_DLIndexed_Texture1Complex(struct _TBActorInstance * actorInstance /* r18 */, struct _TSoftSkinRenderModeState * renderModeState /* r17 */, unsigned int noofBatches /* r15 */, struct _TBSoftSkinBatch * batchPtr /* r27 */, struct _TBSoftSkinPrim * prim /* r28 */, int startVert /* r26 */, int isAlphaPass /* r9 */, struct _TBVertexBuffer * vertexBuffer /* r10 */) {
    // Local variables
    int uTile; // r23
    int vTile; // r24
    int primNum; // r25
    struct _TBActor * actor; // r9
    struct _TBSoftSkin * softSkin; // r19
    bool usingTextures; // r14
    unsigned int batchNum; // r31
    void (* skinFunc)(struct _TBActorInstance *, struct _TBSoftSkinPrim *, int, unsigned char *, int, int, int); // r22
    unsigned char * DLVerts; // r31
    int DLSize; // r30
    int cpu; // r1+0x8
    int needNormal; // r1+0xC
    struct _TBDLSegment * displaySegments; // r29
}

// Range: 0x8021C5FC -> 0x8021C95C
static void DrawSoftSkinBatches_DLIndexed_Texture1and2Complex(struct _TBActorInstance * actorInstance /* r18 */, struct _TSoftSkinRenderModeState * renderModeState /* r17 */, unsigned int noofBatches /* r15 */, struct _TBSoftSkinBatch * batchPtr /* r28 */, struct _TBSoftSkinPrim * prim /* r27 */, int startVert /* r26 */, int isAlphaPass /* r9 */, struct _TBVertexBuffer * vertexBuffer /* r10 */) {
    // Local variables
    int uTile; // r23
    int vTile; // r24
    int primNum; // r25
    struct _TBActor * actor; // r9
    struct _TBSoftSkin * softSkin; // r20
    bool usingTextures; // r14
    unsigned int batchNum; // r31
    void (* skinFunc)(struct _TBActorInstance *, struct _TBSoftSkinPrim *, int, unsigned char *, int, int, int); // r22
    unsigned char * DLVerts; // r31
    int DLSize; // r30
    int cpu; // r1+0x8
    int needNormal; // r1+0xC
    struct _TBDLSegment * displaySegments; // r29
}

// Range: 0x8021C95C -> 0x8021CBE4
static void DrawSoftSkinBatches_DLIndexed_Texture1and2NotComplex(struct _TBActorInstance * actorInstance /* r20 */, struct _TSoftSkinRenderModeState * renderModeState /* r19 */, unsigned int noofBatches /* r18 */, struct _TBSoftSkinBatch * batchPtr /* r27 */, struct _TBSoftSkinPrim * prim /* r28 */, int startVert /* r26 */, int isAlphaPass /* r9 */, struct _TBVertexBuffer * vertexBuffer /* r10 */) {
    // Local variables
    int primNum; // r25
    struct _TBActor * actor; // r30
    struct _TBSoftSkin * softSkin; // r21
    unsigned int batchNum; // r31
    void (* skinFunc)(struct _TBActorInstance *, struct _TBSoftSkinPrim *, int, unsigned char *, int, int, int); // r22
    unsigned char * DLVerts; // r30
    int DLSize; // r31
    int cpu; // r1+0x8
    int needNormal; // r1+0xC
    struct _TBDLSegment * displaySegments; // r29
}

// Range: 0x8021CBE4 -> 0x8021D2C0
void bDrawSoftSkin(struct _TBActorInstance * actorInstance /* r28 */, int alpha /* r14 */) {
    // Local variables
    int i; // r26
    int k; // r23
    bool usingTextures1; // r29
    bool usingTextures2; // r31
    float m[4][4]; // r1+0x8
    float boneMatrix[4][4]; // r1+0x48
    float oldObjectMatrix[4][4]; // r1+0x88
    void (* drawFunc)(struct _TBActorInstance *, struct _TSoftSkinRenderModeState *, unsigned int, struct _TBSoftSkinBatch *, struct _TBSoftSkinPrim *, int, int, struct _TBVertexBuffer *); // r29
    struct _TSoftSkinRenderModeState * renderModeStatePtr; // r27
    int alphaModeMask; // r31
    int noofTextures; // r9
    int tiling; // r11
    struct _TBActor * actor; // r21
    struct _TBSoftSkin * softSkin; // r30
    int scaling; // r7
    int cpu; // r0
    int cpuForceFlag; // r27

    // Range: 0x8021CBFC -> 0x8021CBFC
    inline void bdGetObjectMatrix(float (* dest)[4]) {}

    /* anonymous block */ {
        // Range: 0x8021CD48 -> 0x8021CD84
        int size; // r31
    }

    /* anonymous block */ {
        // Range: 0x8021CD98 -> 0x8021CF24
        struct _TBMatrixGCData * matrixCache; // r20
    }
}

// total size: 0x84
struct _TBMatrixGCData {
    // Members
    float vertex[4][3]; // offset 0x0, size 0x30
    float normal[3][3]; // offset 0x30, size 0x24
    float texture[4][3]; // offset 0x54, size 0x30
};
// Range: 0xFFFFFFFF -> 0x8021D2C0
int baSetActorRenderCallbacks(void (* meshDraw)(struct _TBActorInstance *, unsigned int, struct _TBMeshBatch *, struct _TBMeshPrim *, int, int, struct _TBVertexBuffer *) /* r3 */, void (* softSkinDraw)(struct _TBActorInstance *, struct _TSoftSkinRenderModeState *, unsigned int, struct _TBSoftSkinBatch *, struct _TBSoftSkinPrim *, int, int, struct _TBVertexBuffer *) /* r4 */) {}

// Range: 0x8021D2C0 -> 0x8021D3A4
void bBeginStencilShadow() {}

// Range: 0x8021D3A4 -> 0x8021D5A4
void bDrawStencilShadows_Mesh(struct _TBMesh * mesh /* r29 */, struct _TBActorInstance * actorInstance /* r28 */, struct _TBActorNodeInstance * nodeInstance /* r31 */) {
    // Local variables
    struct _GXColor gxCol; // r1+0xC
}

// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// Range: 0x8021D5A4 -> 0x8021D924
void bEndStencilShadow(int alpha /* r28 */) {
    // Local variables
    struct _TBPrimVertex verts[4]; // r1+0x8
    float x0; // f11
    float y0; // f12
    float x1; // f13
    float y1; // f12
    struct _GXColor gxCol; // r1+0x9C
}

// Range: 0x8021D924 -> 0x8021DC14
void bEvalAnimTrack3(float * destVec /* r29 */, struct _TBAnimQuantisation3 * quantisation /* r12 */, int noofKeys /* r5 */, struct _TBAnimKey3 * keys /* r6 */, int animTime /* r7 */) {
    // Local variables
    struct _TBAnimKey3 * key; // r31
    struct _TBAnimKey3 * leftKey; // r11
    struct _TBAnimKey3 * rightKey; // r5
    struct _TBAnimKey3 * lastKey; // r11
    int frame; // r8
    int keyTime; // r10
    float t; // f10
    float x1; // f13
    float y1; // f12
    float z1; // f11
}

// Range: 0x8021DC14 -> 0x8021DF9C
void bEvalAnimTrack4(float * destVec /* r3 */, struct _TBAnimQuantisation4 * quantisation /* r4 */, int noofKeys /* r5 */, struct _TBAnimKey4 * keys /* r6 */, int animTime /* r29 */) {
    // Local variables
    struct _TBAnimKey4 * key; // r12
    struct _TBAnimKey4 * leftKey; // r11
    struct _TBAnimKey4 * rightKey; // r5
    struct _TBAnimKey4 * lastKey; // r9
    int frame; // r8
    int keyTime; // r31
    float t;
    float q1[4]; // r1+0x8
    float q2[4]; // r1+0x18
}

// Range: 0x8021DF9C -> 0x8021E3F4
void baEvalAnimTrackTarget3(float * weights /* r29 */, unsigned char * targets /* r4 */, struct _TBAnimTrackTarget3 * track /* r31 */, int animTime /* r6 */) {
    // Local variables
    struct _TBAnimKeyTarget3 * key; // r12
    struct _TBAnimKeyTarget3 * keys; // r7
    struct _TBAnimKeyTarget3 * lastKey; // r9
    struct _TBAnimKeyTarget3 * leftKey; // r11
    struct _TBAnimKeyTarget3 * rightKey; // r10
    int frame; // r5
    int keyTime; // r10
    float t; // f9
    float fromWeight[6]; // r1+0x8
    float destWeight[6]; // r1+0x20
    int c; // r7
    int n; // r8
    int i; // r11
    int r; // r9
}

// Range: 0x8021E3F4 -> 0x8021E564
int bInitLightsPlatformSpecific() {
    // Local variables
    struct _GXColor white; // r1+0xC
    struct _GXColor black; // r1+0x10
}

// Range: 0x8021E564 -> 0x8021E568
void bShutdownLightsPlatformSpecific() {}

// Range: 0x8021E568 -> 0x8021E574
void bInitSpecLightsource(struct _TBLightsource * lightPtr /* r3 */) {}

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
    struct _GXLightObj light; // offset 0x0, size 0x40
    int id; // offset 0x40, size 0x4
    enum EBLightColourChannel colourChannel; // offset 0x44, size 0x4
};
// total size: 0x40
struct _TBLightParmsDirectional {
    // Members
    float direction[4]; // offset 0x0, size 0x10
    float unitDirection[4]; // offset 0x10, size 0x10
    float pad[8]; // offset 0x20, size 0x20
};
// total size: 0x40
struct _TBLightParmsPoint {
    // Members
    float position[4]; // offset 0x0, size 0x10
    float attenuation; // offset 0x10, size 0x4
    float invAttenuation; // offset 0x14, size 0x4
    float padf[2]; // offset 0x18, size 0x8
    float pad[8]; // offset 0x20, size 0x20
};
// total size: 0x40
struct _TBLightParmsSpot {
    // Members
    float position[4]; // offset 0x0, size 0x10
    float direction[4]; // offset 0x10, size 0x10
    float unitDirection[4]; // offset 0x20, size 0x10
    float attenuation; // offset 0x30, size 0x4
    float outerCone; // offset 0x34, size 0x4
    float outerConeCos; // offset 0x38, size 0x4
    int pad1; // offset 0x3C, size 0x4
};
// total size: 0x40
struct _GXLightObj {
    // Members
    unsigned long dummy[16]; // offset 0x0, size 0x40
};
enum EBLightColourChannel {
    BLIGHTCOLOURCHANNEL_DEFAULT = 0,
    BLIGHTCOLOURCHANNEL_0 = 1,
    BLIGHTCOLOURCHANNEL_1 = 2,
};
// Range: 0x8021E574 -> 0x8021E754
void bSetSpecLightInfo(struct _TBLightsource * lightPtr /* r31 */) {
    // Local variables
    struct _GXLightObj * light; // r30
    struct _GXColor colour; // r1+0xC
    float a0; // f1
    float a1; // f2
    float a2; // f3
    float divisor; // f13
}

// Range: 0x8021E754 -> 0x8021E7B0
int bFindFreeLight() {
    // Local variables
    int lightID; // r11
}

// Range: 0x8021E7B0 -> 0x8021E86C
void bEnableSpecLight(struct _TBLightsource * lightPtr /* r31 */) {
    // Local variables
    int lightID;
    int enable; // r8
}

// Range: 0x8021E86C -> 0x8021E90C
void bSetAmbientSpecLight() {
    // Local variables
    struct _GXColor colour; // r1+0xC
}

// Range: 0x8021E90C -> 0x8021E92C
void bUpdateLightColour(struct _TBLightsource * light /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x8021E92C
void baGetLightColour(struct _TBLightsource * light /* r3 */, int * r /* r4 */, int * g /* r5 */, int * b /* r6 */) {}

// Range: 0xFFFFFFFF -> 0x8021E92C
void bRestoreLights() {
    // Local variables
    struct _TBLightsource * light; // r31
}

// Range: 0x8021E92C -> 0x8021E97C
void bUpdateAllLights() {
    // Local variables
    struct _TBLightsource * light; // r31
}

// Range: 0x8021E97C -> 0x8021EC1C
void bUpdateLight(struct _TBLightsource * lightPtr /* r31 */) {
    // Local variables
    float pos[4]; // r1+0x8
    float dir[4]; // r1+0x18
    struct _GXLightObj * light; // r29

    // Range: 0x8021E9D4 -> 0x8021E9D4
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x8021EA38 -> 0x8021EA38
    inline void bmVanillaVectorCMul(float * dest, const float * src, const float val) {}

    // Range: 0x8021EACC -> 0x8021EACC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x8021EB38 -> 0x8021EB38
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x8021EB90 -> 0x8021EB90
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// Range: 0x8021EC1C -> 0x8021EC64
void bSetNoofColourChannels(int channels /* r3 */, int specularEnable /* r4 */) {}

// Range: 0x8021EC64 -> 0x8021EF38
void bUpdateColourChannelStatus() {
    // Local variables
    struct _TBLightsource * light; // r8
    int channel; // r10
    int defaultChannel; // r5
    int lightMaskForChannel[2]; // r1+0x10
    int specular; // r31
    struct _GXColor black; // r1+0xC
}

// Range: 0x8021EF38 -> 0x8021F138
static void bBlendMorphTargetSkin(struct _TBMorphHeader * header /* r29 */, struct _TBBlendedPrimVertex * destVertList /* r26 */, unsigned int n /* r30 */, unsigned char * targets /* r6 */, float * t /* r31 */, unsigned int flags /* r8 */) {
    // Local variables
    unsigned int c; // r10
    unsigned int i; // r0
    unsigned int p; // r7
    struct _TBMorphVertex * srcVert0; // r5
    struct _TBMorphVertex * srcVert[6]; // r1+0x8
    struct _TBBlendedPrimVertex * destVert; // r11
}

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
// Range: 0x8021F138 -> 0x8021F338
static void bBlendMorphTargetMesh(struct _TBMorphHeader * header /* r29 */, struct _TBPrimVertex * destVertList /* r26 */, unsigned int n /* r30 */, unsigned char * targets /* r6 */, float * t /* r31 */, unsigned int flags /* r8 */) {
    // Local variables
    unsigned int c; // r10
    unsigned int i; // r0
    unsigned int p; // r7
    struct _TBMorphVertex * srcVert0; // r5
    struct _TBMorphVertex * srcVert[6]; // r1+0x8
    struct _TBPrimVertex * destVert; // r11
}

// Range: 0x8021F338 -> 0x8021F5A8
static void bBlendMorphTargetDLIndexed(struct _TBMorphHeader * header /* r28 */, struct _TDLPosition * destPositionList /* r25 */, struct _TDLNormal * destNormalList /* r24 */, unsigned int n /* r31 */, unsigned char * targets /* r7 */, float * t /* r29 */, unsigned int flags /* r8 */) {
    // Local variables
    unsigned int c; // r10
    unsigned int i; // r5
    unsigned int p; // r7
    struct _TBMorphVertex * srcVert0; // r6
    struct _TBMorphVertex * srcVert[6]; // r1+0x8
    struct _TDLPosition * destPos; // r11
    struct _TDLNormal * destNorm; // r30

    /* anonymous block */ {
        // Range: 0x8021F464 -> 0x8021F548
        float tmpDestNorm[4]; // r1+0x20
    }
}

// Range: 0x8021F5A8 -> 0x8021F7B4
static void bBlendMorphTargetDLExtraIndexed(struct _TBMorphHeader * header /* r29 */, struct _TDLVertexExtraIndexedPosGCUBE * destPositionList /* r25 */, struct _TDLVertexExtraIndexedNormGCUBE * destNormalList /* r26 */, unsigned int n /* r30 */, unsigned char * targets /* r7 */, float * t /* r31 */, unsigned int flags /* r8 */) {
    // Local variables
    unsigned int c; // r10
    unsigned int i; // r5
    unsigned int p; // r7
    struct _TBMorphVertex * srcVert0; // r6
    struct _TBMorphVertex * srcVert[6]; // r1+0x8
    struct _TDLVertexExtraIndexedPosGCUBE * destPos; // r11
    struct _TDLVertexExtraIndexedNormGCUBE * destNorm; // r3
}

// Range: 0x8021F7B4 -> 0x8021F978
void bSetMorphTargetMesh(struct _TBActorInstance * actorInstance /* r25 */, struct _TBActorNodeInstance * nodeInstance /* r28 */, unsigned int n /* r26 */, unsigned char * targets /* r23 */, float * t /* r24 */, unsigned int flags /* r27 */) {
    // Local variables
    struct _TBActorNodeInstance * child; // r30
    struct _TBMorphHeader * header; // r29
    unsigned char * dest; // r31
    unsigned char * destNormals; // r30
    unsigned int size; // r30

    /* anonymous block */ {
        // Range: 0x8021F824 -> 0x8021F920
        int doUpdate; // r9
    }
}

// Range: 0x8021F978 -> 0x8021FAD0
void bSetMorphTargetSkin(struct _TBActorInstance * actorInstance /* r3 */, unsigned int n /* r4 */, unsigned char * targets /* r11 */, float * t /* r8 */, unsigned int flags /* r10 */) {
    // Local variables
    struct _TBMorphHeader * header; // r31
    unsigned char * dest; // r30
    unsigned char * destNormals; // r29
    unsigned int size; // r31
}

// Range: 0x8021FAD0 -> 0x8021FAE4
int bInitSetPlatformSpecific() {}

// Range: 0x8021FAE4 -> 0x8021FAE8
void bShutdownSetPlatformSpecific() {}

// Range: 0x8021FAE8 -> 0x8021FB2C
static struct _TBVertexBuffer * MakeVertexBuffer(struct _TBPrimVertex * srcVerts /* r7 */, int noofVerts /* r4 */) {
    // Local variables
    struct _TBVertexBuffer * vertexBuffer; // r1+0x8
}

// Range: 0xFFFFFFFF -> 0x8021FB2C
void bBSPFixUp(struct _TBSet * set /* r3 */) {}

// total size: 0x50
struct _TBSet {
    // Members
    struct _TBResourceInfo resInfo; // offset 0x0, size 0x20
    int method; // offset 0x20, size 0x4
    int pad1; // offset 0x24, size 0x4
    int pad2; // offset 0x28, size 0x4
    int pad3; // offset 0x2C, size 0x4
    struct _TBStoredGeometry storedGeometry; // offset 0x30, size 0x20
};
// Range: 0xFFFFFFFF -> 0x8021FB2C
void bBSPDelete(struct _TBSet * set /* r3 */) {}

// Range: 0xFFFFFFFF -> 0x8021FB2C
void bBSPDraw(struct _TBSet * set /* r3 */, int alpha /* r4 */) {}

// Range: 0x8021FB2C -> 0x8021FD00
void bRegCellsFixUp(struct _TBSet * vSet /* r3 */) {
    // Local variables
    struct _TBSetRegCells * set; // r31
    int totalCells; // r26
    int l; // r11
    int k; // r28
    struct _TBRegCell * cell; // r29
    struct _TBRegCellPrim * prim; // r30
    struct _TBPrimVertex * vert;

    // Range: 0x8021FBA4 -> 0x8021FBA4
    inline struct _TBTexture * bkFindTextureByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}

    // Range: 0x8021FBA4 -> 0x8021FBA4
    inline struct _TBTexture * bkFindTextureByCRC(unsigned int crc, struct _TBPackageID pak, unsigned int group, unsigned int flags) {}
}

// total size: 0xB0
struct _TBSetRegCells {
    // Members
    struct _TBSet setInfo; // offset 0x0, size 0x50
    int xNoofCells; // offset 0x50, size 0x4
    int yNoofCells; // offset 0x54, size 0x4
    int zNoofCells; // offset 0x58, size 0x4
    float xBoundMin; // offset 0x5C, size 0x4
    float xBoundMax; // offset 0x60, size 0x4
    float yBoundMin; // offset 0x64, size 0x4
    float yBoundMax; // offset 0x68, size 0x4
    float zBoundMin; // offset 0x6C, size 0x4
    float zBoundMax; // offset 0x70, size 0x4
    struct _TBRegCell * cells; // offset 0x74, size 0x4
    unsigned int flags; // offset 0x78, size 0x4
    unsigned int pad2; // offset 0x7C, size 0x4
    struct _TBSetRegCellHAL hal; // offset 0x80, size 0x30
};
// total size: 0x40
struct _TBRegCell {
    // Members
    int noofPrims; // offset 0x0, size 0x4
    int noofVerts; // offset 0x4, size 0x4
    struct _TBRegCellPrim * prims; // offset 0x8, size 0x4
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
// total size: 0x18
struct _TBRegCellPrim {
    // Members
    int type; // offset 0x0, size 0x4
    struct _TBTexture * texture; // offset 0x4, size 0x4
    int noofPrimVerts; // offset 0x8, size 0x4
    unsigned short noofVerts; // offset 0xC, size 0x2
    unsigned short flags; // offset 0xE, size 0x2
    struct _TBTexture * texture2; // offset 0x10, size 0x4
    unsigned int pad; // offset 0x14, size 0x4
};
// total size: 0x30
struct _TBSetRegCellHAL {
    // Members
    struct _TBVertexBuffer * vertBuffer; // offset 0x0, size 0x4
    int * outCodes; // offset 0x4, size 0x4
    unsigned int totalVertices; // offset 0x8, size 0x4
    unsigned int pad; // offset 0xC, size 0x4
    struct _TBDLSegment * displaySegments; // offset 0x10, size 0x4
    unsigned char * displayList; // offset 0x14, size 0x4
    unsigned int vertexType; // offset 0x18, size 0x4
    unsigned int pad2; // offset 0x1C, size 0x4
    unsigned char * positionData; // offset 0x20, size 0x4
    unsigned char * normalData; // offset 0x24, size 0x4
    unsigned char * textureCoordData; // offset 0x28, size 0x4
    unsigned char * colourData; // offset 0x2C, size 0x4
};
// Range: 0x8021FD00 -> 0x8021FD50
void bRegCellsDelete(struct _TBSet * vSet /* r3 */) {
    // Local variables
    struct _TBSetRegCells * set; // r31
}

// Range: 0xFFFFFFFF -> 0x8021FD50
void bRegCellsDraw(struct _TBSet * vSet /* r25 */, int alpha /* r22 */) {
    // Local variables
    struct _TBSetRegCells * set;
    int k; // r30
    int vid; // r23
    int * outCodePtr; // r28
    int outCode; // r0
    int planeOffset; // r20
    int x; // r6
    int y; // r10
    int z; // r31
    int noofDrawn; // r16
    int noofPrims; // r24
    struct _TBRegCell * cell; // r30
    struct _TBRegCellPrim * prim; // r27
    float vec[4]; // r1+0x8
    float y1[4]; // r1+0x18
    float y2[4]; // r1+0x28
    float y1Delta[4]; // r1+0x38
    float y2Delta[4]; // r1+0x48
    float zDelta[4]; // r1+0x58
    float x1Delta[4]; // r1+0x68
    float x2Delta[4]; // r1+0x78
    float x3Delta[4]; // r1+0x88
    float x4Delta[4]; // r1+0x98
    float c0[4]; // r1+0xA8
    float c1[4]; // r1+0xB8
    float c2[4]; // r1+0xC8
    float c3[4]; // r1+0xD8
    float c4[4]; // r1+0xE8
    float c5[4]; // r1+0xF8
    float c6[4]; // r1+0x108
    float c7[4]; // r1+0x118
    float xFracDelta; // f0
    float yFracDelta; // f22
    float zFracDelta; // f29
    struct _TBTexture * curTexture; // r1+0x128
    struct _TBTexture * curTexture2; // r1+0x12C
    unsigned short uTile; // r18
    unsigned short vTile; // r19
    int oldAlpha; // r1+0x130
    int oldZWrite; // r14
    int oldTile; // r1+0x134
    unsigned char * DLVerts;
    unsigned int DLSize;
    int segment; // r9

    // Range: 0x8021FD50 -> 0x8021FD50
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x8021FD50 -> 0x8021FD50
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x8021FD50 -> 0x8021FD50
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x8021FD50 -> 0x8021FD50
    inline void bmVanillaVectorAdd4(float * dest, const float * src1, const float * src2) {}

    // Range: 0x8021FD50 -> 0x8021FD50
    inline void bmVanillaVectorAdd4(float * dest, const float * src1, const float * src2) {}

    // Range: 0x8021FD50 -> 0x8021FD50
    inline void bmVanillaVectorAdd4(float * dest, const float * src1, const float * src2) {}

    // Range: 0x8021FD50 -> 0x8021FD50
    inline void bmVanillaVectorAdd4(float * dest, const float * src1, const float * src2) {}

    // Range: 0x8021FD50 -> 0x8021FD50
    inline void bmVanillaVectorAdd4(float * dest, const float * src1, const float * src2) {}

    // Range: 0x8021FD50 -> 0x8021FD50
    inline void bmVanillaVectorAdd4(float * dest, const float * src1, const float * src2) {}

    // Range: 0x8021FD50 -> 0x8021FD50
    inline void bmVanillaVectorAdd4(float * dest, const float * src1, const float * src2) {}
}

// Range: 0x8021FD50 -> 0x8021FD70
void bInitShaderSelector() {}

// Range: 0xFFFFFFFF -> 0x8021FD70
void bShutdownShaderSelector() {}

// Range: 0x8021FD70 -> 0x8021FD94
int baShaderSelect(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x8021FD94
void bdDrawPrimitiveShaderScaled(unsigned int primType /* r3 */, void * vertices /* r4 */, int vertCount /* r5 */, unsigned int vertType /* r6 */) {}

// Range: 0x8021FD94 -> 0x8021FDEC
void bDrawPrimitiveVBShaderScaled(unsigned int primType /* r3 */, struct _TBVertexBuffer * vbPtr /* r11 */, int firstVertex /* r5 */, int vertCount /* r10 */) {
    // Local variables
    unsigned char * vertList;
}

// Range: 0x8021FDEC -> 0x8021FE10
static void bSetupZOnlyShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {}

// Range: 0x8021FE10 -> 0x8021FE44
static void bShutdownZOnlyShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {}

// Range: 0x8021FE44 -> 0x802200D0
static void bSetupCartoonShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_CartoonLit * cartoonParams; // r28
    struct _GXColor colour; // r1+0xC
    int ret;

    /* anonymous block */ {
        // Range: 0x8022004C -> 0x80220070
        int vRamp; // r9
    }
}

// total size: 0xC
struct _TBActRenderMode_CartoonLit {
    // Members
    struct _TBTexture * rampTexture; // offset 0x0, size 0x4
    int rampNumber; // offset 0x4, size 0x4
    struct _TBLightsource * lightsource; // offset 0x8, size 0x4
};
// Range: 0x802200D0 -> 0x80220184
static void bShutdownCartoonShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_CartoonLit * cartoonParams; // r31
}

// Range: 0x80220184 -> 0x80220470
static void bSetupOutlineTextureShader(struct _TBActorInstance * const instance /* r31 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_OutlinedTexture * outlinedTextureParams; // r30
    struct _GXColor colour; // r1+0x30
    float pos[4]; // r1+0x10
    float dir[4]; // r1+0x20
}

// total size: 0x14
struct _TBActRenderMode_OutlinedTexture {
    // Members
    int thickness; // offset 0x0, size 0x4
    int r; // offset 0x4, size 0x4
    int g; // offset 0x8, size 0x4
    int b; // offset 0xC, size 0x4
    int a; // offset 0x10, size 0x4
};
// Range: 0x80220470 -> 0x802204D8
static void bShutdownOutlineTextureShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {}

// Range: 0x802204D8 -> 0x802206AC
static void bSetupOutlineShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_Outlined * outlinedParams; // r31
    struct _GXColor colour; // r1+0xC
}

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
// Range: 0x802206AC -> 0x80220794
static void bShutdownOutlineShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_Outlined * outlinedParams; // r10
}

// Range: 0x80220794 -> 0x802208E8
static void bSetupOutlineVertexColourShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_OutlinedVertexColour * outlinedParams; // r11
    struct _GXColor colour; // r1+0xC
}

// total size: 0x8
struct _TBActRenderMode_OutlinedVertexColour {
    // Members
    float thickness; // offset 0x0, size 0x4
    int a; // offset 0x4, size 0x4
};
// Range: 0x802208E8 -> 0x802209B0
static void bShutdownOutlineVertexColourShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {}

// Range: 0x802209B0 -> 0x80220C78
static void bSetupShellShader(struct _TBActorInstance * const instance /* r28 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_Shell * shellParams; // r11
    struct _GXColor colour; // r1+0x30
    float pos[4]; // r1+0x10
    float dir[4]; // r1+0x20
}

// total size: 0x14
struct _TBActRenderMode_Shell {
    // Members
    float thickness; // offset 0x0, size 0x4
    int r; // offset 0x4, size 0x4
    int g; // offset 0x8, size 0x4
    int b; // offset 0xC, size 0x4
    int a; // offset 0x10, size 0x4
};
// Range: 0x80220C78 -> 0x80220D40
static void bShutdownShellShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {}

// Range: 0x80220D40 -> 0x80220E14
static void bSetupShadowShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_Shadow * shadowParams; // r11
    struct _GXColor colour; // r1+0xC
}

// total size: 0x10
struct _TBActRenderMode_Shadow {
    // Members
    int r; // offset 0x0, size 0x4
    int g; // offset 0x4, size 0x4
    int b; // offset 0x8, size 0x4
    int a; // offset 0xC, size 0x4
};
// Range: 0x80220E14 -> 0x80220EB0
static void bShutdownShadowShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {}

// Range: 0x80220EB0 -> 0x80221088
static void bSetupTexureStageForBlending(int stage /* r31 */, int mode /* r4 */, enum _GXTevColorArg blendValue /* r5 */, enum _GXTevAlphaArg alphaValue /* r30 */, int alphaZeroToOne /* r29 */) {}

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
// Range: 0x80221088 -> 0x802213B8
void bSetupEnvironmentShader(struct _TBActRenderMode_EnvironmentMap * envMapParams /* r29 */) {
    // Local variables
    int stage; // r31
    struct _GXColor colour; // r1+0xC
    int c; // r3
}

// Range: 0x802213B8 -> 0x80221418
static void bSetupEnvironmentShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_EnvironmentMap * envMapParams; // r3
}

// Range: 0x80221418 -> 0x80221514
void bShutdownEnvironmentShader(struct _TBActRenderMode_EnvironmentMap * envMapParams /* r29 */) {
    // Local variables
    int stage; // r30
    int c; // r31
}

// Range: 0x80221514 -> 0x80221574
static void bShutdownEnvironmentShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_EnvironmentMap * envMapParams; // r3
}

// Range: 0x80221574 -> 0x802215E8
static void bSetupLineDrawShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_LineDraw * lineParams; // r11
}

// total size: 0x10
struct _TBActRenderMode_LineDraw {
    // Members
    int r; // offset 0x0, size 0x4
    int g; // offset 0x4, size 0x4
    int b; // offset 0x8, size 0x4
    int a; // offset 0xC, size 0x4
};
// Range: 0x802215E8 -> 0x8022162C
static void bShutdownLineDrawShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {}

// Range: 0x8022162C -> 0x80221688
static void bSetupNormalVectorShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_NormalVector * normParams; // r11
}

// total size: 0x4
struct _TBActRenderMode_NormalVector {
    // Members
    float length; // offset 0x0, size 0x4
};
// Range: 0x80221688 -> 0x802216CC
static void bShutdownNormalVectorShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {}

// Range: 0x802216CC -> 0x80221738
static void bSetupSolidTextureShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    int stage; // r30
}

// Range: 0x80221738 -> 0x80221748
static void bShutdownSolidTextureShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    int stage;
}

// Range: 0x80221748 -> 0x802217B4
static void bSetupSolidTextureAndVertexShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    int stage; // r30
}

// Range: 0x802217B4 -> 0x802217C4
static void bShutdownSolidTextureAndVertexShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    int stage;
}

// Range: 0x802217C4 -> 0x80221830
static void bSetupNoVertexColourShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    int stage; // r30
}

// Range: 0x80221830 -> 0x80221840
static void bShutdownNoVertexColourShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    int stage;
}

// Range: 0x80221840 -> 0x80221C80
static void bSetupAlphaEdgeShader(struct _TBActorInstance * const instance /* r30 */, const int modeNum /* r4 */) {
    // Local variables
    struct _TBActRenderMode_AlphaEdge * alphaEdgeParams; // r31
    struct _GXColor lightCol; // r1+0x2C
    float lightPos[4]; // r1+0x8
    float lightDir[4]; // r1+0x18

    // Range: 0x80221908 -> 0x80221908
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x80221908 -> 0x80221908
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x80221944 -> 0x80221944
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}

    // Range: 0x80221944 -> 0x80221944
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80221944 -> 0x80221944
    inline void bmVanillaVectorCMul(float * src, const float val) {}

    // Range: 0x802219BC -> 0x802219BC
    inline void bmVanillaVectorSub(float * dest, const float * src1, const float * src2) {}

    // Range: 0x802219BC -> 0x802219BC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802219BC -> 0x802219BC
    inline void bmVanillaVectorCMul(float * src, const float val) {}

    // Range: 0x80221A70 -> 0x80221A70
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80221A70 -> 0x80221A70
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80221A70 -> 0x80221A70
    inline void bmVanillaVectorCMul(float * src, const float val) {}

    // Range: 0x80221B10 -> 0x80221B40
    inline void bmVanillaVectorSet(float * dest, float x, float y, float z, float w) {}
}

// total size: 0x1C
struct _TBActRenderMode_AlphaEdge {
    // Members
    int min; // offset 0x0, size 0x4
    int max; // offset 0x4, size 0x4
    int method; // offset 0x8, size 0x4
    float userVector[4]; // offset 0xC, size 0x10
};
// Range: 0x80221C80 -> 0x80221D0C
static void bShutdownAlphaEdgeShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {}

// Range: 0x80221D0C -> 0x80221E5C
static int bSetFrameWriteStage(int stageNumber /* r30 */) {
    // Local variables
    struct _GXColor colour; // r1+0xC
    enum _GXTevStageID stage;
    unsigned int value1; // r31
}

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
// Range: 0x80221E5C -> 0x80221F2C
static int bSetSpecularLightingStage(int stageNumber /* r31 */) {
    // Local variables
    enum _GXTevStageID stage;
}

// Range: 0x80221F2C -> 0x8022200C
static int bSetZTextureStage(int stageNumber /* r31 */) {
    // Local variables
    enum _GXTevStageID stage;
}

// Range: 0x8022200C -> 0x802220DC
static int bSetGlobalAlphaStage(int stageNumber /* r31 */) {
    // Local variables
    enum _GXTevStageID stage;
}

// Range: 0x802220DC -> 0x802222B4
void bSetNumberOfActiveStages(int stages /* r29 */, int extraStagesLockState /* r28 */) {
    // Local variables
    int c; // r31
}

// Range: 0x802222B4 -> 0x80222324
int baGenerateShader(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    void (* setup)(struct _TBActorInstance *, int); // r0
}

// Range: 0x80222324 -> 0x8022238C
int baShaderDeselect(struct _TBActorInstance * const instance /* r3 */, const int modeNum /* r4 */) {
    // Local variables
    void (* shutdown)(struct _TBActorInstance *, int); // r0
}

// Range: 0x8022238C -> 0x802223E0
int bInitLights() {}

// Range: 0x802223E0 -> 0x80222400
void bShutdownLights() {}

// Range: 0x80222400 -> 0x802224B8
struct _TBLightsource * baCreateLight(struct _TBLightsource * lightPtr /* r31 */, unsigned int flags /* r30 */) {}

// Range: 0x802224B8 -> 0x80222514
void baDeleteLight(struct _TBLightsource * lightPtr /* r31 */) {}

// Range: 0x80222514 -> 0x802225AC
void baSetDirectionalLight(struct _TBLightsource * lightPtr /* r31 */, float * lightVec /* r9 */) {
    // Range: 0x80222524 -> 0x80222524
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// Range: 0x802225AC -> 0x80222654
void baSetPointLight(struct _TBLightsource * lightPtr /* r31 */, float * position /* r4 */, float attenuation /* f1 */) {
    // Range: 0x802225BC -> 0x802225BC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// Range: 0x80222654 -> 0x80222760
void baSetSpotLight(struct _TBLightsource * lightPtr /* r31 */, float * position /* r9 */, float * focus /* r5 */, float attenuation /* f29 */, float coneAngle /* f30 */) {
    // Range: 0x80222670 -> 0x80222670
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80222670 -> 0x80222670
    inline void bmVanillaVectorSub(float * dest, const float * src1, const float * src2) {}

    // Range: 0x80222670 -> 0x80222670
    inline float bmVanillaCos(float val) {}
}

// Range: 0x80222760 -> 0x80222858
void baEnableLight(struct _TBLightsource * lightPtr /* r3 */, int newState /* r4 */) {}

// Range: 0x80222858 -> 0x8022288C
void baSetAmbientLight(int red /* r3 */, int green /* r4 */, int blue /* r5 */) {}

// Range: 0x8022288C -> 0x802228D4
void baSetLightColour(struct _TBLightsource * light /* r3 */, int red /* r4 */, int green /* r5 */, int blue /* r6 */) {}

// Range: 0xFFFFFFFF -> 0x802228D4
void baSetSpecularIntensity(struct _TBLightsource * light /* r3 */, float intensity /* f1 */) {}

// Range: 0xFFFFFFFF -> 0x802228D4
void baSetLightFlags(struct _TBLightsource * lightPtr /* r9 */, unsigned int flags /* r4 */, unsigned int flagMask /* r5 */) {}

// Range: 0xFFFFFFFF -> 0x802228D4
void baEvaluateLightAtPoint(const float * point /* r26 */, const float * normal /* r28 */, int * colour /* r29 */) {
    // Local variables
    struct _TBLightsource * lPtr; // r30
    float attenuationFactor; // f31
    float falloffFactor; // f9
    float diffuseReflectionFactor; // f1
    float differenceFromSource[4]; // r1+0x8
    float distanceToSource; // f1
    float cosine; // f8
    float unitDirection[4]; // r1+0x18

    // Range: 0x802228D4 -> 0x802228D4
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x802228D4 -> 0x802228D4
    inline void bmVanillaVectorSub(float * dest, const float * src1, const float * src2) {}

    // Range: 0x802228D4 -> 0x802228D4
    inline float bmVanillaVectorLen(const float * src) {
        // Range: 0x802228D4 -> 0x802228D4
        inline float bmVanillaSqrt(float x) {}
    }

    // Range: 0x802228D4 -> 0x802228D4
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x802228D4 -> 0x802228D4
    inline void bmVanillaVectorSub(float * dest, const float * src1, const float * src2) {}

    // Range: 0x802228D4 -> 0x802228D4
    inline float bmVanillaVectorLen(const float * src) {
        // Range: 0x802228D4 -> 0x802228D4
        inline float bmVanillaSqrt(float x) {}
    }

    // Range: 0x802228D4 -> 0x802228D4
    inline void bmVanillaVectorCDiv(float * dest, const float * src, const float val) {}

    // Range: 0x802228D4 -> 0x802228D4
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}

    // Range: 0x802228D4 -> 0x802228D4
    inline void bmVanillaVectorNegate(float * dest, const float * src) {}

    // Range: 0x802228D4 -> 0x802228D4
    inline float bmVanillaVectorDot(const float * src1, const float * src2) {}
}

// Range: 0xFFFFFFFF -> 0x802228D4
int baGetNumberOfMorphTargets(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorNodeInstance * nodeInstance /* r4 */) {
    // Local variables
    struct _TBMorphHeader * header; // r3
}

// Range: 0xFFFFFFFF -> 0x802228D4
int baGetNumberOfMorphVerts(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorNodeInstance * nodeInstance /* r4 */) {
    // Local variables
    struct _TBMorphHeader * header; // r4
}

// Range: 0xFFFFFFFF -> 0x802228D4
int baGetNumberOfMorphKeys(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorNodeInstance * nodeInstance /* r4 */) {
    // Local variables
    struct _TBMorphHeader * header; // r4
}

// Range: 0xFFFFFFFF -> 0x802228D4
unsigned int baGetMorphTargetBlendState(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorNodeInstance * nodeInstance /* r4 */, unsigned int n /* r3 */, unsigned char * targets /* r6 */, float * t /* r7 */, unsigned int flags /* r8 */) {
    // Local variables
    unsigned int c; // r11
    unsigned int m; // r8
    int r; // r11
}

// Range: 0xFFFFFFFF -> 0x802228D4
void baSetMorphTarget(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorNodeInstance * nodeInstance /* r4 */, unsigned int target1 /* r5 */, float t1 /* f1 */, unsigned int target2 /* r6 */, float t2 /* f2 */, unsigned int target3 /* r7 */, float t3 /* f3 */, unsigned int flags /* r8 */) {
    // Local variables
    unsigned char targets[3]; // r1+0x8
    float t[3]; // r1+0x10
}

// Range: 0x802228D4 -> 0x802229F0
void baSetMorphTargetList(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorNodeInstance * nodeInstance /* r31 */, unsigned int n /* r5 */, unsigned char * targets /* r6 */, float * t /* r7 */, unsigned int flags /* r8 */) {
    // Local variables
    unsigned int c; // r10
    int r; // r11
}

// Range: 0xFFFFFFFF -> 0x802229F0
void baClearMorphTargets(struct _TBActorInstance * actorInstance /* r3 */, struct _TBActorNodeInstance * nodeInstance /* r30 */) {}

// Range: 0x802229F0 -> 0x80222A20
int bInitSet() {}

// Range: 0x80222A20 -> 0x80222A40
void bShutdownSet() {}

// Range: 0x80222A40 -> 0x80222AE4
struct _TBSet * bLoadSetByCRC(struct _TBPackageIndex * pakIndex /* r30 */, unsigned int crc /* r4 */) {
    // Local variables
    struct _TBSet * set; // r31
    int l;
    unsigned char * basePtr;
}

// Range: 0x80222AE4 -> 0x80222B38
void bDeleteSet(struct _TBSet * set /* r31 */) {}

// Range: 0xFFFFFFFF -> 0x80222B38
void baDrawSet(struct _TBSet * set /* r3 */, int alpha /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x80222B38
void * baGetSetGeometry(struct _TBSet * set /* r3 */, int stream /* r4 */, int * noofVertices /* r5 */, int * noofTris /* r6 */) {}

// Range: 0xFFFFFFFF -> 0x80222B38
void bCreateSparkle(struct _TBExtraSystem * eSystem /* r3 */, unsigned char * vData /* r4 */, struct __va_list_tag * parms /* r5 */) {
    // Local variables
    struct _TBSparkleInstanceData * data;

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        int * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        int * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        int * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        int * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        int * __ptr; // r10
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        double * __ptr; // r9
    }

    /* anonymous block */ {
        // Range: 0x80222B38 -> 0x80222B38
        struct _TBTexture * * __ptr; // r10
    }
}

// total size: 0x48
struct _TBSparkleInstanceData {
    // Members
    float position[4]; // offset 0x0, size 0x10
    float velocity[4]; // offset 0x10, size 0x10
    float acceleration[4]; // offset 0x20, size 0x10
    short r; // offset 0x30, size 0x2
    short g; // offset 0x32, size 0x2
    short b; // offset 0x34, size 0x2
    short a; // offset 0x36, size 0x2
    int aDelta; // offset 0x38, size 0x4
    float size; // offset 0x3C, size 0x4
    float sizeDelta; // offset 0x40, size 0x4
    struct _TBTexture * texture; // offset 0x44, size 0x4
};
// Range: 0xFFFFFFFF -> 0x80222B38
void bUpdateSparkle(struct _TBExtraSystem * eSystem /* r28 */, int noofInstances /* r31 */, unsigned char * * dataPtrs /* r5 */, float t /* f1 */) {
    // Local variables
    struct _TBSparkleInstanceData * data; // r10
    int l; // r29
    float updateTime; // f31
    float halfTimeSqrd; // f30
}

// Range: 0xFFFFFFFF -> 0x80222B38
void bRenderSparkle(struct _TBExtraSystem * eSystem /* r3 */, int noofInstances /* r31 */, unsigned char * * dataPtrs /* r27 */, void * context /* r6 */) {
    // Local variables
    struct _TBSparkleSystemData * sysData; // r28
    struct _TBSparkleInstanceData * data; // r11
    int l; // r31
    struct _TBPrimVertex2D * vertPtr; // r30
    struct _TBPrimVertex2D * vertBase; // r24
    struct _TBTexture * lastTexture; // r26
}

// total size: 0x4
struct _TBSparkleSystemData {
    // Members
    struct _TBVertexBuffer * vertexBuffer; // offset 0x0, size 0x4
};
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
// Range: 0xFFFFFFFF -> 0x80222B38
void bSysInitSparkle(struct _TBExtraSystem * eSystem /* r3 */, int reason /* r4 */) {
    // Local variables
    struct _TBSparkleSystemData * data; // r9
}

// Range: 0x80222B38 -> 0x80222B64
int animTreeCompare(const void * p1 /* r3 */, const void * p2 /* r4 */) {}

// Range: 0x80222B64 -> 0x80222C58
void bResortAnimTree(struct _TBAnimTreeNode * parent /* r30 */) {
    // Local variables
    struct _TBAnimTreeNode * temp; // r9
    struct _TBAnimTreeNode * tempChildren[8]; // r1+0x8
    int i; // r31
    int n; // r7
}

// Range: 0x80222C58 -> 0x80222D74
static struct _TBAnimTreeNode * bGetNextFreeTreeNode(struct _TBActorInstance * actorInstance /* r6 */, char forceWeightsPriority /* r4 */) {
    // Local variables
    int l; // r7
    struct _TBAnimTreeNode * animNodePtr; // r3
}

// Range: 0x80222D74 -> 0x80222E34
void bAnimTreeReplaceNode(struct _TBActorInstance * actorInstance /* r3 */, struct _TBAnimTreeNode * oldNode /* r4 */, struct _TBAnimTreeNode * newNode /* r5 */) {
    // Local variables
    struct _TBAnimTreeNode * animNodePtr; // r9
}

// Range: 0x80222E34 -> 0x80222ED8
struct _TBAnimTreeNode * bAnimTreeAttachNode(struct _TBAnimTreeNode * newNode /* r3 */, struct _TBAnimTreeNode * parent /* r4 */) {
    // Local variables
    struct _TBAnimTreeNode * tempNode; // r11
    bool attached; // r10
}

// Range: 0x80222ED8 -> 0x80222F48
void bAnimTreeMoveNode(struct _TBActorInstance * actorInstance /* r3 */, struct _TBAnimTreeNode * node /* r10 */, struct _TBAnimTreeNode * newParent /* r4 */) {}

// Range: 0x80222F48 -> 0x80222FB4
struct _TBAnimTreeNode * baAnimTreeRemoveNode(struct _TBActorInstance * actorInstance /* r3 */, struct _TBAnimTreeNode * animNodePtr /* r9 */) {
    // Local variables
    struct _TBAnimTreeNode * nextNode; // r30
}

// Range: 0xFFFFFFFF -> 0x80222FB4
struct _TBAnimTreeNode * baAnimTreeQueueNode(struct _TBActorInstance * actorInstance /* r3 */, struct _TBAnimTreeNode * playAfter /* r31 */, int instant /* r30 */) {
    // Local variables
    struct _TBAnimTreeNode * newNode; // r3
}

// Range: 0x80222FB4 -> 0x80223410
struct _TBAnimTreeNode * baAnimTreeAttachNode(struct _TBActorInstance * actorInstance /* r30 */, struct _TBAnimTreeNode * parent /* r31 */, char forceWeightsPriority /* r5 */) {
    // Local variables
    struct _TBAnimTreeNode * newNode; // r27
    int l; // r28
    struct _TBAnimTreeAnimState * nodeState; // r31
    struct _TBAnimTreeAnimStateNoScale * nodeStateNoScale; // r31
    unsigned char * animNodeBlend; // r10
    unsigned short * lastOrientationKey; // r11
    int frame; // r1+0x8
    struct _TBActorAnimSegment * animSeg; // r29

    // Range: 0x802230BC -> 0x80223148
    inline int baEvalAnimPositionSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        /* anonymous block */ {
            // Range: 0x802230F4 -> 0x8022313C
            struct _TBActorAnimNode * animNodeData; // r5

            // Range: 0x80223114 -> 0x80223130
            inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
                // Local variables
                struct _TBActorAnimNode * animNodeData;
                int noofKeys; // r5
                struct _TBAnimKey3 * keys;
            }
        }
    }

    // Range: 0x80223148 -> 0x802231D0
    inline int baEvalAnimOrientationSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        /* anonymous block */ {
            // Range: 0x80223178 -> 0x802231C0
            struct _TBActorAnimNode * animNodeData; // r5

            // Range: 0x80223198 -> 0x802231B4
            inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
                // Local variables
                struct _TBActorAnimNode * animNodeData;
                int noofKeys; // r5
                struct _TBAnimKey4 * keys;
            }
        }
    }

    // Range: 0x80223230 -> 0x802232B8
    inline int baEvalAnimPositionSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        /* anonymous block */ {
            // Range: 0x80223264 -> 0x802232AC
            struct _TBActorAnimNode * animNodeData; // r5

            // Range: 0x80223284 -> 0x802232A0
            inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
                // Local variables
                struct _TBActorAnimNode * animNodeData;
                int noofKeys; // r5
                struct _TBAnimKey3 * keys;
            }
        }
    }

    // Range: 0x802232B8 -> 0x8022333C
    inline int baEvalAnimScaleSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        /* anonymous block */ {
            // Range: 0x802232E8 -> 0x80223330
            struct _TBActorAnimNode * animNodeData; // r5

            // Range: 0x80223308 -> 0x80223324
            inline int baEvalAnimScale(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
                // Local variables
                struct _TBActorAnimNode * animNodeData;
                int noofKeys; // r5
                struct _TBAnimKey3 * keys;
            }
        }
    }

    // Range: 0x8022333C -> 0x802233C4
    inline int baEvalAnimOrientationSafe(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        /* anonymous block */ {
            // Range: 0x8022336C -> 0x802233B4
            struct _TBActorAnimNode * animNodeData; // r5

            // Range: 0x8022338C -> 0x802233A8
            inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
                // Local variables
                struct _TBActorAnimNode * animNodeData;
                int noofKeys; // r5
                struct _TBAnimKey4 * keys;
            }
        }
    }
}

// Range: 0x80223410 -> 0x80223564
int baAnimTreeFlush(struct _TBActorInstance * actorInstance /* r28 */, struct _TBAnimTreeNode * root /* r31 */) {
    // Local variables
    struct _TBAnimTreeNode * animNodePtrs[8]; // r1+0x8
    struct _TBAnimTreeNode * animNodePtr; // r9
    int l; // r30
    int flushed; // r27
}

// Range: 0x80223564 -> 0x8022375C
void baAnimTreeSetNodeBlend(struct _TBAnimTreeNode * animNode /* r30 */, float blendTarget /* f31 */, float blendTime /* f29 */, float startBlend /* f30 */, unsigned int flags /* r29 */) {
    // Local variables
    struct _TBAnimTreeNode * animNodePtr; // r31

    // Range: 0x802235F8 -> 0x802235F8
    inline float bmVanillaFAbs(float x) {}

    // Range: 0x802236C0 -> 0x802236C0
    inline float bmVanillaFAbs(float x) {}
}

// Range: 0x8022375C -> 0x80223764
void baAnimTreeSetNodeBlendOutTime(struct _TBAnimTreeNode * animNode /* r3 */, float blendOutTime /* f1 */) {}

// Range: 0x80223764 -> 0x80224348
static void bBlendAnimNodeChildrenHierarchy(struct _TBActorInstance * actorInstance /* r16 */, struct _TBAnimTreeNode * animNode /* r27 */, struct _TBActorNodeInstance * actorNodeInstance /* r18 */, struct TBBlendDataWeights * blendDataWeights /* r21 */, unsigned char * blendDataFlags /* r19 */, bool fastBlend /* r8 */) {
    // Local variables
    int n; // r10
    int nodeIndex; // r7
    int parentIdx; // r8
    float blend; // f31
    float bInc; // f13
    float blendTotal; // f11
    float animNodeBlendTotal; // f12
    float actorNodeBlend; // f13
    struct _TBAnimTreeNode * animNodePtr; // r30
    struct _TBAnimTreeAnimState * nodeState; // r28
    struct _TBAnimTreeAnimState * childState; // r31
    struct _TBAnimTreeAnimStateNoScale * nodeStateNS; // r29
    struct _TBAnimTreeAnimStateNoScale * childStateNS; // r31
    struct _TBActorNodeInstance * instChildren; // r31
    unsigned char isMotion;
    unsigned char isBlendDataValid; // r6

    // Range: 0x802237D0 -> 0x802237D0
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x802237D0 -> 0x80223808
    inline void bmVanillaQuatZero(float * dest) {}

    // Range: 0x80223A0C -> 0x80223A0C
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x80223A0C -> 0x80223A0C
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x80223A80 -> 0x80223A80
    inline void bmVanillaVectorCMulAdd(float * dest, const float * src, const float fmul) {}

    // Range: 0x80223AC0 -> 0x80223AC0
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223AC0 -> 0x80223AC0
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223AF0 -> 0x80223AF0
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223B18 -> 0x80223B18
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223B18 -> 0x80223B18
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223C38 -> 0x80223C38
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223C38 -> 0x80223C38
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223C80 -> 0x80223C80
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223C80 -> 0x80223C80
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223DA0 -> 0x80223DA0
    inline void bmVanillaVectorCMulAdd(float * dest, const float * src, const float fmul) {}

    // Range: 0x80223DE0 -> 0x80223DE0
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223DE0 -> 0x80223DE0
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223E00 -> 0x80223E00
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223E00 -> 0x80223E00
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223E48 -> 0x80223E48
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223E48 -> 0x80223E48
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223F6C -> 0x80223F6C
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223F6C -> 0x80223F6C
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223F6C -> 0x80223F6C
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223FD8 -> 0x80223FD8
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80223FD8 -> 0x80223FD8
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224114 -> 0x80224114
    inline void bmVanillaVectorCMulAdd(float * dest, const float * src, const float fmul) {}

    // Range: 0x80224114 -> 0x80224114
    inline void bmVanillaVectorCMulAdd(float * dest, const float * src, const float fmul) {}

    // Range: 0x80224188 -> 0x80224188
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224188 -> 0x80224188
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802241A8 -> 0x802241A8
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802241A8 -> 0x802241A8
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802241A8 -> 0x802241A8
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224214 -> 0x80224214
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224214 -> 0x80224214
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// total size: 0x28
struct TBBlendDataWeights {
    // Typedefs
    typedef struct TBBlendDataWeights ._165;

    // Members
    unsigned char nodeWeights[8]; // offset 0x0, size 0x8
    float blendWeights[8]; // offset 0x8, size 0x20
};
// Range: 0x80224348 -> 0x80224424
static void bBlendSingleAnimNode(struct _TBActorInstance * actorInstance /* r3 */, struct _TBAnimTreeNode * animNode /* r31 */, struct _TBAnimTreeNode * childNode /* r30 */) {
    // Local variables
    int noof; // r29

    // Range: 0x802243C0 -> 0x802243C0
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802243C0 -> 0x80224410
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// Range: 0x80224424 -> 0x8022447C
static void bBlendAnimNodeChildren(struct _TBActorInstance * actorInstance /* r3 */, struct _TBAnimTreeNode * animNode /* r4 */, bool fastBlend /* r8 */) {
    // Local variables
    int noof;
    struct TBBlendDataWeights * blendDataWeights; // r6
    unsigned char * blendDataFlags; // r7
}

// Range: 0x8022447C -> 0x80224E3C
static void bBlendAnimNodeChildrenOffscreen(struct _TBActorInstance * actorInstance /* r3 */, struct _TBAnimTreeNode * animNode /* r27 */) {
    // Local variables
    int motionIndex; // r6
    int noof;
    int n; // r7
    int blendDataFlags; // r5
    struct TBBlendDataWeights blendDataWeights; // r1+0x8
    float actorNodeBlend; // f0
    float blendTotal; // f9
    struct _TBAnimTreeNode * animNodePtr; // r30
    float blend; // f10
    float bInc; // f13
    struct _TBAnimTreeAnimState * nodeState; // r29
    struct _TBAnimTreeAnimState * childState; // r31
    struct _TBAnimTreeAnimStateNoScale * nodeStateNS; // r29
    struct _TBAnimTreeAnimStateNoScale * childStateNS; // r31

    // Range: 0x802245C4 -> 0x802245C4
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x802245C4 -> 0x802245C4
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x8022464C -> 0x8022464C
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x8022464C -> 0x8022464C
    inline void bmVanillaQuatZero(float * dest) {}

    // Range: 0x80224820 -> 0x80224820
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224820 -> 0x80224820
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224820 -> 0x80224820
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224820 -> 0x80224820
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224974 -> 0x80224974
    inline void bmVanillaVectorCMulAdd(float * dest, const float * src, const float fmul) {}

    // Range: 0x80224974 -> 0x80224974
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224974 -> 0x80224974
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224A14 -> 0x80224A14
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224A14 -> 0x80224A14
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224A14 -> 0x80224A14
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224A14 -> 0x80224A14
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224B60 -> 0x80224B60
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224B60 -> 0x80224B60
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224B60 -> 0x80224B60
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224B60 -> 0x80224B60
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224B60 -> 0x80224B60
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224CDC -> 0x80224CDC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224CDC -> 0x80224CDC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224CDC -> 0x80224CDC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224CDC -> 0x80224CDC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80224CDC -> 0x80224CDC
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// Range: 0x80224E3C -> 0x80225130
void bEvaluateAnimTreeAnimNode(struct _TBActorInstance * actorInstance /* r24 */, struct _TBAnimTreeNode * animNode /* r23 */, int frame /* r25 */) {
    // Local variables
    float * nodeBlends; // r27
    float blendWeight; // f31
    struct _TBActorNodeInstance * actorNodeInstance; // r30
    struct _TBActorNodeInstance * actorNodeInstanceEnd; // r21
    struct _TBAnimTreeAnimState * animNodeState; // r28
    unsigned char * animNodeBlend; // r26
    struct _TBActorNode * actorAnimNode; // r31
    int noof; // r9
    unsigned short * lastOrientationKey; // r29
    struct _TBActorAnimSegment * animSeg; // r22
    float morphWeights[6]; // r1+0x8
    unsigned char morphTargets[6]; // r1+0x20
    float * parentNodeBlends; // r20

    /* anonymous block */ {
        // Range: 0x80224FAC -> 0x80224FE8
        int i; // r11
    }

    // Range: 0x80225008 -> 0x80225050
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80225068 -> 0x802250A8
    inline int baEvalAnimScale(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802250A8 -> 0x802250F0
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }
}

// Range: 0x80225130 -> 0x8022543C
void bEvaluateAnimTreeAnimNodeNoScale(struct _TBActorInstance * actorInstance /* r3 */, struct _TBAnimTreeNode * animNode /* r24 */, int frame /* r25 */) {
    // Local variables
    float * nodeBlends; // r27
    float blendWeight; // f31
    struct _TBActorNodeInstance * actorNodeInstance; // r30
    struct _TBActorNodeInstance * actorNodeInstanceEnd; // r22
    struct _TBAnimTreeAnimStateNoScale * animNodeState; // r28
    unsigned char * animNodeBlend; // r26
    struct _TBActorNode * actorAnimNode; // r31
    int noof; // r9
    unsigned short * lastOrientationKey; // r29
    struct _TBActorAnimSegment * animSeg; // r23
    float morphWeights[6]; // r1+0x8
    unsigned char morphTargets[6]; // r1+0x20
    float * parentNodeBlends; // r21

    /* anonymous block */ {
        // Range: 0x80225290 -> 0x802252CC
        int i; // r11
    }

    // Range: 0x802252E8 -> 0x80225328
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80225328 -> 0x80225378
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    /* anonymous block */ {
        // Range: 0x802253CC -> 0x80225408
        int i; // r11
    }
}

// Range: 0x8022543C -> 0x802255C8
void bEvaluateAnimTreeAnimNodeOffscreen(struct _TBActorInstance * actorInstance /* r3 */, struct _TBAnimTreeNode * animNode /* r29 */, int frame /* r28 */) {
    // Local variables
    struct _TBActorNode * motionNode; // r31
    int motionIndex; // r10
    struct _TBActorAnimSegment * animSeg; // r30

    // Range: 0x80225488 -> 0x802254D4
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802254D4 -> 0x80225514
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80225520 -> 0x8022556C
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x8022556C -> 0x802255B4
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }
}

// Range: 0x802255C8 -> 0x80225F10
void bUpdateAnimTree_NodeType_PlayAnim(struct _TBActorInstance * actorInstance /* r28 */, float timeDelta /* f31 */, struct _TBAnimTreeNode * animNode /* r30 */) {
    // Local variables
    int prevFrame; // r25
    int frame; // r31
    int newIndex; // r8
    int motionIndex; // r24
    struct _TBAnimTreeNode * animNodePtr;
    struct _TBAnimTreeNode * newNode; // r29
    struct _TBActorNode * motionNode; // r26
    float * motionPosition; // r29
    float * motionOrientation; // r27
    float tempPos[4]; // r1+0x8
    float prevMotionPos[4]; // r1+0x18
    float tempOrientation2[4]; // r1+0x28
    float tempOrientation[4]; // r1+0x38
    float prevMotionOrientation[4]; // r1+0x48

    // Range: 0x80225784 -> 0x802257CC
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802257CC -> 0x802257CC
    inline void bmVanillaVectorSub(float * src1, const float * src2) {}

    // Range: 0x802257CC -> 0x80225840
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80225840 -> 0x80225840
    inline void bmVanillaQuatInverse(float * dest, const float * src) {}

    // Range: 0x80225840 -> 0x8022589C
    inline void bmVanillaQuatMultiply(float * src1, const float * src2) {
        // Local variables
        float temp[4]; // r1+0x58

        // Range: 0x80225840 -> 0x80225840
        inline void bmVanillaQuatCopy(float * dest, const float * src) {}
    }

    // Range: 0x80225A3C -> 0x80225A84
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80225A84 -> 0x80225A84
    inline void bmVanillaVectorSub(float * src1, const float * src2) {}

    // Range: 0x80225A84 -> 0x80225AF8
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80225AF8 -> 0x80225AF8
    inline void bmVanillaQuatInverse(float * dest, const float * src) {}

    // Range: 0x80225AF8 -> 0x80225B54
    inline void bmVanillaQuatMultiply(float * src1, const float * src2) {
        // Local variables
        float temp[4]; // r1+0x58

        // Range: 0x80225AF8 -> 0x80225AF8
        inline void bmVanillaQuatCopy(float * dest, const float * src) {}
    }

    // Range: 0x80225B70 -> 0x80225B70
    inline int bmVanillaRand() {}

    // Range: 0x80225BFC -> 0x80225C40
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80225C40 -> 0x80225C40
    inline void bmVanillaVectorAdd(float * src1, const float * src2) {}

    // Range: 0x80225C40 -> 0x80225CB4
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80225CB4 -> 0x80225CE4
    inline void bmVanillaQuatMultiply(float * src1, const float * src2) {
        // Local variables
        float temp[4]; // r1+0x58

        // Range: 0x80225CB4 -> 0x80225CB4
        inline void bmVanillaQuatCopy(float * dest, const float * src) {}
    }

    // Range: 0x80225DB8 -> 0x80225DB8
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80225DB8 -> 0x80225E04
    inline void bmVanillaQuatInverse(float * dest, const float * src) {}

    // Range: 0x80225E68 -> 0x80225E68
    inline void bmVanillaVectorSub(float * dest, const float * src1, const float * src2) {}

    // Range: 0x80225EB4 -> 0x80225EB4
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x80225EB4 -> 0x80225EEC
    inline void bmVanillaQuatZero(float * dest) {}
}

// Range: 0x80225F10 -> 0x802260EC
void bUpdateAnimTree_NodeType_State(struct _TBActorInstance * actorInstance /* r27 */, float timeDelta /* f31 */, struct _TBAnimTreeNode * animNode /* r29 */) {
    // Local variables
    int l; // r31
    int noof; // r28
    struct _TBAnimTreeNode * animNodePtr; // r11
    struct _TBAnimTreeNode * nodeArray[8]; // r1+0x8
    bool fastBlend; // r26

    // Range: 0x8022609C -> 0x8022609C
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x8022609C -> 0x8022609C
    inline void bmVanillaQuatZero(float * dest) {}

    // Range: 0x8022609C -> 0x8022609C
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x8022609C -> 0x802260D4
    inline void bmVanillaQuatZero(float * dest) {}
}

// Range: 0x802260EC -> 0x80226374
void bUpdateAnimTreeHierarchy(struct _TBActorInstance * actorInstance /* r30 */, float timeDelta /* f30 */, struct _TBAnimTreeNode * animNode /* r31 */) {
    // Local variables
    struct _TBAnimTreeNode * animNodePtr;
}

// Range: 0x80226374 -> 0x802265F8
void bUpdateAnimTree(struct _TBActorInstance * actorInstance /* r31 */, float timeDelta /* f1 */) {
    // Local variables
    struct _TBAnimTreeNode * animNode; // r30
    struct _TBActorNodeInstance * actorNodeInstance; // r8
    struct _TBActorNodeInstance * actorNodeInstanceEnd; // r6
    struct _TBAnimTreeAnimState * animNodeState; // r7
    struct _TBAnimTreeAnimStateNoScale * animNodeStateNoScale; // r7
    int noof; // r10

    // Range: 0x80226438 -> 0x80226438
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80226438 -> 0x80226484
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}

    // Range: 0x80226514 -> 0x80226528
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x80226584 -> 0x80226584
    inline void bmVanillaVectorCopy(float * dest, const float * src) {}
}

// Range: 0x802265F8 -> 0x802268BC
void baAnimTreeSetNodeType_Animation(struct _TBActorInstance * actorInstance /* r28 */, struct _TBAnimTreeNode * animNode /* r31 */, struct _TBActorAnimSegment * segment /* r30 */, float segTime /* f1 */, float startPos /* f31 */, unsigned short flags /* r29 */, int repeatCount /* r27 */) {
    // Local variables
    int motionIndex; // r6
    int frame; // r29
    struct _TBActorNode * motionNode; // r30

    /* anonymous block */ {
        // Range: 0x8022668C -> 0x802266D0
        int l; // r11
    }

    // Range: 0x802266F8 -> 0x802266F8
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x802266F8 -> 0x802266F8
    inline void bmVanillaQuatZero(float * dest) {}

    // Range: 0x80226770 -> 0x802267BC
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x802267BC -> 0x80226800
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x8022680C -> 0x80226858
    inline int baEvalAnimPosition(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey3 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }

    // Range: 0x80226858 -> 0x802268A4
    inline int baEvalAnimOrientation(float * destVec, struct _TBActorAnimSegment * animSeg, struct _TBActorNode * animNode, int animTime) {
        // Local variables
        struct _TBAnimKey4 * keys; // r6
        int noofKeys; // r5
        struct _TBActorAnimNode * animNodeData; // r6
    }
}

// Range: 0x802268BC -> 0x80226914
void baAnimTreeSetNodeAnimSpeed(struct _TBAnimTreeNode * animNode /* r30 */, float segDelta /* f31 */) {}

// Range: 0x80226914 -> 0x80226950
void baAnimTreeSetNodeAnimPosition(struct _TBAnimTreeNode * animNode /* r31 */, float segPos /* f1 */, unsigned char absolute /* r4 */) {}

// Range: 0x80226950 -> 0x802269D4
void baAnimTreeSetNodeType_State(struct _TBActorInstance * actorInstance /* r3 */, struct _TBAnimTreeNode * animNode /* r4 */, unsigned int stateCRC /* r5 */, unsigned short flags /* r6 */) {
    /* anonymous block */ {
        // Range: 0x80226950 -> 0x80226998
        int l; // r11
    }

    // Range: 0x80226998 -> 0x80226998
    inline void bmVanillaVectorZero(float * dest) {}

    // Range: 0x80226998 -> 0x802269D0
    inline void bmVanillaQuatZero(float * dest) {}
}

// Range: 0x802269D4 -> 0x802269E4
void baAnimTreeSetNodeCallback(struct _TBAnimTreeNode * animNode /* r3 */, int (* callback)(enum EBAnimTreeCallbackReason, struct _TBActorInstance *, struct _TBAnimTreeNode *, void *) /* r4 */, void * context /* r5 */, unsigned char callbackFlags /* r6 */) {}

// Range: 0x802269E4 -> 0x80226B20
void baAnimTreeSetActorNodeBlend(struct _TBAnimTreeNode * animNode /* r30 */, struct _TBActorNodeInstance * actorNodeInstance /* r29 */, float blendWeight /* f31 */, unsigned int flags /* r28 */) {
    // Local variables
    struct _TBAnimTreeNode * animNodePtr; // r31
}

// Range: 0x80226B20 -> 0x80226BD0
struct _TBAnimTreeNode * baAnimTreeFindNode(struct _TBActorInstance * actorInstance /* r28 */, unsigned int crc /* r29 */, struct _TBAnimTreeNode * animRoot /* r30 */) {
    // Local variables
    struct _TBAnimTreeNode * children; // r31
    struct _TBAnimTreeNode * foundNode; // r3
}

// Range: 0xFFFFFFFF -> 0x80226BD0
void baAnimTreeSetForceWeightsPriority(struct _TBAnimTreeNode * animNode /* r9 */, char weightPriority /* r4 */) {}

// Range: 0xFFFFFFFF -> 0x80226BD0
struct _TBAnimTreeNode * baAnimTreeFindNode(struct _TBActorInstance * actorInstance /* r28 */, struct _TBActorAnimSegment * animSegment /* r29 */, struct _TBAnimTreeNode * animRoot /* r30 */) {
    // Local variables
    struct _TBAnimTreeNode * children; // r31
    struct _TBAnimTreeNode * foundNode; // r3
}

// Range: 0x80226BD0 -> 0x80226D40
static void PlayAnimTreeEvents(struct _TBActorInstance * actorInstance /* r28 */, struct _TBActor * animActor /* r19 */, struct _TBActorAnimSegment * animSeg /* r20 */, int oldFrame /* r25 */, int newFrame /* r26 */) {
    // Local variables
    int oldEventFrame; // r24
    int newEventFrame; // r23
    int l; // r27
    int n; // r11
    struct _TBActorAnimEvent * event; // r5
    char buf[256]; // r1+0x8
    struct _TBActorNodeInstance * nodeInstance; // r29
    struct _TBActorNode * node; // r30
}

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
typedef enum _GXTevColorArg GXTevColorArg;
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
// total size: 0x318
struct OSThread {
    // Members
    OSContext context; // offset 0x0, size 0x2C8
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
typedef struct OSThread OSThread;
// total size: 0x8
struct OSThreadLink {
    // Members
    OSThread * next; // offset 0x0, size 0x4
    OSThread * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSThreadQueue {
    // Members
    OSThread * head; // offset 0x0, size 0x4
    OSThread * tail; // offset 0x4, size 0x4
};
// total size: 0x18
struct OSMutex {
    // Members
    struct OSThreadQueue queue; // offset 0x0, size 0x8
    OSThread * thread; // offset 0x8, size 0x4
    int count; // offset 0xC, size 0x4
    struct OSMutexLink link; // offset 0x10, size 0x8
};
// total size: 0x8
struct OSMutexQueue {
    // Members
    struct OSMutex * head; // offset 0x0, size 0x4
    struct OSMutex * tail; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSMutexLink {
    // Members
    struct OSMutex * next; // offset 0x0, size 0x4
    struct OSMutex * prev; // offset 0x4, size 0x4
};
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
// total size: 0xC
struct OSSemaphore {
    // Members
    int count; // offset 0x0, size 0x4
    OSThreadQueue queue; // offset 0x4, size 0x8
};
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
// total size: 0xC
struct DVDDir {
    // Typedefs
    typedef struct DVDDir ._14;

    // Members
    unsigned int entryNum; // offset 0x0, size 0x4
    unsigned int location; // offset 0x4, size 0x4
    unsigned int next; // offset 0x8, size 0x4
};
typedef struct DVDDir DVDDir;
// total size: 0xC
struct DVDDirEntry {
    // Typedefs
    typedef struct DVDDirEntry ._15;

    // Members
    unsigned int entryNum; // offset 0x0, size 0x4
    int isDir; // offset 0x4, size 0x4
    char * name; // offset 0x8, size 0x4
};
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
// total size: 0xC
struct _TBKernelModuleInfo {
    // Members
    int moduleType; // offset 0x0, size 0x4
    void (* updateFunc)(); // offset 0x4, size 0x4
    struct _TBKernelModuleInfo * next; // offset 0x8, size 0x4
};
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
// total size: 0xC
struct _TBFindFileInfo {
    // Members
    DVDDir dir; // offset 0x0, size 0xC
};
typedef struct _TBFindFileInfo TBFindFileInfo;
enum EBHostSeekMode {
    EHOSTSEEK_SET = 0,
    EHOSTSEEK_CUR = 1,
    EHOSTSEEK_END = 2,
};
enum EBDiskErrorReasonCode {
    BDISKERROR_COVER_OPEN = 1,
    BDISKERROR_NO_DISK = 2,
    BDISKERROR_WRONG_DISK = 3,
    BDISKERROR_RETRY = 4,
    BDISKERROR_FATAL_ERROR = 5,
    BDISKERRORS = 6,
};
typedef enum EBDiskErrorReasonCode EBDiskErrorReasonCode;
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
typedef enum EBLanguageID EBLanguageID;
typedef struct _TBPackageID TBPackageID;
typedef struct _TBFileIndex TBFileIndex;
typedef struct _TBPackageIndex TBPackageIndex;
// total size: 0x8
struct _TBFileTagInfo {
    // Members
    unsigned int * tags; // offset 0x0, size 0x4
    int noofTags; // offset 0x4, size 0x4
};
typedef struct _TBFileTagInfo TBFileTagInfo;
// total size: 0x114
struct _TBFilenameTableHeader {
    // Members
    TBPackageID package; // offset 0x0, size 0x4
    struct _TBFilenameTableHeader * prev; // offset 0x4, size 0x4
    struct _TBFilenameTableHeader * next; // offset 0x8, size 0x4
    int refCount; // offset 0xC, size 0x4
    unsigned int noofFiles; // offset 0x10, size 0x4
    char filename[256]; // offset 0x14, size 0x100
};
typedef struct _TBFilenameTableHeader TBFilenameTableHeader;
// total size: 0x108
struct _TBDebugStream {
    // Members
    char logFile[256]; // offset 0x0, size 0x100
    unsigned int flags; // offset 0x100, size 0x4
    int fp; // offset 0x104, size 0x4
};
typedef struct _TBDebugStream TBDebugStream;
int bPrintPause; // size: 0x4
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
// total size: 0x208
struct _TBErrorMessage {
    // Members
    char error[512]; // offset 0x0, size 0x200
    int flipCount; // offset 0x200, size 0x4
    int module; // offset 0x204, size 0x4
};
typedef struct _TBErrorMessage TBErrorMessage;
typedef int (* TBErrorMessageCallback)(char *);
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
typedef struct _TBResourceInfo TBResourceInfo;
// total size: 0x28
struct _TBResourceSnapshotEntry {
    // Members
    TBResourceInfo * infoPtr; // offset 0x0, size 0x4
    TBResourceInfo info; // offset 0x4, size 0x20
    int found; // offset 0x24, size 0x4
};
typedef struct _TBResourceSnapshotEntry TBResourceSnapshotEntry;
// total size: 0x5C
struct _TBResourceSnapshot {
    // Members
    int noofRes[21]; // offset 0x0, size 0x54
    unsigned int typeMask; // offset 0x54, size 0x4
    int noofEntries; // offset 0x58, size 0x4
};
typedef struct _TBResourceSnapshot TBResourceSnapshot;
typedef struct _TBTexture TBTexture;
typedef struct _TBActor TBActor;
// total size: 0x48
struct _TBSample {
    // Members
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    int frequency; // offset 0x20, size 0x4
    unsigned int playbackFlags; // offset 0x24, size 0x4
    unsigned char noofChannels; // offset 0x28, size 0x1
    unsigned char pad[3]; // offset 0x29, size 0x3
    unsigned int pad2; // offset 0x2C, size 0x4
    struct _TBSampleHAL hal; // offset 0x30, size 0x18
};
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
typedef struct _TBSample TBSample;
typedef struct _TBFont TBFont;
// total size: 0x3C
struct _TBStringTable {
    // Members
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    struct _TBStringTableString * strings; // offset 0x20, size 0x4
    unsigned int noofStrings; // offset 0x24, size 0x4
    unsigned int flag; // offset 0x28, size 0x4
    struct _TBStringTableString * * hashTable; // offset 0x2C, size 0x4
    unsigned int noofExtraColumns; // offset 0x30, size 0x4
    struct _TBStringCommand * commands; // offset 0x34, size 0x4
    unsigned int noofCommands; // offset 0x38, size 0x4
};
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
                TBTexture * glyphTexture; // offset 0x0, size 0x4
                unsigned int glyphTextureCRC; // offset 0x0, size 0x4
            };

            // Members
            union {
                TBTexture * glyphTexture; // offset 0x0, size 0x4
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
                TBTexture * glyphTexture; // offset 0x0, size 0x4
                unsigned int glyphTextureCRC; // offset 0x0, size 0x4
            };

            // Members
            union {
                TBTexture * glyphTexture; // offset 0x0, size 0x4
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
typedef struct _TBSet TBSet;
struct _TBCollisionMesh {};
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
typedef unsigned long long TBTimerValue;
typedef struct _TBStopwatch TBStopwatch;
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
typedef struct _TBClock TBClock;
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
// total size: 0x8
struct _TBBkgLoadResult {
    // Members
    enum EBBkgError resultCode; // offset 0x0, size 0x4
    unsigned int crc; // offset 0x4, size 0x4
};
typedef struct _TBBkgLoadResult TBBkgLoadResult;
typedef void (* TBBkgLoadComplete)(void *);
enum EBProfileSort {
    EBPROFILESORT_FUNCCHILD = 0,
    EBPROFILESORT_FUNCONLY = 1,
    EBPROFILESORT_CALLCOUNT = 2,
    EBPROFILESORT_FUNCNAME = 3,
};
typedef unsigned short TBProfileIndex;
void * bLockedCache; // size: 0x4
// total size: 0x150
struct _TBRingBuffer {
    // Members
    OSMutex mutex; // offset 0x0, size 0x18
    char eventName[64]; // offset 0x18, size 0x40
    TBEventClient * client; // offset 0x58, size 0x4
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
    TBFileHandleType * fileHandle; // offset 0x128, size 0x4
    unsigned long long startTime; // offset 0x130, size 0x8
    unsigned long long currentTime; // offset 0x138, size 0x8
    int prevBytesRead; // offset 0x140, size 0x4
    float curBytesPerSec; // offset 0x144, size 0x4
    float peakBytesPerSec; // offset 0x148, size 0x4
};
typedef struct _TBRingBuffer TBRingBuffer;
enum EBCompressionType {
    BCOMPRESSION_TYPE_NONE = -1,
    BCOMPRESSION_TYPE_RLE = 0,
    BCOMPRESSION_TYPE_BITMAP24 = 1,
    BCOMPRESSION_TYPE_FLATPACKER2 = 2,
    BCOMPRESSION_TYPES = 3,
};
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
unsigned int bHoldRand; // size: 0x4
typedef float TBVector[4];
typedef TBVector TBQuaternion;
typedef float TBVector2D[2];
typedef Mtx44 TBMatrix;
Mtx44 bIdentityMatrix; // size: 0x40
TBVector bIdentityQuaternion; // size: 0x10
struct _TBCollisionLine2D {};
struct _TBCollisionLine {};
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
unsigned short bDrawSyncID; // size: 0x2
unsigned int bProgressiveModeAvailable; // size: 0x4
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
float bNormalLength; // size: 0x4
GXColor bLineColour; // size: 0x4
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
GXChannelID bMainColourChannel; // size: 0x4, address: 0x8047D598
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
typedef struct _TBPatch TBPatch;
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
typedef struct _TDLPosition TDLPosition;
typedef struct _TDLNormal TDLNormal;
// total size: 0x8
struct _TDLTextureCoord {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
typedef struct _TDLTextureCoord TDLTextureCoord;
typedef struct _TDLVertexExtraIndexedPosGCUBE TDLVertexExtraIndexedPosGCUBE;
typedef struct _TDLVertexExtraIndexedNormGCUBE TDLVertexExtraIndexedNormGCUBE;
typedef struct _TDLVertexExtraIndexedPosGCUBESingleBone TDLVertexExtraIndexedPosGCUBESingleBone;
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
typedef struct _TBShadowVolume TBShadowVolume;
typedef struct _TSoftSkinRenderModeState TSoftSkinRenderModeState;
typedef void (* TBDrawMeshCallback)(struct _TBActorInstance *, unsigned int, TBMeshBatch *, TBMeshPrim *, int, int, TBVertexBuffer *);
typedef void (* TBDrawSoftSkinCallback)(struct _TBActorInstance *, TSoftSkinRenderModeState *, unsigned int, TBSoftSkinBatch *, TBSoftSkinPrim *, int, int, TBVertexBuffer *);
typedef struct _TDLVertexExtra TDLVertexExtra;
typedef Mtx TBMatrixGCPos;
typedef float TBMatrixGCNorm[3][3];
typedef Mtx TBMatrixGCTex;
typedef struct _TBMatrixGCData TBMatrixGCData;
int bForceHardSkinning; // size: 0x4, address: 0x8047CCAC
int bForceCPUSkinning; // size: 0x4, address: 0x8047CCB0
void (* bDrawPrimitiveActor)(unsigned int, TBVertexBuffer *, int, int); // size: 0x4, address: 0x8047D59C
void (* bDrawPrimitiveActorIndexed)(unsigned int, TBVertexBuffer *, int, int); // size: 0x4, address: 0x8047D5A0
int bGCDrawScyncWarnsEnabled; // size: 0x4, address: 0xFFFFFFFF
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
typedef struct _TBActRenderMode_CartoonLit TBActRenderMode_CartoonLit;
typedef struct _TBActRenderMode_Outlined TBActRenderMode_Outlined;
typedef struct _TBActRenderMode_OutlinedTexture TBActRenderMode_OutlinedTexture;
typedef struct _TBActRenderMode_OutlinedVertexColour TBActRenderMode_OutlinedVertexColour;
typedef struct _TBActRenderMode_Shell TBActRenderMode_Shell;
typedef struct _TBActRenderMode_Shadow TBActRenderMode_Shadow;
typedef struct _TBActRenderMode_EnvironmentMap TBActRenderMode_EnvironmentMap;
typedef struct _TBActRenderMode_LineDraw TBActRenderMode_LineDraw;
typedef struct _TBActRenderMode_NormalVector TBActRenderMode_NormalVector;
typedef struct _TBActRenderMode_AlphaEdge TBActRenderMode_AlphaEdge;
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
    typedef struct TBAnimTreeDebugInfo ._106;

    // Members
    int noofEvalulateInstHier; // offset 0x0, size 0x4
    int noofEvalulateInstHierNodes; // offset 0x4, size 0x4
    int noofBlendInstHierNodes; // offset 0x8, size 0x4
    int noofBlendInstHier; // offset 0xC, size 0x4
};
typedef struct TBAnimTreeDebugInfo TBAnimTreeDebugInfo;
int bGlobalActorAlphaScale; // size: 0x4, address: 0x8047CC90
int bGlobalActorAlphaOverride; // size: 0x4, address: 0xFFFFFFFF
unsigned int vertexTypeLookup[28]; // size: 0x70, address: 0x80383334
char * bActorInstanceFlagNames[6]; // size: 0x18, address: 0x803833E4
char * bActorNodeInstanceFlagNames[32]; // size: 0x80, address: 0x803833FC
char * bActorFlagNames[16]; // size: 0x40, address: 0x803833A4
Mtx44 bDefaultEnvTextureMatrix; // size: 0x40, address: 0x8040FA90
Mtx44 bEnvTextureMatrix; // size: 0x40, address: 0x8040FAD0
int bStencilShadowCol[3]; // size: 0xC, address: 0x8040FB10
int bStencilShadowsOn; // size: 0x4, address: 0x8047CC9C
typedef struct _TBActorGroupMember TBActorGroupMember;
typedef struct _TBActorGroup TBActorGroup;
typedef struct _TBLightsourceSpecInfo TBLightsourceSpecInfo;
int bColourChannels; // size: 0x4, address: 0x8047D5A4
int bLights; // size: 0x4, address: 0x8047D5A8
int bLightAlpha; // size: 0x4, address: 0x8047CCC8
typedef struct _TBLightParmsDirectional TBLightParmsDirectional;
typedef struct _TBLightParmsPoint TBLightParmsPoint;
typedef struct _TBLightParmsSpot TBLightParmsSpot;
typedef struct _TBLightsource TBLightsource;
TBLightsource bActiveLights; // size: 0xB0, address: 0x8040FB20
TBLightsource bInactiveLights; // size: 0xB0, address: 0x8040FBD0
int bAmbientLight[3]; // size: 0xC, address: 0x803836E0
int bNoofActiveLights; // size: 0x4, address: 0x8047CCCC
int bMaxActiveLights; // size: 0x4, address: 0x8047CCC4
typedef void (* TBExtraCreateFunc)(struct _TBExtraSystem *, unsigned char *, struct __va_list_tag *);
typedef void (* TBExtraUpdateFunc)(struct _TBExtraSystem *, int, unsigned char * *, float);
typedef int (* TBExtraDeleteFunc)(struct _TBExtraSystem *, unsigned char *);
typedef void (* TBExtraRenderFunc)(struct _TBExtraSystem *, int, unsigned char * *, void *);
typedef void (* TBExtraSystemInitFunc)(struct _TBExtraSystem *, int);
typedef struct _TBExtraSystem TBExtraSystem;
typedef struct _TBSparkleInstanceData TBSparkleInstanceData;
typedef struct _TBSparkleSystemData TBSparkleSystemData;
typedef struct _TBSetRegCellHAL TBSetRegCellHAL;
typedef struct _TBRegCellPrim TBRegCellPrim;
typedef struct _TBRegCell TBRegCell;
typedef struct _TBSetRegCells TBSetRegCells;
typedef struct _TBCameraInstanceControlStatic TBCameraInstanceControlStatic;
typedef struct _TBCameraInstanceControlVector TBCameraInstanceControlVector;
typedef struct _TBCameraInstanceControlActor TBCameraInstanceControlActor;
typedef struct _TBCameraInstanceControlQuaternion TBCameraInstanceControlQuaternion;
typedef struct _TBCameraInstanceControlTQuaternion TBCameraInstanceControlTQuaternion;
typedef struct _TBCameraInstanceControlEuler TBCameraInstanceControlEuler;
typedef struct _TBCameraInstanceControlTEuler TBCameraInstanceControlTEuler;
typedef void (* TBCameraInstanceCallback)(float *, float *, void *);
typedef struct _TBCameraInstanceControlCustom TBCameraInstanceControlCustom;
typedef struct _TBCameraInstanceControl TBCameraInstanceControl;
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
    typedef struct AXART_ART ._111;

    // Members
    void * next; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
};
typedef struct AXART_ART AXART_ART;
// total size: 0x20
struct AXART_LFO {
    // Typedefs
    typedef struct AXART_LFO ._112;

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
    typedef struct AXART_3D ._113;

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
    typedef struct AXART_PANNING ._114;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    unsigned char pan; // offset 0x8, size 0x1
    unsigned char span; // offset 0x9, size 0x1
};
typedef struct AXART_PANNING AXART_PANNING;
// total size: 0xC
struct AXART_SRCTYPE {
    // Typedefs
    typedef struct AXART_SRCTYPE ._115;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    unsigned char src; // offset 0x8, size 0x1
};
typedef struct AXART_SRCTYPE AXART_SRCTYPE;
// total size: 0xC
struct AXART_ITD {
    // Typedefs
    typedef struct AXART_ITD ._116;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    unsigned short itdL; // offset 0x8, size 0x2
    unsigned short itdR; // offset 0xA, size 0x2
};
typedef struct AXART_ITD AXART_ITD;
// total size: 0xC
struct AXART_PITCH {
    // Typedefs
    typedef struct AXART_PITCH ._117;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int cents; // offset 0x8, size 0x4
};
typedef struct AXART_PITCH AXART_PITCH;
// total size: 0x14
struct AXART_PITCH_ENV {
    // Typedefs
    typedef struct AXART_PITCH_ENV ._118;

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
    typedef struct AXART_PITCH_MOD ._119;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    AXART_LFO lfo; // offset 0x8, size 0x20
    int cents; // offset 0x28, size 0x4
};
typedef struct AXART_PITCH_MOD AXART_PITCH_MOD;
// total size: 0xC
struct AXART_VOLUME {
    // Typedefs
    typedef struct AXART_VOLUME ._120;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int attenuation; // offset 0x8, size 0x4
};
typedef struct AXART_VOLUME AXART_VOLUME;
// total size: 0xC
struct AXART_AUXA_VOLUME {
    // Typedefs
    typedef struct AXART_AUXA_VOLUME ._121;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int attenuation; // offset 0x8, size 0x4
};
typedef struct AXART_AUXA_VOLUME AXART_AUXA_VOLUME;
// total size: 0xC
struct AXART_AUXB_VOLUME {
    // Typedefs
    typedef struct AXART_AUXB_VOLUME ._122;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    int attenuation; // offset 0x8, size 0x4
};
typedef struct AXART_AUXB_VOLUME AXART_AUXB_VOLUME;
// total size: 0x14
struct AXART_VOLUME_ENV {
    // Typedefs
    typedef struct AXART_VOLUME_ENV ._123;

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
    typedef struct AXART_AUXA_VOLUME_ENV ._124;

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
    typedef struct AXART_AUXB_VOLUME_ENV ._125;

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
    typedef struct AXART_VOLUME_MOD ._126;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    AXART_LFO lfo; // offset 0x8, size 0x20
    int attenuation; // offset 0x28, size 0x4
};
typedef struct AXART_VOLUME_MOD AXART_VOLUME_MOD;
// total size: 0x2C
struct AXART_AUXA_VOLUME_MOD {
    // Typedefs
    typedef struct AXART_AUXA_VOLUME_MOD ._127;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    AXART_LFO lfo; // offset 0x8, size 0x20
    int attenuation; // offset 0x28, size 0x4
};
typedef struct AXART_AUXA_VOLUME_MOD AXART_AUXA_VOLUME_MOD;
// total size: 0x2C
struct AXART_AUXB_VOLUME_MOD {
    // Typedefs
    typedef struct AXART_AUXB_VOLUME_MOD ._128;

    // Members
    AXART_ART art; // offset 0x0, size 0x8
    AXART_LFO lfo; // offset 0x8, size 0x20
    int attenuation; // offset 0x28, size 0x4
};
typedef struct AXART_AUXB_VOLUME_MOD AXART_AUXB_VOLUME_MOD;
// total size: 0x14
struct AXART_LPF {
    // Typedefs
    typedef struct AXART_LPF ._129;

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
    typedef struct AXART_SOUND ._130;

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
enum EBGuiElement {
    BGUIELEMENT_MENU = 0,
    BGUIELEMENT_SLIDER = 1,
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
// total size: 0xC
struct _TBGuiEventInfo {
    // Members
    int reason; // offset 0x0, size 0x4
    unsigned int resourceID; // offset 0x4, size 0x4
    TBGuiMenuItem * itemPtr; // offset 0x8, size 0x4
};
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
typedef struct _TAnimUpdateCallbackInfo TAnimUpdateCallbackInfo;
// total size: 0x6C
struct _TBBoneParams {
    // Members
    Mtx44 drawMatrix; // offset 0x0, size 0x40
    int colour[4]; // offset 0x40, size 0x10
    int colour2[4]; // offset 0x50, size 0x10
    const TBActorNodeInstance * rootNode; // offset 0x60, size 0x4
    const TBActorNodeInstance * node; // offset 0x64, size 0x4
    const TBActorNodeInstance * parentNode; // offset 0x68, size 0x4
};
typedef struct _TBBoneParams TBBoneParams;
static TAnimUpdateCallbackInfo actorCallbackQueue[8]; // size: 0x100, address: 0x8040FC80
static int actorCallbackQueueSize; // size: 0x4, address: 0x8047CC98
static void (* fixupAnimationEventCallback)(TBActor *, TBActorNode *, TBActorAnimEvent *); // size: 0x4, address: 0x8047D5AC
static void (* freeAnimationEventCallback)(TBActor *, TBActorNode *, TBActorAnimEvent *); // size: 0x4, address: 0x8047D5B0
void (* playAnimationEventCallback)(TBActorInstance *, TBActorNodeInstance *, TBActorAnimEvent *, TBActorAnimSegment *, int, int); // size: 0x4, address: 0x8047D5B4
int bGCLightMapTextureFixEnabled; // size: 0x4, address: 0x8047D5B8
static TBCameraInstance cameraList; // size: 0x60, address: 0x8040FD80
static TBCameraInstance * currentCamera; // size: 0x4, address: 0x8047CCA0
TBExtraSystem bExtraSystemList; // size: 0xC0, address: 0x8040FDE0
TBVector bShaderScale; // size: 0x10, address: 0x8040FEA0
typedef struct _GDLObj GDLObj;
typedef TBEffectBlurCallback * GDOverflowCallback;
GDLObj * __GDCurrentDL; // size: 0x4
// total size: 0x8
struct _GDGList {
    // Members
    void * ptr; // offset 0x0, size 0x4
    unsigned int byteLength; // offset 0x4, size 0x4
};
typedef struct _GDGList GDGList;
// total size: 0x14
struct _GDFileHeader {
    // Members
    unsigned int versionNumber; // offset 0x0, size 0x4
    unsigned int numDLs; // offset 0x4, size 0x4
    unsigned int numPLs; // offset 0x8, size 0x4
    GDGList * DLDescArray; // offset 0xC, size 0x4
    GDGList * PLDescArray; // offset 0x10, size 0x4
};
typedef struct _GDFileHeader GDLFileHeader;
// total size: 0x4
struct _TDLHeaderGCUBE {
    // Members
    unsigned char pad; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned short noofVertices; // offset 0x2, size 0x2
};
typedef struct _TDLHeaderGCUBE TDLHeaderGCUBE;
typedef void (* bdSkinFunc)(TBActorInstance *, TBSoftSkinPrim *, int, unsigned char *, int, int, int);
typedef void (* bdSkinStartFunc)(TBActorInstance *, int, int);
int bActorInstEnvMatrixCacheFlag; // size: 0x4, address: 0x8047D5BC
int bUseZFailShadowVolumes; // size: 0x4, address: 0x8047CCA4
GXColor bStencilShadowGxCol; // size: 0x4, address: 0x8047CCA8
int bShowPatchControls; // size: 0x4, address: 0xFFFFFFFF
void (* drawFuncLUT[6])(TBActorInstance *, unsigned int, TBMeshBatch *, TBMeshPrim *, int, int, TBVertexBuffer *); // size: 0x18, address: 0x8038347C
void (* bMeshDrawUserCallback)(TBActorInstance *, unsigned int, TBMeshBatch *, TBMeshPrim *, int, int, TBVertexBuffer *); // size: 0x4, address: 0x8047CCB8
static TBMesh * bMeshAt; // size: 0x4, address: 0x8047D5C0
int bDLSegmentAt; // size: 0x4, address: 0x8047D5C4
static void (* drawSkinFuncLUT[6])(TBActorInstance *, TSoftSkinRenderModeState *, unsigned int, TBSoftSkinBatch *, TBSoftSkinPrim *, int, int, TBVertexBuffer *); // size: 0x18, address: 0x80383494
static void (* drawSkinFuncDLIndexedLUT[6])(TBActorInstance *, TSoftSkinRenderModeState *, unsigned int, TBSoftSkinBatch *, TBSoftSkinPrim *, int, int, TBVertexBuffer *); // size: 0x18, address: 0x803834AC
void (* bSoftSkinDrawUserCallback)(TBActorInstance *, TSoftSkinRenderModeState *, unsigned int, TBSoftSkinBatch *, TBSoftSkinPrim *, int, int, TBVertexBuffer *); // size: 0x4, address: 0x8047CCBC
float vertexMatrixList[4][4][128]; // size: 0x2000, address: 0x8040FEB0
float normalMatrixList[4][4][128]; // size: 0x2000, address: 0x80411EB0
static TSoftSkinRenderModeState softSkinRenderModeState[17]; // size: 0x154, address: 0x803834C4
float actorVertexStore[6144]; // size: 0x6000, address: 0x80413EB0
typedef struct _TCalcShadowVolumeInfo TCalcShadowVolumeInfo;
int bActiveLight[6]; // size: 0x18, address: 0x80419EB0
GXLightID bLightChannelLUT[8]; // size: 0x20, address: 0x80383618
int bSpecularEnabled; // size: 0x4, address: 0x8047D5C8
GXLightObj defaultLight; // size: 0x40, address: 0x80419EC8
static TBSet * lastSetDrawn; // size: 0x4, address: 0x8047D5CC
static unsigned int lastSetFrame; // size: 0x4, address: 0x8047D5D0
int bCellsDrawnPerc; // size: 0x4, address: 0x8047D5D4
GXLightID channelLUT[8]; // size: 0x20, address: 0x80383638
int lightWasOn; // size: 0x4, address: 0x8047D5D8
GXLightObj outlineLight; // size: 0x40, address: 0x80419F08
static int basicStages; // size: 0x4, address: 0x8047D5DC
typedef void (* TBShaderSetupFunc)(TBActorInstance *, int);
typedef void (* TBShaderShutdownFunc)(TBActorInstance *, int);
// total size: 0x8
struct _TBShaderFuncs {
    // Members
    void (* setup)(TBActorInstance *, int); // offset 0x0, size 0x4
    void (* shutdown)(TBActorInstance *, int); // offset 0x4, size 0x4
};
typedef struct _TBShaderFuncs TBShaderFuncs;
TBShaderFuncs shader[17]; // size: 0x88, address: 0x80383658
typedef void (* TSetFixUpCallback)(TBSet *);
typedef void (* TSetDeleteCallback)(TBSet *);
typedef void (* TSetDrawCallback)(TBSet *, int);
static void (* fixupSet[1])(TBSet *); // size: 0x4, address: 0x8047CCD0
static void (* deleteSet[1])(TBSet *); // size: 0x4, address: 0x8047CCD4
static void (* drawSet[1])(TBSet *, int); // size: 0x4, address: 0xFFFFFFFF
typedef struct TBBlendDataWeights TBBlendDataWeights;

