#include "tilter.hpp"
#include "../port_mapping.hpp"
#include "../commands/raise_collector.hpp"
#include <WPILib.h>

Tilter::Tilter() :
Subsystem("Tilter"),
tilter( new DoubleSolenoid(Ports::Solenoids::COLLECTOR_UP,
                           Ports::Solenoids::COLLECTOR_DOWN) ),
down_switch( new DigitalInput(Ports::Digital_IO::COLLECTOR_SWITCH) ) {
}

void Tilter::InitDefaultCommand() {
	SetDefaultCommand( new Raise_Collector() );
}

void Tilter::raise() {
	tilter->Set(DoubleSolenoid::kForward);
}

void Tilter::lower() {
	tilter->Set(DoubleSolenoid::kReverse);
}

bool Tilter::is_lowered() {
	return !down_switch->Get();
}

void Tilter::toggle_position() {
	if( is_lowered() ) {
		raise();
	}
	else {
		lower();
	}
}

void Tilter::update_dashboard() {
	NetworkTable *dashboard_table = NetworkTable::GetTable("dashboard");
	dashboard_table->PutBoolean("is_collector_lowered", is_lowered() );
}
