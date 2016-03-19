#pragma once
#include "Sensor.h"

class KinectSensor : public Sensor {
protected:
	// Private/protected variables here
public:
	// Public variables here

    //Constructor
    KinectSensor();

    //Destructor
    ~KinectSensor ();

    /**
	 * Get data from the Kinect.
	 * @param sdata		The pointer to the sensor data bag.
	 */
	void getData(SensorDataBag * sdata);
    
    
};
