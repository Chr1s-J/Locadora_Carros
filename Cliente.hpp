/**
 * @file Cliente.hpp
 * @brief Definição da classe Cliente
 */

#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <vector>
#include "Conta.hpp"

/**
 * @class Cliente
 * @brief Classe que representa um cliente
 */
class Cliente : public Conta{
private:
    std::string endereco; /**< Endereço do cliente */
    int telefone; /**< Telefone do cliente */
    std::string carteiraMotorista; /**< Carteira de motorista do cliente */
    std::string carteiraPagamento; /**< Carteira de pagamento do cliente */
    std::string dataNascimento; /**< Data de nascimento do cliente */
    int cpf; /**< CPF do cliente */
    std::string email; /**< E-mail do cliente */
    std::vector<std::string> historicoCliente; /**< Histórico de locação do cliente */

public:
    /**
     * @brief Construtor padrão da classe Cliente
     */
    Cliente();

    /**
     * @brief Construtor da classe Cliente
     * @param nome O nome do cliente
     * @param dataNascimento A data de nascimento do cliente
     * @param cpf O CPF do cliente
     * @param email O e-mail do cliente
     * @param senha A senha do cliente
     * @param endereco O endereço do cliente
     * @param telefone O telefone do cliente
     * @param carteiraMotorista A carteira de motorista do cliente
     * @param carteiraPagamento A carteira de pagamento do cliente
     */
    Cliente(std::string nome, std::string dataNascimento, int cpf, std::string email,
            std::string senha, std::string endereco, int telefone,
            std::string carteiraMotorista, std::string carteiraPagamento);
    
     /**
     * @brief Destrutor da classe Cliente
     */
    ~Cliente();

    /**
     * @brief Obtém o endereço do cliente
     * @return O endereço do cliente
     */
    std::string getEndereco() const;

    /**
     * @brief Define o endereço do cliente
     * @param endereco O endereço do cliente
     */
    void setEndereco(const std::string &endereco);

    /**
     * @brief Obtém o telefone do cliente
     * @return O telefone do cliente
     */
    int getTelefone() const;

    /**
     * @brief Define o telefone do cliente
     * @param telefone O telefone do cliente
     */
    void setTelefone(const int &telefone);

    /**
     * @brief Obtém a carteira de motorista do cliente
     * @return A carteira de motorista do cliente
     */
    std::string getCarteiraMotorista() const;

    /**
     * @brief Define a carteira de motorista do cliente
     * @param carteiraMotorista A carteira de motorista do cliente
     */
    void setCarteiraMotorista(const std::string &carteiraMotorista);

    /**
     * @brief Obtém a carteira de pagamento do cliente
     * @return A carteira de pagamento do cliente
     */
    std::string getCarteiraPagamento() const;
    
    /**
     * @brief Define a carteira de pagamento do cliente
     * @param carteiraPagamento A carteira de pagamento do cliente
     */
    void setCarteiraPagamento(const std::string &carteiraPagamento);

    /**
     * @brief Obtém a data de nascimento do cliente
     * @return A data de nascimento do cliente
     */
    std::string getDataNascimento() const;

    /**
     * @brief Define a data de nascimento do cliente
     * @param dataNascimento A data de nascimento do cliente
     */
    void setDataNascimento(const std::string &dataNascimento);

    /**
     * @brief Obtém o CPF do cliente
     * @return O CPF do cliente
     */
    int getCPF() const;

    /**
     * @brief Define o CPF do cliente
     * @param cpf O CPF do cliente
     */
    void setCPF(const int &cpf);

    /**
     * @brief Obtém o e-mail do cliente
     * @return O e-mail do cliente
     */
    std::string getEmail() const;

    /**
     * @brief Define o e-mail do cliente
     * @param email O e-mail do cliente
     */
    void setEmail(const std::string &email);

    /**
     * @brief Adiciona um registro ao histórico de locação do cliente
     * @param historicoCliente O registro de locação do cliente
     */
    void adicionarHistoricoCliente(const std::string &historicoCliente);
    
    /**
     * @brief Obtém o histórico de locação do cliente
     * @return O histórico de locação do cliente
     */
    std::vector<std::string> getHistoricoCliente() const;

    std::vector<Cliente> clientes; /**< Vetor de clientes */
};

#endif // CLIENTE_HPP
