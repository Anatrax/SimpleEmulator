//#include "catch.hpp"
//#include "../src/ALU.h"

//TEST_CASE( "ALU/add" )
//{
//    byte data_bus = 0x0;
//    Register A(&data_bus);
//    Register B(&data_bus);
//    ALU myAddSubtract(&A, &B, &data_bus);

//    data_bus = 0xa;
//    A.set();
//    data_bus = 0xb;
//    B.set();

//    data_bus = myAddSubtract.out();
//    REQUIRE( data_bus == 0x15 );
//}

//TEST_CASE( "ALU/subtract one" )
//{
//    const bool SUBTRACT = true;
//    byte data_bus = 0x0;
//    Register A(&data_bus);
//    Register B(&data_bus);
//    ALU myAddSubtract(&A, &B, &data_bus);

//    data_bus = 0x6e;
//    A.set();
//    data_bus = 0x1;
//    B.set();

//    data_bus = myAddSubtract.out(SUBTRACT);
//    REQUIRE( data_bus == 0x6d );
//}

//TEST_CASE( "ALU/subtract wrap-around" )
//{
//    const bool SUBTRACT = true;
//    byte data_bus = 0x0;
//    Register A(&data_bus);
//    Register B(&data_bus);
//    ALU myAddSubtract(&A, &B, &data_bus);

//    data_bus = 0x6e;
//    A.set();
//    data_bus = 0x89;
//    B.set();

//    data_bus = myAddSubtract.out(SUBTRACT);
//    REQUIRE( data_bus == 0xe5 );
//}
