#ifndef CLOCK_H
#define CLOCK_H

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
