#include "PID.h"

/*
* TODO: Complete the PID class.
*/

PID::PID() : p_error(0), i_error(0), d_error(0), Kp(0), Ki(0), Kd(0) {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;

  p_error = 0;
  i_error = 0;
  d_error = 0;
}

void PID::UpdateError(double cte) {
  d_error = cte - p_error;
  p_error = cte;
  i_error += cte;
}

double PID::TotalError() {
  return i_error;
}

