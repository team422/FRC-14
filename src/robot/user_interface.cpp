#include "user_interface.hpp"
#include <WPILib.h>
Joystick * UI::Primary_Driver::left_joystick = new Joystick(1);
Joystick * UI::Primary_Driver::right_joystick = new Joystick(2);
Joystick * UI::Secondary_Driver::joystick = new Joystick(3);