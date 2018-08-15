/**
  * @brief CPU emulation class
  * @author Samuel D. Villegas
  */
#ifndef CPU_H
#define CPU_H

#include "Types.h"
#include "Clock.h"
#include "Counter.h"
#include "Register.h"
#include "ALU.h"
#include "ControlUnit.h"

const bool SUBTRACT = true;
const bool MANUAL_STEP = false;

/**
 * @brief The CPU class represents the emulated CPU
 */
class CPU {
public:
    CPU(control_word* control_bus, byte* address_bus, byte* data_bus);

    control_word emulateCycle();

    control_word* ctrl_bus;
    byte cpu_bus;
    Clock clock;
    Counter pc;
    Register instr_reg;   // Instruction register
    Register A; // A register
    ALU acc;    // Arithmetic Logic Unit (accumulator)
    ControlUnit control_unit;

//    unsigned short opcode;
//    byte memory[4096]; // 4k memory = 4096
//    byte V[16];    // general purpose registers
//    unsigned short I;   // index register
//    unsigned short pc;  // program counter
//    byte gfx[64 * 32]; // 2048 pixels graphics
//    byte delay_timer;
//    byte sound_timer;
//    unsigned short stack[16];   // 16-level stack
//    unsigned short sp;  // stack pointer
//    byte key[16];  // hex keypad: stores current state of the key
};

#endif // CPU_H
