#include "set_noodle_back.hpp"
#include "../subsystems/subsystems.hpp"

Set_Noodle_Back::Set_Noodle_Back() {
	Requires(Subsystems::pool_noodle);
}

void Set_Noodle_Back::Initialize() {
	Subsystems::pool_noodle->move_back();
}

// Make sure the servo is finished moving before we finish
bool Set_Noodle_Back::IsFinished() {
	return true;
}
