#include "JK_FlipFlop.h"

JK_FlipFlop::JK_FlipFlop(bool* set_wire, bool* reset_wire)
{
    set = set_wire;
    reset = reset_wire;
    Q = false;
    Q_inverse = true;
}

void JK_FlipFlop::setBit()
{
    // invalid state just toggles Q and Q_inverse
    if(*set == *reset)
    {
        bool temp = Q;
        Q = Q_inverse;
        Q_inverse = temp;
        return;
    }

    // Otherwise, set: Q = 1 (on); reset: Q = 0 (off)
    if(*set) Q = true;
    if(*reset) Q = false;

    Q_inverse = !Q;
}

byte JK_FlipFlop::readBit(bool invert)
{
    return (invert) ? Q_inverse : Q;
}
