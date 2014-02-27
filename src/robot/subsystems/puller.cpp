#include "puller.hpp"
#include "../port_mapping.hpp"
#include "../commands/lower_puller.hpp"
#include <WPILib.h>

Puller::Puller() :
Subsystem("Puller"),
puller_down( new DoubleSolenoid(Ports::Solenoids::PULLER_DOWN_FORWARD,
                                Ports::Solenoids::PULLER_DOWN_BACKWARD) ),
puller_up( new DoubleSolenoid(Ports::Solenoids::PULLER_UP_FORWARD,
                              Ports::Solenoids::PULLER_UP_BACKWARD) ),
top_switch( new DigitalInput(Ports::Digital_IO::PULLER_TOP_SWITCH) ),
bottom_switch( new DigitalInput(Ports::Digital_IO::PULLER_BOTTOM_SWITCH) ) {
}

void Puller::InitDefaultCommand() {
	SetDefaultCommand( new Lower_Puller() );
}

void Puller::lower() {
	puller_down->Set(DoubleSolenoid::kForward);
	puller_up->Set(DoubleSolenoid::kReverse);
}

void Puller::raise() {
	puller_down->Set(DoubleSolenoid::kReverse);
	puller_up->Set(DoubleSolenoid::kForward);
}

bool Puller::is_down() {
	return bottom_switch->Get();
}

bool Puller::is_up() {
	return top_switch->Get();
}

void Puller::update_dashboard() {
	NetworkTable *dashboard_table = NetworkTable::GetTable("dashboard");
	dashboard_table->PutBoolean( "is_puller_down", is_down() );
	dashboard_table->PutBoolean( "is_puller_up", is_up() );
}
