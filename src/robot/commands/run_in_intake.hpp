#ifndef RUN_IN_INTAKE_HPP
#define RUN_IN_INTAKE_HPP

#include <WPILib.h>

// Run the intake wheels from the secondary driver's left thumbstick.
class Run_In_Intake : public Command {
public:
	Run_In_Intake();
	void Initialize() {};
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif // RUN_IN_INTAKE_HPP
