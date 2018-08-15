#ifndef CLOCK_H
#define CLOCK_H

const bool MANUAL_STEP = false;

class Clock {
public:
	Clock();

	int tick(bool manualStep = false);

    void tock();

	void start();

	void halt();

private:
    bool tick_tock;
    bool previous;
    bool halted;
};

#endif // CLOCK_H
