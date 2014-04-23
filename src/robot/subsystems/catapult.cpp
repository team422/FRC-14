#include "../port_mapping.hpp"
#include <WPILib.h>
#include "catapult.hpp"
#include "../commands/lower_catapult.hpp"
#include "../commands/retract_piston.hpp"

Catapult::Catapult() :
Subsystem("Catapult"),
catapult_solenoid( new DoubleSolenoid(Ports::Solenoids::CATAPULT_UP,
                                      Ports::Solenoids::CATAPULT_DOWN) ),
bottom_switch( new DigitalInput(Ports::Digital_IO::CATAPULT_BOTTOM_SWITCH) ),
catapult_motor( new Talon(Ports::Digital_Channels::CATAPULT_MOTOR) ) {
}

void Catapult::InitDefaultCommand() {
	SetDefaultCommand( new Lower_Catapult() );
}

void Catapult::lower() {
	catapult_solenoid->Set(DoubleSolenoid::kForward);
	catapult_motor->Set(-1);
}

void Catapult::raise() {
	catapult_solenoid->Set(DoubleSolenoid::kReverse);
}

void Catapult::stop_motor() {
    catapult_motor->Set(0);
}

bool Catapult::is_down() {
	return !bottom_switch->Get();
}

void Catapult::update_dashboard() {
	NetworkTable *dashboard_table = NetworkTable::GetTable("dashboard");
	dashboard_table->PutBoolean( "is_piston_retracted", is_down() );
}

void Catapult::run_motor_reverse() {
	catapult_motor->Set(0.2);
}
