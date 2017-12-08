#ifndef PID_H
#define PID_H

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;
  double p_error_prev;
  bool is_init = false;

  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double p, double i, double d, double cte);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);


  /*
  * Calculate the total PID error.
  */
  double TotalError();
};

#endif /* PID_H */
