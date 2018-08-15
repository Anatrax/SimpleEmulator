/**
 * @brief Setting up the motherboard
 * @author Samuel D. Villegas
 */
#include "SimpleComputer.h"

SimpleComputer::SimpleComputer() : cpu(&ctrl_bus, &data_bus, &data_bus), memory(&data_bus), display(&data_bus)
{
    ///////////INITIALIZING RAM HERE////////////////    // eventually replaced by loading OS from "Hard drive" into RAM
    addr_bus = 0x0;
    data_bus = 0x1; //LDA 14
    memory.set(addr_bus);

    addr_bus = 0x1;
    data_bus = 0x2; //ADD 15
    memory.set(addr_bus);

    addr_bus = 0x2;
    data_bus = 0x3; //OUT
    memory.set(addr_bus);

    addr_bus = 0xd; //0x(14)
    data_bus = 0x3; //4
    memory.set(addr_bus);

    addr_bus = 0xe; //0x(15)
    data_bus = 0x3; //3
    memory.set(addr_bus);

    addr_bus = 0x0;
    ///////////////////////////////////////////
}


int SimpleComputer::emulateCycle()
{
    while(true)
    {
        cpu.emulateCycle(); //fetch & decode instruction
        if(ctrl_bus & HALT)
        {
            cpu.clock.halt();
            break;
        }
        if(ctrl_bus & PC_ENABLE) memory.enable(addr_bus);
        //if(ctrl_bus & IO_ENABLE) display.get(addr_bus);
        if(ctrl_bus & INSTRUCT_ENABLE) memory.enable(addr_bus);
        if(ctrl_bus & RAM_ENABLE) memory.enable(addr_bus);
        if(ctrl_bus & A_ENABLE) memory.enable(addr_bus);
        if(ctrl_bus & ALU_ENABLE) memory.enable(addr_bus);

        if(ctrl_bus & ALU_SET) memory.enable(addr_bus);
        if(ctrl_bus & A_SET) memory.enable(addr_bus);
        if(ctrl_bus & RAM_SET) memory.set(addr_bus);
        if(ctrl_bus & INSTRUCT_SET) memory.enable(addr_bus);
        //if(ctrl_bus & IO_SET) display.set(addr_bus);
        if(ctrl_bus & PC_SET) memory.enable(addr_bus);
        if(ctrl_bus & PC_INC)
        {
            cpu.pc.increment();
            break;
        }
        display.set();
    }
    return 0;
}
