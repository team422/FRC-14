#ifndef TILTER_HPP
#define TILTER_HPP

#include <WPILib.h>

// The piston which tilts the intake in and out.
class Tilter : public Subsystem {
public:
	Tilter();
	void raise();
	void lower();
	void toggle_position();
	bool is_lowered();
	void update_dashboard();

private:
	DoubleSolenoid *tilter;
	DigitalInput *down_switch;
};

#endif // TILTER_HPP
