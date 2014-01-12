#include "robot.hpp"
#include <WPILib.h>
#include "subsystems\subsystems.hpp"
void Robot::RobotInit() {
	Subsystems::drive_base = new Drive_Base();
	Subsystems::generic_motor = new Generic_Motor();
}
void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

START_ROBOT_CLASS(Robot)
