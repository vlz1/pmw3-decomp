#include <stdlib.h>
#include <dolphin.h>
#include <dolphin/os.h>

#include "__os.h"

typedef void (*ctor_fn_t)();
typedef void (*dtor_fn_t)();

__declspec(section ".ctors") extern ctor_fn_t _ctors[]; // size: 0x0, address: 0x0
__declspec(section ".dtors") extern ctor_fn_t _dtors[]; // size: 0x0, address: 0x0

__declspec(section ".init") asm void __init_hardware(void)
{
    // clang-format off
    nofralloc
    mfmsr r0
    ori r0,r0,MSR_FP
    mtmsr r0
    mflr r31
    bl __OSPSInit
    bl __OSFPRInit
    bl __OSCacheInit
    mtlr r31
    blr
}

void __init_user(void) {
    __init_cpp();
}

void __init_cpp(void) {
	void (* * constructor)();

	// call static initializers
	for (constructor = _ctors; *constructor; constructor++) {
		(*constructor)();
	}
}

__declspec(weak) void abort(void) {
    _ExitProcess();
}

void _ExitProcess(void) {
    PPCHalt();
}
