#pragma once

/**
 * When you #include a header with inline functions, the compiler adds their
 * strings and constant data to the object file even if the functions aren't used.
 * This is bad when we're trying to split unity-built objects into smaller files.
 *
 * To fix this, we create object files that store *only* the inline .rodata for each unit.
 * Then, in the headers where the inlines are defined, we use the CURRENT_UNIT and UNIT_DATA
 * macros to find which data symbols to reference.
 *
 * At the top of the .c/.cpp file that'll hold the data, define UNIT_DATA_IMPL
 * and #include the headers with the inlines you're using.
 * CURRENT_UNIT needs to be defined by the build system.
 */

#define _UNIT_STRINGIFY_IMPL(x) #x
#define UNIT_STRINGIFY(x) _UNIT_STRINGIFY_IMPL(x)
#define _UNIT_CONCAT_IMPL(a, b) a ## b
#define UNIT_CONCAT(a, b) _UNIT_CONCAT_IMPL(a, b)

#ifdef UNIT_DATA_IMPL
    #define DEFINE_UNIT_STRING(name, str) \
        extern const char __attribute__((section(".rodata"))) UNIT_CONCAT(_unit_data_##name##_, CURRENT_UNIT)[] = str;
#else
    #define DEFINE_UNIT_STRING(name, str) \
        extern const char UNIT_CONCAT(_unit_data_##name##_, CURRENT_UNIT)[];
#endif

#define UNIT_DATA(name, value) UNIT_CONCAT(_unit_data_##name##_, CURRENT_UNIT)
