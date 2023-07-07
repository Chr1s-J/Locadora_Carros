#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include "Conta.hpp"

class Cliente : public Conta{
private:
    std::string endereco;                      // endereço do cliente
    int telefone;                      // telefone do cliente
    std::string carteiraMotorista;             // cart. motorista
    std::string carteiraPagamento;             // cart. pagamento
    std::string dataNascimento;                // data de nasc
    int cpf;                           // cpf
    std::string email;                         // email
    std::vector<std::string> historicoCliente; // historico de locacao do cliente

public:
    Cliente();
    Cliente(std::string nome, std::string dataNascimento, int cpf, std::string email,
            std::string senha, std::string endereco, int telefone,
            std::string carteiraMotorista, std::string carteiraPagamento);
    ~Cliente();

    std::string getEndereco() const;
    void setEndereco(const std::string &endereco);

    int getTelefone() const;
    void setTelefone(const int &telefone);

    std::string getCarteiraMotorista() const;
    void setCarteiraMotorista(const std::string &carteiraMotorista);

    std::string getCarteiraPagamento() const;
    void setCarteiraPagamento(const std::string &carteiraPagamento);

    std::string getDataNascimento() const;
    void setDataNascimento(const std::string &dataNascimento);

    int getCPF() const;
    void setCPF(const int &cpf);

    std::string getEmail() const;
    void setEmail(const std::string &email);

    void adicionarHistoricoCliente(const std::string &historicoCliente);
    std::vector<std::string> getHistoricoCliente() const;

    std::vector<Cliente> clientes;
};

#endif