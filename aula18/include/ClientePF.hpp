#ifndef CLIENTE_PF_H
#define CLIENTE_PF_H

#include "Cliente.hpp"

#include <string>

class ClientePF: public Cliente {
	public:
		ClientePF();
		ClientePF(const std::string & _nome, const std::string & _cpf);

		void setNome(const std::string & _nome);
		std::string getNome();

		void setCPF(const std::string & _cpf);
		std::string getCPF();
};

#endif
