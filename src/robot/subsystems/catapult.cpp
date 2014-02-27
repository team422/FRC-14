#include "catapult.hpp"
#include <WPILib.h>
#include <WPILib/networktables/NetworkTable.h>
#include "../port_mapping.hpp"

Catapult::Catapult() :
Subsystem("Catapult"),
lock( new Relay(Ports::Relays::CATAPULT_MAGNET,
                Relay::kForwardOnly) ),
safety_enabled(true) {
}

bool Catapult::is_lock_engaged() {
	return lock->Get() == Relay::kOn;
}

void Catapult::engage_lock() {
	lock->Set(Relay::kOn);
	NetworkTable *dashboard_table = NetworkTable::GetTable("dashboard");
	dashboard_table->PutBoolean("is_electromagnet_engaged", true);
}
	
void Catapult::release_lock() {
	lock->Set(Relay::kOff);
	NetworkTable *dashboard_table = NetworkTable::GetTable("dashboard");
	dashboard_table->PutBoolean("is_electromagnet_engaged", false);
}

bool Catapult::is_safety_enabled() {
	return safety_enabled;
}

void Catapult::enable_safety() {
	safety_enabled = true;
}

void Catapult::disable_safety() {
	safety_enabled = false;
}
