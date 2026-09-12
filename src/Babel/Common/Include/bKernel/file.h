#pragma once

enum EBHostSeekMode
{
    EHOSTSEEK_SET = 0,
    EHOSTSEEK_CUR = 1,
    EHOSTSEEK_END = 2,
};

struct _TBFileHandleType;
typedef struct _TBFileHandleType TBFileHandleType;

int bkHostCreateFile(char* filename, int* fpPtr);
int bkHostWriteToFile(int fp, void* data, int noofBytes);
void bkCloseFile(TBFileHandleType* fp);
