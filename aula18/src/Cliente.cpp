#include "../include/Cliente.hpp"

int Cliente::qtd = 0;

Cliente::Cliente() {}

Cliente::Cliente(const std::string & _nome, const std::string & _documento): nome(_nome), documento(_documento) {
  qtd++;
}

int Cliente::getClienteQTD() {
  return qtd;
}
