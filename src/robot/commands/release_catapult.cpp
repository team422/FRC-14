#include "release_catapult.hpp"
#include "../subsystems/subsystems.hpp"

Release_Catapult::Release_Catapult() {
	Requires(Subsystems::catapult);
	SetTimeout(0.5);
}

void Release_Catapult::Initialize() {
	if( Subsystems::collector->is_lowered() ) {
		Subsystems::catapult->release_lock();
	}
}

bool Release_Catapult::IsFinished() {
	return IsTimedOut();
}
