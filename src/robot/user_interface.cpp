#include "user_interface.hpp"
#include "commands/toggle_shifter.hpp"
#include "commands/reverse_drive.hpp"
#include "commands/lower_collector.hpp"
#include "commands/retract_piston.hpp"
#include "commands/lower_catapult.hpp"
#include <WPILib.h>

Joystick *UI::Primary_Driver::left_stick = new Joystick(1);
Joystick *UI::Primary_Driver::right_stick = new Joystick(2);

KinectStick *UI::Primary_Driver::left_arm = new KinectStick(1);
KinectStick *UI::Primary_Driver::right_arm = new KinectStick(2);

Xbox_Controller *UI::Secondary_Driver::controller = new Xbox_Controller(2);

// Set up all the button bindings for the drivers
void UI::initialize() {
	{
		using namespace Primary_Driver;
		
    	toggle_shifter_button = new JoystickButton(left_stick, 0);
		reverse_drive_button = new JoystickButton(left_stick, 0);
		lower_collector_button = new JoystickButton(left_stick, 0);

		toggle_shifter_button->WhenPressed( new Toggle_Shifter() );
		reverse_drive_button->WhenPressed( new Reverse_Drive() );
		lower_collector_button->WhileHeld( new Lower_Collector() );
	}

	{
		using namespace Secondary_Driver;
		
		controller->RIGHT_BUMPER->WhileHeld( new Retract_Piston() );
		controller->LEFT_BUMPER->WhileHeld( new Lower_Catapult() );
	}
}
