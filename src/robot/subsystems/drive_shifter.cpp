#include "drive_shifter.hpp"
#include "../port_mapping.hpp"
#include "../commands/shift_gear.hpp"
#include <WPILib.h>

Drive_Shifter::Drive_Shifter() :
	Subsystem("Drive_Shifter"),
	shifter( new DoubleSolenoid(3,Ports::Solenoids::SHIFTER_HIGH_GEAR,Ports::Solenoids::SHIFTER_LOW_GEAR) ) {
}

void Drive_Shifter::InitDefaultCommand() {
	SetDefaultCommand( new Shift_Gear(Drive_Shifter::High) );
}

void Drive_Shifter::set_gear(bool gear) { //True for high, False for low
	if (gear) {
		shifter->Set(DoubleSolenoid::kForward);
	}
	else {
		shifter->Set(DoubleSolenoid::kReverse);
	}
}

