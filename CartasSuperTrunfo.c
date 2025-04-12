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
    char estado[20];
    char nome_cidade[20];

    int populacao, pontos_turisticos;
    float area, pib;
    float densidade_populacional, pib_per_capita;
    // Carta 2
    char codigo_da_carta2[10];
    char estado2[20];
    char nome_cidade2[20];

    int populacao2, pontos_turisticos2;
    float area2, pib2;
    float densidade_populacional2, pib_per_capita2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite os dados abaixo Carta 1:\n");
    printf("Letra do Estado de (A a H): ");
    scanf(" %[^\n]",&estado);
    printf("Codigo da carta: ");
    scanf(" %9s",&codigo_da_carta);
    printf("Nome da cidade: ");
    scanf(" %[^\n]",&nome_cidade);
    printf("Quantidade populacional: ");
    scanf("%d",&populacao);
    printf("Numero de pontos turisticos: ");
    scanf("%d",&pontos_turisticos);
    printf("Area em quilometros quadrados: ");
    scanf("%f",&area);
    printf("O PIB: ");
    scanf("%f",&pib);

    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;
    // Dados carta 2
    printf("Digite os dados abaixo Carta 2:\n");
    printf("Letra do Estado de (A a H): ");
    scanf(" %[^\n]",&estado2);
    printf("Codigo da carta: ");
    scanf(" %9s",&codigo_da_carta2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]",&nome_cidade2);
    printf("Quantidade populacional: ");
    scanf("%d",&populacao2);
    printf("Numero de pontos turisticos: ");
    scanf("%d",&pontos_turisticos2);
    printf("Area em quilometros quadrados: ");
    scanf("%f",&area2);
    printf("O PIB: ");
    scanf("%f",&pib2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta 1:\n");
    printf("Estado: %s \nCodigo: %s \nCidade: %s \n",estado,nome_cidade,codigo_da_carta);
    printf("Populacao: %d habitantes\nPontos turisticos: %d \n",populacao,pontos_turisticos);
    printf("Area: %.0f km2\nPIB: %.0f bilhoes de reais\n", area, pib);
    printf("Densidade Populacional: %.2lf hab/km2 \n", densidade_populacional);
    printf("PIB Per Capita: R$ %.2lf reais\n", pib_per_capita);


    printf("\nCarta 2:\n");
    printf("Estado: %s \nCodigo: %s \nCidade: %s \n",estado2,nome_cidade2,codigo_da_carta2);
    printf("Populacao: %d habitantes\nPontos turisticos: %d \n",populacao2,pontos_turisticos2);
    printf("Area: %.0f km2\nPIB: %.0f bilhoes de reais\n", area2, pib2);
    printf("Densidade Populacional: %.2lf hab/km2 \n", densidade_populacional2);
    printf("PIB Per Capita: R$ %.2lf reais\n", pib_per_capita2);

    return 0;
}