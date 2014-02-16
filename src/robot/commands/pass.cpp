#include "pass.hpp"
#include "../subsystems/subsystems.hpp"

Pass::Pass() {
	Requires(Subsystems::catapult);
}

void Pass::Initialize() {
	Subsystems::catapult->release_lock();
	Subsystems::catapult->release_puller();
}

bool Pass::IsFinished() {
	return Subsystems::catapult->is_puller_up();
}
