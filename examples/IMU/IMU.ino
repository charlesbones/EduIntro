/*
  Inertia meassurement unit (IMU) A.K.A. Motion

  IMPORTANT: Before using this example, make sure that you have installed the Arduino_LSM6DS3 library.

  This example uses the embeded IMU unit in the Arduino UNO Wifi Rev2.

  The IMU captures values from the accelerometer and the gyroscope. 
  These values can be accesable with:

  acc_x : Returns the X value of the accelerometer.
  acc_y : Returns the Y value of the accelerometer.
  acc_z : Returns the Z value of the accelerometer.
  gyro_y : Returns the X value of the gyroscope.
  gyro_x : Returns the Y value of the gyroscope.
  gyro_z : Returns the Z value of the gyroscope.

  created in Aug 2019 by C. Rodriguez
  based on work by D. Cuartielles (2019), F. Vanzati (2011) and M. Loglio (2013)

  This example code is in the public domain.
*/

// include the EduIntro library
#include <EduIntro.h>

Motion imu; //Create the object to access the IMU unit 

void setup()
{
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
  imu.begin(); //Setup the IMU unit
}

void loop()
{
  imu.read();   //Read the IMU values
  // Print the collected data in a row on the Serial Monitor
  // We recommend you to use the Serial Plotter to understand the values better
  Serial.print(acc_x);
  Serial.print('\t');
  Serial.print(acc_y);
  Serial.print('\t');
  Serial.println(acc_z);
}
