#pragma once
#include "SensorData.h"

class KinectData : public SensorData {
protected:
	// Private/protected variables here
public:
	KinectData(Image inCamera, Image inDepth);
	~KinectData();

	/*
	* Image seen through the camera
	*/
	Image camera;
	/*
	* Depth image seen through camera
	*/
	Image depth;
};
