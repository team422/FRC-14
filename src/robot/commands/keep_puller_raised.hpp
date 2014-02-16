#ifndef KEEP_PULLER_RAISED_HPP
#define KEEP_PULLER_RAISED_HPP

#include <WPILib.h>

class Keep_Puller_Raised : public Command {
public:
	Keep_Puller_Raised();
	void Initialize() {};
	void Execute();
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // KEEP_PULLER_RAISED_HPP
