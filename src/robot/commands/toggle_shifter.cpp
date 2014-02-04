#include "toggle_shifter.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

void Toggle_Shifter::Initialize() {
	Subsystems::drive_base->toggle_gear();
}

bool Toggle_Shifter::IsFinished() {
	return true;
}
