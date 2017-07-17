# PID Controller

PID controller is implemented to control the car autonmously, which is done as part of udacity self driving car engineer nano degree(https://www.udacity.com/drive).

for video [check](https://youtu.be/LgYx6Z8INLM)

### PID Control
PID controller is a simple reactive controller that is widely used. The basic working of PID is difference between the actual value and the desired value of a control variable in a system is considerd as an error signal. Depending on the PID parameters control output is generated in order to get this error as close as to zero. 
In this scenario, the driving [simulator](https://github.com/udacity/self-driving-car-sim) produces the error signal as the distance between the actual car position on the road and a reference trajectory. The PID controller is designed to minimize this error and the controller operates on steering angles.

#### P Controller
