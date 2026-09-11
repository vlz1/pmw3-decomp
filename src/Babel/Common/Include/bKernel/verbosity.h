#pragma once

enum EBVerboseLevel {
    BDVERBOSE_NONE = 0,
    BDVERBOSE_ERRORS = 1,
    BDVERBOSE_ASSERTS = 2,
    BDVERBOSE_IMPORTANTMESSAGES = 3,
    BDVERBOSE_WARNINGS = 4,
    BDVERBOSE_MESSAGES = 5,
    BDVERBOSE_VERBOSEMESSAGES = 6,
    BDVERBOSE_ALL = 7,
};

extern enum EBVerboseLevel bVerboseLevel;
extern unsigned int bVerboseModule;
extern unsigned int bVerboseFlags;

void bkSetVerboseLevel(enum EBVerboseLevel level, unsigned int module, unsigned int flags);
void bkPushVerboseLevel(enum EBVerboseLevel level, unsigned int modules, unsigned int flags);
void bkPopVerboseLevel();
char* bkDataToSafeString(unsigned char* data, int dataSize, char* buffer, int bufferSize);
