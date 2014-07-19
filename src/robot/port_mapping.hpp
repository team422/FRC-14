#ifndef PORT_MAPPING_HPP
#define PORT_MAPPING_HPP

#include <WPILib.h>


// When developing, if a port has not been determined, it can be replaced with
// `UNKNOWN`. This will allow the code to compile in debug mode, but in release
// mode it will throw an error.
#ifdef DEBUG
#define UNKNOWN 0
#else
#define UNKNOWN @port_not_assigned
#endif

// Constants specifying where all cables on the robot are plugged in.

namespace Ports {
	namespace Analog_Channels {
		const uint32_t DRIVE_BIAS = 1;
	}
	
	// Channels on the digital sidecar that generally go to motor controllers.
	namespace Digital_Channels {
		const uint32_t LEFT_DRIVE_MOTOR  = 1,
		               RIGHT_DRIVE_MOTOR = 2;

		const uint32_t INTAKE_MOTOR = 3;

		const uint32_t CATAPULT_MOTOR = 6;
	}

	// Digital IO ports on the digital sidecar, usually used for sensors.
	namespace Digital_IO {
		const uint32_t PRESSURE_SWITCH = 1;

		const uint32_t LEFT_ENCODER_A = 8,
			           LEFT_ENCODER_B = 7,
			           RIGHT_ENCODER_A = 10,
			           RIGHT_ENCODER_B = 9;

		const uint32_t COLLECTOR_SWITCH = 5;
		
		const uint32_t CATAPULT_BOTTOM_SWITCH = 2;
	}

	// Relay ports on the digital sidecar, which usually go to spikes.
	namespace Relays {
		const uint32_t COMPRESSOR = 6;

		const uint32_t RED_LIGHT = 4,
					   GREEN_LIGHT = 5,
					   BLUE_LIGHT = 7;

		const uint32_t CAMERA_LIGHT = 3;
	}

	// Ports on the solenoid module for controlling pneumatics.
	namespace Solenoids {
		const uint32_t SHIFTER_HIGH_GEAR = 1,
		      	       SHIFTER_LOW_GEAR = 2;

		const uint32_t COLLECTOR_UP = 4,
		               COLLECTOR_DOWN = 3;

		const uint32_t CATAPULT_MOTOR_ENGAGED = 7,
		               CATAPULT_MOTOR_DISENGAGED = 8;
	}
}

#endif // PORT_MAPPING_HPP
