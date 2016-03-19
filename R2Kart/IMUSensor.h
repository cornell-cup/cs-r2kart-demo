#pragma once
#include "Sensor.h"

class IMUSensor : public Sensor {
protected:
	// Private/protected variables here
public:
	// Public variables here

    //constructor
    IMUSensor();

    //destructor
    ~IMUSensor();

	/**
	 * Get data from the IMU.
	 * @param sdata		The pointer to the sensor data bag.
	 */
	void getData(SensorDataBag * sdata);
};
