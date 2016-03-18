#include "stdafx.h"
#include "EncoderData.h"

EncoderData::EncoderData(int inData, int inLeftMotor, int inRightMotor, 
	int inLastLeftMotor, int inLastRightMotor) : hasData(inData), leftMotor(inLeftMotor), 
	rightMotor(inRightMotor), lastLeftMotor(inLastLeftMotor), lastRightMotor(inLastRightMotor) {

}

EncoderData::~EncoderData() {

}