#ifndef PASS_HPP
#define PASS_HPP

#include <WPILib.h>

// Release the catapult and then raise the puller to do a soft forward pass.
class Pass : public Command {
public:
	Pass();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // PASS_HPP
