#ifndef TOGGLE_SHIFTER_HPP
#define TOGGLE_SHIFTER_HPP

#include <WPILib.h>

class Toggle_Shifter : public Command {
public:
	Toggle_Shifter() {};
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // TOGGLE_SHIFTER_HPP
