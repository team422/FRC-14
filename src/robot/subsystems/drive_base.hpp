#ifndef DRIVE_BASE_HPP
#define DRIVE_BASE_HPP

#include <WPILib.h>

class Drive_Base : public Subsystem {
public:
	Drive_Base();
	void InitDefaultCommand();
	void set_motors_normalized(float left_speed, float right_speed);
	void shift_high_gear();
	void shift_low_gear();
	void toggle_gear();

private:
	Talon *left_motor, *right_motor;
	DoubleSolenoid *shifter;
};

#endif // DRIVE_BASE_HPP
