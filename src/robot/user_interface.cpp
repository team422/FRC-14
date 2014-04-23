#include "user_interface.hpp"
#include "commands/toggle_shifter.hpp"
#include "commands/reverse_drive.hpp"
#include "commands/lower_collector.hpp"
#include "commands/retract_piston.hpp"
#include "commands/lower_catapult.hpp"
#include <WPILib.h>

Joystick *UI::Primary_Driver::left_stick = new Joystick(1);
Joystick *UI::Primary_Driver::right_stick = new Joystick(2);

Xbox_Controller * UI::Secondary_Driver::controller = new Xbox_Controller(2);

// Set up all the button bindings for the drivers
void UI::initialize() {
	Primary_Driver::toggle_shifter_button =
		new JoystickButton(Primary_Driver::left_stick, 0);
	Primary_Driver::reverse_drive_button =
		new JoystickButton(Primary_Driver::left_stick, 0);
	Primary_Driver::lower_collector_button =
		new JoystickButton(Primary_Driver::left_stick, 0);

	Primary_Driver::toggle_shifter_button->
		WhenPressed( new Toggle_Shifter() );
	Primary_Driver::reverse_drive_button->
		WhenPressed( new Reverse_Drive() );
	Primary_Driver::lower_collector_button->
		WhileHeld( new Lower_Collector() );
	
	Secondary_Driver::controller->
		RIGHT_BUMPER->WhileHeld( new Retract_Piston() );
	Secondary_Driver::controller->
		LEFT_BUMPER->WhileHeld( new Lower_Catapult() );
}
