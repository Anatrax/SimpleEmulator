#include "Counter.h"

Counter::ProgramCounter(byte* addrs_bus)
{
    address_bus = addrs_bus;
    instruction_address = 0x0;
}

void Counter::increment()
{
    instruction_address = static_cast<byte>(instruction_address + 0x1);
}

void Counter::jump()
{
    instruction_address = *address_bus;
}

void Counter::clear()
{
    instruction_address = 0x0;
}

byte Counter::out()
{
    return instruction_address;
}
