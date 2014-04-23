#ifndef DRIVE_STRAIGHT_HPP
#define DRIVE_STRAIGHT_HPP

#include <WPILib.h>

// Drive in a (sorta) straight line for `distance` inches.
class Drive_Straight : public Command {
public:
	Drive_Straight(float distance);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	float distance;
};

#endif // DRIVE_STRAIGHT_HPP
