#include "turn_on_light.hpp"
#include "../subsystems/subsystems.hpp"

Turn_On_Light::Turn_On_Light() {
	Requires(Subsystems::camera_light);
}

void Turn_On_Light::Initialize() {
	Subsystems::camera_light->turn_on();
}

bool Turn_On_Light::IsFinished() {
	return true;
}
