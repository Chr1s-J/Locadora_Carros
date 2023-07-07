#include "Locadora.hpp"

void Locadora::adicionarCarro(Carro carro) {
    carros.push_back(carro);
}

void Locadora::listarCarrosDisponiveis() {
    std::cout << "Carros disponíveis para locação:" << std::endl;
    for (const auto& carro : carros) {
        if (carro.disponivel) {
            std::cout << "Marca: " << carro.marca << ", Modelo: " << carro.modelo << ", Ano: " << carro.ano << std::endl;
        }
    }
}

void Locadora::alugarCarro(std::string modelo) {
    for (auto& carro : carros) {
        if (carro.modelo == modelo && carro.disponivel) {
            carro.disponivel = false;
            std::cout << "Carro " << carro.marca << " " << carro.modelo << " alugado com sucesso!" << std::endl;
            return;
        }
    }

    std::cout << "Não foi possível encontrar um carro disponível com o modelo especificado." << std::endl;
}

void Locadora::devolverCarro(std::string modelo) {
    for (auto& carro : carros) {
        if (carro.modelo == modelo && !carro.disponivel) {
            carro.disponivel = true;
            std::cout << "Carro " << carro.marca << " " << carro.modelo << " devolvido com sucesso!" << std::endl;
            return;
        }
    }

    std::cout << "Não foi possível encontrar um carro alugado com o modelo especificado." << std::endl;
}

Locadora::Locadora() {
    // Implementação do construtor
}

Locadora::~Locadora() {
    // Implementação do destrutor
}
