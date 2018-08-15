/**
  * @brief CPU emulation class
  * @author Samuel D. Villegas
  */
#ifndef CPU_H
#define CPU_H

#include "Types.h"
#include "Counter.h"
#include "Register.h"
#include "ALU.h"
#include "ControlUnit.h"

const bool SUBTRACT = true;

/**
 * @brief The CPU class represents the emulated CPU
 */
class CPU {
public:
    CPU(control_word* control_bus, byte* address_bus, byte* data_bus);

    control_word getControlWord();

    control_word* ctrl_bus;
    byte cpu_bus;
    Counter pc;
    Register instr_reg;   // Instruction register
    Register A; // A register
    ALU acc;    // Arithmetic Logic Unit (accumulator)
    ControlUnit control_unit;
};

#endif // CPU_H
