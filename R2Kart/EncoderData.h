#pragma once
#include "SensorData.h"

class EncoderData : public SensorData {
protected:
	// Private/protected variables here
public:
	EncoderData(int inLeftMotor, int inRightMotor, int inLastLeftMotor, int inLastRightMotor);
	~EncoderData();

	/*
	* Sensor availability
	*/
	bool hasData;
	/*
	* Value of the left motor
	*/
	int leftMotor;
	/*
	* Value of the right motor
	*/
	int rightMotor;
	/*
	* Last value of the left motor
	*/
	int lastLeftMotor;
	/*
	* Last value of the right motor
	*/
	int lastRightMotor;
};
