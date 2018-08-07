#include "catch.hpp"
#include "../src/Socket.h"

TEST_CASE( "IO_Port/data bus out" )
{
//    byte data_bus = 0xc4;
//    IO_Port printer(&data_bus);

//    printer.display();
//    system( &printer.enable() );
//    //data_bus = printer.enable();
//    //REQUIRE( data_bus == 0xc4 );
    system("C:\\Windows\\WinSxS\\amd64_microsoft-windows-telnet-client_31bf3856ad364e35_10.0.17134.1_none_9db21dbc8e34d070\\telnet localhost 8080 -f IO_Log.txt");
    system("echo %PATH%");
}
