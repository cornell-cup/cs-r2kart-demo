#include "stdafx.h"
#include "UltrasoundSensor.h"

// TODO UltrasoundSensor.cpp and UltrasoundSensor.h

UltrasundSensor::UltrasoundSensor( double[] inIdlist, string[] inlocationlist, double[] inDistlist){
    for(double i: inIdlist){
        idlist[i] = inIdlist[i];
    }
    
    for(string i: inLocationlist){
        locationlist[i] = inlocationlist[i];
    }
    
    for(double i: inDistlist){
        distlist[i] = inDistlist[i];
    }
}

UltrasoundSensor::~UltrasoundSensor(){
    
}

void EncoderSensor::getData(SensorDataBag * sdata) {
	// TODO fill sdata.encoder with proper data
}
