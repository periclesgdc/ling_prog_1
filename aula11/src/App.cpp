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
      if (argc == 2) {
          search();
      } else {
          search(argv[2]);
      }
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

void App::search()
{
  std::cout << "Enter a fragment: ";
  std::string message;
  std::getline(std::cin, message);
  
  std::vector<Message*> found = diary.search(message);

  for (std::vector<Message*>::iterator it = found.begin(); it != found.end(); ++it) { 
    std::cout << "Message: " << (*it)->content << std::endl;
  }
}


void App::search(const std::string& what)
{
  std::vector<Message*> found = diary.search(what);

  for (std::vector<Message*>::iterator it = found.begin(); it != found.end(); ++it) {
    std::cout << "Message: " << (*it)->content << std::endl;
  }
}

int App::show_usage()
{
  std::cout << "Enter with 'add' <text>, 'search' <text> or 'list'\n";
  return 1;
}
