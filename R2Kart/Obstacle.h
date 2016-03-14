#pragma once

class Obstacle {
protected:
public:
	/**
	 * Create a new obstacle.
	 * 
	 * @param inPosX	The X coordinate of the obstacle
	 * @param inPosY	The Y coordinate of the obstacle
	 * @param inRadius	The radius of the obstacle
	 */
	Obstacle::Obstacle(double inPosX, double inPosY, double inRadius);

	/**
	 * Destructor
	 */
	Obstacle::~Obstacle();

	/**
	 * Checks if another object is within this object.
	 * 
	 * @param inPosX	The X coordinate of the object in question
	 * @param inPosY	The Y coordinate of the object in question
	 * @param inRadius	The radius of the object in question
	 */
	bool within(double inPosX, double inPosY, double inRadius);

	/**
	 * X coordinate of the obstacle
	 */
	double positionX;
	/**
	 * Y coordinate of the obstacle
	 */
	double positionY;
	/**
	 * Radius of the obstacle
	 */
	double radius;
};
