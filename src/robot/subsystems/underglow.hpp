#ifndef UNDERGLOW_HPP
#define UNDERGLOW_HPP

#include <WPILib.h>

// The control system for the LEDs.
class Underglow : public Subsystem {
public:
	enum Light_Color { Red, Green, Blue };
	
	Underglow();
	void InitDefaultCommand();
	void set_active_light(Light_Color color);

private:
	Relay *red_light;
	Relay *green_light;
	Relay *blue_light;
};

#endif // UNDERGLOW_HPP
