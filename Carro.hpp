#ifndef CARRO_H
#define CARRO_H


#include <iostream>
#include <string>

#include "Veiculo.hpp"

class Carro : public Veiculo{
private:
    
public:
    bool arCondicionado;
    bool marchaAutomatica;
    bool motorFlex;
    bool disponivel = true;



    Carro(std::string modelo, std::string marca, int ano, std::string placa, double valorDiaria);
    ~Carro();
};



#endif