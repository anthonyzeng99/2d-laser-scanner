#include "MotorControl.h"

MotorControl::MotorControl(int steps, int pin0, int pin1, int pin2, int pin3) {
    Stepper motor = Stepper(steps, pin0, pin1, pin2, pin3);
    current_position = 0;
}

void MotorControl::set_speed(int step_speed) {
  motor -> setSpeed(step_speed);
}

void MotorControl::step(int steps) {
  motor -> step(steps);
  current_position += steps;
}

void MotorControl::home() {
  motor -> step(current_position * -1);
  current_position = 0;
} 

