#include "fire.hpp"
#include "raise_puller.hpp"
#include "release_catapult.hpp"
#include <WPILib.h>

Fire::Fire() {
	AddSequential( new Raise_Puller() );
	AddSequential( new Release_Catapult() );
}
