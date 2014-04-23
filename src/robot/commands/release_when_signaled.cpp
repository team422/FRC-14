#include "release_when_signaled.hpp"
#include "../subsystems/subsystems.hpp"
#include "../user_interface.hpp"

Release_When_Signaled::Release_When_Signaled(float timeout) :
did_release(false) {
	Requires(Subsystems::catapult);
	SetTimeout(timeout);
}

void Release_When_Signaled::Execute() {
	if( (UI::Primary_Driver::left_arm->GetY() < -0.5) &&
	    (UI::Primary_Driver::right_arm->GetY() < -0.5) ) {
		Subsystems::catapult->release();
		did_release = true;
	}
}

bool Release_When_Signaled::IsFinished() {
	return did_release || IsTimedOut();
}

void Release_When_Signaled::End() {
	if(!did_release) {
		Subsystems::catapult->release();
	}
}
