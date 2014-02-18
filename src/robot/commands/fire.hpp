#ifndef FIRE_HPP
#define FIRE_HPP

#include <WPILib.h>

// Automatically raise the puller and release the catapult.
class Fire : public Command {
public:
	Fire();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End();
	void Interrupted() {};
private:
	bool can_fire;
};

#endif // FIRE_HPP
