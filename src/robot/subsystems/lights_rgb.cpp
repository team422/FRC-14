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
	
}


void Lights_RGB::InitDefaultCommand() {
	SetDefaultCommand(new Control_Lights(Lights_RGB::Green)); //Start Green
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

