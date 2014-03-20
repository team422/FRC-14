#ifndef DRIVE_STRAIGHT_HPP
#define DRIVE_STRAIGHT_HPP

#include <WPILib.h>

// Run the intake wheels from the secondary driver's left thumbstick.
class Drive_Straight : public Command {
public:
	Drive_Straight(float timeout);
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif // DRIVE_STRAIGHT_HPP
