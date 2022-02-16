#include "IMU.hpp"
#include "config.hpp"
#include "Error.hpp"
#include "State.hpp"


IMU::IMU()
{
    //last_data = new Data;
}

IMU::~IMU()
{
    //delete last_data;
}

void IMU::init()
{
    sensor = Adafruit_BNO055(55, IMU_I2C_ADDR, &IMU_I2C_BUS);
    verbose = false;

    int i;
    for (i = 0; i < CONN_ATTEMPTS; ++i)
    {
        Error::on(IMU_INIT);
        if (sensor.begin())
        {
            break;
        }

        if (VERBOSE)
        {
            Serial.println("Ooops, no BNO055 detected ... Check your wiring or I2C ADDR!");
        }
        //delay(CONN_DELAY);
    }
    Error::off();
    if (i >= CONN_ATTEMPTS)
    {
        Serial.println("cannot connect to imu");
        Error::display(IMU_INIT, FATAL);
    }

    sensor.setExtCrystalUse(true);

    enable();

}

void IMU::read(State* st)
{
    auto orientation = st->getOrientationPkt();
    orientation.set_accel_x(a.x());
    orientation.set_accel_y(a.y());
    orientation.set_accel_z(a.z());
    orientation.set_omega_x(w.x());
    orientation.set_omega_y(w.y());
    orientation.set_omega_z(w.z());
    orientation.set_quat_x(q.x());
    orientation.set_quat_y(q.y());
    orientation.set_quat_z(q.z());
    orientation.set_quat_w(q.w());
}

void IMU::poll(State* st)
{
    sensor.getEvent(&event);

    a = sensor.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);
    w = sensor.getVector(Adafruit_BNO055::VECTOR_GYROSCOPE);
    q = sensor.getQuat();

    read(st);
}

void IMU::enable()
{
    if (VERBOSE)
    {
        Serial.println("IMU Enabled");
    }

    sensor.enterNormalMode();
}

void IMU::disable()
{
    if (VERBOSE)
    {
        Serial.println("IMU Disabled");
    }

    sensor.enterSuspendMode();
}
