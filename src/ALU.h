#ifndef ALU_H
#define ALU_H

#include "Register.h"

class ALU {
public:
    ALU(Register* A_reg, byte* B_reg, byte* out_bus);

    /**
     * @brief out outputs the result of A + B
     * @param subtract : add negative B
     */
    byte out(bool subtract = false);

private:
    Register* A;
    byte* B;
    //char flags;   // carry, 0, interrupt disable, decimal mode, break, overflow, negative, <, >, ==
    byte* data_bus;
};

#endif // ALU_H
