#include "Motion.h"

Motion::Motion(){
  _acc_x=0;
  _acc_y=0;
  _acc_z=0;
}
void Motion::begin(){
  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
  }
}

void Motion::readAccelerometer(){
  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(Motion::_acc_x,Motion::_acc_y,Motion::_acc_z);
  }
}
float Motion::acc_x(){
  return Motion::_acc_x;
}
float Motion::acc_y(){
  return Motion::_acc_y;
}
float Motion::acc_z(){
  return Motion::_acc_z;
}
void Motion::readAccelerometer(){
  if (IMU.gyroscopeAvailable()) {
    float x,y,z;
    IMU.readGyroscope(x,y,z);
    Motion::gyro_x=x;
    Motion::gyro_y=y;
    Motion::gyro_z=z;
  }
}
