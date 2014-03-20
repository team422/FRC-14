#include "xbox_controller.hpp"
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
RIGHT_JOYSTICK_PRESS( new JoystickButton(controller, 10) ) {
}

float Xbox_Controller::get_left_x() {
	return deadzone_value( controller->GetRawAxis(1), 0.3 );
}

float Xbox_Controller::get_left_y() {
	return deadzone_value( controller->GetRawAxis(2), 0.3 );
}

float Xbox_Controller::get_right_x() {
	return deadzone_value( controller->GetRawAxis(4), 0.3 );
}

float Xbox_Controller::get_right_y() {
	return deadzone_value( controller->GetRawAxis(5), 0.3 );
}

// The triggers are the positive and negative sides of axis 3
float Xbox_Controller::get_triggers() {
	return controller->GetRawAxis(3);
}

// Add a deadzone to a value between -1.0 and 1.0, so that we can account for
// joysticks not always returning to the same position. This deadzone will ramp
// up linearly from 0 to 1/-1 at both ends so that fine movements are still
// possible.
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
