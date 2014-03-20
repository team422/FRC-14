#include "fire.hpp"
#include "../subsystems/subsystems.hpp"

Fire::Fire() :
can_fire(true) {
	Requires(Subsystems::catapult);
	Requires(Subsystems::puller);
	Requires(Subsystems::tilter);
	SetTimeout(3);
	SetInterruptible(false);
}

void Fire::Initialize() {
	can_fire = !Subsystems::catapult->is_safety_enabled()
		|| Subsystems::tilter->is_lowered();

	if(can_fire) {
		Subsystems::catapult->engage_lock();
		Subsystems::puller->raise();
	}
}

void Fire::Execute() {
	if( can_fire && Subsystems::puller->is_up() ) {
		Subsystems::catapult->release_lock();
	}
}

bool Fire::IsFinished() {
	return !can_fire || IsTimedOut();
}
