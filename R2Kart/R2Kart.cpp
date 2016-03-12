// R2Kart.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "R2State.h"
#include "Sensor.h"
#include "SensorData.h"
#include "SensorDataBag.h"

std::vector<Sensor *> initializeSensors() {
	return std::vector<Sensor *>();
}

void getSensorData(std::vector<Sensor *> slist, SensorDataBag * sdata) {
	for (auto sensor = slist.begin(); sensor != slist.end(); sensor++) {
		(*sensor)->getData(sdata);
	}

	return;
}

R2State updateState(SensorDataBag * sdata) {
	return R2State();
}

void sendToGui(const R2State &state) {
	return;
}

int main()
{
	std::vector<Sensor *> sensorList = initializeSensors();

	while (true) {
		SensorDataBag * sdata = NULL;
		getSensorData(sensorList, sdata);
		R2State state = updateState(sdata);
		sendToGui(state);
	}

    return 0;
}

