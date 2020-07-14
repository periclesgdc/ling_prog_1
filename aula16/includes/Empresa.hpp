#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>

class Empresa {
  private:
    std::string nome;
    long int cnpj;

  public:
    Empresa(const std::string & _nome, const long int & _cnpj);

    void setNome(const std::string & _nome);
    std::string getNome();
    void setCNPJ(const long int & _cnpj);
    long int getCNPJ();
};

#endif
