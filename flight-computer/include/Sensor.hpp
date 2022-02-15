#ifndef __SENSOR_HPP__
#define __SENSOR_HPP__

#include <vector>
#include "Wire.h"

class State;

class Sensor
{
public:
    virtual void init() = 0;
    virtual void poll(State* st) = 0;
    virtual void read(State* st) = 0;
    virtual void enable() = 0;
    virtual void disable() = 0;
};

#endif
// __SENSOR_HPP__