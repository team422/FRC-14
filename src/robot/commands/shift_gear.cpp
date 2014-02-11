#include "shift_gear.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Shift_Gear::Shift_Gear( bool gear) { //True for high, False for low
	Requires(Subsystems::drive_shifter);
	newgear = gear;
}

void Shift_Gear::Initialize() {
	if (newgear) {
		Subsystems::drive_shifter->set_gear(Drive_Shifter::High);
	}
	else {
		Subsystems::drive_shifter->set_gear(Drive_Shifter::Low);
	}
}

bool Shift_Gear::IsFinished() {
	return true;
}
