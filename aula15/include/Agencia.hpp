#ifndef AGENCIA_H
#define AGENCIA_H

#include <string>

class Agencia {
	public:
		std::string nome;
		std::string numero;

		Agencia(const std::string _nome, const std::string _numero);
};

#endif
