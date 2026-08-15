#pragma once

#include <dolphin/os/OSMutex.h>

OSMutex* bkCreateMutex(OSMutex* mutex);
int bkWaitMutex(OSMutex* mutex);
int bkReleaseMutex(OSMutex* mutex);
int bkDeleteMutex(OSMutex* mutex);
