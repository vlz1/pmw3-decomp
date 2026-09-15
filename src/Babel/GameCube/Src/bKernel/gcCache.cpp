#include <dolphin/os/OSCache.h>
#include <bKernel/cache.h>

// In the Creature from the Krusty Krab DWARF, those parameters are really called "scrAddr".

void bkSRAMWriteFromMemory(void* memAddr, void* scrAddr, unsigned int size)
{
    LCLoadData(scrAddr, memAddr, size);
}

void bkSRAMReadToMemory(void* memAddr, void* scrAddr, unsigned int size)
{
    LCStoreData(memAddr, scrAddr, size);
}

void bkSRAMWait()
{
    LCQueueWait(0);
}

void bkSRAMReadToCachedMemory(void* memAddr, void* scrAddr, unsigned int size)
{
    bkInvalidateDataCacheRange(memAddr, size);
    LCStoreData(memAddr, scrAddr, size);
}

void bkSRAMWriteFromCachedMemory(void* memAddr, void* scrAddr, unsigned int size)
{
    bkFlushDataCacheRange(memAddr, size);
    LCLoadData(scrAddr, memAddr, size);
}

void bkInvalidateDataCacheRange(void* memAddr, unsigned int sizeInBytes)
{
    DCInvalidateRange(memAddr, sizeInBytes);
}

void bkFlushDataCacheRange(void* memAddr, unsigned int sizeInBytes)
{
    DCFlushRange(memAddr, sizeInBytes);
}
