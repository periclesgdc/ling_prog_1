#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario {
  protected:
    std::string nome;
    std::string documento;
    std::string matricula;
    unsigned int idade;

  public:
    Funcionario();
    Funcionario(const std::string & _nome, const std::string & _documento, const std::string & _matricula, const unsigned int & _idade);

    void setNome(const std::string & _nome);
    std::string getNome();

    void setDocumento(const std::string & _documento);
    std::string getDocumento();

    void setMatricula(const std::string & _matricula);
    std::string getMatricula();

    void setIdade(const unsigned int & _idade);
    unsigned int getIdade();
};

#endif
