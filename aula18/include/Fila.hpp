#ifndef FILA_H
#define FILA_H

#include <string>

template <typename T>
class Fila{
  private:
    int tamanho;
    int ultimo;
    T* elementos;

  public:
    Fila(int s) {
      this->tamanho = s;
      this->ultimo = -1;
      this->elementos = new T[s];
    }

    void adicionar(T _elemento) {
      if (ultimo == (tamanho-1)) {
        std::cout << "Fila cheia." << std::endl;
      } else {
        this->elementos[++ultimo] = _elemento;
      }
    }

    void remover(){
      if (ultimo == -1) {
        std::cout << "Fila vazia." << std::endl;
      } else {
        this->elementos[ultimo--];
      }
    }

    bool vazio() {
      if (ultimo == -1) {
        return true;
      } else {
        return false;
      }
    }

    T getUltimo() {
      return this->elementos[ultimo];
    }
};

#endif
