#ifndef __ALTIMETER_HPP__
#define __ALTIMETER_HPP__

#include "Sensor.hpp"
#include <Wire.h>
#include "Adafruit_BMP3XX.h"
#include "bmp3.h"
#include "Error.hpp"
#include "State.hpp"

#define SEALEVELPRESSURE_HPA (1013.25)

class Altimeter : public Sensor
{
    public:

        Altimeter();
        ~Altimeter();
        
        virtual void init();
        virtual void read(State* data);
        virtual void poll(State* data);
        virtual void enable();
        virtual void disable();

    private:

        Adafruit_BMP3XX bmp; // initializes i2c - defaults to 0x77 address and "Wire"
        struct bmp3_dev* bmp_dev;
        float baselinePressure;      
};

#endif
// __ALTIMETER_HPP__