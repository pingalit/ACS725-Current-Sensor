/* acs725_sensor library by Theja Ram Pingali
 */

#include "acs725_sensor.h"

/**
 * Constructor.
 */
acs725_sensor::acs725_sensor(int adc_bits)
{
    _adcBits = adc_bits;
}

void acs725_sensor::begin()
{
    // initialize hardware
    sensor_value = 0;
    sensor_sensitivity = 0;
    Vref = 322;
    
    _loopCount = 0;
}


float acs725_sensor::getCurrent(int rawSensorVal)
{
    int _rawSensorVal = rawSensorVal;
    if(_loopCount < SENSOR_AVERAGE)
    {
        sensor_value += _rawSensorVal;
    }
    else
    {
        sensor_value = sensor_value/SENSOR_AVERAGE;
        float unitValue = DEVICE_VOLTAGE_REFERENCE/_adcBits;
        float voltage = unitValue*sensor_value;
        float current = (voltage - Vref) * sensor_sensitivity;
        _loopCount = 0;
        return current;
    }
    _loopCount++;
}
