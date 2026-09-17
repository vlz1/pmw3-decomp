#pragma once

#include <bKernel/resource.h>

typedef struct _TBStringCommand
{
    unsigned char commandType; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned char duration; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    union
    {
        // total size: 0x4
        struct
        {
            struct _TBTexture* glyphTexture; // offset 0x0, size 0x4
        } glyphParms; // offset 0x0, size 0x4
        // total size: 0x4
        struct
        {
            unsigned char period; // offset 0x0, size 0x1
            unsigned char offset; // offset 0x1, size 0x1
            unsigned char amplitude; // offset 0x2, size 0x1
            unsigned char axes; // offset 0x3, size 0x1
        } waveParms; // offset 0x0, size 0x4
        // total size: 0x4
        struct
        {
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        } colourParms; // offset 0x0, size 0x4
        // total size: 0x1
        struct
        {
            unsigned char tilt; // offset 0x0, size 0x1
        } italicParms; // offset 0x0, size 0x1
    }; // offset 0x4, size 0x4
} TBStringCommand;

typedef struct _TBStringTableString
{
    TBStringCommand* commands; // offset 0x0, size 0x4
    unsigned short* string; // offset 0x4, size 0x4
    int length; // offset 0x8, size 0x4
    char* audioFilename; // offset 0xC, size 0x4
    unsigned int crc; // offset 0x10, size 0x4
    char** extraColumns; // offset 0x14, size 0x4
} TBStringTableString;

typedef struct _TBStringTable
{
    TBResourceInfo resInfo; // offset 0x0, size 0x20
    TBStringTableString* strings; // offset 0x20, size 0x4
    unsigned int noofStrings; // offset 0x24, size 0x4
    unsigned int flag; // offset 0x28, size 0x4
    TBStringTableString** hashTable; // offset 0x2C, size 0x4
    unsigned int noofExtraColumns; // offset 0x30, size 0x4
    TBStringCommand* commands; // offset 0x34, size 0x4
    unsigned int noofCommands; // offset 0x38, size 0x4
} TBStringTable;
