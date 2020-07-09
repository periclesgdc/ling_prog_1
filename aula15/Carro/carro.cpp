#include "carro.hpp"

int Carro::qtd = 0;

Carro::Carro(string cor){
    this->cor = cor;
	qtd++;
}

Carro::Carro(){
    this->cor = "Branco";
	qtd++;
}

void Carro::acelera(int velocidade){
    this->velocidade += velocidade;
}

void Carro::freia(int velocidade){
    this->velocidade -= velocidade;
}

void Carro::ligaCarro(){
    motor.partida();
}
