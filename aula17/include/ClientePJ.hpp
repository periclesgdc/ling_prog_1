#ifndef CLIENTE_PJ_H
#define CLIENTE_PJ_H

#include <string>

class ClientePJ{
  private:
    std::string razaoSocial;
    std::string cnpj;

  public:
    ClientePJ();
    ClientePJ(const std::string & _razaoSocial, const std::string & _cnpj);

    void setRazaoSocial(const std::string & _razaoSocial);
    std::string getRazaoSocial();
    void setCNPJ(const std::string & _cnpj);
    std::string getCNPJ();
};

#endif
