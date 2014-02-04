#include "user_interface.hpp"
#include <WPILib.h>

#include "Commands/toggle_shifter.hpp"

Joystick * UI::Primary_Driver::left_analog_stick = new Joystick(1);
Joystick * UI::Primary_Driver::right_analog_stick = new Joystick(1);
JoystickButton * UI::Primary_Driver::shift_button = new JoystickButton(left_analog_stick, 5);
Joystick * UI::Secondary_Driver::joystick = new Joystick(2);

void UI::initialize() {
	Primary_Driver::right_analog_stick->SetAxisChannel(Joystick::kXAxis, 4);
	Primary_Driver::right_analog_stick->SetAxisChannel(Joystick::kYAxis, 5);
	Primary_Driver::shift_button->WhenPressed( new ToggleShifter() );
}
