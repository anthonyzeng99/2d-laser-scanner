#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

#include "Arduino.h"
#include "Stepper.h"

class MotorControl{
  public:
    MotorControl (int steps, int pin0, int pin1, int pin2, int pin3);
    void set_speed(int speed);
    void step(int steps);
    void home();
  
  private:
    int _current_position;
    Stepper *motor;
};

#endif
