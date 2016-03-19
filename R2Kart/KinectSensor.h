#pragma once
#include "Sensor.h"

class KinectSensor : public Sensor {
protected:
	// Private/protected variables here
public:
	// Public variables here
    
    // distance to the obstacle
    double dist;
    
    //angle of the object wit respect to Kinect's filed of vision
    double angle;
    
    //Constructor
    KinectSensor(double inDist, double inAngle);
    
    //Destructor
    ~KinectSensor ();
    
    /**
	 * Get data from the encoder sensors.
	 * @param sdata		The pointer to the sensor data bag.
	 */
	void getData(SensorDataBag * sdata);
    
    
};
