#ifndef LOWER_COLLECTOR_HPP
#define LOWER_COLLECTOR_HPP

#include <WPILib.h>

// Tilt the collector forward so we can pick up balls.
class Lower_Collector : public Command {
public:
	Lower_Collector();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // LOWER_COLLECTOR_HPP
