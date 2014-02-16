#include "collector.hpp"
#include "../port_mapping.hpp"
#include "../commands/run_intake.hpp"
#include <WPILib.h>

Collector::Collector() :
	Subsystem("Collector"),
	intake( new Talon(Ports::Digital_Channels::INTAKE_MOTOR) ),
	tilter( new DoubleSolenoid(Ports::Solenoids::COLLECTOR_UP,
	                           Ports::Solenoids::COLLECTOR_DOWN) ),
	down_switch( new DigitalInput(Ports::Digital_IO::COLLECTOR_SWITCH) ) {
}

void Collector::InitDefaultCommand() {
	SetDefaultCommand( new Run_Intake() );
}

void Collector::set_intake_normalized(float speed) {
	intake->Set(speed);
}

void Collector::raise() {
	tilter->Set(DoubleSolenoid::kForward);
}

void Collector::lower() {
	tilter->Set(DoubleSolenoid::kReverse);
}

bool Collector::is_lowered() {
	return down_switch->Get();
}

void Collector::toggle_position() {
	if( is_lowered() ) {
		raise();
	}
	else {
		lower();
	}
}
