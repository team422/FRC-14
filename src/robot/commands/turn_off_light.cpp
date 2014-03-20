#include "turn_off_light.hpp"
#include "../subsystems/subsystems.hpp"

Turn_Off_Light::Turn_Off_Light() {
	Requires(Subsystems::camera_light);
}

void Turn_Off_Light::Initialize() {
	Subsystems::camera_light->turn_off();
}

bool Turn_Off_Light::IsFinished() {
	return true;
}
