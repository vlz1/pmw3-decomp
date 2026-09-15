#include <dolphin/types.h>
#include <bKernel/heap.h>
#include <bMaths/dataArray.h>

unsigned int bCRCtable[256];

#include "../Babel/Common/Src/bKernel/verbosity.cpp"
#include "../Babel/Common/Src/bKernel/crc32.cpp"
#include "../Babel/GameCube/Src/bKernel/gcKernel.cpp"
#include "../Babel/GameCube/Src/bKernel/gcPerfMon.cpp"
#include "../Babel/GameCube/Src/bKernel/gcTimer.cpp"
