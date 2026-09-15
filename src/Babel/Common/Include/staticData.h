#pragma once

#define RODATA_LABEL(label) \
    __asm__(\
        ".section .rodata\n" \
        ".balign 4\n" \
        " " label ":" \
    );

#define KEEP_STRING(str) \
    __asm__(\
        ".section .rodata\n" \
        ".balign 4\n" \
        ".asciz \"" str "\"" \
    );
