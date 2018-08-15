#include <iostream>
#include "Clock.h"

Clock::Clock()
{
	tick_tock = 0;
    halted = true;
}

int Clock::tick(bool manualStep)
{
	if(!halted)
	{
		if(manualStep)
		{
			char blank;
            std::cin.get(blank);
        }
		tick_tock = !tick_tock;
        return tick_tock;
	}
	else
        return tick_tock;
}

void Clock::tock()
{
    tick(false);
}

void Clock::start()
{
	halted = false;
}

void Clock::halt()
{
	halted = true;
}
