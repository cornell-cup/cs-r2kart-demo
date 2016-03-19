#pragma once
#include "Sensor.h"

class UltrasoundSensor : public Sensor {
protected:
	// Private/protected variables here
public:
	// Public variables here

	// array gives ID for each sensor
	std::vector<int> ids;

	//array Gives locations for each sensor
	std::vector<std::string> locations;

	//Constructor
	UltrasoundSensor(std::vector<int> inIdList, std::vector<std::string> inLocationList);

	//Destructor
	~UltrasoundSensor();

	/**
	 * Get data from the ultrasound sensors.
	 * @param sdata		The pointer to the sensor data bag.
	 */
	void getData(SensorDataBag * sdata);
};
