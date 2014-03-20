#include "drive_straight.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Drive_Straight::Drive_Straight(float duration) {
	Requires(Subsystems::drive_base);
	SetTimeout(duration);
}

void Drive_Straight::Initialize() {
	Subsystems::drive_base->set_motors_normalized( -0.8, -0.8 );
}

bool Drive_Straight::IsFinished() {
	return IsTimedOut();
}

void Drive_Straight::End() {
	Subsystems::drive_base->set_motors_normalized( 0.0, 0.0 );
}

void Drive_Straight::Interrupted() {
	Subsystems::drive_base->set_motors_normalized( 0.0, 0.0 );
}
