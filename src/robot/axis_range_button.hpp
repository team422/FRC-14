#ifndef AXIS_RANGE_BUTTON_HPP
#define AXIS_RANGE_BUTTON_HPP

#include <WPILib.h>

class Axis_Range_Button : public Button {
public:
	Axis_Range_Button(Joystick *joystick,
	                  uint32_t axis,
	                  float minimum,
	                  float maximum);
	bool Get();

private:
	Joystick * const joystick;
	uint32_t axis;
	float minimum,
	      maximum;
};

#endif // AXIS_RANGE_BUTTON_HPP
