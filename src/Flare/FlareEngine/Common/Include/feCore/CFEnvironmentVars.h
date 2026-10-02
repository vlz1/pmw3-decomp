#pragma once

struct TFEnvironmentVar
{
    char name[24]; // offset 0x0, size 0x18
    unsigned int nameCrc; // offset 0x18, size 0x4
    char* longVal; // offset 0x1C, size 0x4
    char shortVal[8]; // offset 0x20, size 0x8
};

struct CFEnvironmentVars
{
    CFEnvironmentVars();
    ~CFEnvironmentVars();

    void SetVar(char* varName, char* varVal, int exclusive);
    TFEnvironmentVar* FindVar(char* varName, int* counter);
    char* FindVarVal(char* varName, int* counter);
    void fFromCommandLine();
    void Free();

    TFEnvironmentVar* index; // offset 0x0, size 0x4
    int indexSize; // offset 0x4, size 0x4
    int indexMax; // offset 0x8, size 0x4
};

extern CFEnvironmentVars* feEnvVars;
