## __start (lib/libsn/src/crt0.s)

## main (Main.cpp)

## bRun (bKernelSourceFiles.cpp)

Sets up the CRC32 table (bCRCtable), then calls fMain (which is passed via bRun's first argument as a function pointer).

## fMain (core.cpp)

fMain is responsible for the majority of game and engine initialization.

### feClientInit (Main.cpp)

Does nothing in Pac-Man World 3, but it might do something in other FlareEngine/BlitzTech games.

### bkInit (bKernelSourceFiles.cpp)

Initializes the low-level Babel modules:
- bKernel
- bMaths
- bHeap (technically part of bKernel)
- bDisplay
- bInput
- bActor
- bSound

### feRegisterEngineClasses (core.cpp)

Registers ClassFactory functions for various engine classes through feRegisterClass.

### feRegisterClientClasses (Main.cpp)

Registers ClassFactory functions for game classes through feRegisterClass.
Also registers NodeFactory functions through frRegisterNodeFactory.

### CFSystem::fInitialise (feCoreSourceFiles.cpp)

Sets up display and language related environment variables.

### feClientEnterMainLoop (Main.cpp)

Despite the name, this function doesn't actually contain the main loop.
It only sets up game-specific environment variables and engine state.

### Main Loop

The actual main loop is in fMain, shortly after the call to feClientEnterMainLoop.
