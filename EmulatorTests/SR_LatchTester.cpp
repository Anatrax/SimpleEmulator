//#include "catch.hpp"
//#include "../src/SR_Latch.h"

//TEST_CASE( "SR_Latch/test set" )
//{
//    bool invert = true;

//    ElectricalWire set_wire(true);
//    ElectricalWire reset_wire(false);

//    SR_Latch latch(&set_wire, &reset_wire);

//    REQUIRE( latch.readBit() == true );
//    REQUIRE( latch.readBit(invert) == false );
//}

//TEST_CASE( "SR_Latch/test reset" )
//{
//    bool invert = true;

//    ElectricalWire set_wire(false);
//    ElectricalWire reset_wire(true);

//    SR_Latch latch(&set_wire, &reset_wire);

//    REQUIRE( latch.readBit() == false );
//    REQUIRE( latch.readBit(invert) == true );
//}

//TEST_CASE( "SR_Latch/test invalid state" )
//{
//    bool invert = true;

//    ElectricalWire set_wire(true);
//    ElectricalWire reset_wire(true);

//    SR_Latch latch(&set_wire, &reset_wire);

//    REQUIRE( latch.readBit() == false );
//    REQUIRE( latch.readBit(invert) == false );
//}
