#pragma once
#include "SensorData.h"

class UltrasoundData : public SensorData {
protected:
	// Private/protected variables here
public:
	UltrasoundData(double[] inDistances);
	~UltrasoundData();

	/*
	* Array of distances for each individual ultrasound sensor
	*/
	double[] distances;
};
