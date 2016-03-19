#include "stdafx.h"
#include "Sensor.h"

// TODO Sensor.cpp and Sensor.h

Sensor::Sensor(char[] inName, float inId ){
        name(inName);
        id(inId);
}

// destroys the sensor object
Sensor::~Sensor();

void Sensor::getData(SensorDataBag * sdata) {
	// TODO
}
