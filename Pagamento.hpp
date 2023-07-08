/**
 * @file Pagamento.hpp
 * @brief Definição da classe Pagamento
 */

#ifndef PAGAMENTO_HPP
#define PAGAMENTO_HPP

#include <string>
#include "Locadora.hpp"
#include "Carro.hpp"

/**
 * @class Pagamento
 * @brief Classe que representa o pagamento referente ao aluguel do carro
 */
class Pagamento {
private:
    Carro* carro; /**< Ponteiro para o carro a ser pago */
    Locadora* locadora; /**< Ponteiro para a locadora */


public:
    const double taxa = 80.0; /**< Taxa constante */

    /**
     * @brief Construtor da classe Pagamento
     * @param _locadora Ponteiro para a locadora
     * @param _carro Ponteiro para o carro a ser pago
     */
    Pagamento(Locadora* _locadora, Carro* _carro);

    /**
     * @brief Construtor padrão da classe Pagamento
     */
    Pagamento();

    /**
     * @brief Destrutor da classe Pagamento
     */
    ~Pagamento();

    /**
     * @brief Efetua o pagamento de um carro alugado
     * @param modelo O modelo do carro a ser pago
     * @param cpf O CPF do cliente
     * @param dias A quantidade de dias de aluguel
     */
    void efetuarPagamento(std::string modelo, int cpf, int dias);
};

#endif // PAGAMENTO_HPP
