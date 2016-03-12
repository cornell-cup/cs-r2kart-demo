#pragma once
#include "SensorData.h"
#include "SensorDataBag.h"

class Sensor {
protected:
	// Private/protected variables here
public:
	// Public variables here
	/**
	 * Sensor constructor.
	 */
	Sensor();

	/**
	 * Sensor destructor.
	 */
	virtual ~Sensor();

	/**
	 * If this sensor is available, getData fills the corresponding SensorDataBag member with data from this sensor.
	 * @param sdata		The pointer to the sensor data bag.
	 */
	virtual void getData(SensorDataBag * sdata);
};
