#ifndef PROTOCOL_HPP
#define PROTOCOL_HPP

#include <cstdint>
#include "chunk.h"
#include "command.h"
#include "component.h"
#include "event.h"
#include "health.h"
#include "orientation.h"

class State
{
public:
    State()
    {
    }

    Health& getHealthPkt();
    Orientation& getOrientationPkt();
    Event& getEventPkt();

    unsigned long ts;
    int fcmode;
    
    float temp;
    float vbat;
    float ibat;
    float tbat;
    float pressure;
    float altitude;
    int nsats;
    float lat;
    float lon;
    
    int main_deploy;
    int drogue_deploy;
    int launch_detect;
    int payload_pre;
    int payload_dep;
    int burnout;
    int apogee;

    float alt_buf[5];
    int alt_buf_pos;
    float vy;

    float anet_buf[5];
    int anet_buf_pos;
    float anet;

private:
    Health mHealth;
    Orientation mOrientation;
    Event mEvent;
};

// typedef struct _state
// {
//     unsigned long ts;
//     int fcmode;
    
//     float temp;
//     float vbat;
//     float ibat;
//     float tbat;
//     float pressure;
//     float altitude;
//     int nsats;
//     float lat;
//     float lon;

//     float ax;
//     float ay;
//     float az;
//     float wx;
//     float wy;
//     float wz;
//     float qx;
//     float qy;
//     float qz;
//     float qw;

//     int main_deploy;
//     int drogue_deploy;
//     int launch_detect;
//     int payload_pre;
//     int payload_dep;
//     int burnout;
//     int apogee;

//     float alt_buf[5];
//     int alt_buf_pos;
//     float vy;

//     float anet_buf[5];
//     int anet_buf_pos;
//     float anet;

// } State;

// typedef struct _HEALTH_PKT // voltages, current draw
// {
//     float temp; //battery temperature
//     float volt; //battery voltage

// } HEALTH_PKT;

// typedef struct _IMU_PKT // acceleration, rotation, euler coordinates, etc
// {

// } IMU_PKT;

// typedef struct _BARO_PKT // pressure, temperature, altitude
// {
//     float pressure;
//     float temperature;
//     float altitude;
    
// } BARO_PKT;

// typedef struct _GPS_PKT // logitude, latitude, etc
// {
//     float lat; //latitude
//     float lon; //longitude
    
// } GPS_PKT;

// typedef struct _EVENT_PKT
// {
//     char main_deploy;
//     char drogue_deploy;
//     char launch;
//     char payload_deploy;

// } EVENT_PKT;

// typedef struct _CMD_PKT
// {
//     int command_type;
// } CMD_PKT;

//#include "protocol.inl"

#endif /* PROTOCOL_HPP */
