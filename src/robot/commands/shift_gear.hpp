#ifndef SHIFT_GEAR_HPP
#define SHIFT_GEAR_HPP

#include <WPILib.h>

class Shift_Gear : public Command {
public:
	Shift_Gear(bool gear);
	bool newgear;
	void Initialize();
	void Execute();
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // SHIFT_GEAR_HPP
