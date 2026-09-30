#pragma once

enum EBVerboseLevel
{
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

#define MODULE_KERNEL    (1 << 0)
#define MODULE_COLLISION (1 << 2)
#define MODULE_DISPLAY   (1 << 3)
#define MODULE_ACTOR     (1 << 4)
#define MODULE_INPUT     (1 << 5)
#define MODULE_SAVE      (1 << 5) // gamesave module seems to use the same bit as bInput
#define MODULE_SOUND     (1 << 7)

#define VERBOSE_OUTPUT_ENABLED(module) ((bVerboseModule & module) && (bVerboseLevel > 0))
