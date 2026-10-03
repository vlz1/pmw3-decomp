#pragma once

struct TFValidationHandle
{
    inline TFValidationHandle()
    {
        Invalidate();
    }

    inline int CheckValid(TFValidationHandle& testHandle)
    {
        bool valid = testHandle.handle != handle;
        if (testHandle.handle != handle)
            testHandle.handle = handle;
        return valid;
    }

    inline void Invalidate()
    {
        handle = lastHandle++;
    }

    static unsigned int lastHandle;

    unsigned int handle; // offset 0x0, size 0x4
};
