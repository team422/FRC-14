#include "release.hpp"
#include "fire.hpp"
#include <WPILib.h>

Fire::Fire() {
	AddSequential( new Release() );
	AddSequential( new WaitCommand(2) );
}
