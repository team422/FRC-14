#include "annular_sector_button.hpp"
#include <cmath>
#include <stdexcept>

static const float PI = 3.14159265358979323846;

Annular_Sector_Button::Annular_Sector_Button(Xbox_Controller *controller,
	                                         bool use_left_joystick,
	                                         float min_angle,
	                                         float max_angle,
	                                         float min_radius,
                                             float max_radius) :
	controller(controller),
	use_left_joystick(use_left_joystick),
	min_angle(min_angle),
	max_angle(max_angle),
	min_radius(min_radius),
	max_radius(max_radius) {
}

bool Annular_Sector_Button::Get() {
	float radius = calculate_radius();
	float angle = 0.0;
	
	try {
		angle = calculate_angle();
	}
	catch(std::domain_error) {
		return false;
	}

	if( max_angle < min_angle ) {
		return ( angle >= min_angle || angle < max_angle )
			&& ( radius >= min_radius && radius < max_radius );
	}
	else {
		return ( angle >= min_angle && angle < max_angle )
			&& ( radius >= min_radius && radius < max_radius );
	}
}

float Annular_Sector_Button::calculate_radius() {
	float x = controller->get_right_x();
	float y = controller->get_right_y();
	
	if(use_left_joystick) {
		x = controller->get_right_x();
		y = controller->get_right_y();
	}
	
	return sqrt( x*x + y*y );
}

float Annular_Sector_Button::calculate_angle() {
	float x = controller->get_right_x();
	float y = controller->get_right_y();
	
	if(use_left_joystick) {
		x = controller->get_right_x();
		y = controller->get_right_y();
	}
	
	if( x == 0.0 && y == 0.0) {
		throw std::domain_error("Indeterminate angle for both zero arguments");
	}

	return atan2(y, x);
}
