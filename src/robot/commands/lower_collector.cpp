#include "lower_collector.hpp"
#include "../subsystems/subsystems.hpp"

Lower_Collector::Lower_Collector() {
	Requires(Subsystems::tilter);
}

void Lower_Collector::Initialize() {
	Subsystems::tilter->lower();
}

// Make sure the collector is finished tilting forward before we finish
bool Lower_Collector::IsFinished() {
	return Subsystems::tilter->is_lowered();
}
