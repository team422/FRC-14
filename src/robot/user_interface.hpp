#ifndef USER_INTERFACE_HPP
#define USER_INTERFACE_HPP

#include "port_mapping.hpp"
#include <WPILib.h>

namespace UI {
	namespace Primary_Driver {
		extern Joystick *left_analog_stick;
		extern Joystick *right_analog_stick;
		extern JoystickButton *shift_button;
	}
	
	namespace Secondary_Driver{
		extern Joystick *joystick;
	}

	void initialize();
}

#endif // USER_INTERFACE_HPP
