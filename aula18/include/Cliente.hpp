#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
  protected:
		static int qtd;
    std::string nome;
		std::string documento;

  public:
		Cliente();
    Cliente(const std::string & _nome, const std::string & _documento);

    int getClienteQTD();
};

#endif
