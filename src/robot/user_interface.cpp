#include "user_interface.hpp"
#include "commands/toggle_shifter.hpp"
#include "commands/reverse_drive.hpp"
#include "commands/toggle_collector.hpp"
#include "commands/fire.hpp"
#include "commands/pull_back_catapult.hpp"
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
		
    	toggle_shifter_button = new JoystickButton(left_stick, 1);
		reverse_drive_button = new JoystickButton(right_stick, 2);
		lower_collector_button = new JoystickButton(right_stick, 1);

		toggle_shifter_button->WhenPressed( new Toggle_Shifter() );
		reverse_drive_button->WhenPressed( new Reverse_Drive() );
		lower_collector_button->WhenPressed( new Toggle_Collector() );
	}

	{
		using namespace Secondary_Driver;
		
		controller->RIGHT_BUMPER->WhenPressed( new Fire() );
		controller->LEFT_BUMPER->WhenPressed( new Pull_Back_Catapult() );
	}
}
