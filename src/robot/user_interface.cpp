#include "user_interface.hpp"
#include "commands/toggle_shifter.hpp"
#include "commands/reverse_drive.hpp"
#include "commands/toggle_collector.hpp"
#include "commands/toggle_catapult_lock.hpp"
#include "commands/fire.hpp"
#include "commands/raise_puller.hpp"
#include "commands/match_alliance_underglow.hpp"
#include "commands/override_safety.hpp"
#include "subsystems/subsystems.hpp"
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
		RIGHT_BUMPER->WhenPressed( new Toggle_Collector() );
	
	Secondary_Driver::controller->
		A->WhenPressed( new Toggle_Catapult_Lock() );
	Secondary_Driver::controller->
		X->WhenPressed( new Fire() );
	Secondary_Driver::controller->
		Y->WhenPressed( new Raise_Puller() );
	Secondary_Driver::controller->
		RIGHT_BUMPER->WhileHeld( new Raise_Puller() );
	Secondary_Driver::controller->
		LEFT_BUMPER->WhileHeld( new Override_Safety() );

	// Set to alliance color when pressing the right thumbstick
	Secondary_Driver::controller->
		RIGHT_JOYSTICK_PRESS->WhenPressed( new Match_Alliance_Underglow() );
}
