#include "lower_collector.hpp"
#include "../subsystems/subsystems.hpp"

Lower_Collector::Lower_Collector() {
	Requires(Subsystems::collector);
}

void Lower_Collector::Initialize() {
	Subsystems::collector->lower();
}

bool Lower_Collector::IsFinished() {
	return Subsystems::collector->is_lowered();
}
