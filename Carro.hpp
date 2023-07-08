/**
 * @file Carro.hpp
 * @brief Definição da classe Carro
 */

#ifndef CARRO_HPP
#define CARRO_HPP


#include <iostream>
#include <string>

#include "Veiculo.hpp"

/**
 * @class Carro
 * @brief Classe que representa um carro
 */
class Carro : public Veiculo{
private:
    
public:
    bool arCondicionado; /**< Indica se o carro possui ar condicionado */
    bool marchaAutomatica; /**< Indica se o carro cambio automático */
    bool motorFlex; /**< Indica se o carro possui motor flex */
    bool disponivel = true; /**< Indica se o carro está disponível para locação */


    /**
     * @brief Construtor da classe Carro
     * @param modelo O modelo do carro
     * @param marca A marca do carro
     * @param ano O ano do carro
     * @param placa A placa do carro
     * @param valorDiaria O valor da diária do carro
     */
    Carro(std::string modelo, std::string marca, int ano, std::string placa, double valorDiaria);
   
   /**
     * @brief Destrutor da classe Carro
     */
    ~Carro();
};



#endif // CARRO_HPP
