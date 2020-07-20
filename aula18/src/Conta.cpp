#include "../include/Conta.hpp"

int Conta::qtd = 0;

Conta::Conta(const std::string & _numero, const ClientePF & _titular, const Agencia & _agencia, const double _saldo): numero(_numero), titular(_titular), agencia(_agencia), saldo(_saldo) {
	qtd++;
}

void Conta::sacar(const double & _valor) {
	saldo -= _valor;
}

void Conta::depositar(const double & _valor) {
	saldo += _valor;
}

void Conta::transferir(const double & _valor, Conta & _conta) {
	_conta.depositar(_valor);
	sacar(_valor);
}
