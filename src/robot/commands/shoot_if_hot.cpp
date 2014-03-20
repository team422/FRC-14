#include "shoot_if_hot.hpp"
#include "fire_if_hot.hpp"
#include "lock_catapult.hpp"
#include <WPILib.h>

Shoot_If_Hot::Shoot_If_Hot() {
	AddSequential( new Lock_Catapult() );
	AddSequential( new WaitCommand(0.5) );
	AddSequential( new Fire_If_Hot() );
}
