#ifndef CATAPULT_HPP
#define CATAPULT_HPP

#include <WPILib.h>

// The catapult arm on the robot. This subsystem only contains the
// electromagnet, not the pistons which pull it back, so that those systems can
// be operated independently.
class Catapult : public Subsystem {
public:
	Catapult();
	bool is_lock_engaged();
	void engage_lock();
	void release_lock();
	bool is_safety_enabled();
	void enable_safety();
	void disable_safety();

private:
	Relay *lock;
	bool safety_enabled;
};

#endif // CATAPULT_HPP
