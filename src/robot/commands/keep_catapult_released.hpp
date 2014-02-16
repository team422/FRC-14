#ifndef KEEP_CATAPULT_RELEASED_HPP
#define KEEP_CATAPULT_RELEASED_HPP

#include <WPILib.h>

class Keep_Catapult_Released : public Command {
public:
	Keep_Catapult_Released();
	void Initialize() {};
	void Execute();
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // KEEP_CATAPULT_RELEASED_HPP
