#ifndef XBOX_CONTROLLER_HPP
#define XBOX_CONTROLLER_HPP

#include <WPILib.h>

class Xbox_Controller {
public:
	Xbox_Controller(uint32_t port);

	float get_left_x();
	float get_left_y();
	float get_right_x();
	float get_right_y();
	float get_triggers();

private: // Declare up here so initialization lists work
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
	Button * const DPAD_UP;
	Button * const DPAD_RIGHT;
	Button * const DPAD_DOWN;
	Button * const DPAD_LEFT;

private:
	float deadzone_value(float value, float deadzone);
};

#endif // XBOX_CONTROLLER_HPP
