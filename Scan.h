#ifndef SCAN_H
#define SCAN_H

#include "Arduino.h"

class Scan {
  public:
    Scan(int pin);
  private:
    int _photosensor_pin;
};

#endif
