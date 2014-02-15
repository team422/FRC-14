#ifndef ANNULAR_SECTOR_BUTTON
#define ANNULAR_SECTOR_BUTTON

#include <WPILib.h>
#include "xbox_controller.hpp"

class Annular_Sector_Button : public Button {
public:
	Annular_Sector_Button(Xbox_Controller *controller,
	                      bool use_left_joystick,
	                      float min_angle,
	                      float max_angle,
	                      float min_radius,
	                      float max_radius);
	bool Get();

private:
	float calculate_angle();
	float calculate_radius();
	Xbox_Controller *controller;
	bool use_left_joystick;
	float min_angle,
	      max_angle;
	float min_radius,
	      max_radius;
};

#endif // ANNULAR_SECTOR_BUTTON
