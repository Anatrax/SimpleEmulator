#include "Register.h"

Register::Register(Bus* bus)
{
    in_byte = &(bus->data);
    data = 0xff;
}

void Register::set()
{
    data = *in_byte;
}

void Register::clear()
{
    data = 0x0;
}

byte Register::enable()
{
    return data;
}
