#include "vision.hpp"
#include <WPILib/networktables/NetworkTable.h>
#include <string>

Vision::Vision() :
	Subsystem("Vision") {
}

bool Vision::is_goal_hot() {
	NetworkTable *vision_table = NetworkTable::GetTable("vision");
	bool is_target_detected = false;
	if(vision_table->ContainsKey("target_detected")) {
		is_target_detected = vision_table->GetBoolean("target_detected");
	}
	return is_target_detected;
}
