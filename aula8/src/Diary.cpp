#include "../include/Diary.h"

Diary::Diary(const std::string& _filename):filename(_filename), messages_size(0), messages_capacity(10)
{
  messages = new Message[messages_capacity];
}

void Diary::add(const std::string& message)
{
  if (messages_size < messages_capacity) {
    Message m;
    Date date;
    Time time;

    date.set_from_string(get_current_datetime("%F"));
    time.set_from_string(get_current_datetime("%T"));

    m.content = message;
    m.date = date;
    m.time = time;

    messages[messages_size++] = m;
  }
}

void Diary::write()
{
    // gravar as mensagens no disco
}

Diary::~Diary()
{
  delete[] messages;
}
