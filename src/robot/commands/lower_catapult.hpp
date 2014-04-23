#ifndef LOWER_CATAPULT_HPP
#define LOWER_CATAPULT_HPP

#include <WPILib.h>

// Lower the catapult through turning a motor and then extending a piston
class Lower_Catapult : public Command {
public:
	Lower_Catapult();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted() {};
};

#endif // LOWER_CATAPULT_HPP
