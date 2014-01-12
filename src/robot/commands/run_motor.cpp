#include "run_motor.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Run_Motor::Run_Motor() {
	Requires(Subsystems::generic_motor);
}

void Run_Motor::Execute() {
	float speed = UI::Secondary_Driver::joystick->GetY();
	Subsystems::generic_motor->set_motor_normalized(speed);
}

bool Run_Motor::IsFinished() {
	return false;
}
