#ifndef RUN_MOTOR_HPP
#define RUN_MOTOR_HPP

#include <WPILib.h>

class Run_Motor : public Command {
public:
	Run_Motor();
	void Initialize() {};
	void Execute();
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // RUN_MOTOR_HPP
