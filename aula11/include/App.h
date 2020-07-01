#ifndef W5N_APP_H
#define W5N_APP_H

#include "Diary.h"

#include <string>
#include <vector>

struct App
{
  Diary diary;

  App(const std::string& _filename);
  int run(int argc, char* argv[]);
  int show_usage();
  void add();
  void add(const std::string message);
  void list_messages();
  void search();
  void search(const std::string& what);
};
#endif
