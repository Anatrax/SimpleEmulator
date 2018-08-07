#ifndef PROGRAMCOUNTER_H
#define PROGRAMCOUNTER_H

typedef unsigned char byte;

class ProgramCounter {
public:
    ProgramCounter(byte* bus);

    void increment();

    void jump();

    void clear();

    byte out();

private:
    byte* address_bus;
    byte instruction;
};

#endif // PROGRAMCOUNTER_H
