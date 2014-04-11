#include "user_interface.hpp"
#include "commands/toggle_shifter.hpp"
#include "commands/reverse_drive.hpp"
#include "commands/toggle_collector.hpp"
#include "commands/toggle_catapult_lock.hpp"
#include "commands/shoot.hpp"
#include "commands/raise_puller.hpp"
#include "commands/match_alliance_underglow.hpp"
#include "commands/override_safety.hpp"
#include "subsystems/subsystems.hpp"
#include <WPILib.h>

// When developing, if a binding has not been determined, it can be replaced with
// `UNKNOWN`. This will allow the code to compile in debug mode, but in release
// mode it will throw an error.
#ifdef DEBUG
#define UNKNOWN 0
#else 
#define UNKNOWN @bind_not_assigned
#endif

#ifdef USE_XBOX_PRIMARY
Xbox_Controller * UI::Primary_Driver::controller = new Xbox_Controller(1);
#else 
Joystick * UI::Primary_Driver::controller = new Joystick(1);
#endif
Xbox_Controller * UI::Secondary_Driver::controller = new Xbox_Controller(2);

// Set up all the button bindings for the drivers
void UI::initialize() {
#ifdef USE_XBOX_PRIMARY
    Legacy code for Xbox controller
    Primary_Driver::controller->
	    LEFT_BUMPER->WhenPressed( new Toggle_Shifter() );
    Primary_Driver::controller->
    	Y->WhenPressed( new Reverse_Drive() );
    Primary_Driver::controller->
    	RIGHT_BUMPER->WhenPressed( new Toggle_Collector() );
#else 
	Primary_Driver::controller->
	    UNKNOWN->WhenPressed( new Toggle_Shifter() );
	Primary_Driver::controller->
	    UNKNOWN->WhenPressed( new Reverse_Drive() );
	Primary_Driver::controller->
	    UNKNOWN->WhenPressed( new Toggle_Collector() )
#endif

	Secondary_Driver::controller->
		A->WhenPressed( new Toggle_Catapult_Lock() );
	Secondary_Driver::controller->
		X->WhenPressed( new Shoot() );
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
