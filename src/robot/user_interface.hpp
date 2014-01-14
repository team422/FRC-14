#ifndef USER_INTERFACE_HPP
#define USER_INTERFACE_HPP

#include "port_mapping.hpp"
#include <WPILib.h>

namespace UI {
	namespace Primary_Driver {
		extern Joystick *left_joystick;
		extern Joystick *right_joystick;
	}
	
	namespace Secondary_Driver{
		extern Joystick *joystick;
	}
}

#endif // USER_INTERFACE_HPP
