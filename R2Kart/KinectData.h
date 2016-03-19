#pragma once
#include "SensorData.h"

class KinectData : public SensorData {
protected:
	// Private/protected variables here
public:
	KinectData(bool hasData, uint32_t * inCamera, uint16_t * inDepth);
	~KinectData();

	/*
	* Image seen through the camera
	*/
	uint32_t * camera;
	/*
	* Depth image seen through camera
	*/
	uint16_t * depth;
};
