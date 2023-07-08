/**
 * @file Locadora.hpp
 * @brief Definição da classe Locadora
 */

#ifndef LOCADORA_HPP
#define LOCADORA_HPP

#include "Carro.hpp"

#include <iostream>
#include <string>
#include <vector>

/**
 * @class Locadora
 * @brief Classe que representa uma locadora de carros
 */
class Locadora {
private:
    //std::vector<Carro> carros;

public:
    std::vector<Carro> carros; /**< Vetor de carros disponíveis na locadora */
    
    /**
     * @brief Adiciona um carro à locadora
     * @param carro O carro a ser adicionado
     */
    void adicionarCarro(Carro carro);
    
    /**
     * @brief Lista os carros disponíveis na locadora
     */
    void listarCarrosDisponiveis();
    
    /**
     * @brief Aluga um carro pelo modelo
     * @param modelo O modelo do carro a ser alugado
     */
    void alugarCarro(std::string modelo);
    
    /**
     * @brief Devolve um carro alugado pelo modelo
     * @param modelo O modelo do carro a ser devolvido
     */
    void devolverCarro(std::string modelo);

    /**
     * @brief Construtor padrão da classe Locadora
     */
    Locadora();
    
    /**
     * @brief Destrutor da classe Locadora
     */
    ~Locadora();
};

#endif // LOCADORA_HPP
