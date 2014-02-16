#ifndef CATAPULT_HPP
#define CATAPULT_HPP

#include <WPILib.h>

// The catapult arm on the robot. This subsystem only contains the
// electromagnet, not the pistons which pull it back, so that those systems can
// be operated independently.
class Catapult : public Subsystem {
public:
	Catapult();
	void InitDefaultCommand();
	void engage_lock();
	void release_lock();

private:
	Relay *lock;
};

#endif // CATAPULT_HPP
