#include "pool_noodle.hpp"
#include "../commands/set_noodle_back.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Pool_Noodle::Pool_Noodle() :
Subsystem("Pool_Noodle"),
articulator( new Servo(Ports::Digital_Channels::POOL_NOODLE_SERVO) ) {
}

void Pool_Noodle::InitDefaultCommand() {
	SetDefaultCommand( new Set_Noodle_Back() );
}

void Pool_Noodle::move_back() {
	articulator->Set(0.4); //replace this value
}

void Pool_Noodle::move_foreward() {
	articulator->Set(0.6);//replace this value
}
