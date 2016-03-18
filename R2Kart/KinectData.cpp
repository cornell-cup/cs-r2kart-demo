#include "stdafx.h"
#include "KinectData.h"

KinectData::KinectData(bool inData, Image inCamera, Image inDepth) 
	: hasData(inData), camera(inCamera), depth(inDepth) {

}

KinectData::~KinectData() {

}