#include "Pagamento.hpp"

#include <iostream>


Pagamento::Pagamento(){}

Pagamento::Pagamento(Locadora* _locadora, Carro* _carro) {
    locadora = _locadora;
    carro = _carro;
}

void Pagamento::efetuarPagamento(std::string modelo, int cpf, int dias) {
    double valorDiaria = 0.0;

    // Verificar se o veículo está disponível
    bool disponivel = carro->disponivel;
    if (disponivel) {
        // Obter o valor da diária do veículo
        valorDiaria = carro->valorDiaria;
        if (valorDiaria > 0.0) {
            // Calcular o valor total
            double valorTotal = valorDiaria * dias;
            valorTotal += valorTotal * taxa;

            // Realizar o pagamento
            std::cout << "Pagamento efetuado no valor de R$" << valorTotal << " para o veículo modelo " << modelo << "." << std::endl;
            // Outras operações relacionadas ao pagamento
            // ...
        } else {
            std::cout << "Não foi possível obter o valor da diária para o veículo modelo " << modelo << "." << std::endl;
        }
    } else {
        std::cout << "Veículo modelo " << modelo << " não está disponível para locação." << std::endl;
    }
}

 Pagamento::~Pagamento(){}
