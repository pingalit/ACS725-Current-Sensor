#pragma once

/* acs725_sensor library by Theja Ram Pingali
 */

// This will load the definition for common Particle variable types
#include "Particle.h"


#define SENSOR_AVERAGE          500

// This is your main class that users will import into their application
class acs725_sensor
{
public:
  /**
   * Constructor
   */
  acs725_sensor();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  /**
   * Example private method
   */
  void doit();
};
