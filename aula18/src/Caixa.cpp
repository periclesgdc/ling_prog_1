#include "../include/Caixa.hpp"

Caixa::Caixa() {}

Caixa::Caixa(const std::string & _guiche, const std::string & _nome, const std::string & _documento, const std::string & _matricula, const unsigned int & _idade): Funcionario(_nome, _documento, _matricula, _idade), guiche(_guiche) {}

void Caixa::setGuiche(const std::string & _guiche) {
  this->guiche = _guiche;
}

std::string Caixa::getGuiche() {
  return this->guiche;
}
