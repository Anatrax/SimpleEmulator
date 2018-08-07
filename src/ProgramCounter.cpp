#include "ProgramCounter.h"

ProgramCounter::ProgramCounter(byte *bus)
{
    address_bus = bus;
    instruction = 0x0;
}

void ProgramCounter::increment()
{
    instruction = static_cast<byte>(instruction + 0x1);
}

void ProgramCounter::jump()
{
    instruction = *address_bus;
}

void ProgramCounter::clear()
{
    instruction = 0x0;
}

byte ProgramCounter::out()
{
    return instruction;
}
