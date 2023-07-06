#include "Carro.hpp"

Carro::Carro(std::string modelo_param, std::string marca_param, int ano_param, int placa_param){
    modelo = modelo_param;
    marca = marca_param;
    ano = ano_param;
    placa = placa_param;

    arCondicionado = true;
    marchaAutomatica = true;
    motorFlex = true;
    disponivel = true;
}


Carro::~Carro(){}
