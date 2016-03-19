#include "stdafx.h"
#include "KinectSensor.h"

KinectSensor::KinectSensor() : Sensor("Kinect") {
    // TODO connect to the sensor here
}

KinectSensor::~KinectSensor() {
	// TODO clean up
}

void KinectSensor::getData(SensorDataBag * sdata) {
	// TODO fill sdata.kinect with proper data
}

