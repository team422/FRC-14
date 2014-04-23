#ifndef PULL_BACK_CATAPULT_HPP
#define PULL_BACK_CATAPULT_HPP

#include <WPILib.h>

// Engage the catapult motor and then lower the catapult
class Pull_Back_Catapult : public Command {
public:
	Pull_Back_Catapult();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif // PULL_BACK_CATAPULT_HPP
