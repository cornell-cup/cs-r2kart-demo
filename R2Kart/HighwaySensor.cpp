#include "stdafx.h"
#include "HighwaySensor.h"

// TODO HighwaySensor.cpp and HighwaySensor.h

HighwaySensor::HighwaySensor(bool inApproach, float inDist) : approach(inApproach), dist(inDist) {
	// We can connect to the sensor here
}

HighwaySensor::~HighwaySensor() {
	// TODO
	// The destructor (prefixed by a tilde ~) is called whenever an object is deleted. It is used to recursively clean up any members or variables that are used.
}

void HighwaySensor::getData(SensorDataBag * sdata) {
	// TODO fill sdata.encoder with proper data
}