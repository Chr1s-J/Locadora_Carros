#include "Conta.hpp"

Conta::Conta() {}

Conta::Conta(std::string nome, int cpf, std::string senha)
    : nome(nome), cpf(cpf), senha(senha) {}

Conta::~Conta() {}

std::string Conta::getSenha() const {
    return senha;
}

void Conta::setSenha(const std::string& senha) {
    this->senha = senha;
}
