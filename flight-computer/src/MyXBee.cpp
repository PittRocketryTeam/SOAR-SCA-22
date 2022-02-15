#include "MyXBee.hpp"
#include "Error.hpp"
#include "State.hpp"
#include <cstring>

MyXBee::MyXBee() :
    mode(-1),
    cycle(0)
{

}

MyXBee::~MyXBee() {}

void MyXBee::init()
{
    //Serial.println("myxbee\n");
    memset(buffer, 0, 100);
    XBEE_SERIAL.begin(9600); //XBEE_SERIAL is used for the PCB
    delay(500);
    int i;
    for (i = 0; i < CONN_ATTEMPTS; i++)
    {
        Error::on(TX_INIT);
        if (XBEE_SERIAL)
        {
            break;
        }

        //Serial.println("fail");

        delay(CONN_DELAY);
    }
    Error::off();
    if (i == CONN_ATTEMPTS)
    {
        Error::display(TX_INIT, FATAL);
    }

    /*Serial.println("commandmode");
    delay(1000);
    XBEE_SERIAL.print("+++");
    delay(12000);
    Serial.println("done!");*/
}

void MyXBee::transmit(State* st)
{
    //digitalWrite(13, HIGH);

    int id = 5;
    int len = 0;
    // send periodic data
    if (cycle % 10 == 0) // send health data
    {
        //delay(100);
        len = 6 * sizeof(float);
        *(int*)(buffer + 0) = len;
        *(int*)(buffer + 4) = 4;
        *(float*)(buffer + 8) = st->vbat;
        *(float*)(buffer + 12) = st->ibat;
        *(float*)(buffer + 16) = st->tbat;
        *(float*)(buffer + 20) = st->temp;
        *(int*)(buffer + 24) = st->nsats;
    }
    else if ((cycle + 1) % 10 == 0) // send flight evets
    {

    }
    else // send orientation packet
    {
        len = 14 * sizeof(float);

        *(int*)(buffer) = len;
        *(int*)(buffer + 4) = 5;
        //get_orientation(st, scratch);
        memcpy(buffer + 8, scratch, (len - 1) * sizeof(float));
    }

    // reset cycle counter
    ++cycle;
    if (cycle == 10)
    {
        cycle = 0;
    }

    XBEE_SERIAL.write('S');
    XBEE_SERIAL.write('B');
    XBEE_SERIAL.write('E');
    XBEE_SERIAL.write('G');
    XBEE_SERIAL.write(buffer, len + sizeof(float));
    XBEE_SERIAL.write('S');
    XBEE_SERIAL.write('F');
    XBEE_SERIAL.write('I');
    XBEE_SERIAL.write('N');
    //XBEE_SERIAL.write('\r');
    XBEE_SERIAL.flush();

    //digitalWrite(13, LOW);

    if (XBEE_SERIAL.available())
    {
        notify = XBEE_SERIAL.read();
    }
}

/*void MyXBee::setCachedData(Data newData)
{
    formattedData = "";

    formattedData += String(newData.timestamp) + ",";

    //IMU data
    formattedData += String(newData.imuData.euler_abs_orientation_x) + ",";
    formattedData += String(newData.imuData.euler_abs_orientation_y) + ",";
    formattedData += String(newData.imuData.euler_abs_orientation_z) + ",";
    formattedData += String(newData.imuData.acceleration_x) + ",";
    formattedData += String(newData.imuData.acceleration_y) + ",";
    formattedData += String(newData.imuData.acceleration_z) + ",";

    //GPS data
    formattedData += String(newData.gpsData.latitude) + ",";
    formattedData += String(newData.gpsData.longitude) + ",";
    //Altimeter data
    formattedData += String(newData.altimeterData.temperature) + ",";
    formattedData += String(newData.altimeterData.pressure) + ",";
    formattedData += String(newData.altimeterData.altitude) + ",";

    // Health data
    formattedData += String(newData.healthData.main_battery_voltage) + ",";
    formattedData += String(newData.healthData.reg_3V3_battery_voltage) + ",";
    formattedData += String(newData.healthData.reg_5V_battery_voltage) + ",";

    //formattedData += "";
}*/

/*(Data MyXBee::receive()
{
    if (XBEE_SERIAL.available())
    {
        mode = XBEE_SERIAL.read() == 'b';
        Serial.println(mode);
        delay(500);
        //Serial.println("\t\tyep");
    }
    else
    {
        ///Serial.println("nope");
    }


    Data d;
    return d;
}*/

int MyXBee::getModeFromGC()
{
    return mode;
}

char MyXBee::checkForCommand()
{
    char out = notify;
    notify = '\0';
    return out;
}
