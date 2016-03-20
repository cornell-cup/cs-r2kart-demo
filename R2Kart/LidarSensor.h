#pragma once
#include "Sensor.h"
#include "rplidar.h"

class LidarSensor : public Sensor {
protected:
	// Private/protected variables here
	rp::standalone::rplidar::RPlidarDriver * driver;
public:
	// Public variables here

	// The serial port connected to the sensor
	std::string port;

	LidarSensor(std::string inPort);

	// Destructor to destroy the instance
	~LidarSensor();

	/**
	 * Get data from the LIDAR.
	 * @param sdata		The pointer to the sensor data bag.
	 */
	void getData(SensorDataBag * sdata);
};
