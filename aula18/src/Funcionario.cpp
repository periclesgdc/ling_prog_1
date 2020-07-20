#include "../include/Funcionario.hpp"

Funcionario::Funcionario() {}

Funcionario::Funcionario(const std::string & _nome, const std::string & _documento, const std::string & _matricula, const unsigned int & _idade): nome(_nome), documento(_documento), matricula(_matricula), idade(_idade) {}

void Funcionario::setNome(const std::string & _nome) {
  this->nome = _nome;
}

std::string Funcionario::getNome() {
  return this->nome;
}

void Funcionario::setDocumento(const std::string & _documento) {
  this->documento = _documento;
}

std::string Funcionario::getDocumento() {
  return this->documento;
}

void Funcionario::setMatricula(const std::string & _matricula) {
  this->matricula = _matricula;
}

std::string Funcionario::getMatricula() {
  return this->matricula;
}

void Funcionario::setIdade(const unsigned int & _idade) {
  this->idade = _idade;
}

unsigned int Funcionario::getIdade() {
  return this->idade;
}
