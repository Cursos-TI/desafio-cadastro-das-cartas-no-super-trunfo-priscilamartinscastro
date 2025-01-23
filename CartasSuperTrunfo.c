#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Priscila

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int populacao, PontosTuristicos;
    float PIB, area;
    char estado [2];
    char cidade [3];


    printf("Digite o código do estado: \n");
    scanf ("%s", &estado);

    printf("Digite o código da cidade: \n");
    scanf ("%s", &cidade);

    printf("Digite a quantidade da população: \n");
    scanf ("%d", &populacao);

    printf("Digite a àrea em km²: \n");
    scanf ("%f", &area);

    printf("Informe o PIB da Cidade (R$): \n");
    scanf ("%f", &PIB);

    printf("Quantos pontos turísticos a cidade possui? \n");
    scanf ("%d", &PontosTuristicos);

    printf(" Código da carta: %s%s \n", estado, cidade);
    printf(" População: %d \n Área: %f \n PIB %f \n Número de Pontos Turísticos: %d \n", populacao, area, PIB, PontosTuristicos);





    return 0;

}

