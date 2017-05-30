#ifndef SCAN_H
#define SCAN_H

#include "Arduino.h"

class Scan {
  public:
    Scan(int pin, int scan_width, int scan_height);
    int read_photosensor();
    int run_scan(int scan_width, int scan_height);
    
  private:
    int photosensor_pin;
    int scan_height;
    int scan_width;
};

#endif
