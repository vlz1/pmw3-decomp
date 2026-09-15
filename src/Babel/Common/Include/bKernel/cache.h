#pragma once

void bkSRAMWriteFromMemory(void* memAddr, void* scrAddr, unsigned int size);
void bkSRAMReadToMemory(void* memAddr, void* scrAddr, unsigned int size);
void bkSRAMWait();
void bkSRAMReadToCachedMemory(void* memAddr, void* scrAddr, unsigned int size);
void bkSRAMWriteFromCachedMemory(void* memAddr, void* scrAddr, unsigned int size);
void bkInvalidateDataCacheRange(void* memAddr, unsigned int sizeInBytes);
void bkFlushDataCacheRange(void* memAddr, unsigned int sizeInBytes);
