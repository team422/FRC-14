#ifndef INTAKE_HPP
#define INTAKE_HPP

#include <WPILib.h>

// The roller on the collector system
class Intake : public Subsystem {
public:
	Intake();
	void InitDefaultCommand();
	void set_normalized(float speed);

private:
	Talon *roller;	
};

#endif // INTAKE_HPP
