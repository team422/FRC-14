#ifndef PASS_HPP
#define PASS_HPP

#include <WPILib.h>

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
