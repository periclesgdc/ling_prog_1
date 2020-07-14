#include "Empresa.hpp"

Empresa::Empresa(const std::string & _nome, const long int & _cnpj): nome(_nome), cnpj(_cnpj) {}

void Empresa::setNome(const std::string & _nome) {
  nome = _nome;
}

std::string Empresa::getNome() {
  return nome;
}

void Empresa::setCNPJ(const long int & _cnpj) {
  cnpj = _cnpj;
}

long int Empresa::getCNPJ() {
  return cnpj;
}
