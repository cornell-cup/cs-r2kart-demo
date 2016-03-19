#include "stdafx.h"
#include "UltrasoundSensor.h"

UltrasoundSensor::UltrasoundSensor(std::vector<int> inIdList, std::vector<std::string> inLocationList) : Sensor("Ultrasound"), ids(inIdList), locations(inLocationList) {
	// TODO connect to the sensor here
}

UltrasoundSensor::~UltrasoundSensor(){
    // TODO clean up
}

void UltrasoundSensor::getData(SensorDataBag * sdata) {
	// TODO fill sdata.ultrasound with proper data
}
