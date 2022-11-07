#ifndef _SHOWNUM_H__
#define _SHOWNUM_H__

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <FastLED.h>

class ShowNum
{
private:
  void num_0(int NUM_PST);
  void num_1(int NUM_PST);
  void num_2(int NUM_PST);
  void num_3(int NUM_PST);
  void num_4(int NUM_PST);
  void num_5(int NUM_PST);
  void num_6(int NUM_PST);
  void num_7(int NUM_PST);
  void num_8(int NUM_PST);
  void num_9(int NUM_PST);

public:
  void on(unsigned int count);
  CRGB leds[256];
};



#endif