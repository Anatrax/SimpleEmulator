#include "catch.hpp"
#include "../src/IO.h"

TEST_CASE( "IO_Port/data bus out" )
{
    byte data_bus = 0xc4;
    IO printer(&data_bus);

    printer.set();
    data_bus = 0xd3;
    data_bus = printer.get();
    REQUIRE( data_bus == 0xc4 );
}
