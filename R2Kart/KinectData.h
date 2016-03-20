#pragma once
#include "SensorData.h"

class KinectData : public SensorData {
protected:
	// Private/protected variables here
public:
	KinectData(bool hasData, UINT32 * inCamera, UINT16 * inDepth);
	~KinectData();

	/*
	* Image seen through the camera
	*/
	UINT32 * camera;
	/*
	* Depth image seen through camera
	*/
	UINT16 * depth;
};
