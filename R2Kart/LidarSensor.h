#pragma once
#include "Sensor.h"

class LidarSensor : public Sensor {
protected:
	// Private/protected variables here
public:
	// Public variables here
   
   // The serial port connected to the sensor
    std::string port;
    
   // Angle of lidar assuming 0 is when it is looking in direction of motion. 0 <= angle <= 2pi
   float angle;
   
   // distance to the obstacle detected
   float dist;
   
   // COnstructor to initialize values
   LidarSensor(std::string inPort, float inAngle, float inDist);
   
   // Destructor to destroy the instance
   ~LidarSensor();
   
   /**
	 * Get data from the encoder sensors.
	 * @param sdata		The pointer to the sensor data bag.
	 */
	void getData(SensorDataBag * sdata);
};
