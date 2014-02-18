#ifndef OVERRIDE_SAFETY_HPP
#define OVERRIDE_SAFETY_HPP

#include <WPILib.h>

// Disable safety checking for the catapult.
class Override_Safety : public Command {
public:
	Override_Safety() {};
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted();
};

#endif // OVERRIDE_SAFETY_HPP
