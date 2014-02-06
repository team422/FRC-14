#ifndef CONTROL_LIGHTS_HPP
#define CONTROL_LIGHTS_HPP

#include <WPILib.h>

class Control_Lights : public Command {
public:
	Control_Lights(int lightcolor);
	int newcolor;
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // CONTROL_LIGHTS_HPP
