#include "autonomous.hpp"
#include "fire_when_signaled.hpp"
#include "drive_straight.hpp"

Autonomous::Autonomous() {
	AddSequential( new Fire_When_Signaled(6) );
	AddSequential( new Drive_Straight(6.0 * 12.0), 4 );
}
