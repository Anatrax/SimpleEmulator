#ifndef ALU_H
#define ALU_H

#include "Register.h"

class ALU {
public:
    ALU(Register* A_reg, Register* B_reg, byte* data);

    /**
     * @brief out outputs the result of A + B
     * @param subtract : add negative B
     */
    byte out(bool subtract = false);

private:
    Register* A;
    Register* B;
    //char flags;   // overflow, <, >, ==, !==
    byte* data_bus;
};

#endif // ALU_H
