#ifndef SEGURANCA_H
#define SEGURANCA_H

#include "Funcionario.hpp"

class Seguranca: public Funcionario {
  private:
    char turno;

  public:
    Seguranca();
    Seguranca(const char & _turno, const std::string & _nome, const std::string & _documento, const std::string & _matricula, const unsigned int & _idade);

    void setTurno(const char & _turno);
    char getTurno();
};

#endif
