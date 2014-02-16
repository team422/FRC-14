#ifndef PULLER_HPP
#define PULLER_HPP

#include <WPILib.h>

class Puller : public Subsystem {
public:
	Puller();
	void InitDefaultCommand();
	void lower();
	void raise();
	bool is_up();
	bool is_down();

private:
	DoubleSolenoid *puller;
	DigitalInput *top_switch,
	             *bottom_switch;
};

#endif // PULLER_HPP
