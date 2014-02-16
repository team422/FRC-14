#ifndef ANNULAR_SECTOR_BUTTON
#define ANNULAR_SECTOR_BUTTON

#include <WPILib.h>
#include "xbox_controller.hpp"

// A "button" that is pressed when an Xbox controller thumbstick is in an
// annular sector (a sector of a ring), that is, when it is within two angles
// from positive x and two distances from the center. Angles are given in
// radians and must be between -Pi/2 to Pi/2. Radii are given between 0 and 1.
// minimum angles and radii are inclusive, maximum angles and radii are
// exclusive. To have a maximum radius of 1.0, it might be wise to pass
// something slightly larger, like 1.1.
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
