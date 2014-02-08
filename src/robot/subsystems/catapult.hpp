#ifndef CATAPULT_HPP
#define CATAPULT_HPP

#include <WPILib.h>

class Catapult : public Subsystem {
public:
	Catapult();
	void PullDown(float kReverse);
	void LockUp(float kForward);
	void Fling(float kReverse, float kReverse);

private:
	DoubleSolenoid *puller;
	DoubleSolenoid *lock;
};

#endif // CATAPULT_HPP
