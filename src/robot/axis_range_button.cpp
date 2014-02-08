#include "axis_range_button.hpp"
#include <WPILib.h>

Axis_Range_Button::Axis_Range_Button(Joystick *joystick,
                                     uint32_t axis,
                                     float minimum,
                                     float maximum) :
	joystick(joystick),
	axis(axis),
	minimum(minimum),
	maximum(maximum) {
}

bool Axis_Range_Button::Get() {
	float value = joystick->GetRawAxis(axis);
	return value > minimum && value < maximum;
}
