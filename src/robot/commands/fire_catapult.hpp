#ifndef FIRE_CATAPULT_HPP
#define FIRE_CATAPULT_HPP

#include <WPILib.h>

class Fire_Catapult : public Command {
public:
	Fire_Catapult();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End();
	void Interrupted() {};
};

#endif // FIRE_CATAPULT_HPP
