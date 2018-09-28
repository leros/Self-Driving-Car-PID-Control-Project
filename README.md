[![Udacity - Self-Driving Car NanoDegree](https://s3.amazonaws.com/udacity-sdc/github/shield-carnd.svg)](http://www.udacity.com/drive)


### PART 2: Sensor Fusion, Localization, and Control
### Project 4: PID Controller

In this project, I revisit the lake race track from the Behavioral Cloning Project. This time, however, I implement a PID controller in C++ to maneuver the vehicle around the track.

The simulator will provide me the cross track error (CTE) and the velocity (mph) in order to compute the appropriate steering angle.

---
### The effect of the P, I, D component of the PID algorithm

- P: the proportional component. It depends on the cross track error(or cte) and determines the ratio of output response to the error signal.
- I: the integral component. It sums the error term over time and helps fix the systematic bias.
- D: the derivative component.  It's proportional to the rate of change of the process variable. It helps stabilize the process variable by easing the oscillation.

### how the final hyperparameters were chosen.
I manually tuned the hyperparameters. The initial hyperparameters were from the course material(tau_p=0.2, tau_d=3.0, tau_i=0.004). They were working well at low speed. 
I speeded the vehicle up by using a larger throttle. In order to reduce the oscillation, I increased the coefficiency of the derivative component.