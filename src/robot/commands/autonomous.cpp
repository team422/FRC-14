#include "autonomous.hpp"
//#include "turn_on_light.hpp"
//#include "lower_collector.hpp"
//#include "run_in_intake.hpp"
//#include "shoot_if_hot.hpp"
//#include "turn_off_light.hpp"
//#include "shoot.hpp"
#include "drive_straight.hpp"

Autonomous::Autonomous() {
	//AddSequential( new Turn_On_Light() );
	//AddParallel( new Lower_Collector() );
	//AddParallel( new Run_In_Intake(), 1 );
	//AddSequential( new Shoot_If_Hot() );
	//AddSequential( new Turn_Off_Light() );
	//AddSequential( new WaitCommand(5) );
	//AddSequential( new Shoot() );
	AddSequential( new Drive_Straight(1.5) );
}
