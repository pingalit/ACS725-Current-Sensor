// Example usage for acs725_sensor library by Theja Ram Pingali.

#include "acs725_sensor.h"

// Initialize objects from the lib
Acs725_sensor acs725_sensor;

void setup() {
    // Call functions on initialized library objects that require hardware
    acs725_sensor.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    acs725_sensor.process();
}
