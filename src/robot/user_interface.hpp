#ifndef USER_INTERFACE_HPP
#define USER_INTERFACE_HPP

#include "port_mapping.hpp"
#include "xbox_controller.hpp"
#include <WPILib.h>

// Describes the user interface of the robot, things like joystick and buttons.
namespace UI {
	namespace Primary_Driver {
		extern Joystick *left_stick,
		                *right_stick;
		extern JoystickButton *toggle_shifter_button,
		                      *reverse_drive_button,
		                      *lower_collector_button;
	}
	
	namespace Secondary_Driver{
		extern Xbox_Controller *controller;
	}

	void initialize();
}

#endif // USER_INTERFACE_HPP
