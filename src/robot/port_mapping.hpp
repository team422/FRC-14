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
	}
	namespace Relays {
		const uint32_t COMPRESSOR = 1;

		const uint32_t RED_LIGHT = 2,
					   GREEN_LIGHT = 3,
					   BLUE_LIGHT = 4;
	}
	namespace Solenoids {
		const uint32_t SHIFTER_HIGH_GEAR = 1,
		      	       SHIFTER_LOW_GEAR = 2;
	}
	namespace Solenoidz {
		const uint32_t PULLER_FORWARD = 1;
		const uint32_t PULLER_BACKWARD = 1;
		const uint32_t LOCKER_FORWARD = 1;
		const uint32_t LOCKER_BACKWARD = 1;
		}
}

#endif // PORT_MAPPING_HPP
