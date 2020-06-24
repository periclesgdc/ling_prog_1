#ifndef W5N_DIARY_H
#define W5N_DIARY_H

#include "Message.h"

#include <string>

struct Diary
{
    std::string filename;
    Message* messages;
    size_t messages_size;
    size_t messages_capacity;

    Diary(const std::string& _filename);
    void add(const std::string& message);
    void write();

    ~Diary();
};
#endif
