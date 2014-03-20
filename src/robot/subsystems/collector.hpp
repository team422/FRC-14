#ifndef COLLECTOR_HPP
#define COLLECTOR_HPP

#include <WPILib.h>

// The collector system, including both the intake wheels and the tilting
// pistons.
class Collector : public Subsystem {
public:
	Collector();
	void InitDefaultCommand();
	void set_intake_normalized(float speed);
	void raise();
	void lower();
	void toggle_position();
	bool is_lowered();
	void update_dashboard();

private:
	Talon *intake;
	DoubleSolenoid *tilter;
	DigitalInput *down_switch;
};

#endif // COLLECTOR_HPP
