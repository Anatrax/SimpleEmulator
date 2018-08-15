#ifndef REGISTER_H
#define REGISTER_H

typedef unsigned char byte;

class Register {
public:
    Register(byte* bus1, byte* bus2 = nullptr);

    void clear();

    void set();

    byte get();

    void enable();

private:
    byte* input_bus;
    byte* output_bus;
    byte data;
};

#endif // REGISTER_H
