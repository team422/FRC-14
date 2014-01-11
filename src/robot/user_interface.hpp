#include <WPILib.h>
#include "port_mapping.hpp"

namespace UI {
	namespace Primary_Driver {
		Joystick * const left_joystick  = new Joystick(1);
		Joystick * const right_joystick = new Joystick(2);
	}
}
