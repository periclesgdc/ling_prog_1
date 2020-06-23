#include "../headers/diary.h"

void Diary() {}
void Diary(std::string filename) {
  this.filename = filename;
}

void Diary::add_message() {
  std::ifstream file(this.filename);
	bool newDate = file.fail() ?: check_last_date(file);

  file.close();

	std::ofstream file_output(this.filename, std::ios::app);

  if (file_output.fail()){
		std::cerr << "Error: it's impossible to open this file.\n";
		return 1;
	}

	if (newDate){
		file_output << std::endl << "#" << get_formatted_current_date("%d/%m/%Y") << std::endl << std::endl;
	}

	file_output << "- "<< get_formatted_current_date("%H:%M:%S") << " " << message << std::endl;
	file_output.close();
	std::cout << "Annotation added!\n";
	return 0;
}

void Diary::list_messages() {
  std::ifstream file(this.filename, std::ios::in);

  if (file.fail()){
		std::cerr << "Error: it's impossible to open this file." << std::endl;
		return 1;
	}

	std::string line;

  while (std::getline(file, line)){
		if (line[0] == '#' || line.length() == 0)
			continue;
		if (line[0] == '-'){
			std::cout << "- " << line.substr(11, line.length()) << std::endl;
			continue;
		}
		std::cout << "- " << line << std::endl;
	}

  file.close();

	return 0;
}

bool Diary::check_last_date(std::ifstream &file){
	std::string line;
	std::string current_date_formated = '#' + get_formatted_current_date("%d/%m/%Y");
	while(std::getline(file, line)){
		if (!line.compare(current_date_formated))
			return false;
	}
	return true;
}
