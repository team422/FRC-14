#ifndef FIRE_IF_HOT_HPP
#define FIRE_IF_HOT_HPP

#include <WPILib.h>

// Automatically raise the puller and release the catapult.
class Fire_If_Hot : public Command {
public:
	Fire_If_Hot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End() {};
	void Interrupted() {};
private:
	bool can_fire;
	bool is_hot;
};

#endif // FIRE_IF_HOT_HPP
