#ifndef POOL_NOODLE_HPP
#define POOL_NOODLE_HPP

#include <WPILib.h>

// The new slightly less ugly shaft that prevents the ball from falling out of the bot
class Pool_Noodle : public Subsystem {
public:
	Pool_Noodle();
	void Initialize();
	void move_back();
	void move_forward();
	bool IsFinished();

private:
	Servo *articulator;	
};

#endif // POOL_NOODLE_HPP
