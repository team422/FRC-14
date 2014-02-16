#ifndef RAISE_PULLER_HPP
#define RAISE_PULLER_HPP

#include <WPILib.h>

class Raise_Puller : public Command {
public:
	Raise_Puller();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // RAISE_PULLER_HPP
