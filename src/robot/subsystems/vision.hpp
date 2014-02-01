#ifndef VISION_HPP
#define VISION_HPP

#include <WPILib.h>

class Vision : public Subsystem {
public:
	Vision();
	bool is_goal_hot();
};

#endif // VISION_HPP
