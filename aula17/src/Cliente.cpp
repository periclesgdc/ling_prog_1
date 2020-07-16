#include "../include/Cliente.hpp"

int Cliente::qtd = 0;

Cliente::Cliente() {}

Cliente::Cliente(const std::string _nome, const std::string _cpf): nome(_nome), cpf(_cpf) {
	qtd++;
}
