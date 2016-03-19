#include "stdafx.h"
#include "LidarSensor.h"

LidarSensor::LidarSensor(std::string inPort) : Sensor("LIDAR"), port(inPort) {
	// TODO connect to the sensor here
}

LidarSensor::~LidarSensor() {
	// TODO clean up
}

void LidarSensor::getData(SensorDataBag * sdata) {
	// TODO fill sdata.lidar with proper data
}

