#pragma once

enum EBHostSeekMode
{
    EHOSTSEEK_SET = 0,
    EHOSTSEEK_CUR = 1,
    EHOSTSEEK_END = 2,
};

typedef enum EBHostSeekMode EBHostSeekMode;

struct _TBFileHandleType;
typedef struct _TBFileHandleType TBFileHandleType;

int bkOpenFileReadOnly(char* filename, TBFileHandleType** fpPtr);
int bkOpenFileReadOnlyWithSearch(char* filename, TBFileHandleType** fp, char* fullpath, int maxlen, int flags);
void bkSeekFile(TBFileHandleType* fp, int position, EBHostSeekMode mode);
int bkReadFromFile(TBFileHandleType* fp, void* data, int noofBytes);
void bkCloseFile(TBFileHandleType* fp);
int bkHostCreateFile(char* filename, int* fpPtr);
int bkHostWriteToFile(int fp, void* data, int noofBytes);

int bOpenFileReadOnly(char* filename, TBFileHandleType** fpPtr, int usemalloc);
int bFileLength(TBFileHandleType* fp);
void bCloseFile(TBFileHandleType* fp, int usemalloc);
