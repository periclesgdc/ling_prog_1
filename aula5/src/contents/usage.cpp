#include "../headers/usage.h"

void usage(std::string &action) {
  std::cout << "Usage: " << action << "\n";
	std::cout << "Commands:\n-add: New annotation\n-list: List all messages\n";
}

std::string get_formatted_current_date(std::string &format) {
  std::time_t time = std::time(nullptr);
	char result[1024];
	std::strftime(result, sizeof(result), format.c_str(), std::localtime(&time));

	return std::string(result);
}
