#include "robot.hpp"
#include <WPILib.h>
#include "subsystems\subsystems.hpp"
void Robot::RobotInit() {
	Subsystems::drive_base = new Drive_Base();
}
void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

START_ROBOT_CLASS(Robot);
