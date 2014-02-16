#include "lights_rgb.hpp"
#include "../port_mapping.hpp"
#include "../commands/control_lights.hpp"
#include <WPILib.h>

Lights_RGB::Lights_RGB() :
Subsystem("Lights_RGB"),
red_light(new Relay(Ports::Relays::RED_LIGHT,
Relay::kForwardOnly)),
green_light(new Relay(Ports::Relays::GREEN_LIGHT,
Relay::kForwardOnly)),
blue_light(new Relay(Ports::Relays::BLUE_LIGHT,
Relay::kForwardOnly)) {
	set_active_light(getAllianceColor());
}

int Lights_RGB::getAllianceColor() {
	if (DriverStation::GetInstance()->GetAlliance()) { //False for red, true for blue
		return Lights_RGB::lightColors::Blue;
	}
	else {
		return Lights_RGB::lightColors::Red;
	}
}


void Lights_RGB::set_active_light(int newLight) {
	//Turn off all lights
	red_light->Set(Relay::kOff);
	green_light->Set(Relay::kOff);
	blue_light->Set(Relay::kOff);
	//Turn on the light we want
	switch (newLight) {
	case 0: //Red
		red_light->Set(Relay::kOn);
		break;
	case 1: //Green
		green_light->Set(Relay::kOn);
		break;
	case 2: //Blue
		blue_light->Set(Relay::kOn);
		break;
	}
}

