#include "drive_base.hpp"
#include "../commands/tank_drive.hpp"
#include "../port_mapping.hpp"

Drive_Base::Drive_Base() :
	Subsystem("Drive_Base"),
	left_motor( new Talon(Ports::Digital_Channels::LEFT_DRIVE_MOTOR) ),
	right_motor( new Talon(Ports::Digital_Channels::RIGHT_DRIVE_MOTOR) ) {}

void Drive_Base::InitDefaultCommand() {
	SetDefaultCommand( new Tank_Drive() );
}

void Drive_Base::set_motors_normalized(float left_speed, float right_speed) {
	left_motor->Set(left_speed);
	right_motor->Set(right_speed);
}
