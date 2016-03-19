#include "stdafx.h"
#include "LidarSensor.h"

// TODO LidarSensor.cpp and LidarSensor.h

LidarSensor::LidarSensor(std::string inPort, float inAngle, float inDist) : port(inPort), angle(inAngle), dist(inDist) {
	// We can connect to the sensor here
}

LidarSensor::~LidarSensor() {
	// TODO
	// The destructor (prefixed by a tilde ~) is called whenever an object is deleted. It is used to recursively clean up any members or variables that are used.
}

void LidarSensor::getData(SensorDataBag * sdata) {
	// TODO fill sdata.encoder with proper data
}

