#ifndef LIGHTS_RGB_HPP
#define LIGHTS_RGB_HPP

#include <WPILib.h>

class Lights_RGB : public Subsystem {
public:
	Lights_RGB();
	void InitDefaultCommand();	
	void set_active_light(int newLight);
	enum lightColors { Red, Green, Blue };

private:
	Relay *red_light;
	Relay *green_light;
	Relay *blue_light;
};

#endif // LIGHTS_RGB_HPP
