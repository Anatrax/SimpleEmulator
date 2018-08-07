#include "Register.h"

Register::Register(byte *bus)
{
    data_bus = bus;
    data = 0xff;
}

void Register::set()
{
    data = *data_bus;
}

void Register::clear()
{
    data = 0x0;
}

byte Register::enable()
{
    return data;
}
