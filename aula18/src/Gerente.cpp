#include "../include/Gerente.hpp"

Gerente::Gerente() {}

Gerente::Gerente(const std::string & _setor, const std::string & _nome, const std::string & _documento, const std::string & _matricula, const unsigned int & _idade): Funcionario(_nome, _documento, _matricula, _idade), setor(_setor) {}

void Gerente::setSetor(const std::string & _setor) {
  this->setor = _setor;
}

std::string Gerente::getSetor() {
  return this->setor;
}
