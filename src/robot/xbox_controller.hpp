#ifndef XBOX_CONTROLLER_HPP
#define XBOX_CONTROLLER_HPP

#include <WPILib.h>

// A replacement for the Joystick class provided by WPILib which is more useful
// when controlling with Xbox controllers. Unfortunately, due to limitations
// with the WPILib implementation, the DPad cannot be read and the triggers
// cannot be gotten individually.
class Xbox_Controller {
public:
	Xbox_Controller(uint32_t port);

	float get_left_x();
	float get_left_y();
	float get_right_x();
	float get_right_y();
	float get_triggers();

// Declare up here so initialization lists work
private:
	Joystick *controller;

public:
	Button * const A;
	Button * const B;
	Button * const X;
	Button * const Y;
	Button * const LEFT_BUMPER;
	Button * const RIGHT_BUMPER;
	Button * const BACK;
	Button * const START;
	Button * const LEFT_JOYSTICK_PRESS;
	Button * const RIGHT_JOYSTICK_PRESS;

private:
	float deadzone_value(float value, float deadzone);
};

#endif // XBOX_CONTROLLER_HPP
