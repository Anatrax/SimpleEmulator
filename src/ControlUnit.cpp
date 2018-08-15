#include "ControlUnit.h"

ControlUnit::ControlUnit(byte* instruction_register) : microcounter(instruction_register) {}

control_word ControlUnit::decode_micro_instruct()
{
    microcounter.increment();
    //*ctrl_bus |= PC_OUT | MEM_REG_SET;
    //*ctrl_bus |= RAM_ENABLE | INSTRUCTION_IN;
    //  if interrupt flag is set, save current instruction & handle interrupt   //funciton array
    //interpret current instruction
    //
    //int opcode = *ctrl_bus & 0xf0;
    //int address = *ctrl_bus & 0x0f;
}
