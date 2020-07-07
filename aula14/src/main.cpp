#include <iostream>

#include "../include/Conta.hpp"
#include "../include/Cliente.hpp"
#include "../include/Agencia.hpp"

int main() {
	Cliente cl1("Seu Joao", "12312312312"), cl2("Seu Jorge", "45645645645");
	Agencia ag("Bradesco", "1233");
	Conta c1("12345", cl1, ag, 0.0), c2("54321", cl2, ag, 50320.12);

	c1.depositar(50.0);
	c2.sacar(20.12);

	std::cout << c1.saldo << " | " << c2.saldo << "\n";

	c1.transferir(50.0, c2);

	std::cout << c1.saldo << " | " << c2.saldo << "\n";

	std::cout << c1.titular.nome << " | " << c2.titular.nome << "\n";

	std::cout << c1.agencia.nome << " | " << c2.agencia.numero << "\n";

	return 0;
}
