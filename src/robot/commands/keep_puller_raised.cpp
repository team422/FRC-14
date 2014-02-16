#include "keep_puller_raised.hpp"
#include "../subsystems/subsystems.hpp"

Keep_Puller_Raised::Keep_Puller_Raised() {
	Requires(Subsystems::catapult);
}

void Keep_Puller_Raised::Execute() {
	Subsystems::catapult->release_puller();
}

bool Keep_Puller_Raised::IsFinished() {
	return false;
}
