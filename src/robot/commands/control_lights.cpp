#include "control_lights.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include "../subsystems/lights_rgb.hpp"
#include <WPILib.h>

Control_Lights::Control_Lights(int whichcolor) {
	Requires(Subsystems::lights_rgb);
	newcolor = whichcolor;
}

void Control_Lights::Initialize() {
	Subsystems::lights_rgb->set_active_light(newcolor);
}

bool Control_Lights::IsFinished() {
	return true;
}
