#ifndef TANK_DRIVE_HPP
#define TANK_DRIVE_HPP

#include <WPILib.h>

// Run the left and right drive motors from the primary driver's left and right
// thumbsticks.
class Tank_Drive : public Command {
public:
	Tank_Drive();
	void Initialize() {};
	void Execute();
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // TANK_DRIVE_HPP
