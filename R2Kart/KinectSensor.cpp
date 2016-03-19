#include "stdafx.h"
#include "KinectSensor.h"

// TODO KinectSensor.cpp and KinectSensor.h

KinectSensor::KinectSensor(double inDist, double inAngle) : dist(inDist), angle(inAngle){
    // can connect to the sensor here
}

KinectSensor::~KinectSensor() {
	// TODO
	// The destructor (prefixed by a tilde ~) is called whenever an object is deleted. It is used to recursively clean up any members or variables that are used.
}

void KinectSensor::getData(SensorDataBag * sdata) {
	// TODO fill sdata.encoder with proper data
}

