#include "fire.hpp"
#include "../subsystems/subsystems.hpp"

Fire::Fire() :
can_fire(true) {
	Requires(Subsystems::catapult);
	Requires(Subsystems::puller);
	Requires(Subsystems::collector);
	SetTimeout(10);
	SetInterruptible(false);
}

void Fire::Initialize() {
	can_fire = !Subsystems::catapult->is_safety_enabled()
		|| Subsystems::collector->is_lowered();

	if(can_fire) {
		Subsystems::catapult->engage_lock();
		Subsystems::puller->raise();
	}
}

bool Fire::IsFinished() {
	return !can_fire || IsTimedOut();
}

void Fire::End() {
	Subsystems::catapult->release_lock();
}
