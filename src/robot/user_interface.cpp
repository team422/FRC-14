#include "user_interface.hpp"
#include "commands/toggle_shifter.hpp"
#include "commands/reverse_drive.hpp"
#include "commands/toggle_collector.hpp"
#include "commands/fire.hpp"
#include "commands/pull_back_catapult.hpp"
#include "commands/set_noodle_foreward.hpp"
#include <WPILib.h>

Joystick *UI::Primary_Driver::left_stick = new Joystick(1);
Joystick *UI::Primary_Driver::right_stick = new Joystick(2);

KinectStick *UI::Primary_Driver::left_arm = new KinectStick(1);
KinectStick *UI::Primary_Driver::right_arm = new KinectStick(2);

Xbox_Controller *UI::Secondary_Driver::controller = new Xbox_Controller(3);

JoystickButton *UI::Primary_Driver::toggle_shifter_button = 0;
JoystickButton *UI::Primary_Driver::reverse_drive_button = 0;
JoystickButton *UI::Primary_Driver::lower_collector_button = 0;
	
// Set up all the button bindings for the drivers
void UI::initialize() {	
		Primary_Driver::toggle_shifter_button = new JoystickButton(Primary_Driver::left_stick, 1);
		Primary_Driver::reverse_drive_button = new JoystickButton(Primary_Driver::right_stick, 2);
		Primary_Driver::lower_collector_button = new JoystickButton(Primary_Driver::right_stick, 1);

		Primary_Driver::toggle_shifter_button->WhenPressed( new Toggle_Shifter() );
		Primary_Driver::reverse_drive_button->WhenPressed( new Reverse_Drive() );
		Primary_Driver::lower_collector_button->WhenPressed( new Toggle_Collector() );

		Secondary_Driver::controller->RIGHT_BUMPER->WhenPressed( new Fire() );
		Secondary_Driver::controller->LEFT_BUMPER->WhenPressed( new Pull_Back_Catapult() );
		Secondary_Driver::controller->X->WhenPressed( new Set_Noodle_Foreward() );
}
