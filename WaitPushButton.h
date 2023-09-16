#ifndef WaitPushButton_h
#define WaitPushButton_h
#include <Arduino.h>

class WaitPushButton {
private:
  uint8_t led_pin, PbON_pin, PbOFF_pin;
  uint16_t delaytime = 1000, T = 0;
public:
  void init();
  void waits();
  void waitms();
  void waits(uint16_t dealy);
  void waitms(uint16_t delay1);
  WaitPushButton(uint8_t led, uint8_t pb_ON, uint8_t pb_OFF, uint16_t mstime);
  WaitPushButton(uint8_t led, uint8_t pb_ON, uint8_t pb_OFF);
};

#endif