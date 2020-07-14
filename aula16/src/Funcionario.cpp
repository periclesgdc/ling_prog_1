#include "Funcionario.hpp"

Funcionario::Funcionario(const std::string & _nome, const Empresa & _empresa, const std::string & _departamento, const float _salario, const std::string & _dataAdmissao)
  :nome(_nome), empresa(_empresa), departamento(_departamento), salario(_salario), dataAdmissao(_dataAdmissao) {}

void Funcionario::setNome(const std::string & _nome) {
  nome = _nome;
}

std::string Funcionario::getNome() {
  return nome;
}

void Funcionario::setEmpresa(const Empresa & _empresa) {
  empresa = _empresa;
}

Empresa Funcionario::getEmpresa() {
  return empresa;
}

void Funcionario::setDepartamento(const std::string & _departamento) {
  departamento = _departamento;
}

std::string Funcionario::getDepartamento() {
  return departamento;
}

void Funcionario::setSalario(const float & _salario) {
  salario = _salario;
}

float Funcionario::getSalario() {
  return salario;
}
