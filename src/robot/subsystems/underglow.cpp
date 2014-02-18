#include "underglow.hpp"
#include "../port_mapping.hpp"
#include "../commands/match_alliance_underglow.hpp"
#include <WPILib.h>

Underglow::Underglow() :
Subsystem("Underglow"),
red_light( new Relay(Ports::Relays::RED_LIGHT,
                    Relay::kForwardOnly) ),
green_light( new Relay(Ports::Relays::GREEN_LIGHT,
                      Relay::kForwardOnly) ),
blue_light( new Relay(Ports::Relays::BLUE_LIGHT,
                     Relay::kForwardOnly) ) {
	set_active_light(Green);
}

void Underglow::InitDefaultCommand() {
	SetDefaultCommand( new Match_Alliance_Underglow() );
}

void Underglow::set_active_light(Light_Color color) {

	// Turn off all lights
	red_light->Set(Relay::kOff);
	green_light->Set(Relay::kOff);
	blue_light->Set(Relay::kOff);
	
	// Turn on the light we want
	switch (color) {
	case Red:
		red_light->Set(Relay::kOn);
		break;
	case Green:
		green_light->Set(Relay::kOn);
		break;
	case Blue:
		blue_light->Set(Relay::kOn);
		break;
	}
}
