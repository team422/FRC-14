#ifndef ARM_CATAPULT_HPP
#define ARM_CATAPULT_HPP

#include <WPILib.h>

class Arm_Catapult : public Command {
public:
	Arm_Catapult();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted();
};

#endif // ARM_CATAPULT_HPP
