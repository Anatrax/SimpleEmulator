#include "D_Latch.h"

D_Latch::D_Latch(bool* data_wire)
{
    data = data_wire;

    Q = true;   // Q defaults to true
    Q_inverse = !Q;
}

void D_Latch::set()
{
    Q = *data;
    Q_inverse = !Q;
}

byte D_Latch::enable(bool invert)
{
    return (invert) ? Q_inverse : Q;
}
