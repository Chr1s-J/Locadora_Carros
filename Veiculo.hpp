#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include <string>

class Veiculo{
private:
    
public:
    Veiculo();
    ~Veiculo();
    std::string marca;
    std::string tipo;
    std::string modelo;
    std::string cor;
    std::string placa;
    int ano;
    double valorDiaria;

};



#endif