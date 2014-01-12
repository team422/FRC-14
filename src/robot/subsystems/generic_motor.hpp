#ifndef GENERIC_MOTOR_HPP
#define GENERIC_MOTOR_HPP

#include <WPILib.h>

class Generic_Motor : public Subsystem {
public:
	Generic_Motor();
	void InitDefaultCommand();
	void set_motor_normalized(float speed);

private:
	Talon *motor;
};

#endif // GENERIC_MOTOR_HPP