#ifndef CONTROL_UNDERGLOW_HPP
#define CONTROL_UNDERGLOW_HPP

#include "../subsystems/underglow.hpp"
#include <WPILib.h>

// Pick which color the LEDs on the robot are displaying.
class Control_Underglow : public Command {
public:
	Control_Underglow(Underglow::Light_Color color);
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
private:
	Underglow::Light_Color color;
};

#endif // CONTROL_UNDERGLOW_HPP
