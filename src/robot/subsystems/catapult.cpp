#include "catapult.hpp"
#include <WPILib.h>
#include "../port_mapping.hpp"
#include "../commands/lock_catapult.hpp"

Catapult::Catapult() :
Subsystem("Catapult"),
lock( new Relay(Ports::Relays::CATAPULT_MAGNET,
                Relay::kForwardOnly) ),
safety_enabled(true) {
}

// Keep the electromagnet on by default
void Catapult::InitDefaultCommand() {
	SetDefaultCommand( new Lock_Catapult() );
}

void Catapult::engage_lock() {
	lock->Set(Relay::kOn);
}
	
void Catapult::release_lock() {
	lock->Set(Relay::kOff);	
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
