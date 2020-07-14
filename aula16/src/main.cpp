#include <iostream>
#include <list>

#include "Empresa.hpp"
#include "Funcionario.hpp"

int main(int argc, char const *argv[]) {
  int qtdFun = 0;
  std::string setor = "";
  std::list<Funcionario> funcionarios;
  Empresa empresa("Teste Empresa LTDA", 12345678912312);

  std::cout << "Informe a quantidade de funcionários: ";
  std::cin >> qtdFun;
  std::cin.ignore();

  for (unsigned short int i = 0; i < qtdFun; i++) {
    std::string nome;
    std::string departamento;
    float salario;
    std::string dataAdmissao;

    std::cout << "Nome: ";
    std::getline(std::cin, nome);
    std::cout << "Departamento: ";
    std::getline(std::cin, departamento);
    std::cout << "Salário: ";
    std::cin >> salario;
    std::cin.ignore();
    std::cout << "Data de admissão (dd/mm/yyyy): ";
    std::cin >> dataAdmissao;
    std::cin.ignore();

    Funcionario func(nome, empresa, departamento, salario, dataAdmissao);

    funcionarios.push_back(func);
  }

  std::cout << "Setor a receber aumento: ";
  std::getline(std::cin, setor);

  std::cout << "Funcionarios / Salários" << '\n';

  for (std::list<Funcionario>::iterator it = funcionarios.begin(); it != funcionarios.end(); it++) {
    std::cout << "-> " << (*it).getNome() << " - " << (*it).getDepartamento() << ", R$ " << (*it).getSalario() << '\n';
    // aumentando o salário
    if (setor == (*it).getDepartamento()) (*it).setSalario((*it).getSalario() + (*it).getSalario()*0.1);
  }

  std::cout << "Funcionarios / Salários atualizados" << '\n';

  for (std::list<Funcionario>::iterator it = funcionarios.begin(); it != funcionarios.end(); it++) {
    std::cout << "-> " << (*it).getNome() << " - " << (*it).getDepartamento() << ", R$ " << (*it).getSalario() << '\n';
  }

  return 0;
}
