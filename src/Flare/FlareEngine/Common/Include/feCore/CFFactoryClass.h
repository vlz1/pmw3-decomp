#pragma once

struct CFFactoryClass
{
    CFFactoryClass(char* classNamePtr);
    inline virtual ~CFFactoryClass() { }

    void AddRef();
    int Release();

    int fRefCount; // offset 0x0, size 0x4
    char* className; // offset 0x4, size 0x4
    unsigned int classNameCrc; // offset 0x8, size 0x4
};
