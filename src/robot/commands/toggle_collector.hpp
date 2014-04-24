#ifndef TOGGLE_COLLECTOR_HPP
#define TOGGLE_COLLECTOR_HPP

#include <WPILib.h>

// Toggle the collector's position between up and down.
class Toggle_Collector : public Command {
public:
	Toggle_Collector();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // TOGGLE_COLLECTOR_HPP
