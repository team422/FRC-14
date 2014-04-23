#ifndef RELEASE_WHEN_SIGNALED_HPP
#define RELEASE_WHEN_SIGNALED_HPP

#include <WPILib.h>

// Release when signaled by the driver raising both arms above his head. If the
// kinect does not detect the driver signalling before the timeout, the catapult
// releases at the end of the timeout.
class Release_When_Signaled : public Command {
public:
	Release_When_Signaled(float timeout);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted() {};
private:
	bool did_release;
};

#endif // RELEASE_WHEN_SIGNALED_HPP
