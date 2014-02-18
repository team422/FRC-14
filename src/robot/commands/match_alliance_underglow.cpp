#include "match_alliance_underglow.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Match_Alliance_Underglow::Match_Alliance_Underglow() {
	Requires(Subsystems::underglow);
}

void Match_Alliance_Underglow::Initialize() {
	DriverStation::Alliance alliance =
		DriverStation::GetInstance()->GetAlliance();
	Underglow::Light_Color color = Underglow::Green;
	
	switch(alliance) {
	case DriverStation::kRed:
		color = Underglow::Red;
		break;
	case DriverStation::kBlue:
		color = Underglow::Blue;
		break;
	default:
		color = Underglow::Green;
		break;
	}
	
	Subsystems::underglow->set_active_light(color);
}

bool Match_Alliance_Underglow::IsFinished() {
	return false;
}
