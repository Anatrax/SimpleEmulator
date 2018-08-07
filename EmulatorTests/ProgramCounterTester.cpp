//#include "catch.hpp"
//#include "../src/ProgramCounter.h"

//TEST_CASE( "ProgramCounter/count" )
//{
//    byte address_bus;
//    ProgramCounter pc(&address_bus);

//    address_bus = pc.out();
//    REQUIRE( address_bus == 0x0 );

//    pc.increment();
//    address_bus = pc.out();
//    REQUIRE( address_bus == 0x1 );

//    pc.increment();
//    address_bus = pc.out();
//    REQUIRE( address_bus == 0x2 );
//}

//TEST_CASE( "ProgramCounter/jump" )
//{
//    byte address_bus = 0xc4;
//    ProgramCounter pc(&address_bus);

//    REQUIRE( pc.out() == 0x0 );

//    pc.jump();
//    address_bus = pc.out();
//    REQUIRE( address_bus == 0xc4 );
//}

//TEST_CASE( "ProgramCounter/clear" )
//{
//    byte address_bus = 0xc4;
//    ProgramCounter pc(&address_bus);

//    pc.jump();
//    pc.clear();

//    address_bus = pc.out();
//    REQUIRE( address_bus == 0x0 );
//}
