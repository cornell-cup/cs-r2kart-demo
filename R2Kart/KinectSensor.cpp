#include "stdafx.h"
#include "KinectSensor.h"

KinectSensor::KinectSensor() : Sensor("Kinect") {
	// Setup Kinect
	kinect = new Kinect1();
}

KinectSensor::~KinectSensor() {
	delete kinect;
}

void KinectSensor::getData(SensorDataBag * sdata) {
	UINT32 * colorBuffer = kinect->getColorBuffer();
	UINT16 * depthBuffer = kinect->getDepthBuffer();
	sdata->kinect = new KinectData(true, colorBuffer, depthBuffer);
}

