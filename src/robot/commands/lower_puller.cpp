#include "lower_puller.hpp"
#include "../subsystems/subsystems.hpp"

Lower_Puller::Lower_Puller() {
	Requires(Subsystems::puller);
}

void Lower_Puller::Initialize() {
	Subsystems::puller->lower();
}

bool Lower_Puller::IsFinished() {
	return Subsystems::puller->is_down();
}
