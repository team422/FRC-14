#ifndef SET_NOODLE_BACK_HPP
#define SET_NOODLE_BACK_HPP

#include <WPILib.h>

// Move the noodle back, so that it isn't blocking the ball
class Set_Noodle_Back : public Command {
public:
	Set_Noodle_Back();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // SET_NOODLE_BACK_HPP
