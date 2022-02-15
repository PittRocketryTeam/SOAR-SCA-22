#include <cmath>

inline void get_health(State* st, float* pkt)
{
    pkt[0] = st->vbat;
    pkt[1] = st->ibat;
    pkt[2] = st->temp;
    pkt[3] = st->pressure;
    pkt[4] = st->nsats;
}

inline void get_orientation(State* st, float* pkt)
{
    pkt[0] = st->ax;
    pkt[1] = st->ay;
    pkt[2] = st->az;
    pkt[3] = st->wx;
    pkt[4] = st->wy;
    pkt[5] = st->wy;
    pkt[6] = st->qx;
    pkt[7] = st->qy;
    pkt[8] = st->qz;
    pkt[9] = st->qw;
    pkt[10] = st->lat;
    pkt[11] = st->lon;
    pkt[12] = st->altitude;
}

inline void get_events(State* st, int* pkt)
{
    pkt[0] = st->main_deploy;
    pkt[1] = st->drogue_deploy;
    pkt[2] = st->launch_detect;
    pkt[3] = st->burnout;
    pkt[4] = st->payload_pre;
    pkt[5] = st->payload_dep;
}

inline float avg_vy(State* st)
{
    float sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        sum += st->alt_buf[i];
    }

    return sum / (float)5;
}

inline float avg_alt(State* st)
{
    float sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        sum += st->alt_buf[i];
    }

    return sum / (float)5;
}

inline float anet(State* st)
{
    return sqrt(st->ax * st->ax + st->ay * st->ay + st->az * st->az);
}

inline float avg_anet(State* st)
{
    float sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        sum += st->anet_buf[i];
    }

    return sum / (float)5;
}
