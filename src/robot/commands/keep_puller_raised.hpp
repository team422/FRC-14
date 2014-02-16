#ifndef KEEP_PULLER_RAISED_HPP
#define KEEP_PULLER_RAISED_HPP

#include <WPILib.h>

// Keep the puller raised for duration. Used while firing to keep the puller up.
class Keep_Puller_Raised : public Command {
public:
	Keep_Puller_Raised(float duration);
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif // KEEP_PULLER_RAISED_HPP
