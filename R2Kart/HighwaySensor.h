#pragma once
#include "Sensor.h"

class HighwaySensor : public Sensor {
protected:
	// Private/protected variables here
    
  public:
    // Public variables here
    
    // tells us if the highway is approaching or not based on threshold distance
    bool approach;
    
    //gives distance of approaching highway 
    float dist;
    
    //Constructor
    HighwaySensor(bool inApproach, float inDist);
    
    //Destructor
    ~HighwaySensor();
    
    /**
	 * Get data from the encoder sensors.
	 * @param sdata		The pointer to the sensor data bag.
	 */
	void getData(SensorDataBag * sdata);
    
    
    
    
    
    
};
