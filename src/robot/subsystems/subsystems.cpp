#include "subsystems.hpp"

Drive_Base * Subsystems::drive_base = 0;
Tilter * Subsystems::tilter = 0;
Intake * Subsystems::intake = 0;
Vision *Subsystems::vision = 0;
Compressor_System *Subsystems::compressor_system = 0;
Underglow *Subsystems::underglow = 0;
Catapult *Subsystems::catapult = 0;
Camera_Light *Subsystems::camera_light = 0;
Pool_Noodle *Subsystems::pool_noodle = 0;

// Ideally, these would be statically initialized above. However, WPILib has a
// bug where networking code in the constructors of actuators and sensors causes
// a crash when called during static initialization. The initialize function is
// a workaround until the bug is addressed.
// See http://firstforge.wpi.edu/sf/go/artf1644
void Subsystems::initialize() {
	drive_base = new Drive_Base();
	tilter = new Tilter();
	intake = new Intake();
	vision = new Vision();
	compressor_system = new Compressor_System();
	underglow = new Underglow();
	catapult = new Catapult();
	camera_light = new Camera_Light();
	pool_noodle = new Pool_Noodle();
}
