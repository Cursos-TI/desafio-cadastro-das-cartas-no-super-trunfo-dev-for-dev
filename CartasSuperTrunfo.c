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

    unsigned long int populacao;

    int pontos_turisticos;
    float area, pib;
    float densidade_populacional, pib_per_capita;
    // Carta 2
    char codigo_da_carta2[10];
    char estado2[20];
    char nome_cidade2[20];

    unsigned long int populacao2;

    int pontos_turisticos2;
    float area2, pib2;
    float densidade_populacional2, pib_per_capita2;

    float super_poder1, super_poder2;

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
    scanf("%u",&populacao);
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
    scanf("%u",&populacao2);
    printf("Numero de pontos turisticos: ");
    scanf("%d",&pontos_turisticos2);
    printf("Area em quilometros quadrados: ");
    scanf("%f",&area2);
    printf("O PIB: ");
    scanf("%f",&pib2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    super_poder1 = (float)populacao + area + pib + pontos_turisticos + pib_per_capita + (1.0 / densidade_populacional);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta 1:\n");
    printf("Estado: %s \nCodigo: %s \nCidade: %s \n",estado,codigo_da_carta,nome_cidade);
    printf("Populacao: %u habitantes\nPontos turisticos: %d \n",populacao,pontos_turisticos);
    printf("Area: %.0f km2\nPIB: %.0f bilhoes de reais\n", area, pib);
    printf("Densidade Populacional: %.2lf hab/km2 \n", densidade_populacional);
    printf("PIB Per Capita: R$ %.2lf reais\n", pib_per_capita);


    printf("\nCarta 2:\n");
    printf("Estado: %s \nCodigo: %s \nCidade: %s \n",estado2,codigo_da_carta2,nome_cidade2);
    printf("Populacao: %u habitantes\nPontos turisticos: %d \n",populacao2,pontos_turisticos2);
    printf("Area: %.0f km2\nPIB: %.0f bilhoes de reais\n", area2, pib2);
    printf("Densidade Populacional: %.2lf hab/km2 \n", densidade_populacional2);
    printf("PIB Per Capita: R$ %.2lf reais\n", pib_per_capita2);

    int escolha;

    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (MENOR vence!)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite o numero correspondente ao atributo: ");
    scanf("%d", &escolha);

    printf("\n### Comparando cartas ###\n");

    switch (escolha) {
        case 1:
            printf("Populacao:\n");
            printf("%s: %lu habitantes\n", nome_cidade, populacao);
            printf("%s: %lu habitantes\n", nome_cidade2, populacao2);
            if (populacao > populacao2)
                printf("Resultado: %s venceu!\n", nome_cidade);
            else if (populacao2 > populacao)
                printf("Resultado: %s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Area:\n");
            printf("%s: %.2f km²\n", nome_cidade, area);
            printf("%s: %.2f km²\n", nome_cidade2, area2);
            if (area > area2)
                printf("Resultado: %s venceu!\n", nome_cidade);
            else if (area2 > area)
                printf("Resultado: %s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("PIB:\n");
            printf("%s: R$ %.2f bilhões\n", nome_cidade, pib);
            printf("%s: R$ %.2f bilhões\n", nome_cidade2, pib2);
            if (pib > pib2)
                printf("Resultado: %s venceu!\n", nome_cidade);
            else if (pib2 > pib)
                printf("Resultado: %s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Pontos Turisticos:\n");
            printf("%s: %d\n", nome_cidade, pontos_turisticos);
            printf("%s: %d\n", nome_cidade2, pontos_turisticos2);
            if (pontos_turisticos > pontos_turisticos2)
                printf("Resultado: %s venceu!\n", nome_cidade);
            else if (pontos_turisticos2 > pontos_turisticos)
                printf("Resultado: %s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Populacional (MENOR vence!):\n");
            printf("%s: %.2f hab/km²\n", nome_cidade, densidade_populacional);
            printf("%s: %.2f hab/km²\n", nome_cidade2, densidade_populacional2);
            if (densidade_populacional < densidade_populacional2)
                printf("Resultado: %s venceu!\n", nome_cidade);
            else if (densidade_populacional2 < densidade_populacional)
                printf("Resultado: %s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("PIB per Capita:\n");
            printf("%s: R$ %.2f\n", nome_cidade, pib_per_capita);
            printf("%s: R$ %.2f\n", nome_cidade2, pib_per_capita2);
            if (pib_per_capita > pib_per_capita2)
                printf("Resultado: %s venceu!\n", nome_cidade);
            else if (pib_per_capita2 > pib_per_capita)
                printf("Resultado: %s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;
        case 7:
            printf("Super Poder:\n");
            printf("%s: %.2f\n", nome_cidade, super_poder1);
            printf("%s: %.2f\n", nome_cidade2, super_poder2);
            if (super_poder1 > super_poder2)
                printf("Resultado: %s venceu!\n", nome_cidade);
            else if (super_poder2 > super_poder1)
                printf("Resultado: %s venceu!\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;

 /*
    printf("\nComparacao de Cartas:\n\nVenceu = (1)\nPerdeu = (0)\n\n");

    printf("Populacao: Carta 1 (%d)\n", populacao > populacao2);
    printf("Area: Carta 1 (%d)\n", area > area2);
    printf("PIB: Carta 1 (%d)\n", pib > pib2);
    printf("Pontos Turisticos: Carta 1 (%d)\n", pontos_turisticos > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 (%d)\n", densidade_populacional < densidade_populacional2); // menor vence!
    printf("PIB per Capita: Carta 1 (%d)\n", pib_per_capita > pib_per_capita2);
    printf("Super Poder: Carta 1 (%d)\n", super_poder1 > super_poder2);
*/
/*
 printf("\nComparacao de cartas(Atributo: Populacao):\n");
    printf("Carta 1 - %s (%s): %u\n",nome_cidade,estado,populacao);
    printf("Carta 2 - %s (%s): %u\n",nome_cidade2,estado2,populacao2);
    if (populacao>populacao2) {
        printf("Resultado: (%s) venceu!\n",nome_cidade);
    }else {
        printf("Resultado: (%s) venceu!\n",nome_cidade2);
    }
    printf("Comparacao de cartas(Atributo: Area):\n");
    printf("Carta 1 - %s (%s): %f\n",nome_cidade,estado,area);
    printf("Carta 2 - %s (%s): %f\n",nome_cidade2,estado2,area2);
    if (area>area2) {
        printf("Resultado: (%s) venceu!\n",nome_cidade);
    }else {
        printf("Resultado: (%s) venceu!\n",nome_cidade2);
    }
    printf("Comparacao de cartas(Atributo: PIB):\n");
    printf("Carta 1 - %s (%s): %f\n",nome_cidade,estado,pib);
    printf("Carta 2 - %s (%s): %f\n",nome_cidade2,estado2,pib2);
    if (pib>pib2) {
        printf("Resultado: (%s) venceu!\n",nome_cidade);
    }else {
        printf("Resultado: (%s) venceu!\n",nome_cidade2);
    }
    printf("Comparacao de cartas(Atributo: Pontos turisticos):\n");
    printf("Carta 1 - %s (%s): %d\n",nome_cidade,estado,pontos_turisticos);
    printf("Carta 2 - %s (%s): %d\n",nome_cidade2,estado2,pontos_turisticos2);
    if (pontos_turisticos>pontos_turisticos2) {
        printf("Resultado: (%s) venceu!\n",nome_cidade);
    }else {
        printf("Resultado: (%s) venceu!\n",nome_cidade2);
    }
    printf("Comparacao de cartas(Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%s): %f\n",nome_cidade,estado,densidade_populacional);
    printf("Carta 2 - %s (%s): %f\n",nome_cidade2,estado2,densidade_populacional2);
    if (densidade_populacional<densidade_populacional2) {
        printf("Resultado: (%s) venceu!\n",nome_cidade);
    }else {
        printf("Resultado: (%s) venceu!\n",nome_cidade2);
    }
    printf("Comparacao de cartas(Atributo: PIB Per Capita):\n");
    printf("Carta 1 - %s (%s): %f\n",nome_cidade,estado,pib_per_capita);
    printf("Carta 2 - %s (%s): %f\n",nome_cidade2,estado2,pib_per_capita2);
    if (pib_per_capita>pib_per_capita2) {
        printf("Resultado: (%s) venceu!\n",nome_cidade);
    }else {
        printf("Resultado: (%s) venceu!\n",nome_cidade2);
    }
    printf("Comparacao de cartas(Atributo: Super Poder):\n");
    printf("Carta 1 - %s (%s): %f\n",nome_cidade,estado,super_poder1);
    printf("Carta 2 - %s (%s): %f\n",nome_cidade2,estado2,super_poder2);
    if (super_poder1>super_poder2) {
        printf("Resultado: (%s) venceu!\n",nome_cidade);
    }else {
        printf("Resultado: (%s) venceu!\n",nome_cidade2);
    }
 */

}
/*
Carta 1 – Recife

Estado: Pernambuco
Código da carta: A01
Nome da cidade: Recife
População: 1661017 habitantes
Número de pontos turísticos: 28
Área: 218435 km²
PIB: 57180000000 (R$ 57,18 bilhões)

Carta 2 – Rio de Janeiro

Estado: Rio de Janeiro
Código da carta: B01
Nome da cidade: Rio de Janeiro
População: 6320446 habitantes
Número de pontos turísticos: 46
Área: 1221000 km²
PIB: 414400000000 (R$ 414,4 bilhões)
 */