#include "user_interface.hpp"
#include "commands/control_lights.hpp"
#include "commands/toggle_shifter.hpp"
#include "subsystems/lights_rgb.hpp"
#include <WPILib.h>

Xbox_Controller * UI::Primary_Driver::controller = new Xbox_Controller(1);
Xbox_Controller * UI::Secondary_Driver::controller = new Xbox_Controller(2);

void UI::initialize() {
	Primary_Driver::controller->
		LEFT_BUMPER->WhenPressed( new Toggle_Shifter() );
	Secondary_Driver::controller->
		B->WhenPressed( new Control_Lights(Lights_RGB::Red) );
	Secondary_Driver::controller->
		X->WhenPressed( new Control_Lights(Lights_RGB::Blue) );
	Secondary_Driver::controller->
		Y->WhenPressed( new Control_Lights(Lights_RGB::Green) );
}
