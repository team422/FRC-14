#include "toggle_catapult_lock.hpp"
#include "../subsystems/subsystems.hpp"

Toggle_Catapult_Lock::Toggle_Catapult_Lock() {
	Requires(Subsystems::catapult);
}

void Toggle_Catapult_Lock::Initialize() {
	if( Subsystems::catapult->is_lock_engaged() ) {
		if( !Subsystems::catapult->is_safety_enabled()
		    || Subsystems::collector->is_lowered() ) {
			Subsystems::catapult->release_lock();
		}
	}
	else {
		Subsystems::catapult->engage_lock();
	}	
}

bool Toggle_Catapult_Lock::IsFinished() {
	return true;
}
