#ifndef TOGGLE_CATAPULT_LOCK_HPP
#define TOGGLE_CATAPULT_LOCK_HPP

#include <WPILib.h>

// Engage or disengage the electromagnet to lock the catapult arm back.
class Toggle_Catapult_Lock : public Command {
public:
	Toggle_Catapult_Lock();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // TOGGLE_CATAPULT_LOCK_HPP
