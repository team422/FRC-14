#ifndef TOGGLE_COLLECTOR_HPP
#define TOGGLE_COLLECTOR_HPP

#include <WPILib.h>

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
