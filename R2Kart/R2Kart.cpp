// R2Kart.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment (lib, "Ws2_32.lib")

#include <armadillo.hpp>

#include "R2State.h"
#include "Sensor.h"
#include "SensorData.h"
#include "SensorDataBag.h"

/**
 * The connection to the GUI server.
 */
SOCKET connection = INVALID_SOCKET;

/**
 * Initialize a Winsock connection to localhost.
 */
void initializeWinsock() {
	// Variables
	WSADATA wsaData;
	int wsResult;

	// Startup winsock
	wsResult = WSAStartup(MAKEWORD(2, 2), &wsaData);

	// Connection address info (loopback)
	struct addrinfo *result = NULL, *ptr = NULL, hints;
	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;

	wsResult = getaddrinfo("localhost", "9000", &hints, &result);
	if (wsResult != 0) {
		WSACleanup();
		return;
	}

	// Try connections
	for (ptr = result; ptr != NULL; ptr = ptr->ai_next) {
		// Create a socket
		connection = socket(ptr->ai_family, ptr->ai_socktype, ptr->ai_protocol);
		if (connection == INVALID_SOCKET) {
			WSACleanup();
			return;
		}

		// Connect to server
		wsResult = connect(connection, ptr->ai_addr, (int)ptr->ai_addrlen);
		if (wsResult == SOCKET_ERROR) {
			// Error connecting
			closesocket(connection);
			connection = INVALID_SOCKET;
		}
		else {
			// All good, we can stop here
			break;
		}
	}

	freeaddrinfo(result);

	if (connection == INVALID_SOCKET) {
		WSACleanup();
	}
}

/**
 * Initialize things for R2Kart.
 * - Winsock (communication to GUI)
 */
void initialize() {
	// Winsock communication
	initializeWinsock();
}

/**
 * Initialize communication with sensors.
 * 
 * @return		A vector of sensors (available and not available)
 */
std::vector<Sensor *> initializeSensors() {
	return std::vector<Sensor *>();
}

/**
 * Get sensor data from all sensors and store the data into a bag.
 * 
 * @param slist		Vector of sensors
 * @param sdata		Data bag to fill with sensor data
 */
void getSensorData(std::vector<Sensor *> slist, SensorDataBag * sdata) {
	for (auto sensor = slist.begin(); sensor != slist.end(); sensor++) {
		(*sensor)->getData(sdata);
	}

	return;
}

/**
 * Update the R2 state with data from sensors.
 * 
 * @param sdata		Bag of sensor data
 */
R2State updateState(SensorDataBag * sdata) {
	// Initialize a default state
	R2State state;

	// Highway
	HighwayData * hd = sdata->highway;
	if (hd->hasData) {
		state.highway = hd->detected;
	}

	// Ultrasound
	UltrasoundData * ud = sdata->ultrasound;
	if (ud->hasData) {
		for (int i = 0; i < ud->numSensors; i++) {
			state.ultrasound.push_back(ud->distances[i]);
		}
	}

	// TODO Kalman Filter IMU

	return state;
}

/**
 * Send the current R2State to the GUI
 * 
 * @param state		The current R2 state
 */
void sendToGui(const R2State &state) {
	if (connection != INVALID_SOCKET) {
		// Send data
		// DEBUG send Hello world!
		int wsResult = send(connection, "Hello world!", 12, 0);
		if (wsResult == SOCKET_ERROR) {
			closesocket(connection);
			connection = INVALID_SOCKET;
			WSACleanup();
		}
	}
	return;
}

/**
 * Main function
 */
int main()
{
	// Initialize
	initialize();
	// Get the list of sensors
	std::vector<Sensor *> sensorList = initializeSensors();

	// Forever
	while (true) {
		// Grab the new sensor data
		SensorDataBag * sdata = new SensorDataBag();
		getSensorData(sensorList, sdata);
		// Update the R2 state new sensor data
		R2State state = updateState(sdata);
		// Send the updated state to the GUI
		sendToGui(state);
		// Delete the data bag
		delete sdata;
		// DEBUG wait for 5 seconds
		Sleep(5000);
	}

    return 0;
}
