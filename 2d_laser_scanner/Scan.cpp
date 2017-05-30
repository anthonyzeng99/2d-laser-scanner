#include "Scan.h"

Scan::Scan(int pin, int scan_width, int scan_height, MotorControl xmotor, MotorControl ymotor) {
  photosensor_pin = pin;
  scan_height = scan_height;
  scan_width = scan_width;
  xmotor = xmotor;
  ymotor = ymotor;
}

int Scan::read_photosensor() {
  return analogRead(photosensor_pin);
}

int Scan::run_scan(int scan_width, int scan_height) {
  int scan_values[scan_height][scan_width];
  
  for (int i = 0; i < scan_height; i++) {

    ymotor -> step(1);

    if (i % 2 == 0) {
      for (int j = 0; j < scan_width; j++) {
       scan_values[i][j] = read_photosensor(); 
       xmotor -> step(1);
      }
    }
    
    else if (i % 2 == 1) {
      for (int j = scan_width - 1; j > 0; j--) {
        scan_values[i][j] = read_photosensor();
        xmotor -> step(-1);
      }
    }
    
 
  }
  return scan_values;
}


