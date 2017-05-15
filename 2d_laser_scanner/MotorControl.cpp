#include "MotorControl.h"


MotorControl::MotorControl(int steps, int pin0, int pin1, int pin2, int pin3) {
    Stepper motor = Stepper(steps, pin0, pin1, pin2, pin3);
    _current_position = 0;
}

void MotorControl::set_speed(int step_speed) {
  motor -> setSpeed(step_speed);
}

void MotorControl::step(int steps) {
  motor -> step(steps);
  _current_position += steps;
}

void MotorControl::home() {
  motor -> step(_current_position * -1);
  _current_position = 0;
} 

