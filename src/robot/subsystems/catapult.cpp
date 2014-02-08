#include "catapult.hpp"
#include <WPILib.h>
#include "../port_mapping.hpp"

Catapult::Catapult() :
	Subsystem("Catapult"),
	puller(new DoubleSolenoid(Ports::Solenoidz::PULLER_FORWARD, Ports::Solenoidz::PULLER_BACKWARD) ),
	lock(new DoubleSolenoid(Ports::Solenoidz::LOCKER_FORWARD, Ports::Solenoidz::LOCKER_BACKWARD) ) {
}

void Catapult::PullDown(float kReverse) {
	puller->Set(kReverse);
}
	

void Catapult::LockUp(float kForward) {
	lock->Set(kForward);
}
	
void Catapult::Fling(float kReverse, float kForward) {
	puller->Set(kForward);
	lock->Set(kReverse);
	
}






