#include "../include/Date.h"

Date::Date() : year(0), month(0), day(0)
{
}

void Date::set_from_string(const std::string& date)
{
  std::stringstream stream(date);
  char discard;

  stream >> year;
  stream >> discard;
  stream >> month;
  stream >> discard;
  stream >> day;
}
