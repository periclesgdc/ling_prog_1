#ifndef DIARY_H
#define DIARY_H

// External libs
#include <string>
#include <ctime>
#include <fstream>
#include <iostream>

// Internal libs
#include "calendar.h"
#include "annotation.h"
#include "usage.h"

struct Diary {
	const std::string filename;

  void Diary();
  void Diary(std::string filename);

  void add_message(void);
	void list_messages();
	bool check_last_date(std::ifstream &file);
};

#endif
