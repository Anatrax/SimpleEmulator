#ifndef COUNTER_H
#define COUNTER_H

typedef unsigned char byte;

class Counter {
public:
    Counter(byte *addrs_bus);

    void increment();

    void jump();

    void clear();

    byte out();

private:
    byte* address_bus;
    byte instruction_address;
};

#endif // COUNTER_H
