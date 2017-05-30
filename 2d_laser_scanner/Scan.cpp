#include "Scan.h"

Scan::Scan(int pin, int scan_width, int scan_height) {
  photosensor_pin = pin;
  scan_height = scan_height;
  scan_width = scan_width;

}

int Scan::read_photosensor() {
  return analogRead(photosensor_pin);
}

int Scan::run_scan(int scan_width, int scan_height) {
  int scan_values[scan_width][scan_height];
  for (int i = 0; i < scan_width; i++) {
    for (int j = 0; j < scan_height; j++) {
      scan_values[i][j] = read_photosensor();
    }
  }
  return scan_values;
}


