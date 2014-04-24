#include "toggle_collector.hpp"
#include "../subsystems/subsystems.hpp"

Toggle_Collector::Toggle_Collector() {
	Requires(Subsystems::tilter);
}

void Toggle_Collector::Initialize() {
	Subsystems::tilter->toggle_position();
}

bool Toggle_Collector::IsFinished() {
	return true;
}
