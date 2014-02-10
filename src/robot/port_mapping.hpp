#ifndef PORT_MAPPING_HPP
#define PORT_MAPPING_HPP

#include <WPILib.h>

#ifdef DEBUG
#define UNKNOWN 0
#else
#define UNKNOWN @port_not_assigned
#endif

namespace Ports {
	namespace Digital_Channels {
		const uint32_t LEFT_DRIVE_MOTOR  = 1,
		               RIGHT_DRIVE_MOTOR = 2,
			           GENERIC_MOTOR = 3;
	}
	namespace Digital_IO {
		const uint32_t PRESSURE_SWITCH = 1;

		const uint32_t CATAPULT_TOP_SWITCH = UNKNOWN,
		               CATAPULT_BOTTOM_SWITCH = UNKNOWN;
	}
	namespace Relays {
		const uint32_t COMPRESSOR = 1;

		const uint32_t RED_LIGHT = 2,
					   GREEN_LIGHT = 3,
					   BLUE_LIGHT = 4;

		const uint32_t CATAPULT_MAGNET = UNKNOWN;
	}
	namespace Solenoids {
		const uint32_t SHIFTER_HIGH_GEAR = 1,
		      	       SHIFTER_LOW_GEAR = 2;

		const uint32_t PULLER_FORWARD = UNKNOWN,
		               PULLER_BACKWARD = UNKNOWN;
	}
}

#endif // PORT_MAPPING_HPP
