#include "run_in_intake.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Run_In_Intake::Run_In_Intake() {
	Requires(Subsystems::intake);
}

void Run_In_Intake::Execute() {
	Subsystems::intake->set_normalized(1.0);
}

bool Run_In_Intake::IsFinished() {
	return false;
}

void Run_In_Intake::Interrupted() {
	Subsystems::intake->set_normalized(0.0);
}

void Run_In_Intake::End() {
	Subsystems::intake->set_normalized(0.0);
}
