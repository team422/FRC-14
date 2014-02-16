#ifndef COLLECTOR_HPP
#define COLLECTOR_HPP

#include <WPILib.h>

class Collector : public Subsystem {
public:
	Collector();
	void InitDefaultCommand();
	void set_intake_normalized(float speed);
	void raise();
	void lower();
	void toggle_position();
	bool is_lowered();

private:
	Talon *intake;
	DoubleSolenoid *tilter;
	DigitalInput *down_switch;
};

#endif // COLLECTOR_HPP
