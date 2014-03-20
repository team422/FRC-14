#include "camera_light.hpp"
#include "../port_mapping.hpp"

Camera_Light::Camera_Light() :
Subsystem("Camera_Light"),
light( new Relay(Ports::Relays::CAMERA_LIGHT, Relay::kForwardOnly) ) {
}

void Camera_Light::turn_on() {
	light->Set(Relay::kOn);
}

void Camera_Light::turn_off() {
	light->Set(Relay::kOff);
}
