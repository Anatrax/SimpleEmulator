/**
 * @brief Functions for emulating a CPU
 * @author Samuel D. Villegas
 */
#include "CPU.h"

CPU::CPU(control_word* control_bus, byte* address_bus, byte* data_bus)
    : pc(address_bus), instr_reg(address_bus), A(data_bus), acc(&A, data_bus, data_bus)
{
    ctrl_bus = control_bus;
}

int CPU::init()
{
    // initialize registers and memory
    // test I/O
    return 0;
}

int CPU::load()
{
    //open IO-HardDrive ("HardDrive.txt")
    //load bootloader
    //run bootloader (reads from partition table to load program/OS)
    return 0;
}

int CPU::emulateCycle()
{
    //on clock pulse
    if(clock.tick(MANUAL_STEP)){
        control_unit.microcounter.increment();
        control_word ctrl_word = control_unit.decode_micro_instruct(control_unit.microcounter.out());

        //*ctrl_bus |= PC_OUT | MEM_REG_SET;
        //*ctrl_bus |= RAM_ENABLE | INSTRUCTION_IN;
        //  if interrupt flag is set, save current instruction & handle interrupt   //funciton array
        //interpret current instruction
        //
        //int opcode = *ctrl_bus & 0xf0;
        //int address = *ctrl_bus & 0x0f;
        clock.tock();
    }
    return 0;
}
