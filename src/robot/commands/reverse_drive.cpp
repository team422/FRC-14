#include "reverse_drive.hpp"
#include "../subsystems/subsystems.hpp"
#include <iostream>

void Reverse_Drive::Initialize() {
	Subsystems::drive_base->reverse_drive();
}

bool Reverse_Drive::IsFinished() {
	return true;
}
