#include <Arduino.h>
#include <Arduino_LSM6DS3.h>

#ifndef Motion_h
#define Motion_h

class Motion
{
  public:
      Motion();
      void begin();
      float _acc_x;
      float _acc_y;
      float _acc_z;
      void readAccelerometer();
      virtual float acc_x();
      virtual float acc_y();
      virtual float acc_z();
    private:

      void readGiroscope();

};
#endif
