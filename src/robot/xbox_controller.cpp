#include "xbox_controller.hpp"
#include "axis_range_button.hpp"
#include <WPILib.h>

Xbox_Controller::Xbox_Controller(uint32_t port) :
	controller( new Joystick(port) ),
	A( new JoystickButton(controller, 1) ),
	B( new JoystickButton(controller, 2) ),
	X( new JoystickButton(controller, 3) ),
	Y( new JoystickButton(controller, 4) ),
	LEFT_BUMPER( new JoystickButton(controller, 5) ),
	RIGHT_BUMPER( new JoystickButton(controller, 6) ),
	BACK( new JoystickButton(controller, 7) ),
	START( new JoystickButton(controller, 8) ),
	LEFT_JOYSTICK_PRESS( new JoystickButton(controller, 9) ),
	RIGHT_JOYSTICK_PRESS( new JoystickButton(controller, 10) ),
	DPAD_UP( new Axis_Range_Button(controller, 6, 0, 0) ),
	DPAD_RIGHT( new Axis_Range_Button(controller, 6, 0, 0) ),
	DPAD_DOWN( new Axis_Range_Button(controller, 6, 0, 0) ),
	DPAD_LEFT( new Axis_Range_Button(controller, 6, 0, 0) ) {
}

float Xbox_Controller::get_left_x() {
	return deadzone_value( controller->GetRawAxis(1), 0.2 );
}

float Xbox_Controller::get_left_y() {
	return deadzone_value( controller->GetRawAxis(2), 0.2 );
}

float Xbox_Controller::get_right_x() {
	return deadzone_value( controller->GetRawAxis(4), 0.2 );
}

float Xbox_Controller::get_right_y() {
	return deadzone_value( controller->GetRawAxis(5), 0.2 );
}

float Xbox_Controller::get_triggers() {
	return controller->GetRawAxis(3);
}

float Xbox_Controller::deadzone_value(float value, float deadzone) {
	if( deadzone >= 1.0 || deadzone < 0.0 ) {
		return 0.0;
	}

	if( value > 0.0 ) {
		value = (value - deadzone) / (1.0 - deadzone);
		if( value < 0.0 ) {
			value = 0.0;
		}
	}
	else {
		value = (value + deadzone) / (1.0 - deadzone);
		if( value > 0.0 ) {
			value = 0.0;
		}
	}

	return value;
}
