#ifndef CATAPULT_HPP
#define CATAPULT_HPP

#include <WPILib.h>

class Catapult : public Subsystem {
public:
	Catapult();
	void pull_down();
	void release_puller();
	void engage_lock();
	void release_lock();

private:
	DoubleSolenoid *puller;
	Relay *lock;
};

#endif // CATAPULT_HPP
