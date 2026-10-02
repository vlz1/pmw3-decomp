float bmSqrtApprox(float f)
{
    *(int*)&f = ((*(int*)&f + -0x3F800000) >> 1) + 0x3F800000;
    return f;
}
