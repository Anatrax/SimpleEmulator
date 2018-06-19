#include <iostream>

using namespace std;

//#include //graphics_Library
#include "CPU.h"

CPU cpu;

int main()
{
    // Set up render system and register input callbacks
    //setupGraphics();
    //setupInput();

    // Initialize the CPU system and load the game/OS into memory
    cpu.init();
    //cpu.load();

    // Emulation loop
    for(;;)
    {
        // Emulate one cycle
        cpu.emulateCycle();

        // If the draw flag is set, update the screen
        //if()
            //drawGraphics();

        // Store key press state (Press and Release)
        //cpu.setKeys();
    }

    return 0;
}
