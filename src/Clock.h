#ifndef CLOCK_H
#define CLOCK_H

class Clock {
private:
	bool tick_tock;
	bool halted;
public:

	Clock();

	int tick(bool manualStep = false);

	void start();

	void halt();
};

#endif // CLOCK_H