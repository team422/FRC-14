#include "fire_if_hot.hpp"
#include "../subsystems/subsystems.hpp"

Fire_If_Hot::Fire_If_Hot() :
can_fire(true),
is_hot(false) {
	Requires(Subsystems::catapult);
	Requires(Subsystems::puller);
	Requires(Subsystems::collector);
	SetTimeout(3);
	SetInterruptible(false);
}

void Fire_If_Hot::Initialize() {
	is_hot = Subsystems::vision->is_goal_hot();
	if( !is_hot ) {
		return;
	}
	
	can_fire = !Subsystems::catapult->is_safety_enabled()
		|| Subsystems::collector->is_lowered();

	if(can_fire) {
		Subsystems::catapult->engage_lock();
		Subsystems::puller->raise();
	}
}

void Fire_If_Hot::Execute() {
	if( is_hot && can_fire && Subsystems::puller->is_up() ) {
		Subsystems::catapult->release_lock();
	}
}

bool Fire_If_Hot::IsFinished() {
	return !is_hot || !can_fire || IsTimedOut();
}
