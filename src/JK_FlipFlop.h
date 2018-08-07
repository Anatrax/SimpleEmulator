/**
  * @brief JK Flipflop class
  * @author Samuel D. Villegas
  */
#ifndef JK_FLIPFLOP_H
#define JK_FLIPFLOP_H

typedef unsigned char byte;

class JK_FlipFlop {
public:
    JK_FlipFlop(bool* set_wire, bool* reset_wire);
    void setBit();
    byte readBit(bool invert = false);
private:
    bool* set;
    bool* reset;
    bool Q;
    bool Q_inverse;
};

#endif // JK_FLIPFLOP_H
