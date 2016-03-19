#pragma once
#include "Sensor.h"

class UltrasoundSensor : public Sensor {
protected:
	// Private/protected variables here
public:
	// Public variables here
    
    // array gives ID for each sensor
    double[] idlist;
    
    //array Gives locations for each sensor
    string[] locationlist;
    
   //array gives distances of the sensors fom objects
   double[] distlist;
   
   //Constructor
   UltrasoundSensor( double[] inIdlist, string[] inLocationlist, double[] inDistlist);
   
   //Destructor
   ~UltrasoundSensor();
    
    
};
