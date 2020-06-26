#include "../include/Utils.h"

std::string get_current_datetime(const char* format) {
  time_t timestamp;
  struct tm * timeinfo;
  char buffer [80];

  time(&timestamp);
  timeinfo = localtime(&timestamp);

  strftime(buffer, 80, format, timeinfo);
  std::string datetime = buffer;

  return datetime;
}
