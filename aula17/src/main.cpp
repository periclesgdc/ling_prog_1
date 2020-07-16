#include <iostream>

#include "../include/Conta.hpp"
#include "../include/Cliente.hpp"
#include "../include/ClientePJ.hpp"
#include "../include/Agencia.hpp"
#include "../include/Fila.hpp"

int main() {
	Cliente cl1("Seu Joao", "12312312312"), cl2("Seu Jorge", "45645645645"), cl3("Seu Reinaldo", "78978978978");
	ClientePJ clPJ1("Empresa 1 LTDA", "1232456465489"), clPJ2("Empresa 2 S.A.", "987654321321685");
	Agencia ag("Bradesco", "1233");
	Conta c1("12345", cl1, ag, 0.0), c2("54321", cl2, ag, 50320.12);

	c1.depositar(50.0);
	c2.sacar(20.12);

	std::cout << c1.saldo << " | " << c2.saldo << "\n";

	c1.transferir(50.0, c2);

	std::cout << c1.saldo << " | " << c2.saldo << "\n";

	std::cout << c1.titular.nome << " | " << c2.titular.nome << "\n";

	std::cout << c1.agencia.nome << " | " << c2.agencia.numero << "\n";

	std::cout << c2.qtd << " | " << cl2.qtd << "\n";

	Fila<Cliente> filaPF(5);
	Fila<ClientePJ> filaPJ(5);

	filaPF.adicionar(cl1);
	filaPF.adicionar(cl2);

	filaPJ.adicionar(clPJ1);
	filaPJ.adicionar(clPJ2);

	std::cout << "O último cliente PF é: " << filaPF.getUltimo().nome << '\n';
	std::cout << "O último cliente PJ é: " << filaPJ.getUltimo().getRazaoSocial() << '\n';


	return 0;
}
