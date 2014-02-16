#ifndef CATAPULT_HPP
#define CATAPULT_HPP

#include <WPILib.h>

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
