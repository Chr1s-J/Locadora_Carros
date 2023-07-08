/**
 * @file Carro.cpp
 * @brief Implementação da classe Carro
 */

#include "Carro.hpp"

Carro::Carro(std::string modelo, std::string marca, int ano, std::string placa, double valorDiaria){
    this->modelo = modelo;
    this->marca = marca;
    this->ano = ano;
    this->placa = placa;
    this->valorDiaria = valorDiaria;

    //arCondicionado = true;
    //marchaAutomatica = true;
    //motorFlex = true;
    disponivel = true;
}


Carro::~Carro(){}
