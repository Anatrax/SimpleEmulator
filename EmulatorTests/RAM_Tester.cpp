//#include "catch.hpp"
//#include "../src/RAM.h"

//TEST_CASE( "RAM/one register" )
//{
//    byte data_bus = 0xc4;
//    RAM swap(&data_bus);

//    byte address = 0x0;
//    REQUIRE( swap.enable(address) == 0xff );
//    swap.set(address);
//    data_bus = swap.enable(address);
//    REQUIRE( data_bus == 0xc4 );
//}

//TEST_CASE( "RAM/multiple registers" )
//{
//    byte data_bus = 0x0;
//    byte address = 0x0;
//    RAM memory(&data_bus);

//    // Load 16 into RAM address 1
//    data_bus = 0xf;
//    address = 0x1;
//    memory.set(address);
//    // Load 11 into RAM address 2
//    data_bus = 0xa;
//    address = 0x2;
//    memory.set(address);

//    // Check if memory loaded correctly
//    address = 0x1;
//    data_bus = memory.enable(address);
//    REQUIRE( data_bus == 0xf );
//    address = 0x2;
//    data_bus = memory.enable(address);
//    REQUIRE( data_bus == 0xa );

//    // Copy output from address 2 into address 3
//    address = 0x3;
//    memory.set(address);
//    // Copy address 1 into address 2
//    address = 0x1;
//    data_bus = memory.enable(address);
//    address = 0x2;
//    memory.set(address);
//    // Copy address 3 into address 1
//    address = 0x3;
//    data_bus = memory.enable(address);
//    address = 0x1;
//    memory.set(address);

//    // Check if values swapped
//    address = 0x1;
//    data_bus = memory.enable(address);
//    REQUIRE( data_bus == 0xa );
//    address = 0x2;
//    data_bus = memory.enable(address);
//    REQUIRE( data_bus == 0xf );
//}
