#include "../include/App.h"

#include <iostream>
#include <string>

App::App(const std::string& _filename):diary(_filename)
{}

int App::run(int argc, char* argv[])
{
  if (argc == 1) {
      return show_usage();
  }

  std::string action = argv[1];

  if (action == "add") {
      if (argc == 2) {
          add();
      } else {
          add(argv[2]);
      }
  } else if (action == "list") {
      list_messages();
  } else if (action == "search") {
  } else {
      return show_usage();
  }

  return 0;
}

void App::add()
{
  std::string message;
  std::cout << "Enter your message:" << std::endl;
  std::getline(std::cin, message);

  add(message);
}

void App::add(const std::string message)
{
  diary.add(message);
  diary.write();
}

void App::list_messages()
{
  std::cout << "    Date  |  Time  |  Content\n";
  std::cout << "---------------------------------------------------\n";
  for (size_t i = 0; i < diary.messages_size; ++i) {
      Message& message = diary.messages[i];
      std::cout << message.date.to_string() << "|" << message.time.to_string() << "|" << message.content << std::endl;
  }
}

int App::show_usage()
{
  std::cout << "Enter with 'add' <text> or 'list'\n";
  return 1;
}
