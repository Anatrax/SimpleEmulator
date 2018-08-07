#include "ALU.h"
#include <iostream>

ALU::ALU(Register *A_reg, Register *B_reg, byte *data)
{
    A = A_reg;
    B = B_reg;
    data_bus = data;
}

byte ALU::out(bool subtract)
{
    if(subtract) return static_cast<byte>( A->enable() + (~B->enable() + 0x1) );
    else return static_cast<byte>( A->enable() + B->enable() );
}
