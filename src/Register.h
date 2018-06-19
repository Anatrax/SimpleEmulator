#ifndef REGISTER_H
#define REGISTER_H

#include "Bus.h"

typedef unsigned char byte;

class Register {
public:
    Register(Bus *bus);

    void set();

    void clear();

    byte enable();

private:
    byte* in_byte;
    byte data;
};

#endif // REGISTER_H
