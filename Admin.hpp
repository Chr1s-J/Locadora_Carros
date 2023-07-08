/**
 * @file Admin.hpp
 * @brief Definição da classe Admin
 */

#ifndef ADMIN_HPP
#define ADMIN_HPP

#include "Conta.hpp"
#include "Veiculo.hpp"
#include "Locadora.hpp"

#include <iostream>
#include <string>
#include <vector>

/**
 * @class Admin
 * @brief Classe que representa um administrador
 */

class Admin : public Conta {
private:
    static const std::string MASTER_USER; /**< Nome de usuário do administrador master */
    static const std::string MASTER_SENHA; /**< Senha do administrador master */

public:
    /**
     * @brief Construtor padrão da classe Admin
     */
    Admin();
    /**
     * @brief Destrutor da classe Admin
     */
    ~Admin();

    /**
     * @brief Verifica se o usuário e a senha correspondem ao administrador master
     * @param user O nome de usuário a ser verificado
     * @param senha A senha a ser verificada
     * @return true se o usuário e a senha correspondem ao administrador master, false caso contrário
     */
    static bool isMasterAdmin(const std::string& user, const std::string& senha);
};

#endif // ADMIN_HPP
