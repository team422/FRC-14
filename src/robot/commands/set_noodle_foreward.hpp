#ifndef SET_NOODLE_FOREWARD_HPP
#define SET_NOODLE_FOREWARD_HPP

#include <WPILib.h>

// Move the noodle foreward, so the ball doesn't roll out
class Set_Noodle_Foreward : public Command {
public:
	Set_Noodle_Foreward();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // SET_NOODLE_FOREWARD_HPP
