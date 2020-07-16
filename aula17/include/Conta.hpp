#ifndef CONTA_H
#define CONTA_H

#include <string>

#include "../include/Cliente.hpp"
#include "../include/Agencia.hpp"

class Conta {
  public:
    std::string numero;
    Cliente titular;
    Agencia agencia;
    double saldo;
		static int qtd;

    Conta(const std::string & _numero, const Cliente & _titular, const Agencia & _agencia, const double _saldo);

    void sacar(const double & _valor);
    void depositar(const double & _valor);
    void transferir(const double & _valor, Conta & _conta);
};

#endif
