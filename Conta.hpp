/**
 * @file Conta.hpp
 * @brief Definição da classe Conta
 */

#ifndef CONTA_HPP
#define CONTA_HPP

#include <iostream>
#include <string>

/**
 * @class Conta
 * @brief Classe base para representar uma conta
 */
class Conta{
protected:
    int cpf; /**< CPF do titular da conta */

private:
    std::string senha; /**< Senha da conta */

public:
    std::string nome; /**< Nome do titular da conta */

    /**
     * @brief Construtor padrão da classe Conta
     */
    Conta();

    /**
     * @brief Construtor da classe Conta
     * @param nome O nome do titular da conta
     * @param cpf O CPF do titular da conta
     * @param senha A senha da conta
     */
    Conta(std::string nome, int cpf, std::string senha);

    /**
     * @brief Destrutor da classe Conta
     */
    ~Conta();

    /**
     * @brief Obtém o CPF do titular da conta
     * @return O CPF do titular da conta
     */
    int getCPF() const;

    /**
     * @brief Define o CPF do titular da conta
     * @param cpf O CPF do titular da conta
     */
    void setCPF(int cpf);

    /**
     * @brief Obtém a senha da conta
     * @return A senha da conta
     */
    std::string getSenha() const;

    /**
     * @brief Define a senha da conta
     * @param senha A senha da conta
     */
    void setSenha(const std::string &senha);
};

#endif // CONTA_HPP
