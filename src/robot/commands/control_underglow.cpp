#include "control_underglow.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Control_Underglow::Control_Underglow(Underglow::Light_Color color) :
color(color) {
	Requires(Subsystems::underglow);
}

void Control_Underglow::Initialize() {
	Subsystems::underglow->set_active_light(color);
}

bool Control_Underglow::IsFinished() {
	return false;
}
