#include "stdafx.h"
#include "KinectData.h"

KinectData::KinectData(bool inData, uint32_t * inCamera, uint16_t * inDepth)
	: SensorData(inData), camera(inCamera), depth(inDepth) {

}

KinectData::~KinectData() {
	delete camera;
	delete depth;
}
