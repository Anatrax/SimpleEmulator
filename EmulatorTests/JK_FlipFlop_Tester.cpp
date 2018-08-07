//#include "catch.hpp"
//#include "../src/JK_FlipFlop.h"

//TEST_CASE( "JK_FlipFlop/set" )
//{
//    bool set_wire = true;
//    bool reset_wire = false;
//    JK_FlipFlop flipflop(&set_wire, &reset_wire);

//    flipflop.setBit();

//    bool invert = true;
//    REQUIRE( flipflop.readBit() == true );
//    REQUIRE( flipflop.readBit(invert) == false );
//}

//TEST_CASE( "JK_FlipFlop/reset" )
//{
//    bool set_wire = false;
//    bool reset_wire = true;
//    JK_FlipFlop flipflop(&set_wire, &reset_wire);

//    flipflop.setBit();

//    bool invert = true;
//    REQUIRE( flipflop.readBit() == false );
//    REQUIRE( flipflop.readBit(invert) == true );
//}

//TEST_CASE( "JK_FlipFlop/set and toggle" )
//{
//    bool set_wire = true;
//    bool reset_wire = false;
//    JK_FlipFlop flipflop(&set_wire, &reset_wire);

//    // Set bit
//    flipflop.setBit();

//    bool invert = true;
//    REQUIRE( flipflop.readBit() == true );
//    REQUIRE( flipflop.readBit(invert) == false );

//    // Set invalid state
//    set_wire = true;
//    reset_wire = true;
//    flipflop.setBit();

//    // Check if invalid state toggled bit
//    REQUIRE( flipflop.readBit() == false );
//    REQUIRE( flipflop.readBit(invert) == true );
//}

//TEST_CASE( "JK_FlipFlop/just toggle" )
//{
//    bool set_wire = true;
//    bool reset_wire = true;
//    JK_FlipFlop flipflop(&set_wire, &reset_wire);

//    // Set invalid state
//    flipflop.setBit();

//    // Check if invalid state toggled bit
//    bool invert = true;
//    REQUIRE( flipflop.readBit() == true );
//    REQUIRE( flipflop.readBit(invert) == false );
//}
