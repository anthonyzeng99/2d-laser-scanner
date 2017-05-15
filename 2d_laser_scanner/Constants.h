#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace Constants {
//Pins for the x-axis stepper motor
const int XMOTOR0 = 2;
const int XMOTOR1 = 3;
const int XMOTOR2 = 4;
const int XMOTOR3 = 5;

//Pins for the y-axis stepper motor
const int YMOTOR0 = 8;
const int YMOTOR1 = 9;
const int YMOTOR2 = 10;
const int YMOTOR3 = 11;  

//Pin for photosensors
const int PHOTOSENSOR0 = 0;

//Pin for limit switches
const int XLIMIT_SWITCH = 0;
const int YLIMIT_SWITCH = 1;

//Stepper motor steps per revolution
const int STEPS_PER_REVOLUTION = 200;

//Stepper motor speed
const int STEP_SPEED = 60;
}

#endif

