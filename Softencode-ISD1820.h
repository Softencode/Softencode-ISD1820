/*
  Softencode-ISD1820.h - Library for chip ISD1820.
  Created by Softencode Org., August 21, 2020.
  Released into the public domain.
*/

#ifndef Softencode-ISD1820_h
#define Softencode-ISD1820_h

#include <Arduino.h>

class Softencode-ISD1820 {
  public:
    void setPin(int REC, int PLAY_E, int PLAY_L， int MIC, int MICREF, int AGC, int SPa, int SPb);
}

#endif
