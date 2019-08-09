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

void Motion::readMotion(){
  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(Motion::_acc_x,Motion::_acc_y,Motion::_acc_z);
  }
  if (IMU.gyroscopeAvailable()) {
    IMU.readGyroscope(Motion::_gyro_x,Motion::_gyro_y,Motion::_gyro_z);
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
float Motion::gyro_x(){
  return Motion::_gyro_x;
}
float Motion::gyro_y(){
  return Motion::_gyro_y;
}
float Motion::gyro_z(){
  return Motion::_gyro_z;
}
