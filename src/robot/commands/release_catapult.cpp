#include "release_catapult.hpp"
#include "../subsystems/subsystems.hpp"

Release_Catapult::Release_Catapult() {
	Requires(Subsystems::catapult);
	SetTimeout(0.5);
}

void Release_Catapult::Initialize() {
	Subsystems::catapult->release_lock();
}

bool Release_Catapult::IsFinished() {
	return IsTimedOut();
}
