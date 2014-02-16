#include "fire.hpp"
#include "raise_puller.hpp"
#include "keep_puller_raised.hpp"
#include "release_catapult.hpp"
#include <WPILib.h>

Fire::Fire() {
	AddSequential( new Raise_Puller() );
	AddParallel( new Keep_Puller_Raised( 0.75 ) );
	AddParallel( new Release_Catapult() );
}
