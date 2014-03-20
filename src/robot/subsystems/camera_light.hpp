#ifndef CAMERA_LIGHT_HPP
#define CAMERA_LIGHT_HPP

#include <WPILib.h>

class Camera_Light : public Subsystem {
public:
	Camera_Light();
	void turn_on();
	void turn_off();
private:
	Relay *light;
};

#endif // CAMERA_LIGHT_HPP
