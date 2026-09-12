#pragma once

// Every TU's rodata section seems to start with this string.
// The "File" part is often referenced by actual code, but the other part is probably useless.
#ifdef FLARE
    __asm__(
        ".section .rodata\n"
        "s_File:\n"
        ".asciz \"File\"\n"
        ".previous\n"
    );
    extern const char s_File[5];
#else
    __asm__(
        ".section .rodata\n"
        "s_File:\n"
        ".asciz \"File\\0\\0\\0\\0bDataArraySort: Unimplemented sort type\\n\"\n"
        ".previous\n"
    );
    extern const char s_File[49];
#endif

#define KEEP_STRING(str) \
    __asm__(\
        ".section .rodata\n" \
        ".align 2\n" \
        ".asciz \"" str "\"" \
    );
