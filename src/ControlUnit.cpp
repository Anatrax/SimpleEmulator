#include "ControlUnit.h"

ControlUnit::ControlUnit(byte* instruction_register) : microcounter(instruction_register) {}

control_word ControlUnit::decode_micro_instruct(const byte instruction)
{
    control_word ctrl_wrd = 0x0;
    microcounter.increment();

    if(microcounter.out() == 0x1) return ctrl_wrd |= PC_ENABLE | MEM_REG_SET;
    else if(microcounter.out() == 0x2) return ctrl_wrd |= RAM_ENABLE | INSTRUCT_SET | PC_INC;
    else {
        switch (instruction) {
            case LDA:
                if(microcounter.out() == 0x3) return ctrl_wrd |= INSTRUCT_ENABLE | MEM_REG_SET;
                else if(microcounter.out() == 0x4)
                {
                    microcounter.clear();
                    return ctrl_wrd |= RAM_ENABLE | A_SET;
                }
            break;
            case ADD:
                if(microcounter.out() == 0x3) return ctrl_wrd |= INSTRUCT_ENABLE | MEM_REG_SET;
                else if(microcounter.out() == 0x4) return ctrl_wrd |= RAM_ENABLE | ALU_SET;
                else if(microcounter.out() == 0x5)
                {
                    microcounter.clear();
                    return ctrl_wrd |= ALU_ENABLE | A_SET;
                }
            break;
            case OUT:
                microcounter.clear();
                return ctrl_wrd |= A_ENABLE | MEM_REG_SET;
        }
    }
    return 0x0; // the above code assumes there are no outside cases, this line is just to make the compiler happy
}
