#include "RAM.h"

RAM::RAM(byte *bus)
{
    data_bus = bus;
    for(int i = 0; i < 256; i++)
        memory[i] = 0xff;
}

void RAM::set(byte memoryAddress)
{
    memory[memoryAddress] = *data_bus;
}

void RAM::clear(byte memoryAddress)
{
    memory[memoryAddress] = 0xff;
}

byte RAM::enable(byte memoryAddress)
{
    return memory[memoryAddress];
}
