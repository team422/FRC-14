#include "release_catapult.hpp"
#include "../subsystems/subsystems.hpp"

Release_Catapult::Release_Catapult() {
	Requires(Subsystems::catapult);
	SetTimeout(10);
}

void Release_Catapult::Initialize() {
	if( !Subsystems::catapult->is_safety_enabled()
	    || Subsystems::collector->is_lowered() ) {
		Subsystems::catapult->release_lock();
	}
}

bool Release_Catapult::IsFinished() {
	return IsTimedOut();
}
