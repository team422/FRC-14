#include "user_interface.hpp"
#include "commands/toggle_shifter.hpp"
#include "commands/reverse_drive.hpp"
#include "commands/lower_collector.hpp"
#include "commands/retract_piston.hpp"
#include "commands/lower_catapult.hpp"
#include <WPILib.h>

Xbox_Controller * UI::Primary_Driver::controller = new Xbox_Controller(1);
Xbox_Controller * UI::Secondary_Driver::controller = new Xbox_Controller(2);

// Set up all the button bindings for the drivers
void UI::initialize() {
	Primary_Driver::controller->
		LEFT_BUMPER->WhenPressed( new Toggle_Shifter() );
	Primary_Driver::controller->
		Y->WhenPressed( new Reverse_Drive() );
	Primary_Driver::controller->
		RIGHT_BUMPER->WhileHeld( new Lower_Collector() );
	
	Secondary_Driver::controller->
		RIGHT_BUMPER->WhileHeld( new Retract_Piston() );
	Secondary_Driver::controller->
		LEFT_BUMPER->WhileHeld( new Lower_Catapult() );
}
