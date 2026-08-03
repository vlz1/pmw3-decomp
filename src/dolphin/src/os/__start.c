#include <dolphin/base/PPCArch.h>
#include "__os.h"

typedef struct __rom_copy_info {
    char* rom;
    char* addr;
    unsigned int size;
} __rom_copy_info;

__declspec(section ".init") extern __rom_copy_info _rom_copy_info[];

__declspec(section ".init") __declspec(weak) asm void __start(void)
{
    nofralloc
    bl __init_hardware
    li r0, -1
}

__declspec(section ".init") int _ParseCmdLine(void)
{
    return 0;
}
