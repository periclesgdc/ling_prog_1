#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.hpp"

#include <string>

class Gerente: public Funcionario {
  private:
    std::string setor;

  public:
    Gerente();
    Gerente(const std::string & _setor, const std::string & _nome, const std::string & _documento, const std::string & _matricula, const unsigned int & _idade);

    void setSetor(const std::string & _setor);
    std::string getSetor();
};

#endif
