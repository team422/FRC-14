#include "release_when_signaled.hpp"
#include "fire_when_signaled.hpp"
#include <WPILib.h>

Fire_When_Signaled::Fire_When_Signaled(float timeout) {
	AddSequential( new Release_When_Signaled(timeout) );
	AddSequential( new WaitCommand(1.5) );
}
