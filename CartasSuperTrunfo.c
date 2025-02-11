#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste André Filipe

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_da_carta[10];
    char nome_cidade[20];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da carta:\n");
    scanf(" %9s",&codigo_da_carta);
    printf("Digite o nome da cidade:\n");
    scanf(" %19[^\n]",&nome_cidade);
    printf("Digite a quantidade populacional:\n");
    scanf("%d",&populacao);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d",&pontos_turisticos);
    printf("Digite a area em km:\n");
    scanf("%f",&area);
    printf("Digite o PIB:\n");
    scanf("%f",&pib);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n--- Carta Cadastrada ---\n");
    printf("Carta: %s \nCidade: %s \n",codigo_da_carta,nome_cidade);
    printf("Populacao: %d habitantes\nPontos turisticos: %d \n",populacao,pontos_turisticos);
    printf("Area: %.0f km quadrados\nPIB: %.0f milhoes\n", area, pib);

    return 0;
}
