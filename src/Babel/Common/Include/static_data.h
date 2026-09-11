#pragma once

// Every TU's rodata section seems to start with this string.
// The "File" part is often referenced by actual code, but the other part is probably useless.

#ifdef FLARE
    static __attribute__((section(".rodata"))) const char s_File[] = "File";
#else
    static __attribute__((section(".rodata"))) const char s_File[] = "File\0\0\0\0bDataArraySort: Unimplemented sort type\n";
#endif
