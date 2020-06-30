#ifndef W5N_DIARY_H
#define W5N_DIARY_H

#include "Message.h"
#include "Utils.h"

#include <fstream>
#include <string>
#include <iostream>
#include <algorithm>

struct Diary
{
    std::string filename;
    Message* messages;
    size_t messages_size;
    size_t messages_capacity;

    Diary(const std::string &_filename);
    void add(const std::string &_message);
    void add(const std::string &_message, const std::string &_date, const std::string &_time);
    void write();

    ~Diary();
};
#endif
