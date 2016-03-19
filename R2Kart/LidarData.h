#pragma once
#include "SensorData.h"

class LidarData : public SensorData {
protected:
	// Private/protected variables here
public:
	LidarData(bool inData = false, int inNumReadings = 0, double * inAngles = NULL, double * inDistances = NULL);
	~LidarData();

	/**
	 * Number of readings
	 */
	int numReadings;
	/*
	* Array of angles for each point returned
	*/
	double * angles;
	/*
	* Array of distances for each point returned. 
	* Same indexes of angles[] and distance[] correspond to same point
	*/
	double * distances;
};
