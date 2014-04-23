#ifndef CATAPULT_HPP
#define CATAPULT_HPP

#include <WPILib.h>

// The pistons which move the catapult
class Catapult : public Subsystem {
public:
	Catapult();
	void InitDefaultCommand();
	void engage_motor();
	void pull_back();
	void release();
	void stop_motor();
	bool is_down();
	void update_dashboard();

private:
	DoubleSolenoid *shifter;
	DigitalInput *bottom_switch;
	Talon *motor;
};

#endif // CATAPULT_HPP
