// Code by JeeLabs http://news.jeelabs.org/code/
// Released to the public domain! Enjoy!

#include <avr/pgmspace.h>
#include "ROSDisplay.h"


#if ARDUINO < 100
#include <WProgram.h>
#else
#include <Arduino.h>
#endif


Display::Display ( int d, int h, int m, int s)
{
    day = min(d,99);
    hour = min(h,23);
    minute = min(m,59);
    second = min(s,59);
};

Display::Display()
{
    day = 0;
    hour = 0;
    minute = 0;
    second = 0;
};

void Display::ZeroAll()
{
    day = 0;
    hour = 0;
    minute = 0;
    second = 0;
};

char* Display::toString(char* buf, int maxlen)  
{
 snprintf(buf,maxlen," %02u %02u:%02u:%02u",
             day,
             hour,
             minute,
             second
            );
    return buf;
}