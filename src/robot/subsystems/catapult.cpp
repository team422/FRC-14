#include "catapult.hpp"
#include <WPILib.h>
#include "../port_mapping.hpp"

Catapult::Catapult() :
	Subsystem("Catapult"),
	puller( new DoubleSolenoid(Ports::Solenoids::PULLER_FORWARD,
	                           Ports::Solenoids::PULLER_BACKWARD) ),
	lock( new Relay(Ports::Relays::CATAPULT_MAGNET,
	                Relay::kForwardOnly) ) {
}

void Catapult::pull_down() {
	puller->Set(DoubleSolenoid::kReverse);
}

void Catapult::release_puller() {
	puller->Set(DoubleSolenoid::kForward);
}

void Catapult::engage_lock() {
	lock->Set(Relay::kOn);
}
	
void Catapult::release_lock() {
	lock->Set(Relay::kOff);	
}
