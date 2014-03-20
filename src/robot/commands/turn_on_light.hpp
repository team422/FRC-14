#ifndef TURN_ON_LIGHT_HPP
#define TURN_ON_LIGHT_HPP

#include <WPILib.h>

// Raise up the puller for the catapult.
class Turn_On_Light : public Command {
public:
	Turn_On_Light();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // TURN_ON_LIGHT_HPP
