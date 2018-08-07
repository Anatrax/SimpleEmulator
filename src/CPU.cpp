/**
 * @brief Functions for emulating a CPU
 * @author Samuel D. Villegas
 */
#include "CPU.h"

CPU::CPU()
    : A(&data_bus), B(&data_bus)
{
    //
}

int CPU::init()
{
    return 0;
}

int CPU::emulateCycle()
{
    return 0;
}
