#include "stdafx.h"
#include "EncoderSensor.h"

// TODO EncoderSensor.cpp and EncoderSensor.h

EncoderSensor::EncoderSensor(std::string inPort) : port(inPort), leftMotor(0), rightMotor(0), deltaLeftMotor(0), deltaRightMotor(0) {
	// We can connect to the sensor here
}

EncoderSensor::~EncoderSensor() {
	// TODO
	// The destructor (prefixed by a tilde ~) is called whenever an object is deleted. It is used to recursively clean up any members or variables that are used.
}

void EncoderSensor::getData(SensorDataBag * sdata) {
	// TODO fill sdata.encoder with proper data
}
