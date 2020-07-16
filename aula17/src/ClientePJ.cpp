#include "../include/ClientePJ.hpp"

ClientePJ::ClientePJ() {}

ClientePJ::ClientePJ(const std::string & _razaoSocial, const std::string & _cnpj): razaoSocial(_razaoSocial), cnpj(_cnpj) {}

void ClientePJ::setRazaoSocial(const std::string & _razaoSocial) {
  razaoSocial = _razaoSocial;
}

std::string ClientePJ::getRazaoSocial() {
  return razaoSocial;
}

void ClientePJ::setCNPJ(const std::string & _cnpj) {
  cnpj = _cnpj;
}

std::string ClientePJ::getCNPJ() {
  return cnpj;
}
