#include <feCore/CFSystem.h>

extern void bdCloseDisplay();

int CFSystem::fStartup()
{
    return 0;
}

void CFSystem::fShutdown()
{
    bdCloseDisplay();
}

void CFSystem::fTogglePALMode()
{
    
}
