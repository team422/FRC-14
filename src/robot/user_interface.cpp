#include "user_interface.hpp"
#include "commands/control_lights.hpp"
#include "commands/toggle_shifter.hpp"
//#include "commands/shift_gear.hpp" //System not implemented, see below
#include "subsystems/lights_rgb.hpp"
//#include "subsystems/drive_shifter.hpp" //System not implemented, see below
#include <WPILib.h>

Xbox_Controller * UI::Primary_Driver::controller = new Xbox_Controller(1);
Xbox_Controller * UI::Secondary_Driver::controller = new Xbox_Controller(2);

void UI::initialize() {
	Primary_Driver::controller->
		LEFT_BUMPER->WhenPressed( new Toggle_Shifter() );
	/*	
	This was added in case explicitly setting the shifters is desired
	instead of toggling. ~Lucario

	Primary_Driver::controller->
		LEFT_BUMPER->WhenPressed( new Shift_Gear(Drive_Shifter::shifterStates::Low));
	Primary_Driver::controller->
		RIGHT_BUMPER->WhenPressed(new Shift_Gear(Drive_Shifter::shifterStates::High));
	*/
	Secondary_Driver::controller->
		B->WhenPressed( new Control_Lights(Lights_RGB::Red) );
	Secondary_Driver::controller->
		X->WhenPressed( new Control_Lights(Lights_RGB::Blue) );
	Secondary_Driver::controller->
		Y->WhenPressed( new Control_Lights(Lights_RGB::Green) );
}
