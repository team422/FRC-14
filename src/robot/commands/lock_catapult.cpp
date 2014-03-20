#include "lock_catapult.hpp"
#include "../subsystems/subsystems.hpp"

Lock_Catapult::Lock_Catapult() {
	Requires(Subsystems::catapult);
}

void Lock_Catapult::Initialize() {
	Subsystems::catapult->engage_lock();
}

bool Lock_Catapult::IsFinished() {
	return true;
}
