#include "stdafx.h"
#include "LidarSensor.h"

using namespace rp::standalone::rplidar;

LidarSensor::LidarSensor(std::string inPort) : Sensor("LIDAR"), port(inPort), driver(NULL) {
	driver = RPlidarDriver::CreateDriver(RPlidarDriver::DRIVER_TYPE_SERIALPORT);
	if (!driver) {
		printf("Failed to create RPLIDAR driver\n");
	}
	if (IS_FAIL(driver->connect(port.c_str(), 115200))) {
		printf("Failed to connect to RPLIDAR\n");
	}
	u_result result = driver->startScan();
	if (IS_FAIL(result)) {
		printf("%d\n", result);
		printf("Failed to start RPLIDAR scanning\n");
	}
}

LidarSensor::~LidarSensor() {
	RPlidarDriver::DisposeDriver(driver);
}

void LidarSensor::getData(SensorDataBag * sdata) {
	u_result result;
	rplidar_response_measurement_node_t nodes[360 * 2];
	size_t   count = 720;

	result = driver->grabScanData(nodes, count);

	if (IS_OK(result) || result == RESULT_OPERATION_TIMEOUT) {
		driver->ascendScanData(nodes, count);

		sdata->lidar = new LidarData(true);

		for (int pos = 0; pos < (int)count; ++pos) {
			double angle = (nodes[pos].angle_q6_checkbit >> RPLIDAR_RESP_MEASUREMENT_ANGLE_SHIFT) / 64.0;
			double distance = nodes[pos].distance_q2 / 4000.0f;
			int quality = nodes[pos].sync_quality >> RPLIDAR_RESP_MEASUREMENT_QUALITY_SHIFT;

			if (quality >= 10) {
				sdata->lidar->angles.push_back(angle);
				sdata->lidar->distances.push_back(distance);
			}
		}
	}
}

