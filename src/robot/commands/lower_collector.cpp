#include "lower_collector.hpp"
#include "../subsystems/subsystems.hpp"

Lower_Collector::Lower_Collector() {
	Requires(Subsystems::collector);
}

void Lower_Collector::Initialize() {
	Subsystems::collector->lower();
}

// Make sure the collector is finished tilting forward before we finish
bool Lower_Collector::IsFinished() {
	return Subsystems::collector->is_lowered();
}
