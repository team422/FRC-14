#include "catapult.hpp"
#include <WPILib.h>
#include "../port_mapping.hpp"

Catapult::Catapult() :
	Subsystem("Catapult"),
	puller( new DoubleSolenoid(Ports::Solenoids::PULLER_FORWARD,
	                           Ports::Solenoids::PULLER_BACKWARD) ),
	lock( new Relay(Ports::Relays::CATAPULT_MAGNET,
	                Relay::kForwardOnly) ),
	top_switch( new DigitalInput(
		Ports::Digital_IO::CATAPULT_TOP_SWITCH) ),
	bottom_switch( new DigitalInput(
		Ports::Digital_IO::CATAPULT_BOTTOM_SWITCH) ) {
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

bool Catapult::is_puller_down() {
	return bottom_switch->Get();
}

bool Catapult::is_puller_up() {
	return top_switch->Get();
}
