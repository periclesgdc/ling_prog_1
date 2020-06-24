#include "../include/Diary.h"
#include <iostream>

Diary::Diary(const std::string& _filename):filename(_filename), messages_size(0), messages_capacity(10)
{
  messages = new Message[messages_capacity];
}

void Diary::add(const std::string& message)
{
  if (messages_size < messages_capacity) {
    messages[messages_size++].content = message;
  }

  // Impressao para teste
  std::cout << messages[0].content << " " << messages_size << std::endl;
}

void Diary::write()
{
    // gravar as mensagens no disco
}

Diary::~Diary()
{
  delete[] messages;
}
