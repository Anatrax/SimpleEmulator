#ifndef IO_H
#define IO_H

class IO {
public:
    IO(byte* bus);

    byte get();

    void set();

private:
    byte* data_bus;
    byte data;
};

#endif // IO_H
