#ifndef TANK_DRIVE_HPP
#define TANK_DRIVE_HPP

#include <WPILib.h>

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
