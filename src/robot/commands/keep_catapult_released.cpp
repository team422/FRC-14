#include "keep_catapult_released.hpp"
#include "../subsystems/subsystems.hpp"

Keep_Catapult_Released::Keep_Catapult_Released() {
	Requires(Subsystems::catapult);
}

void Keep_Catapult_Released::Execute() {
	Subsystems::catapult->release_lock();
}

bool Keep_Catapult_Released::IsFinished() {
	return false;
}
