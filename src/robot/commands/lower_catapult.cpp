#include "lower_catapult.hpp"
#include "../subsystems/subsystems.hpp"

Lower_Catapult::Lower_Catapult() {
	Requires(Subsystems::catapult);
}

void Lower_Catapult::Initialize() {
	Subsystems::catapult->lower();
}

bool Lower_Catapult::IsFinished() {
	return Subsystems::catapult->is_down();
}

void Lower_Catapult::End() {
    Subsystems::catapult->stop_motor();
}
