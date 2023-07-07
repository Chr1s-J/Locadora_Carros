#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <string>

class Conta
{
protected:
    int cpf;

private:
    std::string senha;

public:
    std::string nome;

    Conta();
    Conta(std::string nome, int cpf, std::string senha);
    ~Conta();

    int getCPF() const;
    void setCPF(int cpf);

    std::string getSenha() const;
    void setSenha(const std::string &senha);
};

#endif
