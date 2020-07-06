#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta {
  public:
    std::string numero;
    std::string titular;
    double saldo;

    Conta(const std::string & _numero, const std::string & _titular, const double _saldo);

    void sacar(const double & _valor);
    void depositar(const double & _valor);
    void transferir(const double & _valor, Conta & _conta);
};

#endif
