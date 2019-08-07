#include <Arduino.h>
#include <Arduino_LSM6DS3.h>

#ifndef IMU_h
#define IMU_h

class IMU : public Arduino_LSM6DS3
{
  public:
      LSM6DS3();
      readAccelerometer(float x, float y, float z);
      readGiroscope(float x, float y, float z);
}
