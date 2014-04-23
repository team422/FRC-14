#include "release.hpp"
#include "../subsystems/subsystems.hpp"

Release::Release() {
	Requires(Subsystems::catapult);
}

void Release::Initialize() {
	Subsystems::catapult->release();
}

bool Release::IsFinished() {
	return true;
}
