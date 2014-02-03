#ifndef SUBSYSTEMS_HPP
#define SUBSYSTEMS_HPP

#include "drive_base.hpp"
#include "generic_motor.hpp"
#include "vision.hpp"
#include "compressor_system.hpp"

namespace Subsystems {
	extern Drive_Base * drive_base;
	extern Generic_Motor * generic_motor;
	extern Vision *vision;
	extern Compressor_System *compressor_system;
	void initialize();
}

#endif // SUBSYSTEMS_HPP
