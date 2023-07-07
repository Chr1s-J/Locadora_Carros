# Locadora de Carros - Projeto PDSII UFMG
> Este projeto consiste em uma implementação de uma locadora de carros como parte da disciplina de Projeto e Desenvolvimento de Sistemas II (PDSII) na Universidade Federal de Minas Gerais (UFMG).

## Descrição
A locadora de carros é um sistema que permite aos clientes alugar carros disponíveis por um determinado período de tempo. O objetivo do projeto é desenvolver um programa que simule o funcionamento de uma locadora de carros, oferecendo funcionalidades para cadastro de clientes, adição de carros ao estoque, consulta de carros disponíveis, aluguel de carros, devolução de carros, entre outras operações relacionadas à locação de veículos.

## Visão Geral da Solução
O programa é implementado em C++ e possui uma estrutura de classes que modela os principais componentes do sistema. A estrutura inclui as seguintes classes:

**Cliente**: Representa um cliente da locadora, com atributos como nome, CPF e senha.

**Admin**: Representa um administrador da locadora, com funções específicas, como adicionar carros ao estoque.

**Locadora**: Responsável por gerenciar o estoque de carros disponíveis para locação.

**Carro**: Representa um carro disponível para locação, com informações como modelo, marca, ano, placa e valor da diária.

**Conta**: Representa uma conta de cliente, contendo informações como nome, CPF e senha.

**Pagamento**: Realiza o processamento do pagamento de um aluguel de carro.

O programa segue um fluxo de interação com o usuário, apresentando um menu principal com opções para clientes e administradores. Os clientes podem autenticar-se, alugar carros e devolvê-los, enquanto os administradores podem adicionar carros ao estoque e listar os carros disponíveis.

## Principais Dificuldades Encontradas
Durante o desenvolvimento do projeto, as principais dificuldades encontradas foram:

1. Implementação da lógica de autenticação de clientes: Foi necessário criar um mecanismo de autenticação para garantir que apenas clientes autenticados pudessem realizar operações de aluguel e devolução de carros.
2. Gerenciamento do estoque de carros: Foi necessário implementar a lógica para adicionar carros ao estoque, marcar carros como disponíveis ou alugados e realizar a consulta de carros disponíveis.
3. Processamento de pagamentos: Foi necessário implementar o cálculo do valor total a ser pago pelo aluguel de um carro, considerando o valor da diária e a duração do aluguel.

Apesar das dificuldades encontradas, o projeto permitiu o aprimoramento das habilidades de programação em C++, o entendimento de conceitos de modelagem de classes e a aplicação de princípios de desenvolvimento de software.

## Requisitos do Sistema
Compilador C++

Biblioteca de desenvolvimento C++ (dependendo do sistema operacional)

Makefile (opcional, mas facilita o processo de compilação)

## Como compilar e executar o projeto
1. Clone o repositório do projeto em sua máquina local.
2. Acesse o diretório do projeto via terminal.
3. Utilize o comando **make** para compilar o código-fonte.
4. Execute o programa resultante com o comando **make run**.

### Equipe

_João Márcio Calazans_

_Shelle Duarte_

