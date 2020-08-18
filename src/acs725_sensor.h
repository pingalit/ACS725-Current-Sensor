#pragma once

/* acs725_sensor library by Theja Ram Pingali
 */

// This will load the definition for common Particle variable types
#include "Particle.h"


#define SENSOR_AVERAGE              50
#define DEVICE_VOLTAGE_REFERENCE    3.3

// This is your main class that users will import into their application
class acs725_sensor
{
public:
  acs725_sensor(int adc_bits);

  void begin();
  float getCurrent(int rawSensorVal);

private:
  int sensor_value;
  float sensor_sensitivity;
  float Vref;
  int _adcBits;
  int _loopCount;
};
