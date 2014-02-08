#ifndef USER_INTERFACE_HPP
#define USER_INTERFACE_HPP

#include "port_mapping.hpp"
#include "xbox_controller.hpp"
#include <WPILib.h>

namespace UI {
	void Initialize();
	namespace Primary_Driver {
		extern Xbox_Controller *controller;
	}
	
	namespace Secondary_Driver{
		extern Xbox_Controller *controller;
	}

	void initialize();
}

#endif // USER_INTERFACE_HPP
