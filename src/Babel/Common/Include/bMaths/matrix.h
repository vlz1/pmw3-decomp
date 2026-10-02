#pragma once

void bmMatTranslate(float dest[4][4], float x, float y, float z);
void bmMatScale(float dest[4][4], float x, float y, float z);
void bmMatMultiplyVector(const float mat[4][4], float* dest);
void bmMatMultiplyVector2(float* dest, const float mat[4][4], const float* src);
void bmMatMultiply33Vector(const float mat[4][4], float* dest);
void bmMatMultiply33Vector2(float* dest, const float mat[4][4], const float* src);
void bmMatTranspose(float dest[4][4], const float src[4][4]);
