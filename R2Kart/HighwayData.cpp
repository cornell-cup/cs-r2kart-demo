#include "stdafx.h"
#include "HighwayData.h"

HighwayData::HighwayData(bool inData, bool inDetected, long inDetectionTime) : 
	hasData(inData), detected(inDetected), detectionTime(inDetectionTime) {

}

HighwayData::~HighwayData() {

}