#ifndef FIRE_WHEN_SIGNALED_HPP
#define FIRE_WHEN_SIGNALED_HPP

#include <WPILib.h>

class Fire_When_Signaled : public CommandGroup {
public:
	Fire_When_Signaled(float timeout);
};

#endif // FIRE_WHEN_SIGNALED_HPP
