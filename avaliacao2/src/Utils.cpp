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

size_t strpos(const std::string &haystack, const std::string &needle) {
  int sleng = haystack.length();
  int nleng = needle.length();

  if (sleng==0 || nleng==0)
    return std::string::npos;

  for(int i=0, j=0; i<sleng; j=0, i++ )
  {
    while (i+j<sleng && j<nleng && haystack[i+j]==needle[j])
        j++;
    if (j==nleng)
        return i;
  }
  return std::string::npos;
}
