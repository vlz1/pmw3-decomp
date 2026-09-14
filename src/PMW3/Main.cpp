#include <bKernel/main.h>
#include <bKernel/heap.h>

extern void fMain(void* context);
extern void* (*_register_malloc)(unsigned int);
extern void (*_register_free)(void*);

int main(int argc, char** argv)
{
    _register_malloc = bkMalloc;
    _register_free = bkFree;

    bInitCommandLine(argc, argv);
    bRun(fMain, NULL);
    while (true)
        ;
}
