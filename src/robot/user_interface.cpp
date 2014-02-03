#include "user_interface.hpp"
#include <WPILib.h>

Joystick * UI::Primary_Driver::left_analog_stick = new Joystick(1);
Joystick * UI::Primary_Driver::right_analog_stick = new Joystick(1);
Joystick * UI::Secondary_Driver::joystick = new Joystick(2);

void UI::initialize() {
	Primary_Driver::right_analog_stick->SetAxisChannel(Joystick::kXAxis, 4);
	Primary_Driver::right_analog_stick->SetAxisChannel(Joystick::kYAxis, 5);
}
