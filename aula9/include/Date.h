#ifndef W5N_DATE_H
#define W5N_DATE_H

#include <string>
#include <sstream>

struct Date
{
    unsigned year;
    unsigned month;
    unsigned day;

    Date();
    void set_from_string(const std::string& date);
    std::string to_string();
};

#endif
