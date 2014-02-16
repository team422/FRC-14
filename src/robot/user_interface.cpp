#include "user_interface.hpp"
#include "annular_sector_button.hpp"
#include "commands/toggle_shifter.hpp"
#include "commands/reverse_drive.hpp"
#include "commands/toggle_collector.hpp"
#include "commands/release_catapult.hpp"
#include "commands/fire.hpp"
#include "commands/pass.hpp"
#include "commands/raise_puller.hpp"
#include "commands/control_lights.hpp"
#include "subsystems/lights_rgb.hpp"
#include "subsystems/subsystems.hpp"
#include <WPILib.h>

static const float PI = 3.14159265358979323846;

Xbox_Controller * UI::Primary_Driver::controller = new Xbox_Controller(1);
Xbox_Controller * UI::Secondary_Driver::controller = new Xbox_Controller(2);

void UI::initialize() {
	Primary_Driver::controller->
		LEFT_BUMPER->WhenPressed( new Toggle_Shifter() );
	Primary_Driver::controller->
		Y->WhenPressed( new Reverse_Drive() );
	Primary_Driver::controller->
		RIGHT_BUMPER->WhenPressed( new Toggle_Collector() );
	
	Secondary_Driver::controller->
		A->WhenPressed( new Release_Catapult() );
	Secondary_Driver::controller->
		X->WhenPressed( new Fire() );
	Secondary_Driver::controller->
		Y->WhenPressed( new Pass() );
	Secondary_Driver::controller->
		RIGHT_BUMPER->WhileHeld( new Raise_Puller() );
	//	Secondary_Driver::controller->
	//		RIGHT_JOYSTICK_PRESS->WhenPressed( new Toggle_Alliance_Green_Lights() );
	
	(new Annular_Sector_Button(Secondary_Driver::controller,
	                           false,
	                           5*PI/6, -PI/2,
	                           0.5, 1.1))->
		WhenPressed( new Control_Lights(Lights_RGB::Red) );
	(new Annular_Sector_Button(Secondary_Driver::controller,
	                           false,
	                           PI/6, 5*PI/6,
	                           0.5, 1.1))->
		WhenPressed( new Control_Lights(Lights_RGB::Green) );
	(new Annular_Sector_Button(Secondary_Driver::controller,
	                           false,
	                           -PI/2, PI/6,
	                           0.5, 1.1))->
		WhenPressed( new Control_Lights(Lights_RGB::Blue) );
	Secondary_Driver::controller->
		RIGHT_JOYSTICK_PRESS->WhenPressed(new Control_Lights(Subsystems::lights_rgb->getAllianceColor()));
}
