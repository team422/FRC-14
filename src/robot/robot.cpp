#include "robot.hpp"
#include "subsystems/subsystems.hpp"
#include "user_interface.hpp"
#include <WPILib.h>

void Robot::RobotInit() {
	Subsystems::initialize();
	UI::initialize();
}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

START_ROBOT_CLASS(Robot)
