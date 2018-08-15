#ifndef SIMPLECOMPUTER_H
#define SIMPLECOMPUTER_H

#include "CPU.h"
#include "RAM.h"
#include "IO.h"

struct SimpleComputer {
    SimpleComputer();

    int emulateCycle();

    byte addr_bus;  // address bus
    byte data_bus;  // data bus
    control_word ctrl_bus;    // control bus
    CPU cpu;    // central processing unit
    Register mem_reg;
    RAM memory; // volatile memory
    IO display; // simple printout
};

#endif // SIMPLECOMPUTER_H
