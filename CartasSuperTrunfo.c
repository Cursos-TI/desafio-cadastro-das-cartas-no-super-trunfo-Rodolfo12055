#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: estado,código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    char estado1[20], cidade1[20], codigo1[20];
    int populacao1, PtsTuristicos1;
    float area1,pib1;
    

    char estado2[20], cidade2[20], codigo2[20];
    int populacao2, PtsTuristicos2;
    float area2,pib2;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Leitura de dados carta 1
    printf("Olá! Bem vindo ao jogo Super Trunfo!\nVamos cadastrar as cartas e iniciar o jogo?\nDigite o Codigo da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("digite a cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a População da cidade: \n");
    scanf("%i", &populacao1);
    
    printf("Digite a área em km2: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%i", &PtsTuristicos1);

    //Imprimindo dados da carta 1
    printf("Codigo da Cidade: %3s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área da cidade: %.3f km2\n", area1);
    printf("PIB: %.3f Bilhoes de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", PtsTuristicos1);

    // Leitura de dados carta 2
    printf("Olá! Bem vindo ao jogo Super Trunfo!\nVamos cadastrar as cartas e iniciar o jogo?\nDigite o Codigo da carta: \n");
    scanf("%3s", &codigo2);

    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("digite a cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a População da cidade: \n");
    scanf("%i", &populacao2);
    
    printf("Digite a área em km2: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%i", &PtsTuristicos2);

    //Imprimindo dados da carta 2
    printf("Codigo da Cidade: %3s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área da Cidade: %.3f Km2\n", area2);
    printf("PIB: %.3f Bilhoes de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", PtsTuristicos2);


    return 0;
}
