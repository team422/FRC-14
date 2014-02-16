#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <WPILib.h>

// The main class for the robot, whose methods determine the overall behavior of
// the robot in each mode.
class Robot : public IterativeRobot {
private:
	void RobotInit();
	void TeleopPeriodic();
};

#endif // ROBOT_HPP
