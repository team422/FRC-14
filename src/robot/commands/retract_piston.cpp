#include "retract_piston.hpp"
#include "../subsystems/subsystems.hpp"

Retract_Piston::Retract_Piston() {
	Requires(Subsystems::catapult);
	SetTimeout(0.005);
}

void Retract_Piston::Initialize() {
	Subsystems::catapult->raise();
	Subsystems::catapult->run_motor_reverse();
}

bool Retract_Piston::IsFinished() {
	return IsTimedOut();
}

void Retract_Piston::End() {
	Subsystems::catapult->stop_motor();
}
