#pragma once
#include "SensorData.h"

class LidarData : public SensorData {
protected:
	// Private/protected variables here
public:
	LidarData(double[] inAngles, double[] inDistances);
	~LidarData();

	/*
	* Array of angles for each point returned
	*/
	double[] angles;
	/*
	* Array of distances for each point returned. 
	* Same indexes of angles[] and distance[] correspond to same point
	*/
	double[] distances;
};
