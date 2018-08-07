#ifndef RAM_H
#define RAM_H

#include "Register.h"

typedef unsigned char byte;

class RAM {
public:
    RAM(byte* bus);

    void set(byte memoryAddress);

    void clear(byte memoryAddress);

    byte enable(byte memoryAddress);

private:
    byte* data_bus;
    byte memory[256];   // 256 bytes [0-255]
};

#endif // RAM_H
