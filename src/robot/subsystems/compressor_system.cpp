#include "compressor_system.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Compressor_System::Compressor_System() :
Subsystem("Compressor_System"),
compressor( new Compressor(Ports::Digital_IO::PRESSURE_SWITCH,
                           Ports::Relays::COMPRESSOR) ) {
	compressor->Start();
}
