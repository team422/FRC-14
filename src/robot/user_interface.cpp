#include "user_interface.hpp"
#include "commands/control_lights.hpp"
#include "commands/toggle_shifter.hpp"
#include "subsystems/lights_rgb.hpp"
#include <WPILib.h>

Joystick * UI::Primary_Driver::left_analog_stick = new Joystick(1);
Joystick * UI::Primary_Driver::right_analog_stick = new Joystick(1);
JoystickButton * UI::Primary_Driver::shift_button =
	new JoystickButton(left_analog_stick, 5);
Joystick * UI::Secondary_Driver::joystick = new Joystick(2);

void UI::initialize() {
	Primary_Driver::right_analog_stick->SetAxisChannel(Joystick::kXAxis, 4);
	Primary_Driver::right_analog_stick->SetAxisChannel(Joystick::kYAxis, 5);
	Primary_Driver::shift_button->WhenPressed( new Toggle_Shifter() );
	//Lights
	UI::Secondary_Driver::red_light_button =
		new JoystickButton(UI::Secondary_Driver::joystick, 2); //B for Red
	UI::Secondary_Driver::green_light_button =
		new JoystickButton(UI::Secondary_Driver::joystick, 3); //X for Green
	UI::Secondary_Driver::blue_light_button =
		new JoystickButton(UI::Secondary_Driver::joystick, 4); //Y for Blue
	UI::Secondary_Driver::red_light_button->
		WhenPressed(new Control_Lights(Lights_RGB::Red));
	UI::Secondary_Driver::green_light_button->
		WhenPressed(new Control_Lights(Lights_RGB::Green));
	UI::Secondary_Driver::blue_light_button->
		WhenPressed(new Control_Lights(Lights_RGB::Blue));
}
