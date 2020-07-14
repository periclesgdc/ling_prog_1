#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

#include "Empresa.hpp"

class Funcionario {
  private:
    std::string nome;
    Empresa empresa;
    std::string departamento;
    float salario;
    std::string dataAdmissao;

  public:
    Funcionario(const std::string & _nome, const Empresa & _empresa, const std::string & _departamento, const float _salario, const std::string & _dataAdmissao);

    void setNome(const std::string & _nome);
    std::string getNome();
    void setEmpresa(const Empresa & _empresa);
    Empresa getEmpresa();
    void setDepartamento(const std::string & _departamento);
    std::string getDepartamento();
    void setSalario(const float & _salario);
    float getSalario();
};

#endif
