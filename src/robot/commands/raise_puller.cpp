#include "raise_puller.hpp"
#include "../subsystems/subsystems.hpp"

Raise_Puller::Raise_Puller() {
	Requires(Subsystems::puller);
}

void Raise_Puller::Initialize() {
	Subsystems::puller->raise();
}

bool Raise_Puller::IsFinished() {
	return Subsystems::puller->is_up();
}
