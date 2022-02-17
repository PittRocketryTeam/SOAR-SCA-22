#ifndef __LOGGER_HPP__
#define __LOGGER_HPP__

#include <assert.h>
#include "Sensor.hpp"
#include <SPI.h>
#include <SD.h>
//#include <TimeLib.h>
#include "State.hpp"
#include "SimpleWriteBuffer.hpp"

//#define BUILTIN_SDCARD 254

#define NUM_SNAPSHOTS 100
#define BUFFER_SIZE 8192
#define FAT_FILENAME_LEN 12
#ifdef TEENSY_36
#define SD_CHIP_SELECT 62 // internal pin
#else
#define SD_CHIP_SELECT 44 // TODO change
#endif
#define JOURNAL_FILENAME "JRNL"

class Logger
{
    public:

        Logger() : 
            snapshot_ptr(nullptr)
        {

        }

        /**
         * Initialize the logger. Returns false if the initialization fails for 
         * any reason.
        */
        bool init();

        /**
         * Reads from each sensor and writes the timestamped data to the disk. 
         * Returns true if data was successfully written, false if not (either because
         * the number of bytes that should have been written to the disk was not written
         * or because the micro SD couldn't be opened).
         */

        void reopen();
        void close();
        void flush();
        void write(State*);

    private:

        /**
         * Create a unique log file name based on the current time and date and
         * return it.
         * 
         * Example log filename: Monday_10-07-2019_03:26:41.log
        */
        void genUniqueFn();

        //static time_t getTeensy3Time();

        State* snapshot_ptr;
        State snapshot[NUM_SNAPSHOTS];
        char filename[FAT_FILENAME_LEN];
        char buffer[BUFFER_SIZE];
        char* bp;
        File handle;
        SimpleWriteBuffer mWriteBuffer;
};

#endif
// __LOGGER_HPP__