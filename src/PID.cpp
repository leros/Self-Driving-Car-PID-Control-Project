#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double p, double i, double d, double cte) {
	Kp = p;
	Ki = i;
	Kd = d;
	p_error = cte;
	p_error_prev = p_error;
	i_error = cte;
	d_error = 0;
	is_init = true;
}

void PID::UpdateError(double cte) {
	p_error = cte;
	i_error += cte;
	d_error = p_error - p_error_prev;
	p_error_prev = p_error;
}

double PID::TotalError() {
}

