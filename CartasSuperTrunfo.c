#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Rodolfo

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: estado,código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    char estado1[20], cidade1[20], codigo1[3];
    int populacao1, qtdPtsTuristicos1;
    float area1, pib1;

    char estado2[20], cidade2[20], codigo2[3];
    int populacao2, qtdPtsTuristicos2;
    float area2, pib2;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Leitura de dados carta 1
    printf("Olá! Bem vindo ao jogo Super Trunfo!\nVamos cadastrar as cartas e iniciar o jogo?\nDigite o Codigo da primeira carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Estado 1: \n");
    scanf("%s", estado1);

    printf("digite a cidade 1: \n");
    scanf("%s", cidade1);

    printf("Digite a População da cidade 1: \n");
    scanf("%i", &populacao1);
    
    printf("Digite a área da cidade 1: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade 1:\n");
    scanf("%i", &qtdPtsTuristicos1);

    return 0;
}
