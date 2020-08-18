/* acs725_sensor library by Theja Ram Pingali
 */

#include "acs725_sensor.h"

/**
 * Constructor.
 */
acs725_sensor::acs725_sensor()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void acs725_sensor::begin()
{
    // initialize hardware
    
}

/**
 * Example method.
 */
void acs725_sensor::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void acs725_sensor::doit()
{
    Serial.println("called doit");
}
