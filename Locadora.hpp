#ifndef LOCADORA_H
#define LOCADORA_H

#include "Carro.hpp"

#include <iostream>
#include <string>
#include <vector>

class Locadora {
private:
    //std::vector<Carro> carros;

public:
    std::vector<Carro> carros;
    void adicionarCarro(Carro carro);
    void listarCarrosDisponiveis();
    void alugarCarro(std::string modelo);
    void devolverCarro(std::string modelo);

    Locadora();
    ~Locadora();
};

#endif
