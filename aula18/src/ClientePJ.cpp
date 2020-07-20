#include "../include/ClientePJ.hpp"

ClientePJ::ClientePJ() {}

ClientePJ::ClientePJ(const std::string & _razaoSocial, const std::string & _cnpj): Cliente(_razaoSocial, _cnpj) {}

void ClientePJ::setRazaoSocial(const std::string & _razaoSocial) {
  this->nome = _razaoSocial;
}

std::string ClientePJ::getRazaoSocial() {
  return this->nome;
}

void ClientePJ::setCNPJ(const std::string & _cnpj) {
  this->documento = _cnpj;
}

std::string ClientePJ::getCNPJ() {
  return this->documento;
}
