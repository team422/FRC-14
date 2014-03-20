#ifndef TURN_OFF_LIGHT_HPP
#define TURN_OFF_LIGHT_HPP

#include <WPILib.h>

// Raise up the puller for the catapult.
class Turn_Off_Light : public Command {
public:
	Turn_Off_Light();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // TURN_OFF_LIGHT_HPP
