#include "GPS.hpp"
#include "config.hpp"
#include "Error.hpp"
#include "State.hpp"

GPS::GPS() :
    Sensor(),
    my_time(0),
    my_lat(0),
    my_lat_direction(0),
    my_lon(0),
    my_long_direction(0),
    my_fix_quality(0),
    my_number_of_satellites(0),
    my_hdop(0),
    my_alt(0),
    my_rssi(0)
{
}

GPS::~GPS()
{

}

void GPS::init()
{
    pinMode(GPS_ENABLE, OUTPUT);

    gps = Adafruit_GPS(&GPS_SERIAL);

    // 9600 NMEA is the default baud rate for Adafruit MTK GPS's- some use 4800
    int err = 0;
    gps.begin(9600);
    int i;
    for (i = 0; i < CONN_ATTEMPTS; i++)
    {
        Error::on(GPS_INIT);

        if (gps.available())
        {
            break;
        }

        delay(CONN_DELAY);
    }
    
    Error::off();
    if (i == CONN_ATTEMPTS)
    {
        Serial.println("cannot init gps");
        Error::display(GPS_INIT, FATAL);
        Error::display(WERE_SCREWED, FATAL);
    }

    /*while (!gps.available())
    {
        Error::on(GPS_INIT);
        err++;
        delay(CONN_DELAY);

        if (err > 10)
        {
            Serial.println("GPS INIT ERR");
            Error::display(GPS_INIT, FATAL);
            break;
        }
    }*/
    Error::off();
    
    // uncomment this line to turn on RMC (recommended minimum) and GGA (fix data) including altitude
    gps.sendCommand(PMTK_SET_NMEA_OUTPUT_RMCGGA);
    
    // uncomment this line to turn on only the "minimum recommended" data
    //gps.sendCommand(PMTK_SET_NMEA_OUTPUT_RMCONLY);

    // Set the update rate
    gps.sendCommand(PMTK_SET_NMEA_UPDATE_1HZ); // 1 Hz update rate

    // Request updates on antenna status, comment out to keep quiet
    gps.sendCommand(PGCMD_ANTENNA);
}

void GPS::internal_read()
{
    gps.read();
}

void GPS::read(State* st)
{
}

void GPS::poll(State* st)
{
    gps.parse(gps.lastNMEA());

    auto orientation = st->getOrientationPkt();
    orientation.set_lat(gps.latitude);
    orientation.set_lon(gps.longitude);

    auto health = st->getHealthPkt();
    health.set_sats(gps.satellites);
}

void GPS::enable()
{
    //digitalWrite(GPS_ENABLE, HIGH);
}

void GPS::disable()
{
    //digitalWrite(GPS_ENABLE, LOW);
}
