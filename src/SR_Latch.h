#ifndef SR_LATCH_H
#define SR_LATCH_H

typedef unsigned char byte;

class SR_Latch {
public:
    SR_Latch(bool* set_wire, bool* reset_wire);
    byte readBit(bool invert = false);
private:
    bool* set;
    bool* reset;
    bool Q;
    bool Q_inverse;
};

#endif // SR_LATCH_H
