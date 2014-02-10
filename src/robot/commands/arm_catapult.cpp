#include "arm_catapult.hpp"
#include "../subsystems/subsystems.hpp"

Arm_Catapult::Arm_Catapult() {
	Requires(Subsystems::catapult);
}

void Arm_Catapult::Initialize() {
	Subsystems::catapult->pull_down();
	Subsystems::catapult->engage_lock();
}

bool Arm_Catapult::IsFinished() {
	return Subsystems::catapult->is_puller_down();
}

void Arm_Catapult::End() {
	Subsystems::catapult->release_puller();
}

void Arm_Catapult::Interrupted() {
	Subsystems::catapult->release_puller();
}
