#ifndef CATAPULT_HPP
#define CATAPULT_HPP

#include <WPILib.h>

// The pistons which move the catapult
class Catapult : public Subsystem {
public:
	Catapult();
	void InitDefaultCommand();
	void lower();
	void raise();
	bool is_down();
	void update_dashboard();
	void stop_motor();
	void run_motor_reverse();

private:
	DoubleSolenoid *catapult_solenoid;
	DigitalInput *bottom_switch;
	Talon *catapult_motor;
};

#endif // CATAPULT_HPP
