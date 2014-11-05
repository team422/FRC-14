#include "pool_noodle.hpp"
#include "../commands/set_noodle_back.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Pool_Noodle::Pool_Noodle() :
Subsystem("Pool_Noodle"),
articulator( new Servo(Ports::Digital_Channels::POOL_NOODLE_SERVO) ) {
}

void Pool_Noodle::Initialize() {
	articulator->Set(0.4);
}

void Pool_Noodle::move_back() {
	articulator->Set(0.4); //place holder value
}

void Pool_Noodle::move_forward() {
	articulator->Set(0); //place holder value
}

bool Pool_Noodle::IsFinished() {
	return true;
}