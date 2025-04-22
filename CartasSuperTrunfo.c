#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste André Filipe

int main() {
    //Atributos da carta 1
    char codigo_da_carta[10];
    char pais[20];
    char estado[20];
    char nome_cidade[20];
    unsigned long int populacao;
    int pontos_turisticos;
    float area, pib;
    float densidade_populacional, pib_per_capita;
    float super_poder1;
    //Atributos da carta 2
    char codigo_da_carta2[10];
    char pais2[20];
    char estado2[20];
    char nome_cidade2[20];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2;
    float densidade_populacional2, pib_per_capita2;
    float super_poder2;
    // Cadastro das Cartas:
    // Utilizando a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicita ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n==================\nCadastro da Carta 1\n==================\n");
    printf("Digite os dados abaixo Carta 1:\n");
    printf("Nome do Pais: ");
    scanf(" %[^\n]", pais);
    printf("Letra do Estado: ");
    scanf(" %[^\n]", estado);
    printf("Codigo da carta: ");
    scanf(" %9s", &codigo_da_carta);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade);
    printf("Quantidade populacional: ");
    scanf("%lu", &populacao);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("Area em Km2: ");
    scanf("%f", &area);
    printf("O PIB: ");
    scanf("%f", &pib);
    // Calculo da densidade populacional, pib per capita e super poder da carta 1
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;
    super_poder1 = (float) populacao + area + pib + pontos_turisticos + pib_per_capita + (1.0 / densidade_populacional);

    //Entrada de Dados da carta 2
    printf("\n==================\nCadastro da Carta 2\n==================\n");
    printf("Digite os dados abaixo Carta 2:\n");
    printf("Nome do Pais: ");
    scanf(" %[^\n]", pais2);
    printf("Letra do Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Codigo da carta: ");
    scanf(" %9s", &codigo_da_carta2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("Quantidade populacional: ");
    scanf("%lu", &populacao2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Area em Km2: ");
    scanf("%f", &area2);
    printf("O PIB: ");
    scanf("%f", &pib2);
    // Calculo da densidade populacional, pib per capita e super poder da carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (
                       1.0 / densidade_populacional2);

    // Exibição dos Dados das Cartas:
    // Utilizando a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exibindo os valores inseridos para cada atributo da cidade, um por linha.
    // Atributos da carta 1
    printf("\nCarta 1:\n");
    printf("Codigo: %s \nPais: %s \nEstado: %s \nCidade: %s \n", codigo_da_carta, pais, estado, nome_cidade);
    printf("Pontos turisticos: %d \nPopulacao: %lu habitantes\n", pontos_turisticos, populacao);
    printf("Area: %.0f km2\nPIB: %.2f bilhoes de reais\n", area, pib);
    printf("Densidade Populacional: %.2lf hab/km2 \n", densidade_populacional);
    printf("PIB Per Capita: R$ %.2lf reais\n", pib_per_capita);
    // Atributos da carta 2
    printf("\nCarta 2:\n");
    printf("Codigo: %s \nPais: %s \nEstado: %s \nCidade: %s \n", codigo_da_carta2, pais2, estado2, nome_cidade2);
    printf("Pontos turisticos: %d \nPopulacao: %lu habitantes\n", pontos_turisticos2, populacao2);
    printf("Area: %.0f km2\nPIB: %.2f bilhoes de reais\n", area2, pib2);
    printf("Densidade Populacional: %.2lf hab/km2 \n", densidade_populacional2);
    printf("PIB Per Capita: R$ %.2lf reais\n", pib_per_capita2);
    // As variaveis escolha1 e escolha2 servem para que o menu dinamico funcione
    int escolha1 = 0, escolha2 = 0;
    // Aqui é pedido o primeiro atributo a ser comparado
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (MENOR vence!)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("\nDigite o numero correspondente ao atributo: ");
    scanf("%d", &escolha1);
    // Nessa parte vem a escolha do segundo atributo realizando uma verificacao para não aparecer o atributo escolhido anteriormente
    printf("\nEscolha o segundo atributo para comparar:\n");
    if (escolha1 != 1) printf("1 - Populacao\n");
    if (escolha1 != 2) printf("2 - Area\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos Turisticos\n");
    if (escolha1 != 5) printf("5 - Densidade Populacional (MENOR vence!)\n");
    if (escolha1 != 6) printf("6 - PIB per Capita\n");
    if (escolha1 != 7) printf("7 - Super Poder\n");
    printf("\nDigite o numero correspondente ao atributo: ");
    scanf("%d", &escolha2);
    //A variavel densidade_verificacao serve para caso seja escolhido densidade a verificacao ocorra validando que o menor atributo ganhe
    int densidade_verificacao = 0;
    printf("\n==================\nComparando as cartas\n==================\n");
    //As variaveis resultado1 e resultado2 servem para somar os dois atributos escolhidos para verificação
    float resultado1 = 0, resultado2 = 0;

    switch (escolha1) {
        case 1:
            printf("Populacao:\n");
            printf("%s - %s - %s: %lu habitantes\n", nome_cidade, estado, pais, populacao);
            printf("%s - %s - %s: %lu habitantes\n", nome_cidade2, estado2, pais2, populacao2);
            resultado1 += (float) populacao;
            resultado2 += (float) populacao2;
            break;
        case 2:
            printf("Area:\n");
            printf("%s - %s - %s: %.2f km2\n", nome_cidade, estado, pais, area);
            printf("%s - %s - %s: %.2f km2\n", nome_cidade2, estado2, pais2, area2);
            resultado1 += (float) area;
            resultado2 += (float) area2;
            break;
        case 3:
            printf("PIB:\n");
            printf("%s - %s - %s: %.2f bilhoes de reais\n", nome_cidade, estado, pais, pib);
            printf("%s - %s - %s: %.2f bilhoes de reais\n", nome_cidade2, estado2, pais2, pib2);
            break;
        case 4:
            printf("Pontos Turisticos:\n");
            printf("%s - %s - %s: %d pontos turisticos\n", nome_cidade, estado, pais, pontos_turisticos);
            printf("%s - %s - %s: %d pontos turisticos\n", nome_cidade2, estado2, pais2, pontos_turisticos2);
            break;
        case 5:
            printf("Densidade Populacional (menor vence):\n");
            printf("%s - %s - %s: %.2f hab/km2\n", nome_cidade, estado, pais, densidade_populacional);
            printf("%s - %s - %s: %.2f hab/km2\n", nome_cidade2, estado2, pais2, densidade_populacional2);
            densidade_verificacao = 1;
            break;
        case 6:
            printf("PIB Per Capita:\n");
            printf("%s - %s - %s: R$ %.2f\n", nome_cidade, estado, pais, pib_per_capita);
            printf("%s - %s - %s: R$ %.2f\n", nome_cidade2, estado2, pais2, pib_per_capita2);
            break;
        case 7:
            printf("Super Poder:\n");
            printf("%s - %s - %s: %.2f\n", nome_cidade, estado, pais, super_poder1);
            printf("%s - %s - %s: %.2f\n", nome_cidade2, estado2, pais2, super_poder2);
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }
    switch (escolha2) {
        case 1:
            printf("Populacao:\n");
            printf("%s - %s - %s: %lu habitantes\n", nome_cidade, estado, pais, populacao);
            printf("%s - %s - %s: %lu habitantes\n", nome_cidade2, estado2, pais2, populacao2);
            resultado1 += (float) populacao;
            resultado2 += (float) populacao2;
            break;
        case 2:
            printf("Area:\n");
            printf("%s - %s - %s: %.2f km2\n", nome_cidade, estado, pais, area);
            printf("%s - %s - %s: %.2f km2\n", nome_cidade2, estado2, pais2, area2);
            resultado1 += (float) area;
            resultado2 += (float) area2;
            break;
        case 3:
            printf("PIB:\n");
            printf("%s - %s - %s: %.2f bilhoes de reais\n", nome_cidade, estado, pais, pib);
            printf("%s - %s - %s: %.2f bilhoes de reais\n", nome_cidade2, estado2, pais2, pib2);
            resultado1 += (float) pib;
            resultado2 += (float) pib2;
            break;
        case 4:
            printf("Pontos Turisticos:\n");
            printf("%s - %s - %s: %d pontos turisticos\n", nome_cidade, estado, pais, pontos_turisticos);
            printf("%s - %s - %s: %d pontos turisticos\n", nome_cidade2, estado2, pais2, pontos_turisticos2);
            resultado1 += (float) pontos_turisticos;
            resultado2 += (float) pontos_turisticos2;
            break;
        case 5:
            printf("Densidade Populacional (menor vence):\n");
            printf("%s - %s - %s: %.2f hab/km2\n", nome_cidade, estado, pais, densidade_populacional);
            printf("%s - %s - %s: %.2f hab/km2\n", nome_cidade2, estado2, pais2, densidade_populacional2);
            densidade_verificacao = 1;
            resultado1 += (float) densidade_populacional;
            resultado2 += (float) densidade_populacional2;
            break;
        case 6:
            printf("PIB Per Capita:\n");
            printf("%s - %s - %s: R$ %.2f\n", nome_cidade, estado, pais, pib_per_capita);
            printf("%s - %s - %s: R$ %.2f\n", nome_cidade2, estado2, pais2, pib_per_capita2);
            resultado1 += (float) pib_per_capita;
            resultado2 += (float) pib_per_capita2;
            break;
        case 7:
            printf("Super Poder:\n");
            printf("%s - %s - %s: %.2f\n", nome_cidade, estado, pais, super_poder1);
            printf("%s - %s - %s: %.2f\n", nome_cidade2, estado2, pais2, super_poder2);
            resultado1 += (float) super_poder1;
            resultado2 += (float) super_poder2;
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }
    //Aqui é informado codigo da carta e nome da cidade e o valor da soma dos dois atributos
    printf("Carta: %s\nCidade: %s\nSoma dos Atributos: %f\n ", codigo_da_carta, nome_cidade, resultado1);
    printf("Carta: %s\nCidade: %s\nSoma dos Atributos: %f\n ", codigo_da_carta2, nome_cidade2, resultado2);
    // No if é verificado se nao foi escolhido a densidade populacional e se o resultado1 é diferente do resultado1
    // No else if é verificado se o resultado1 é diferente do resultado1
    // Como foi pedido ao somar os atributos o de maior soma ganha
    if (densidade_verificacao != 1 && resultado1 != resultado2) {
        resultado1 > resultado2
            ? printf("Resultado: %s - %s - %s venceu!\n", nome_cidade, estado, pais)
            : printf("Resultado: %s - %s - %s venceu!\n", nome_cidade2, estado2, pais2);
    } else if (resultado1 != resultado2) {
        resultado1 < resultado2
            ? printf("Resultado: %s - %s - %s venceu!\n", nome_cidade, estado, pais)
            : printf("Resultado: %s - %s - %s venceu!\n", nome_cidade2, estado2, pais2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
