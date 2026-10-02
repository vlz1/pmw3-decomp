#include <bMaths/matrix.h>

void bmMatTranslate(float dest[4][4], float x, float y, float z)
{
    dest[3][0] = x;
    dest[3][1] = y;
    dest[3][2] = z;

    dest[0][0] = 1.0f;
    dest[1][1] = 1.0f;
    dest[2][2] = 1.0f;
    dest[3][3] = 1.0f;

    dest[0][1] = 0.0f;
    dest[0][2] = 0.0f;
    dest[0][3] = 0.0f;
    dest[1][0] = 0.0f;
    dest[1][2] = 0.0f;
    dest[1][3] = 0.0f;
    dest[2][0] = 0.0f;
    dest[2][1] = 0.0f;
    dest[2][3] = 0.0f;
}

void bmMatScale(float dest[4][4], float x, float y, float z)
{
    dest[0][0] = x;
    dest[1][1] = y;
    dest[2][2] = z;
    dest[3][3] = 1.0f;

    dest[0][1] = 0.0f;
    dest[0][2] = 0.0f;
    dest[0][3] = 0.0f;
    dest[1][0] = 0.0f;
    dest[1][2] = 0.0f;
    dest[1][3] = 0.0f;
    dest[2][0] = 0.0f;
    dest[2][1] = 0.0f;
    dest[2][3] = 0.0f;
    dest[3][0] = 0.0f;
    dest[3][1] = 0.0f;
    dest[3][2] = 0.0f;
}

typedef float ps_vec2 __attribute__ ((mode(PS)));

void bmMatMultiplyVector(const float mat[4][4], float* dest)
{
    // TODO: Paired single intrinsics
}

void bmMatMultiplyVector2(float* dest, const float mat[4][4], const float* src)
{
    // TODO: Paired single intrinsics
}

void bmMatMultiply33Vector(const float mat[4][4], float* dest)
{
    // TODO: Paired single intrinsics
}

void bmMatMultiply33Vector2(float* dest, const float mat[4][4], const float* src)
{
    // TODO: Paired single intrinsics
}

void bmMatTranspose(float dest[4][4], const float src[4][4])
{
    // TODO: Paired single intrinsics
}
