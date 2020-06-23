#ifndef ANNOTATION_H
#define ANNOTATION_H

// External libs
#include <string>

struct Annotation {
	std::string date;
	std::string time;
	std::string content;

  void Annotation();
  void Annotation(std::string date, std::string time, std::string content);
};

#endif
