#ifndef RELEASE_HPP
#define RELEASE_HPP

#include <WPILib.h>

// Shift the catapult gearbox into neutral, allowing the catapult to fire.
class Release : public Command {
public:
	Release();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // RELEASE_HPP
