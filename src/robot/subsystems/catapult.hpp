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
	bool is_puller_up();
	bool is_puller_down();

private:
	DoubleSolenoid *puller;
	Relay *lock;
	DigitalInput *top_switch,
	             *bottom_switch;
};

#endif // CATAPULT_HPP
