#include <iostream>

using namespace std;

//#include //graphics_Library
#include "SimpleComputer.h"

struct SimpleComputer computer;

int main()
{
    // Set up render system and register input callbacks
    //setupGraphics();
    //setupInput();

    // Initialize the CPU system and load the game/OS into memory
    //computer.init();
    //computer.load();

    // Emulation loop
    for(;;)
    {
        // Emulate one cycle
        computer.emulateCycle();

        // If the draw flag is set, update the screen
        //if()
            //drawGraphics();

        // Store key press state (Press and Release)
        //cpu.setKeys();
    }

    return 0;
}
