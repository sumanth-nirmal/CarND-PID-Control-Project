#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {

    // initialise the pid gains
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;

    // reset the errors
    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;
}

void PID::UpdateError(double cte) {

    // calculate the errors
    d_error = cte - p_error;
    p_error = cte;
    i_error += cte;
}

double PID::TotalError() {
    // return the total error
    return  Kp*p_error + Ki*i_error + Kd*d_error;
}

