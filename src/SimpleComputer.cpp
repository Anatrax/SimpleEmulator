/**
 * @brief An emulated computer, greater than the sum of its parts
 * @author Samuel D. Villegas
 */
#include <iostream>
#include "SimpleComputer.h"

SimpleComputer::SimpleComputer()
    : cpu(&ctrl_bus, &data_bus, &data_bus),
      mem_reg(&data_bus),
      memory(&data_bus),
      display(&data_bus)
{
    ///////////INITIALIZING RAM HERE////////////////    // eventually replaced by loading OS from "Hard drive" into RAM
    addr_bus = 0x0;
    data_bus = 0x1e; //LDA 14
    memory.set(addr_bus);

    addr_bus = 0x1;
    data_bus = 0x2f; //ADD 15
    memory.set(addr_bus);

    addr_bus = 0x2;
    data_bus = 0x30; //OUT
    memory.set(addr_bus);

    addr_bus = 0x3;
    data_bus = 0x40; //HALT
    memory.set(addr_bus);

    addr_bus = 0xe; //0x(14)
    data_bus = 0x4; //4
    memory.set(addr_bus);

    addr_bus = 0xf; //0x(15)
    data_bus = 0x3; //3
    memory.set(addr_bus);

    addr_bus = 0x0;
    data_bus = 0x0; //3
    ///////////////////////////////////////////
}

template<typename T>
void printBinary(T a)
{
    for (int i = 7; i >= 0; i--) {
       std::cout << ((a >> i) & 1);
    }
    std::cout << std::endl;
}

int SimpleComputer::run()
{
    while(true)
    {
        ctrl_bus = cpu.getControlWord();

        if(ctrl_bus & HALT_CLOCK)
        {
            std::cout << "--Clock HALT\t\t" << std::endl;
            cpu.control_unit.clock.halt();
            break;
        }
        if(ctrl_bus & PC_ENABLE)
        {
            std::cout << "--PC OUT\t\t";
            data_bus = cpu.pc.out();
            printBinary(cpu.pc.out());
        }
        if(ctrl_bus & IO_ENABLE)
        {
            std::cout << "--Display IN\t\t";
            display.get();
            printBinary(this->display.get());
        }
        if(ctrl_bus & INSTRUCT_ENABLE)
        {
            std::cout << "--INST OUT" << std::endl;
            auto instruction_address = cpu.instr_reg.get() & 0xf0;
            data_bus = cpu.instr_reg.get() & 0xf;
            std::cout << "\t+-Instruction:\t";
            printBinary(instruction_address);
            std::cout << "\t+-Data Address:\t";
            printBinary(data_bus);
        }
        if(ctrl_bus & RAM_ENABLE)
        {
            std::cout << "--RAM OUT\t\t";
            data_bus = memory.enable(mem_reg.get());
            printBinary(memory.enable(mem_reg.get()));
        }
        if(ctrl_bus & A_ENABLE)
        {
            std::cout << "--A OUT\t\t\t";
            cpu.A.enable();
            printBinary(cpu.A.get());
        }
        if(ctrl_bus & ALU_ENABLE)
        {
            std::cout << "--ALU OUT\t\t";
            cpu.acc.out();
            printBinary(cpu.acc.out());
        }

        if(ctrl_bus & ALU_SET)
        {
            std::cout << "--ALU CMP\t\t";
            this->data_bus = cpu.acc.out();
            printBinary(this->data_bus);
        }
        if(ctrl_bus & A_SET)
        {
            std::cout << "--A IN\t\t\t";
            cpu.A.set();
            printBinary(cpu.A.get());
        }
        if(ctrl_bus & RAM_SET)
        {
            std::cout << "--RAM IN\t\t";
            memory.set(mem_reg.get());
            printBinary(this->data_bus);
        }
        if(ctrl_bus & MEM_REG_SET)
        {
            std::cout << "--Memory Register SET\t";
            mem_reg.set();
            printBinary(this->mem_reg.get());
        }
        if(ctrl_bus & INSTRUCT_SET)
        {
            std::cout << "--INST IN\t\t";
            cpu.instr_reg.set();
            printBinary(cpu.instr_reg.get());
        }
        if(ctrl_bus & IO_SET)
        {
            std::cout << "--Display OUT\t\t";
            display.set();
            printBinary(this->display.get());
        }
        if(ctrl_bus & PC_SET)
        {
            std::cout << "--PC JUMP\t\t" << std::endl;
            cpu.pc.jump();
            printBinary(cpu.pc.out());
        }
        if(ctrl_bus & PC_INC)
        {
            std::cout << "--PC INC\t\t";
            cpu.pc.increment();
            printBinary(cpu.pc.out());
        }
    }
    return 0;
}
