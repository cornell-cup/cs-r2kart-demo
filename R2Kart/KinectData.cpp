#include "stdafx.h"
#include "KinectData.h"

KinectData::KinectData(bool inData, UINT32 * inCamera, UINT16 * inDepth)
	: SensorData(inData), camera(inCamera), depth(inDepth) {

}

KinectData::~KinectData() {

}
