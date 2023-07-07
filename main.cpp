#include "Cliente.hpp"
#include "Admin.hpp"
#include "Locadora.hpp"
#include "Carro.hpp"
#include "Veiculo.hpp"
//#include "CadastroCliente.hpp"
#include "Pagamento.hpp"

#include <iostream>
#include <string>
#include <vector>

int main()
{
   Locadora locadora;
   Cliente cliente;
   //CadastroCliente cadastro;
   Pagamento pagamento;

    // Adicionando carros à locadora
    locadora.adicionarCarro(Carro("Civic", "Honda", 2019, "NXT4040", 182.0));
    locadora.adicionarCarro(Carro("Corolla", "Toyota", 2020, "POI5050", 240.2));
    locadora.adicionarCarro(Carro("Golf", "Volkswagen", 2018, "GFR6985", 109.5));
    locadora.adicionarCarro(Carro("Cruze", "Chevrolet", 2021, "KLT9575", 98.7));

    // Cadastrando clientes
    //cadastro.cadastrarCliente("João", "1234567890", "senha123");
    //cadastro.cadastrarCliente("Maria", "9876543210", "senha456");    



    int opcao;
    Admin admin;
    std::string modelo;
    std::string senha;
    int opcaoAdmin, cpf;
    std::string novoModelo, novaMarca, novaPlaca;
    int novoAno;
    bool possuiAr, possuirMarcha, possuirMotorFlex;
    bool clienteAutenticado = false;
    std::string novoNome, novaSenha;
    double valorDiaria;
    int novoCPF, quantDias, clienteCPF;
    std::string numeroCartao = "";

    do
    {
        // Mostrar página inicial
        std::cout << "===== Página Inicial =====" << std::endl;
        std::cout << "Selecione uma opção:" << std::endl;
        std::cout << "1. Cliente" << std::endl;
        std::cout << "2. Administrador" << std::endl;
        std::cout << "0. Sair" << std::endl;
        std::cout << "==========================" << std::endl;
        std::cout << "Opção: ";
        std::cin >> opcao;

        switch (opcao)
        {
            case 1: //Menu do cliente
            {
                // Menu do Cliente
                std::cout << "===== Menu do Cliente =====" << std::endl;
                int opcaoCliente;

                do
                {
                    std::cout << "Selecione uma opção:" << std::endl;
                    std::cout << "1. Criar conta" << std::endl;
                    std::cout << "2. Autenticação" << std::endl;
                    std::cout << "0. Voltar para a página inicial" << std::endl;
                    std::cout << "==================================" << std::endl;
                    std::cout << "Opção: ";
                    std::cin >> opcaoCliente;

                    switch (opcaoCliente)
                    {
                        case 1:
                        {
                            std::cout << "===== Criar Conta =====" << std::endl;
                            std::cout << "Nome: ";
                            std::cin.ignore();
                            std::getline(std::cin, novoNome);
                            std::cout << "CPF: ";
                            std::cin >> novoCPF;
                            std::cout << "Senha: ";
                            std::cin >> novaSenha;

                            // Verifica se o cpf ja esta cadastrado
                            bool clienteExistente = false;
                            for (const auto& cliente : cliente.clientes) {
                                if (cliente.getCPF() == novoCPF) {
                                    clienteExistente = true;
                                    break;
                                }
                            }
                            
                            if (clienteExistente) {
                                std::cout << "Um cliente com o CPF informado já está cadastrado." << std::endl;
                            } else {
                                // Cria um novo usuario e adiciona aos clientes
                                Cliente novoCliente(novoNome, "", novoCPF, "", novaSenha, "", 0, "", "");
                                cliente.clientes.push_back(novoCliente);
                                std::cout << "Conta criada com sucesso!" << std::endl;
                            }

                            break;
                        }
                        
                        case 2:
                        {
                            std::cout << "===== Autenticação do Cliente =====" << std::endl;
                            std::cout << "CPF: ";
                            std::cin >> cpf;
                            std::cout << "Senha: ";
                            std::cin >> senha;

                            // Verificar autenticação do cliente
                            bool clienteAutenticado = false;
                            for (const auto& cliente : cliente.clientes) {
                                if (cliente.getCPF() == cpf && cliente.getSenha() == senha) {
                                    clienteAutenticado = true;
                                    break;
                                }
                            }
                            
                            if (clienteAutenticado)
                            {
                                int opcaoMenuCliente;

                                do
                                {
                                    std::cout << "===== Menu do Cliente =====" << std::endl;
                                    std::cout << "Selecione uma opção:" << std::endl;
                                    std::cout << "1. Adicionar cartão de crédito" << std::endl;
                                    std::cout << "2. Remover cartão de crédito" << std::endl;
                                    std::cout << "3. Pesquisar carros disponíveis" << std::endl;
                                    std::cout << "4. Fazer uma reserva" << std::endl;
                                    std::cout << "5. Ver custo da reserva" << std::endl;
                                    std::cout << "6. Confirmar reserva" << std::endl;
                                    std::cout << "7. Alterar senha" << std::endl;
                                    std::cout << "0. Voltar para a página inicial" << std::endl;
                                    std::cout << "==================================" << std::endl;
                                    std::cout << "Opção: ";
                                    std::cin >> opcaoMenuCliente;

                                    switch (opcaoMenuCliente)
                                    {
                                        case 1: //Add cartao
                                        {
                                            std::cout << "===== Adicionar Cartão de Crédito =====" << std::endl;
                                            std::cout << "Digite o número do cartão de crédito: ";
                                            std::string numeroCartao;
                                            std::cin >> numeroCartao;

                                            // Add cartão do cliente
                                            cliente.setCarteiraPagamento(numeroCartao);
                                            std::cout << "Cartão de crédito adicionado com sucesso!" << std::endl;
                                            break;
                                        }
                                        
                                        case 2: //Rem cartao
                                        {
                                            std::cout << "===== Remover Cartão de Crédito =====" << std::endl;
                                            std::cout << "Lista de Cartões de Crédito:" << std::endl;

                                            // Recebe o numero do cliente
                                            std::string numeroCartao = cliente.getCarteiraPagamento();
                                                
                                            if (numeroCartao.empty()) 
                                                {
                                                    std::cout << "Não há cartões de crédito cadastrados na conta." << std::endl;
                                                }
                                                else 
                                                {
                                                    std::cout << "Número do Cartão de Crédito: " << numeroCartao << std::endl;
                                                    std::cout << "Deseja remover este cartão? (S/N): ";
                                                    std::string resposta;
                                                    std::cin >> resposta;

                                                    if (resposta == "S" || resposta == "s") 
                                                    {
                                                        // Remove o cartão
                                                        cliente.setCarteiraPagamento("");
                                                        std::cout << "Cartão de crédito removido com sucesso!" << std::endl;
                                                    }
                                                    else 
                                                    {
                                                        std::cout << "Operação cancelada." << std::endl;
                                                    }
                                                }
                                            break;
                                        }
                                        
                                        case 3: //Pesquisar carros ****faltando****
                                        {
                                            //imple.
                                            break;
                                        }

                                        case 4: //Faz Reserva
                                        {
                                            std::cout << "===== Fazer uma Reserva =====" << std::endl;
                                            std::cout << "Modelo do carro: ";
                                            std::cin.ignore();
                                            std::getline(std::cin, modelo);

                                            // Ver se o carro esta disponivel
                                            bool carroDisponivel = false;
                                            for (auto& carro : locadora.carros) 
                                            {
                                                if (carro.modelo == modelo && carro.disponivel) 
                                                {
                                                    carroDisponivel = true;
                                                    
                                                    std::cout << "Quantidade de dias: ";
                                                    std::cin >> quantDias;

                                                    double valorTotal = carro.valorDiaria * quantDias;
                                                    valorTotal += valorTotal * pagamento.taxa;

                                                    std::cout << "Valor total da reserva: R$" << valorTotal << std::endl;
                                                    std::cout << "Deseja confirmar a reserva? (S/N): ";
                                                    std::string resposta;
                                                    std::cin >> resposta;

                                                    if (resposta == "S" || resposta == "s") 
                                                    {
                                                        //Faz a reserva
                                                        carro.disponivel = false;
                                                        std::cout << "Reserva realizada com sucesso para o carro modelo " << modelo << "." << std::endl;
                                                    } 
                                                    else 
                                                    {
                                                        std::cout << "Operação cancelada." << std::endl;
                                                    }
                                                    break;
                                                }
                                            }
                                            
                                            if (!carroDisponivel)
                                            {
                                                std::cout << "Não foi possível encontrar um carro disponível com o modelo especificado." << std::endl;
                                            }

                                            break;
                                        }

                                        case 5: //Ver preco
                                        {
                                            std::cout << "===== Ver Custo da Reserva =====" << std::endl;
                                            std::cout << "Modelo do carro: ";
                                            std::cin.ignore();
                                            std::getline(std::cin, modelo);

                                            // Ver se o carro esta disponivel
                                            bool carroDisponivel = false;
                                            double valorDiaria = 0.0;
                                            std::string numeroCartao;  // Declare and initialize the variable here
                                            
                                            for (const auto& carro : locadora.carros) 
                                            {
                                                if (carro.modelo == modelo && carro.disponivel) 
                                                {
                                                    carroDisponivel = true;
                                                    valorDiaria = carro.valorDiaria;
                                                    numeroCartao = cliente.getCarteiraPagamento();  // Assign the value here
                                                    break;
                                                }
                                            }

                                            if (carroDisponivel) 
                                            {
                                                std::cout << "Quantidade de dias: ";
                                                std::cin >> quantDias;

                                                double valorTotal = valorDiaria * quantDias;
                                                valorTotal += valorTotal * pagamento.taxa;

                                                std::cout << "O custo da reserva para o carro modelo " << modelo << " por " << quantDias << " dias é: R$" << valorTotal << std::endl;
                                            }
                                            else 
                                            {
                                                std::cout << "Não foi possível encontrar um carro disponível com o modelo especificado." << std::endl;
                                            }
                                            break;
                                        }

                                        case 6: //Confirmar
                                        {
                                            std::cout << "===== Confirmar Reserva =====" << std::endl;
                                            // Implementar
                                            break;
                                        }

                                        case 7: //Alterar senha
                                        {
                                            std::cout << "===== Alterar Senha =====" << std::endl;
                                            std::cout << "Nova senha: ";
                                            std::cin >> novaSenha;

                                            // Update the client's password
                                            for (auto& cliente : cliente.clientes) 
                                            {
                                                if (cliente.getCPF() == cpf) 
                                                {
                                                    cliente.setSenha(novaSenha);
                                                    break;
                                                }
                                            }
                                            std::cout << "Senha alterada com sucesso!" << std::endl;
                                            break;
                                        }                                    
                                        
                                        default:
                                        {
                                        std::cout << "Opção inválida. Tente novamente." << std::endl;
                                        break;
                                        }
                                        
                                    }
                                } while (opcaoMenuCliente);
                            }
                            else
                            {
                                std::cout << "Autenticação falhou. CPF ou senha incorretos." << std::endl;
                            
                            }
                        break;
                        }
                        
                        case 0:
                        {
                            std::cout << "Voltando para a página inicial..." << std::endl;
                            break;  
                        }
                        default:
                        {
                            std::cout << "Opção inválida. Tente novamente." << std::endl;
                            break;
                        }
                            
                    }
                } while (opcaoCliente !=0);
                
                break;
            }
            
            case 2: //Menu do ADM
            {
                // Menu do Administrador
                std::cout << "===== Menu do Administrador =====" << std::endl;
                std::cout << "Selecione uma opção:" << std::endl;
                std::cout << "1. Adicionar carro" << std::endl;
                std::cout << "2. Listar carros disponíveis" << std::endl;
                std::cout << "3. Alugar um carro" << std::endl;
                std::cout << "4. Devolver carro" << std::endl;
                std::cout << "5. Cadastrar cliente" << std::endl;
                std::cout << "6. Alterar senha do administrador" << std::endl;
                std::cout << "0. Voltar para a página inicial" << std::endl;
                std::cout << "=================================" << std::endl;
                std::cout << "Opção: ";
                std::cin >> opcaoAdmin;

                switch (opcaoAdmin)
                {
                    case 1: //Add carro
                    {
                        std::cout << "Informe o modelo do novo carro: ";
                        std::cin >> novoModelo;
                        std::cout << "Informe a marca do novo carro: ";
                        std::cin >> novaMarca;
                        std::cout << "Informe o ano do novo carro: ";
                        std::cin >> novoAno;
                        std::cout << "Informe a placa do novo carro: ";
                        std::cin >> novaPlaca;
                        std::cout << "Informe o valor da diária do novo carro: ";
                        std::cin >> valorDiaria;
                        locadora.adicionarCarro(Carro(novoModelo, novaMarca, novoAno, novaPlaca, valorDiaria));
                        std::cout << "Novo carro adicionado com sucesso!" << std::endl;    
                        break;
                    }    
                        
                    case 2: //listar carros
                    {
                        locadora.listarCarrosDisponiveis();
                        break;
                    }

                    case 3: //alugar carro
                    {
                        std::cout << "Informe o modelo do carro que deseja alugar: ";
                        std::cin >> modelo;
                        std::cout << "Informe o CPF do: ";
                        std::cin >> clienteCPF;
                        std::cout << "Informe a quantidade de dias que deseja: ";
                        std::cin >> quantDias;
                        pagamento.efetuarPagamento(modelo, clienteCPF, quantDias);
                        locadora.alugarCarro(modelo);
                        break;
                    }

                    case 4:
                    {
                        std::cout << "Informe o modelo do carro que deseja devolver: ";
                        std::cin >> modelo;
                        locadora.devolverCarro(modelo);
                        break;
                    }

                    case 5:
                    {
                        std::cout << "===== Cadastrar cliente =====" << std::endl;
                        std::cout << "Informe o nome do cliente: ";
                        std::cin.ignore();
                        std::getline(std::cin, novoNome);
                        std::cout << "Informe o CPF do cliente: ";
                        std::cin >> novoCPF;
                        std::cout << "Informe a senha do cliente: ";
                        std::cin.ignore();
                        std::getline(std::cin, novaSenha);

                        // Create a new Cliente object
                        Cliente novoCliente(novoNome, "", novoCPF, "", novaSenha, "", 0, "", "");

                        // Add the new client to the vector of clients
                        cliente.clientes.push_back(novoCliente);

                        std::cout << "Cliente cadastrado com sucesso!" << std::endl;

                        break;
                    }

                    case 6:
                    {
                        std::cout << "===== Alterar Senha do Administrador =====" << std::endl;
                        std::cout << "Nova senha: ";
                        std::cin >> novaSenha;
                        //mudar senha do adm
                        admin.setSenha(novaSenha);
                        std::cout << "Senha do administrador alterada com sucesso!" << std::endl;
                        break;
                    }

                    case 0:
                    {
                        std::cout << "Voltando para a página inicial..." << std::endl;
                        break;
                    }

                    default:
                    {
                        std::cout << "Opção inválida. Tente novamente." << std::endl;
                        break;
                    }
                        
                } while (opcaoAdmin !=0);
                break;
            }

            case 0: //Encerra o programa
            {
                std::cout << "Encerrando o programa..." << std::endl;
                break;   
            }
            
            default: //msg erro
            {
                std::cout << "Opção inválida. Tente novamente." << std::endl;
                break;
            }
            
        }
    } while (opcao !=0);
    
    return 0;
}