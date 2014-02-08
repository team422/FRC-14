#ifndef USER_INTERFACE_HPP
#define USER_INTERFACE_HPP

#include "port_mapping.hpp"
#include <WPILib.h>

namespace UI {
	void Initialize();
	namespace Primary_Driver {
		extern Joystick *left_analog_stick;
		extern Joystick *right_analog_stick;
		extern JoystickButton *shift_button;
	}
	
	namespace Secondary_Driver{
		extern Joystick *joystick;
		extern Button *red_light_button;
		extern Button *green_light_button;
		extern Button *blue_light_button;
	}

	void initialize();
}

#endif // USER_INTERFACE_HPP
