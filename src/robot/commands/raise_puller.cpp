#include "raise_puller.hpp"
#include "../subsystems/subsystems.hpp"

Raise_Puller::Raise_Puller() {
	Requires(Subsystems::catapult);
}

void Raise_Puller::Initialize() {
	Subsystems::catapult->release_puller();
}

bool Raise_Puller::IsFinished() {
	return Subsystems::catapult->is_puller_up();
}
