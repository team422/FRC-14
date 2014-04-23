#include "retract_piston.hpp"
#include "release.hpp"
#include <WPILib.h>

Release::Release() {
	AddSequential( new Retract_Piston() );
	AddSequential( new WaitCommand(2) );
}
