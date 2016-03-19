#include "stdafx.h"
#include "IMUData.h"

IMUData::IMUData(bool inData, double inAccelX, double inAccelY, double inAccelZ, 
		double inGyroX, double inGyroY, double inGyroZ) : SensorData(inData), accelX(inAccelX),
		accelY(inAccelY), accelZ(inAccelZ), gyroX(inGyroX), gyroY(inGyroY), gyroZ(inGyroZ) {

}

IMUData::~IMUData() {

}