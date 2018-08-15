#ifndef CONTROLUNIT_H
#define CONTROLUNIT_H

#include "Types.h"
#include "Clock.h"
#include "Counter.h"

enum INSTRUCTION_SET {
    LDA = 0x1,
    ADD = 0x2,
    OUT = 0x3,
};

enum MICROINSTRUCTIONS {
    HALT = 0x0000,              //000000000000001
    MEM_REG_SET = 0x0001,       //000000000000010
    RAM_SET = 0x0002,           //000000000000100
    RAM_ENABLE = 0x0004,        //000000000001000
    INSTRUCT_SET = 0x0008,      //000000000010000
    INSTRUCT_ENABLE = 0x0010,   //000000000100000
    A_SET = 0x0020,             //000000001000000
    A_ENABLE = 0x0040,          //000000010000000
    ALU_SET = 0x0080,           //000000100000000
    ALU_ENABLE = 0x0100,        //000001000000000
    IO_SET = 0x0200,            //000010000000000
    IO_ENABLE = 0x0400,         //000100000000000
    PC_INC = 0x0800,            //001000000000000
    PC_SET = 0x1000,            //010000000000000
    PC_ENABLE = 0x2000,         //100000000000000
};

const bool MANUAL_STEP = true;

class ControlUnit {
public:
    ControlUnit(byte* instruction_register);

    control_word decode_micro_instruct(const byte instruction);

    Clock clock;
    Counter microcounter;
};

#endif // CONTROLUNIT_H
