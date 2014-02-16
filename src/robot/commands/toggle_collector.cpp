#include "toggle_collector.hpp"
#include "../subsystems/subsystems.hpp"

Toggle_Collector::Toggle_Collector() {
	Requires(Subsystems::collector);
}

void Toggle_Collector::Initialize() {
	Subsystems::collector->toggle_position();
}

bool Toggle_Collector::IsFinished() {
	return true;
}
