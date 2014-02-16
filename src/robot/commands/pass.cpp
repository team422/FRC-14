#include "pass.hpp"
#include "../subsystems/subsystems.hpp"

Pass::Pass() {
	Requires(Subsystems::catapult);
	Requires(Subsystems::puller);
}

void Pass::Initialize() {
	Subsystems::catapult->release_lock();
	Subsystems::puller->raise();
}

bool Pass::IsFinished() {
	return Subsystems::puller->is_up();
}
