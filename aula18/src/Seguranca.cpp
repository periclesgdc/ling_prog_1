#include "../include/Seguranca.hpp"

Seguranca::Seguranca() {}

Seguranca::Seguranca(const char & _turno, const std::string & _nome, const std::string & _documento, const std::string & _matricula, const unsigned int & _idade): Funcionario(_nome, _documento, _matricula, _idade), turno(_turno) {}

void Seguranca::setTurno(const char & _turno) {
  this->turno = _turno;
}

char Seguranca::getTurno() {
  return this->turno;
}
