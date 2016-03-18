#pragma once
#include "SensorData.h"

class IMUData : public SensorData {
protected:
	// Private/protected variables here
public:
	IMUData(bool inData, double inAccelX, double inAccelY, double inAccelZ, 
		double inGyroX, double inGyroY, double inGyroZ);
	~IMUData();

	/*
	* Sensor availability
	*/
	bool hasData;
	/*
	* X, Y, Z acceleration of R2
	*/
	double accelX;
	double accelY;
	double accelZ;
	/*
	* X, Y, Z orientation of R2
	*/
	double gyroX;
	double gyroY;
	double gyroZ;
};
