#ifndef DRAW_H
#define DRAW_H

#include "Arduino.h"

class Draw {
  public:
    Draw(String filename);

  private:
    String _filename;
};

#endif
