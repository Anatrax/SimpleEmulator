#include <iostream>

using namespace std;

#include "SR_Latch.h"

SR_Latch::SR_Latch(ElectricalWire* set_wire, ElectricalWire* reset_wire)
{
    set = &(set_wire->has_voltage);
    reset = &(reset_wire->has_voltage);
    Q = *set;
    Q_inverse = !Q;
}

byte SR_Latch::readBit(bool invert)
{
    if(*set) Q = true;
    if(*reset) Q = false;
    Q_inverse = !Q;

    if(*set == *reset) Q_inverse = Q; // invalid state just represented as both false

    return (invert) ? Q_inverse : Q;
}
