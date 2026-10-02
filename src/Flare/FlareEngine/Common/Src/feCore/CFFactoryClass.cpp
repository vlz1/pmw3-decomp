#include <bKernel/crc32.h>
#include <feCore/CFFactoryClass.h>

CFFactoryClass::CFFactoryClass(char* classNamePtr)
    : fRefCount(1), className(classNamePtr)
{
    classNameCrc = bkStringLwrCRC(className, 0);
}

void CFFactoryClass::AddRef()
{
    ++fRefCount;
}

int CFFactoryClass::Release()
{
    int rc;
    if ((rc = --fRefCount) == 0)
        delete this;
    return rc;
}
