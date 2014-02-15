#include "user_interface.hpp"
#include "annular_sector_button.hpp"
#include "commands/control_lights.hpp"
#include "commands/toggle_shifter.hpp"
#include "commands/reverse_drive.hpp"
#include "subsystems/lights_rgb.hpp"
#include <WPILib.h>

static const float PI = 3.14159265358979323846;

Xbox_Controller * UI::Primary_Driver::controller = new Xbox_Controller(1);
Xbox_Controller * UI::Secondary_Driver::controller = new Xbox_Controller(2);

void UI::initialize() {
	Primary_Driver::controller->
		LEFT_BUMPER->WhenPressed( new Toggle_Shifter() );
	Primary_Driver::controller->
		Y->WhenPressed( new Reverse_Drive() );
	
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
}
