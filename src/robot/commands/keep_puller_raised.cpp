#include "keep_puller_raised.hpp"
#include "../subsystems/subsystems.hpp"

Keep_Puller_Raised::Keep_Puller_Raised(float duration) {
	Requires(Subsystems::puller);
	SetTimeout(duration);
}

void Keep_Puller_Raised::Initialize() {
	Subsystems::puller->raise();
}

bool Keep_Puller_Raised::IsFinished() {
	return IsTimedOut();
}
