#ifndef LOCK_CATAPULT_HPP
#define LOCK_CATAPULT_HPP

#include <WPILib.h>

class Lock_Catapult : public Command {
public:
	Lock_Catapult();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // LOCK_CATAPULT_HPP
