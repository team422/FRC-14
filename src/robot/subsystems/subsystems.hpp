#ifndef SUBSYSTEMS_HPP
#define SUBSYSTEMS_HPP

#include "drive_base.hpp"
#include "tilter.hpp"
#include "intake.hpp"
#include "vision.hpp"
#include "compressor_system.hpp"
#include "underglow.hpp"
#include "catapult.hpp"
#include "camera_light.hpp"
#include "pool_noodle.hpp"

// A copy of each subsystem on the robot, to be shared among the commands which
// require them.
namespace Subsystems {
	extern Drive_Base * drive_base;
	extern Tilter * tilter;
	extern Intake * intake;
	extern Vision *vision;
	extern Compressor_System *compressor_system;
	extern Underglow *underglow;
	extern Catapult *catapult;
	extern Camera_Light *camera_light;
	extern Pool_Noodle *pool_noodle;
	void initialize();
}

#endif // SUBSYSTEMS_HPP
