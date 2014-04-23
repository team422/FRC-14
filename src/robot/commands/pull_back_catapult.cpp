#include "pull_back_catapult.hpp"
#include "../subsystems/subsystems.hpp"

Pull_Back_Catapult::Pull_Back_Catapult() {
	Requires(Subsystems::catapult);
	SetTimeout(0.1);
}

void Pull_Back_Catapult::Initialize() {
	Subsystems::catapult->engage_motor();
}

void Pull_Back_Catapult::Execute() {
	if( IsTimedOut() ) {
		Subsystems::catapult->pull_back();
	}
}

bool Pull_Back_Catapult::IsFinished() {
	return Subsystems::catapult->is_down();
}

void Pull_Back_Catapult::End() {
    Subsystems::catapult->stop_motor();
}

void Pull_Back_Catapult::Interrupted() {
	End();
}
