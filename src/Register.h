#ifndef REGISTER_H
#define REGISTER_H

typedef unsigned char byte;

class Register {
public:
    Register(byte* bus);

    void set();

    void clear();

    byte enable();

private:
    byte* data_bus;
    byte data;
};

#endif // REGISTER_H
