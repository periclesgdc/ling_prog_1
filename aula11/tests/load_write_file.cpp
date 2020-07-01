#include <fstream>
#include <iostream>

int main(int argc, const char *argv[]) {
  std::ifstream file("teste.txt");

  if (file.is_open())
    std::cout << "Abriu\n";
  else {
    std::fstream file;
    file.open("tests/teste.txt", std::ios::out | std::ios::app | std::ios::in);
    file << "Linha 1\n";
    file.close();
  }

  return 0;
}
