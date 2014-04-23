#include "catapult.hpp"
#include "../commands/pull_back_catapult.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Catapult::Catapult() :
Subsystem("Catapult"),
shifter( new DoubleSolenoid(Ports::Solenoids::CATAPULT_MOTOR_ENGAGED,
                            Ports::Solenoids::CATAPULT_MOTOR_DISENGAGED) ),
bottom_switch( new DigitalInput(Ports::Digital_IO::CATAPULT_BOTTOM_SWITCH) ),
motor( new Talon(Ports::Digital_Channels::CATAPULT_MOTOR) ) {
}

void Catapult::InitDefaultCommand() {
	SetDefaultCommand( new Pull_Back_Catapult() );
}

void Catapult::engage_motor() {
	shifter->Set(DoubleSolenoid::kForward);
}

void Catapult::pull_back() {
	motor->Set(-1);
}

void Catapult::release() {
	shifter->Set(DoubleSolenoid::kReverse);
}

void Catapult::stop_motor() {
    motor->Set(0);
}

bool Catapult::is_down() {
	return !bottom_switch->Get();
}

void Catapult::update_dashboard() {
	NetworkTable *dashboard_table = NetworkTable::GetTable("dashboard");
	dashboard_table->PutBoolean( "is_catapult_down", is_down() );
}
