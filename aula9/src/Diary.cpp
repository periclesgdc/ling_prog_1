#include "../include/Diary.h"
#define DATABASE_PATH "database/"

Diary::Diary(const std::string& _filename):filename(_filename), messages_size(0), messages_capacity(10)
{
  messages = new Message[messages_capacity];
  std::ifstream file(DATABASE_PATH + _filename);
  bool save_date = true;

  if (file.is_open()) {
    std::string line;
    std::string date_str;
    std::string current_date = get_current_datetime("%d/%m/%Y");

    while (getline(file, line)) {
      if (strpos(line, "#") == 0) {
        date_str = line.substr(2);
      } else if (strpos(line, "-") == 0) {
        add(line.substr(11), date_str, line.substr(2, 8));
      }

      if (line.find("# " + current_date, 0) != std::string::npos) {
        save_date = false;
      }
    }
    file.close();
  }

  if (save_date) {
    std::fstream new_file;
    new_file.open(DATABASE_PATH + _filename, std::ios::out | std::ios::app | std::ios::in);
    new_file << '\n' << "# " << get_current_datetime("%d/%m/%Y") << '\n';
    new_file.close();
  }
}

void Diary::add(const std::string &_message)
{
  if (messages_size >= messages_capacity) {
    messages_capacity *= 2;
    Message *temp = new Message[messages_capacity];

    for (size_t i = 0; i < messages_size; i++) {
      temp[i] = messages[i];
    }

    delete[] messages;
    messages = temp;
  }

  Message m;
  Date date;
  Time time;

  date.set_from_string(get_current_datetime("%d/%m/%Y"));
  time.set_from_string(get_current_datetime("%T"));

  m.content = _message;
  m.date = date;
  m.time = time;

  messages[messages_size++] = m;
}

void Diary::add(const std::string &_message, const std::string &_date, const std::string &_time)
{
  if (messages_size >= messages_capacity) {
    messages_capacity *= 2;
    Message *temp = new Message[messages_capacity];

    for (size_t i = 0; i < messages_size; i++) {
      temp[i] = messages[i];
    }

    delete[] messages;
    messages = temp;
  }

  Message m;
  Date date;
  Time time;

  date.set_from_string(_date);
  time.set_from_string(_time);

  m.content = _message;
  m.date = date;
  m.time = time;

  messages[messages_size++] = m;
}

void Diary::write()
{
  std::fstream file;
  file.open(DATABASE_PATH + filename, std::ios::out | std::ios::app | std::ios::in);
  file << "- " << messages[messages_size-1].time.to_string() << ' ' << messages[messages_size-1].content << '\n';
  file.close();
}

Diary::~Diary()
{
  delete[] messages;
}
