#ifndef RAISE_COLLECTOR_HPP
#define RAISE_COLLECTOR_HPP

#include <WPILib.h>

// Tilt the collector back into the robot
class Raise_Collector : public Command {
public:
	Raise_Collector();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // RAISE_COLLECTOR_HPP
