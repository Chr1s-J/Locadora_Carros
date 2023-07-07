#ifndef PAGAMENTO_HPP
#define PAGAMENTO_HPP

#include <string>
#include "Locadora.hpp"
#include "Carro.hpp"

class Pagamento {
private:
    Carro* carro;
    Locadora* locadora;
    //const double taxa = 80.0; // Taxa constante

public:
    const double taxa = 80.0; // Taxa constante
    Pagamento(Locadora* _locadora, Carro* _carro);
    Pagamento();
    ~Pagamento();
    void efetuarPagamento(std::string modelo, int cpf, int dias);
};

#endif
