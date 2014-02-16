#ifndef LOWER_PULLER_HPP
#define LOWER_PULLER_HPP

#include <WPILib.h>

class Lower_Puller : public Command {
public:
	Lower_Puller();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // RAISE_LOWER_HPP
