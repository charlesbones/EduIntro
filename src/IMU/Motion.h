#include <Arduino.h>
#include <Arduino_LSM6DS3.h>

#ifndef Motion_h
#define Motion_h

class Motion
{
  public:
      Motion();
      void begin();
      void readMotion();
      virtual float acc_x();
      virtual float acc_y();
      virtual float acc_z();
      virtual float gyro_x();
      virtual float gyro_y();
      virtual float gyro_z();
    private:
      float _acc_x;
      float _acc_y;
      float _acc_z;
      float _gyro_x;
      float _gyro_y;
      float _gyro_z;
};
#endif
