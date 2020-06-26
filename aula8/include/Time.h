#ifndef W5N_TIME_H
#define W5N_TIME_H

#include <string>
#include <sstream>

struct Time
{
    unsigned hour;
    unsigned minute;
    unsigned second;

    Time();
    void set_from_string(const std::string& time);
};
#endif
