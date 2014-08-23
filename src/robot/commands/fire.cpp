#include "release.hpp"
#include "set_noodle_back.hpp"
#include "fire.hpp"
#include <WPILib.h>

Fire::Fire() {
	AddSequential( new Set_Noodle_Back() );
	AddSequential( new Release() );
	AddSequential( new WaitCommand(2) );
}
