#ifndef VISION_HPP
#define VISION_HPP

#include <WPILib.h>

// The interface with the vision code on the driver station laptop
class Vision : public Subsystem {
public:
	Vision();
	bool is_goal_hot();
};

#endif // VISION_HPP
