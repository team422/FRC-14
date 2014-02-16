#include "drive_base.hpp"
#include "../commands/tank_drive.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Drive_Base::Drive_Base() :
Subsystem("Drive_Base"),
left_motor( new Talon(Ports::Digital_Channels::LEFT_DRIVE_MOTOR) ),
right_motor( new Talon(Ports::Digital_Channels::RIGHT_DRIVE_MOTOR) ),
shifter( new DoubleSolenoid(Ports::Solenoids::SHIFTER_HIGH_GEAR,
                            Ports::Solenoids::SHIFTER_LOW_GEAR) ),
is_drive_reversed(false) {
	shifter->Set(DoubleSolenoid::kForward);
}

void Drive_Base::InitDefaultCommand() {
	SetDefaultCommand( new Tank_Drive() );
}

void Drive_Base::set_motors_normalized(float left_speed, float right_speed) {

	// Flip which direction is the "front" when the drive is reversed.
	if(is_drive_reversed) {
		left_motor->Set(-right_speed);
		right_motor->Set(-left_speed);
	}
	else {
		left_motor->Set(left_speed);
		right_motor->Set(right_speed);
	}
}

void Drive_Base::shift_high_gear() {
	shifter->Set(DoubleSolenoid::kForward);
}

void Drive_Base::shift_low_gear() {
	shifter->Set(DoubleSolenoid::kReverse);
}

void Drive_Base::toggle_gear() {
	if (shifter->Get() == DoubleSolenoid::kForward) {
		shifter->Set(DoubleSolenoid::kReverse);
	}
	else {
		shifter->Set(DoubleSolenoid::kForward);
	}
}

void Drive_Base::reverse_drive() {
	is_drive_reversed = !is_drive_reversed;
}
