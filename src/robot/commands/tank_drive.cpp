#include "tank_drive.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Tank_Drive::Tank_Drive() {
	Requires(Subsystems::drive_base);
}

void Tank_Drive::Execute() {
	float left = UI::Primary_Driver::controller->get_left_y();
	float right = UI::Primary_Driver::controller->get_right_y();
	Subsystems::drive_base->set_motors_normalized(left, right);
}

bool Tank_Drive::IsFinished() {
	return false;
}
