#pragma once

inline void bmVectorAdd(float* dest, const float* src1, const float* src2)
{
    dest[0] = src1[0] + src2[0];
    dest[1] = src1[1] + src2[1];
    dest[2] = src1[2] + src2[2];
}

inline void bmVectorAdd(float* src1, const float* src2)
{
    src1[0] += src2[0];
    src1[1] += src2[1];
    src1[2] += src2[2];
}

inline void bmVectorAdd4(float* dest, const float* src1, const float* src2)
{
    dest[0] = src1[0] + src2[0];
    dest[1] = src1[1] + src2[1];
    dest[2] = src1[2] + src2[2];
    dest[3] = src1[3] + src2[3];
}

inline void bmVectorAdd4(float* src1, const float* src2)
{
    src1[0] += src2[0];
    src1[1] += src2[1];
    src1[2] += src2[2];
    src1[3] += src2[3];
}

inline float bmVectorDot(const float* src1, const float* src2)
{
    return (
        (src1[0] * src2[0]) +
        (src1[1] * src2[1]) +
        (src1[2] * src2[2])
    );
}

inline float bmVectorDot4(const float* src1, const float* src2)
{
    return (
        (src1[0] * src2[0]) +
        (src1[1] * src2[1]) +
        (src1[2] * src2[2]) +
        (src1[3] * src2[3])
    );
}
