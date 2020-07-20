#include "../include/ClientePF.hpp"

ClientePF::ClientePF() {}

ClientePF::ClientePF(const std::string & _nome, const std::string & _cpf): Cliente(_nome, _cpf) {}

void ClientePF::setNome(const std::string & _nome) {
	this->nome = _nome;
}

std::string ClientePF::getNome() {
	return this->nome;
}

void ClientePF::setCPF(const std::string & _cpf) {
	this->documento = _cpf;
}

std::string ClientePF::getCPF() {
	return this->documento;
}
