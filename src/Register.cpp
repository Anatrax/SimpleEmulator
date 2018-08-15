#include "Register.h"

Register::Register(byte* bus1, byte* bus2)
{
    input_bus = bus1;
    if(bus2)
        output_bus = bus2;
    else
        output_bus = bus1;
    data = 0xff;
}

void Register::clear()
{
    data = 0x0;
}

void Register::set()
{
    data = *input_bus;
}

byte Register::get()
{
    return data;
}

void Register::enable()
{
    *output_bus = data;
}
