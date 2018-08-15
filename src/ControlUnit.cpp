#include <iostream>
#include "ControlUnit.h"

ControlUnit::ControlUnit(byte* instruction_register) : microcounter(instruction_register) {}

control_word ControlUnit::decode_micro_instruct(const byte instruction)
{
    control_word ctrl_wrd = 0x0;
    //on clock pulse
    if(clock.tick(MANUAL_STEP)){
        if(microcounter.out() == 0x1) ctrl_wrd |= PC_ENABLE | MEM_REG_SET;
        else if(microcounter.out() == 0x2) ctrl_wrd |= RAM_ENABLE | INSTRUCT_SET | PC_INC;
        else {
            switch (instruction) {
                case LDA:
                    if(microcounter.out() == 0x3) ctrl_wrd |= INSTRUCT_ENABLE | MEM_REG_SET;
                    else if(microcounter.out() == 0x4)
                    {
                        microcounter.clear();
                        ctrl_wrd |= RAM_ENABLE | A_SET;
                    }
                break;
                case ADD:
                    if(microcounter.out() == 0x3) ctrl_wrd |= INSTRUCT_ENABLE | MEM_REG_SET;
                    else if(microcounter.out() == 0x4) ctrl_wrd |= RAM_ENABLE | ALU_SET;
                    else if(microcounter.out() == 0x5)
                    {
                        microcounter.clear();
                        ctrl_wrd |= ALU_ENABLE | A_SET;
                    }
                break;
                case OUT:
                    microcounter.clear();
                    ctrl_wrd |= A_ENABLE | MEM_REG_SET;
            }
        }

        clock.tock();
        microcounter.increment();
    }
    return ctrl_wrd;
}
