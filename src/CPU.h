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

enum MICROINSTRUCTIONS {
    HALT = 0x0000,
    MEM_REG_SET = 0x0001,
    RAM_SET = 0x0002,
    RAM_ENABLE = 0x0004,
    INSTRUCT_SET = 0x0008,
    INSTRUCT_ENABLE = 0x0010,
    A_SET = 0x0020,
    A_ENABLE = 0x0040,
    ALU_SET = 0x0080,
    ALU_ENABLE = 0x0100,
    IO_SET = 0x0200,
    IO_ENABLE = 0x0400,
    PC_INC = 0x0800,
    PC_SET = 0x1000,
    PC_ENABLE = 0x2000,
};

const bool SUBTRACT = true;
const bool MANUAL_STEP = false;

/**
 * @brief The CPU class represents the emulated CPU
 */
class CPU {
public:
    CPU(control_word* control_bus, byte* address_bus, byte* data_bus);

    int init();

    int load();

    int emulateCycle();

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
