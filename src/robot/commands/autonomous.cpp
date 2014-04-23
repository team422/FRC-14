#include "autonomous.hpp"
#include "drive_straight.hpp"

Autonomous::Autonomous() {
	AddSequential( new Drive_Straight(6.0 * 12.0), 5.25 );
}
