#include "stdafx.h"
#include "LidarData.h"

LidarData::LidarData(bool inData, int inNumReadings, double * inAngles, double * inDistances) :
	SensorData(inData), numReadings(inNumReadings), angles(inAngles), distances(inDistances) {

}

LidarData::~LidarData() {
	delete angles;
	delete distances;
}