#include "stdafx.h"
#include "EncoderData.h"

EncoderData::EncoderData(int inLeftMotor, int inRightMotor, 
	int inLastLeftMotor, int inLastRightMotor) : leftMotor(inLeftMotor), rightMotor(inRightMotor),
	lastLeftMotor(inLastLeftMotor), lastRightMotor(inLastRightMotor) {

}

EncoderData::~EncoderData() {

}