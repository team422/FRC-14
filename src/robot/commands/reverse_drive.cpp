#include "reverse_drive.hpp"
#include "../subsystems/subsystems.hpp"
#include <iostream>

void Reverse_Drive::Initialize() {
	Subsystems::drive_base->reverse_drive();
	std::cerr << "Reversed Drive" << std::endl;
}

bool Reverse_Drive::IsFinished() {
	return true;
}
