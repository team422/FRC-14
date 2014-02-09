#ifndef CATAPULT_HPP
#define CATAPULT_HPP

#include <WPILib.h>

class Catapult : public Subsystem {
public:
	Catapult();
	void pull_down();
	void lock_up();
	void fling();

private:
	DoubleSolenoid *puller;
	DoubleSolenoid *lock;
};

#endif // CATAPULT_HPP
