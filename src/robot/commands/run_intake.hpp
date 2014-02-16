#ifndef RUN_INTAKE_HPP
#define RUN_INTAKE_HPP

#include <WPILib.h>

class Run_Intake : public Command {
public:
	Run_Intake();
	void Initialize() {};
	void Execute();
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // RUN_INTAKE_HPP
