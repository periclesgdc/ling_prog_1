#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
	public:
		std::string nome;
		std::string cpf;
		static int qtd;

		Cliente(const std::string _nome, const std::string _cpf);
};

#endif
