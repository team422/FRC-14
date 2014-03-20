#include "intake.hpp"
#include "../port_mapping.hpp"
#include "../commands/run_intake.hpp"
#include <WPILib.h>

Intake::Intake() :
Subsystem("Intake"),
roller( new Talon(Ports::Digital_Channels::INTAKE_MOTOR) ) {
}

void Intake::InitDefaultCommand() {
	SetDefaultCommand( new Run_Intake() );
}

void Intake::set_normalized(float speed) {
	roller->Set(speed);
}
