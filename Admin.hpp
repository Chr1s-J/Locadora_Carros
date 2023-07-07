#ifndef ADMIN_H
#define ADMIN_H

#include "Conta.hpp"
#include "Veiculo.hpp"
#include "Locadora.hpp"

#include <iostream>
#include <string>
#include <vector>

class Admin : public Conta {
private:
    static const std::string MASTER_USER;
    static const std::string MASTER_SENHA;

public:
    Admin();
    ~Admin();

    static bool isMasterAdmin(const std::string& user, const std::string& senha);
};

#endif
