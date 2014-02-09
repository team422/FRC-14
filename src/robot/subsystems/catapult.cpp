#include "catapult.hpp"
#include <WPILib.h>
#include "../port_mapping.hpp"

Catapult::Catapult() :
	Subsystem("Catapult"),
	puller(new DoubleSolenoid(Ports::Solenoids::PULLER_FORWARD,
	                          Ports::Solenoids::PULLER_BACKWARD) ),
	lock(new DoubleSolenoid(Ports::Solenoids::LOCKER_FORWARD,
	                        Ports::Solenoids::LOCKER_BACKWARD) ) {
}

void Catapult::pull_down() {
	puller->Set(DoubleSolenoid::kReverse);
}

void Catapult::lock_up() {
	lock->Set(DoubleSolenoid::kForward);
}
	
void Catapult::fling() {
	puller->Set(DoubleSolenoid::kForward);
	lock->Set(DoubleSolenoid::kReverse);	
}
