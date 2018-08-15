#include "ALU.h"
#include <iostream>

ALU::ALU(Register* A_reg, byte* B_reg, byte* out_bus)
{
    A = A_reg;
    B = B_reg;
    data_bus = out_bus;
}

byte ALU::out(bool subtract)
{
    if(subtract) return static_cast<byte>( A->get() + (~*B + 0x1) );
    else return static_cast<byte>( A->get() + *B );
}
