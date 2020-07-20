#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.hpp"

class Caixa: public Funcionario {
  private:
    std::string guiche;

  public:
    Caixa();
    Caixa(const std::string & _guiche, const std::string & _nome, const std::string & _documento, const std::string & _matricula, const unsigned int & _idade);

    void setGuiche(const std::string & _guiche);
    std::string getGuiche();
};

#endif
