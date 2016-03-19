#include "stdafx.h"
#include "IMUSensor.h"

// TODO IMUSensor.cpp and IMUSensor.h

IMUSensor::IMUSensor( double inAcc, double inOrientation) : acc(inAcc), orientation(inOrientation){
    // can connect to sensor here
}

IMUSensor::~IMUSensor() {
	// TODO
	// The destructor (prefixed by a tilde ~) is called whenever an object is deleted. It is used to recursively clean up any members or variables that are used.
}

void IMUSensor::getData(SensorDataBag * sdata) {
	// TODO fill sdata.encoder with proper data
}
