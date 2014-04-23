#ifndef RETRACT_PISTON_HPP
#define RETRACT_PISTON_HPP

#include <WPILib.h>

// Retract a piston
class Retract_Piston : public Command {
public:
	Retract_Piston();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted() {};
};

#endif // RETRACT_PISTON_HPP
