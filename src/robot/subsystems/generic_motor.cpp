#include "generic_motor.hpp"
#include "../port_mapping.hpp"
#include "../commands/run_motor.hpp"
#include <WPILib.h>

Generic_Motor::Generic_Motor() :
	Subsystem("Generic_Motor"),
	motor( new Talon(Ports::Digital_Channels::GENERIC_MOTOR) ) {
}

void Generic_Motor::InitDefaultCommand() {
	SetDefaultCommand( new Run_Motor() );
}

void Generic_Motor::set_motor_normalized(float speed) {
	motor->Set(speed);
}

