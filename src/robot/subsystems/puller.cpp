#include "puller.hpp"
#include <WPILib.h>
#include "../port_mapping.hpp"
#include "../commands/lower_puller.hpp"

Puller::Puller() :
Subsystem("Puller"),
puller( new DoubleSolenoid(Ports::Solenoids::PULLER_FORWARD,
                           Ports::Solenoids::PULLER_BACKWARD) ),
top_switch( new DigitalInput(Ports::Digital_IO::PULLER_TOP_SWITCH) ),
bottom_switch( new DigitalInput(Ports::Digital_IO::PULLER_BOTTOM_SWITCH) ) {
}

void Puller::InitDefaultCommand() {
	SetDefaultCommand( new Lower_Puller() );
}

void Puller::lower() {
	puller->Set(DoubleSolenoid::kReverse);
}

void Puller::raise() {
	puller->Set(DoubleSolenoid::kForward);
}

bool Puller::is_down() {
	return bottom_switch->Get();
}

bool Puller::is_up() {
	return top_switch->Get();
}
