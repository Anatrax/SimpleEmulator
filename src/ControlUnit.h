#ifndef CONTROLUNIT_H
#define CONTROLUNIT_H

#include "Types.h"
#include "Counter.h"

class ControlUnit {
public:
    ControlUnit(byte* instruction_register);

    control_word decode_micro_instruct(byte instruction);

    Counter microcounter;
};

#endif // CONTROLUNIT_H
