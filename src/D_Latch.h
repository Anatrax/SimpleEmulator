#ifndef D_LATCH_H
#define D_LATCH_H

typedef unsigned char byte;

class D_Latch {
public:
    D_Latch(bool* data_wire);

    void set();

    byte enable(bool invert = false);

private:
    bool* data;
    bool Q;
    bool Q_inverse;
};

#endif // D_LATCH_H
