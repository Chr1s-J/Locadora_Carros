/**
 * @file Veiculo.hpp
 * @brief Definição da classe Veiculo
 */

#ifndef VEICULO_HPP
#define VEICULO_HPP

#include <iostream>
#include <string>

/**
 * @class Veiculo
 * @brief Classe que representa um veículo
 */
class Veiculo{
private:
    // Nenhum atributo privado

public:
    /**
     * @brief Construtor da classe Veiculo
     */
    Veiculo();

    /**
     * @brief Destrutor da classe Veiculo
     */
    ~Veiculo();

    std::string marca; /**< A marca do veículo */
    std::string tipo; /**< O tipo do veículo */
    std::string modelo; /**< O modelo do veículo */
    std::string cor; /**< A cor do veículo */
    std::string placa; /**< A placa do veículo */
    int ano; /**< O ano do veículo */
    double valorDiaria; /**< O valor da diária do veículo */

};



#endif // VEICULO_HPP
