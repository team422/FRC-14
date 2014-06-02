#include "autonomous.hpp"
#include "lower_collector.hpp"
#include "fire.hpp"
#include "drive_straight.hpp"

Autonomous::Autonomous() {
	AddSequential( new Lower_Collector() );
	AddSequential( new WaitCommand(2) );
	AddSequential( new Drive_Straight(6.0 * 12.0), 4 );
	AddSequential( new WaitCommand(1) );
	AddSequential( new Fire() );
}
