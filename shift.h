#ifndef shift_h
 #define shift_h

#include "Arduino.h"

class Shift {
public:
    Shift(int SER_Pin,int RCLK_Pin,int SRCLK_Pin,int NUM_Shift);
  void clearAll(); //clear all outputs getting it on HIGH
   void wr();// writing some changes on outputs
   void setRegister(int index, int value); // setting register,index(number of register) , and value (LOW or HIGH)
   void setAll(int valuee); // set all registers to valuee(HIGH or LOW)
   void oneByOne(int time,int poz); // shifting outputs , time(delay) and poz (1= from first to last , 0= from last to first)
private:
  int _SER_Pin;
  int _RCLK_Pin;
  int _SRCLK_Pin;
  int _NUM_Shift;
  int _NUM_Pins;//= _NUM_Shift*8;
  bool * _registers; // Posto ne znamo velicinu array-a na headeru definisemo ga kao pointer
};

#endif //SHIFT_Hgfgfgf
