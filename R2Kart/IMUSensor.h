#pragma once
#include "Sensor.h"

class IMUSensor : public Sensor {
protected:
	// Private/protected variables here
public:
	// Public variables here
    
    //acceleration of the R2kart
    double acc;
    
    //orientation of the R2kart
    double orientation;
    
    //constructor
    IMUSensor( double inAcc, double inOrientation);
    
    //destructor
    ~IMUSensor();
    
     /**
	 * Get data from the encoder sensors.
	 * @param sdata		The pointer to the sensor data bag.
	 */
	void getData(SensorDataBag * sdata);
    
    
};
