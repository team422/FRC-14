#include "override_safety.hpp"
#include "../subsystems/subsystems.hpp"

void Override_Safety::Initialize() {
	Subsystems::catapult->disable_safety();
}

bool Override_Safety::IsFinished() {
	return false;
}

void Override_Safety::Interrupted() {
	Subsystems::catapult->enable_safety();
}
