#include "fire_catapult.hpp"
#include "../subsystems/subsystems.hpp"

Fire_Catapult::Fire_Catapult() {
	Requires(Subsystems::catapult);
}

void Fire_Catapult::Initialize() {
	Subsystems::catapult->release_puller();
}

bool Fire_Catapult::IsFinished() {
	return Subsystems::catapult->is_puller_up();
}

void Fire_Catapult::End() {
	Subsystems::catapult->release_lock();
}
