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

	// Channels on the digital sidecar that generally go to motor controllers.
	namespace Digital_Channels {
		const uint32_t LEFT_DRIVE_MOTOR  = 1,
		               RIGHT_DRIVE_MOTOR = 2;

		const uint32_t INTAKE_MOTOR = 3;
	}

	// Digital IO ports on the digital sidecar, usually used for sensors.
	namespace Digital_IO {
		const uint32_t PRESSURE_SWITCH = 1;

		const uint32_t PULLER_TOP_SWITCH = 13,
		               PULLER_BOTTOM_SWITCH = 12;

		const uint32_t COLLECTOR_SWITCH = 2;
	}

	// Relay ports on the digital sidecar, which usually go to spikes.
	namespace Relays {
		const uint32_t COMPRESSOR = 6;

		const uint32_t RED_LIGHT = 3,
					   GREEN_LIGHT = 4,
					   BLUE_LIGHT = 5;

		const uint32_t CATAPULT_MAGNET = 1;

		const uint32_t CAMERA_LIGHT = 7;
	}

	// Ports on the solenoid module for controlling pneumatics.
	namespace Solenoids {
		const uint32_t SHIFTER_HIGH_GEAR = 1,
		      	       SHIFTER_LOW_GEAR = 2;

		const uint32_t PULLER_DOWN_FORWARD = 8,
		               PULLER_DOWN_BACKWARD = 7,
		               PULLER_UP_FORWARD = 6,
		               PULLER_UP_BACKWARD = 5;

		const uint32_t COLLECTOR_UP = 3,
		               COLLECTOR_DOWN = 4;
	}
}

#endif // PORT_MAPPING_HPP
