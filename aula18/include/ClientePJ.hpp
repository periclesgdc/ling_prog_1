#ifndef CLIENTE_PJ_H
#define CLIENTE_PJ_H

#include "Cliente.hpp"

#include <string>

class ClientePJ: public Cliente {
  public:
    ClientePJ();
    ClientePJ(const std::string & _razaoSocial, const std::string & _cnpj);

    void setRazaoSocial(const std::string & _razaoSocial);
    std::string getRazaoSocial();

    void setCNPJ(const std::string & _cnpj);
    std::string getCNPJ();
};

#endif
