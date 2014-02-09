#include "subsystems.hpp"

Drive_Base * Subsystems::drive_base = 0;
Generic_Motor * Subsystems::generic_motor = 0;
Vision *Subsystems::vision = 0;
Compressor_System *Subsystems::compressor_system = 0;
Lights_RGB *Subsystems::lights_rgb = 0;
Catapult *Subsystems::Catapult = 0;

// Ideally, these would be statically initialized above. However, WPILib has a
// bug where networking code in the constructors of actuators and sensors causes
// a crash when called during static initialization. The initialize function is
// a workaround until the bug is addressed.
// See http://firstforge.wpi.edu/sf/go/artf1644
void Subsystems::initialize() {
	drive_base = new Drive_Base();
	generic_motor = new Generic_Motor();
	vision = new Vision();
	compressor_system = new Compressor_System();
	lights_rgb = new Lights_RGB();
}
