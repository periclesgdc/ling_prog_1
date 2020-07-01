#ifndef W5N_UTILS_H
#define W5N_UTILS_H

#include <string>
#include <ctime>

std::string get_current_datetime(const char* format);
size_t strpos(const std::string &haystack, const std::string &needle);

#endif
