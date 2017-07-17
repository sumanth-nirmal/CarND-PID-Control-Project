# PID Controller

PID controller is implemented to control the car autonmously, which is done as part of udacity self driving car engineer nano degree(https://www.udacity.com/drive).

for video [check](https://youtu.be/LgYx6Z8INLM)

### PID Control
PID controller is a simple reactive controller that is widely used. The basic working of PID is that the conrol output is generated in order to get the error signal as close as to zero, the error signal is basically the difference between actual value and the desired value of a control variable in a system is considerd as an error signal. the PID parameters drive how the error is driven to zero.

In this scenario, the driving [simulator](https://github.com/udacity/self-driving-car-sim) produces the error signal as the distance between the actual car position on the road and a reference trajectory. The PID controller is designed to minimize this error and the controller operates on steering angles.

#### P Controller
The proportional term _(P)_ generates the output signal proportional to the error signal. Pure _P_ is unstable and makes it to oscillate at the set point (if tuned correctly). So ideally pure _P_ can not achieve a stable set point.

#### I Controller
The Integrator term _(I)_ sumps up the error signal over time. which actually porovides the boost to the error signal to reach the set point. The I term can also create an over shoot.

#### D Controller
The Differential term _(D)_ corresponds to the rate of change of error signal over time, This can be used to mitigate the osciallations.
