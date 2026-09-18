#pragma once

enum EBHostSeekMode
{
    EHOSTSEEK_SET = 0,
    EHOSTSEEK_CUR = 1,
    EHOSTSEEK_END = 2,
};

typedef enum EBHostSeekMode EBHostSeekMode;

typedef struct _TBFileIndex
{
    int offset; // offset 0x0, size 0x4
    unsigned int crc; // offset 0x4, size 0x4
    int size; // offset 0x8, size 0x4
    unsigned int filenameOffset; // offset 0xC, size 0x4
    unsigned int noofTags; // offset 0x10, size 0x4
    unsigned int tagOffset; // offset 0x14, size 0x4
    unsigned long long fileTime; // offset 0x18, size 0x8
} TBFileIndex;

struct _TBFileHandleType;
typedef struct _TBFileHandleType TBFileHandleType;

int bkOpenFileReadOnly(char* filename, TBFileHandleType** fpPtr);
int bkOpenFileReadOnlyWithSearch(char* filename, TBFileHandleType** fp, char* fullpath, int maxlen, int flags);
void bkSeekFile(TBFileHandleType* fp, int position, EBHostSeekMode mode);
void bkCloseFile(TBFileHandleType* fp);
int bkHostCreateFile(char* filename, int* fpPtr);
int bkHostWriteToFile(int fp, void* data, int noofBytes);
