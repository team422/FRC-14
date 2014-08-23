#include "set_noodle_foreward.hpp"
#include "../subsystems/subsystems.hpp"

Set_Noodle_Foreward::Set_Noodle_Foreward() {
	Requires(Subsystems::pool_noodle);
}

void Set_Noodle_Foreward::Initialize() {
	Subsystems::pool_noodle->move_foreward();
}

// Make sure the servo is finished moving before we finish
bool Set_Noodle_Foreward::IsFinished() {
	return true;
}
