#ifndef SR_LATCH_H
#define SR_LATCH_H

#include "ElectricalWire.h"

typedef unsigned char byte;

class SR_Latch {
public:
    SR_Latch(ElectricalWire* set_wire, ElectricalWire* reset_wire);
    byte readBit(bool invert = false);
private:
    bool* set;
    bool* reset;
    bool Q;
    bool Q_inverse;
};

#endif // SR_LATCH_H
