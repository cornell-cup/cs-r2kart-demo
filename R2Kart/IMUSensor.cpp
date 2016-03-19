#include "stdafx.h"
#include "IMUSensor.h"

IMUSensor::IMUSensor() : Sensor("IMU") {
    // TODO connect to the sensor here
}

IMUSensor::~IMUSensor() {
	// TODO clean up
}

void IMUSensor::getData(SensorDataBag * sdata) {
	// TODO fill sdata.imu with proper data
}
