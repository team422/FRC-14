#include "robot.hpp"
#include "subsystems/subsystems.hpp"
#include <WPILib.h>

void Robot::RobotInit() {
	Subsystems::initialize();
}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

START_ROBOT_CLASS(Robot)
