#ifndef MATCH_ALLIANCE_UNDERGLOW_HPP
#define MATCH_ALLIANCE_UNDERGLOW_HPP

#include "../subsystems/underglow.hpp"
#include <WPILib.h>

// Make underglow color match the alliance.
class Match_Alliance_Underglow : public Command {
public:
	Match_Alliance_Underglow();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // MATCH_ALLIANCE_UNDERGLOW_HPP
