#include "drive_base.hpp"
#include "../commands/tank_drive.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>
#include <WPILib/networktables/NetworkTable.h>

Drive_Base::Drive_Base() :
Subsystem("Drive_Base"),
left_motor( new Talon(Ports::Digital_Channels::LEFT_DRIVE_MOTOR) ),
right_motor( new Talon(Ports::Digital_Channels::RIGHT_DRIVE_MOTOR) ),
shifter( new DoubleSolenoid(Ports::Solenoids::SHIFTER_HIGH_GEAR,
                            Ports::Solenoids::SHIFTER_LOW_GEAR) ),
potentiometer( new AnalogChannel(Ports::Analog_Channels::DRIVE_BIAS) ),
left_encoder( new Encoder(Ports::Digital_IO::LEFT_ENCODER_A,
                          Ports::Digital_IO::LEFT_ENCODER_B,
                          false)),
right_encoder( new Encoder(Ports::Digital_IO::RIGHT_ENCODER_A,
                           Ports::Digital_IO::RIGHT_ENCODER_B,
                           true)),
is_drive_reversed(false) {
	shifter->Set(DoubleSolenoid::kForward);
	left_encoder->SetDistancePerPulse(13.25 * (5.0/22.0) * (1.0/128.0));
	right_encoder->SetDistancePerPulse(13.25 * (5.0/22.0) * (1.0/128.0));
	left_encoder->SetSamplesToAverage(5);
	right_encoder->SetSamplesToAverage(5);
	left_encoder->Start();
	right_encoder->Start();
}

void Drive_Base::InitDefaultCommand() {
	SetDefaultCommand( new Tank_Drive() );
}

void Drive_Base::set_motors_normalized(float left_speed, float right_speed) {
	float bias = potentiometer->GetAverageVoltage();
	bias -= 2.5;
	bias /= 2.5;
	bias *= .25;
	bias += 1;
	
	// Flip which direction is the "front" when the drive is reversed.
	if(is_drive_reversed) {
		left_motor->Set(constrain(-right_speed * bias));
		right_motor->Set(constrain(-left_speed));
	}
	else {
		left_motor->Set(constrain(left_speed * bias));
		right_motor->Set(constrain(right_speed));
	}
}

void Drive_Base::shift_high_gear() {
	shifter->Set(DoubleSolenoid::kForward);
}

void Drive_Base::shift_low_gear() {
	shifter->Set(DoubleSolenoid::kReverse);
}

void Drive_Base::toggle_gear() {
	if (shifter->Get() == DoubleSolenoid::kForward) {
		shifter->Set(DoubleSolenoid::kReverse);
	}
	else {
		shifter->Set(DoubleSolenoid::kForward);
	}
}

void Drive_Base::reverse_drive() {
	is_drive_reversed = !is_drive_reversed;
	
	NetworkTable *dashboard_table = NetworkTable::GetTable("dashboard");
	dashboard_table->PutBoolean("is_drive_reversed", is_drive_reversed);
}

float Drive_Base::get_left_distance() {
	return left_encoder->GetDistance();
}

float Drive_Base::get_right_distance() {
	return right_encoder->GetDistance();
}

void Drive_Base::reset_distance() {
	left_encoder->Reset();
	right_encoder->Reset();
}

float Drive_Base::constrain(float input) {
	if(input > 0.85) {
		input = 0.85;
	}
	else if(input < -0.85) {
		input = -0.85;
	}

	return input;
}
