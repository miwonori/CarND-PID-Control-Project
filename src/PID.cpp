#include "PID.h"
#include <math.h>
/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {
  // Initialization //
  Kp = 0.0 ;
  Kd = 0.0 ;
  Ki = 0.0 ;

  p_error = 0.0 ;
  d_error = 0.0 ;
  i_error = 0.0 ;
  
  pre_cte = 0.0;
}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
    Kp = Kp_;
    Ki = Ki_;
    Kd = Kd_;
}

void PID::UpdateError(double cte, double spd) {
  /**
   * TODO: Update PID errors based on cte.
   */
  i_error = i_error + cte ;
  d_error = cte - pre_cte ;
  pre_cte = cte ;
  p_error = cte ;
  
}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  double total_error = -Kp * p_error - Ki * i_error - Kd * d_error;
  return total_error;  // TODO: Add your total error calc here!
}