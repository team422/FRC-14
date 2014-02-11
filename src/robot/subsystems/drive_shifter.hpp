#ifndef DRIVE_SHIFTER_HPP
#define DRIVE_SHIFTER_HPP

#include <WPILib.h>

class Drive_Shifter : public Subsystem {
public:
	Drive_Shifter();
	void InitDefaultCommand();
	enum shifterStates {Low, High};
	void set_gear(bool gear);

private:
	DoubleSolenoid *shifter;
};

#endif // GENERIC_MOTOR_HPP