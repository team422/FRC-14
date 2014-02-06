#ifndef USER_INTERFACE_HPP
#define USER_INTERFACE_HPP

#include "port_mapping.hpp"
#include <WPILib.h>

namespace UI {
	void Initialize();
	namespace Primary_Driver {
		extern Joystick *left_joystick;
		extern Joystick *right_joystick;
	}
	
	namespace Secondary_Driver{
		extern Joystick *joystick;
		extern Button *red_light_button;
		extern Button *green_light_button;
		extern Button *blue_light_button;
	}
}

#endif // USER_INTERFACE_HPP
