#include "shoot.hpp"
#include "fire.hpp"
#include "lock_catapult.hpp"
#include <WPILib.h>

Shoot::Shoot() {
	AddSequential( new Lock_Catapult() );
	AddSequential( new WaitCommand(0.5) );
	AddSequential( new Fire() );
}
