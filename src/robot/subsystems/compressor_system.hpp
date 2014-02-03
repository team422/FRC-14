#ifndef COMPRESSOR_SYSTEM_HPP
#define COMPRESSOR_SYSTEM_HPP

#include <WPILib.h>

class Compressor_System : public Subsystem {
public:
	Compressor_System();
private:
	Compressor *compressor;
};

#endif // COMPRESSOR_SYSTEM_HPP
