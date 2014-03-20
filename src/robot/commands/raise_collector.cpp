#include "raise_collector.hpp"
#include "../subsystems/subsystems.hpp"

Raise_Collector::Raise_Collector() {
	Requires(Subsystems::tilter);
}

void Raise_Collector::Initialize() {
	Subsystems::tilter->raise();
}

// Make sure the collector is finished tilting forward before we finish
bool Raise_Collector::IsFinished() {
	return true;
}
