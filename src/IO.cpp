#include <iostream>
#include "IO.h"

IO::IO(byte* bus){
    data_bus = bus;
}


byte IO::get() {
    return data;
}

void IO::set() {
    data = *data_bus;
    //if(data != 0) std::cout << static_cast<int>(data) << std::endl;
}
