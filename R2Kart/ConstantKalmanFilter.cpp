#include "stdafx.h"
#include "ConstantKalmanFilter.h"

/**
 * Class for a independent, single variable, constant state Kalman Filter.
 */
class ConstantKalmanFilter {
protected:
public:
	ConstantKalmanFilter();
	~ConstantKalmanFilter();

	double update();
};
