#include "drive_straight.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Drive_Straight::Drive_Straight(float distance) :
distance(distance) {
	Requires(Subsystems::drive_base);
}

void Drive_Straight::Initialize() {
	Subsystems::drive_base->reset_distance();
}

void Drive_Straight::Execute() {
	float correction = Subsystems::drive_base->get_left_distance()
	                 - Subsystems::drive_base->get_right_distance();

	correction *= .075;
	correction += 1;

	Subsystems::drive_base->set_motors_normalized(-0.325, -0.325 * correction);
}

bool Drive_Straight::IsFinished() {
	return Subsystems::drive_base->get_left_distance() > distance ||
	       Subsystems::drive_base->get_right_distance() > distance;
}

void Drive_Straight::End() {
	Subsystems::drive_base->set_motors_normalized( 0.0, 0.0 );
}

void Drive_Straight::Interrupted() {
	Subsystems::drive_base->set_motors_normalized( 0.0, 0.0 );
}
