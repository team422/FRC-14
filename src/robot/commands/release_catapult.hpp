#ifndef RELEASE_CATAPULT_HPP
#define RELEASE_CATAPULT_HPP

#include <WPILib.h>

class Release_Catapult : public Command {
public:
	Release_Catapult();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // RELEASE_CATAPULT_HPP
