/**
 * @brief Functions for emulating a CPU
 * @author Samuel D. Villegas
 */
#include "CPU.h"

CPU::CPU(control_word* control_bus, byte* address_bus, byte* data_bus)
    : ctrl_bus(control_bus),
      pc(address_bus),
      instr_reg(address_bus),
      A(data_bus),
      acc(&A, data_bus, data_bus),
      control_unit(address_bus) {}

control_word CPU::emulateCycle()
{
    control_word ctrl_word = 0x0;

    //on clock pulse
    if(clock.tick(MANUAL_STEP)){
        ctrl_word = control_unit.decode_micro_instruct(pc.out());
        clock.tock();
    }

    return ctrl_word;
}
