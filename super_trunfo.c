#include <stdio.h>

// Criando as Cartas do Super Trunfo
// Por: Felipe André de Freitas

int main() {
    // Variáveis das Cartas do Super Trunfo
    char carta1_estado[3], carta2_estado[3];
    char carta1_codigo[4], carta2_codigo[4];
    char carta1_cidade[30], carta2_cidade[30];
    unsigned long int carta1_populacao, carta2_populacao;
    int carta1_pontosTuristicos, carta2_pontosTuristicos;
    float carta1_area, carta2_area;
    float carta1_pib, carta2_pib;
    float carta1_densidadePopulacional, carta2_densidadePopulacional;
    float carta1_pibPerCapita, carta2_pibPerCapita;
    // float carta1_superPoder, carta2_superPoder;

    // Cadastrando as Cartas do Super Trunfo
    // Carta 1
    printf("Digite uma letra do estado da Carta 1 (ex: A): ");
    scanf("%1s", carta1_estado);
    printf("Digite dois números para o código da Carta 1 (ex: 01): ");
    scanf("%2s", carta1_codigo);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %29[^\n]", carta1_cidade);
    printf("Digite a população da Carta 1: ");
    scanf("%lu", &carta1_populacao);
    printf("Digite a área(km²) da Carta 1: ");
    scanf("%f", &carta1_area);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &carta1_pib);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &carta1_pontosTuristicos);

    // Cadastrando as Cartas do Super Trunfo
    // Carta 2
    printf("\nDigite uma letra do estado da Carta 2 (ex: B): ");
    scanf("%1s", carta2_estado);
    printf("Digite dois números para o código da Carta 2 (ex: 01): ");
    scanf("%2s", carta2_codigo);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %29[^\n]", carta2_cidade);
    printf("Digite a população da Carta 2: ");
    scanf("%lu", &carta2_populacao);
    printf("Digite a área(km²) da Carta 2: ");
    scanf("%f", &carta2_area);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &carta2_pib);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &carta2_pontosTuristicos);

    // Calcular a Densidade Populacional
    // Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
    carta1_densidadePopulacional = carta1_populacao / carta1_area;
    carta2_densidadePopulacional = carta2_populacao / carta2_area;

    // Calcular o PIB per Capita
    // Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
    carta1_pibPerCapita = carta1_pib / carta1_populacao;
    carta2_pibPerCapita = carta2_pib / carta2_populacao;

    // Calcular o Super Poder
    // Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder").
    // carta1_superPoder = carta1_populacao + carta1_area + carta1_pib + carta1_pontosTuristicos + carta1_pibPerCapita + (1 / carta1_densidadePopulacional);
    // carta2_superPoder = carta2_populacao + carta2_area + carta2_pib + carta2_pontosTuristicos + carta2_pibPerCapita + (1 / carta2_densidadePopulacional);

    // Impressão das Cartas do Super Trunfo
    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1_estado);
    printf("Código: %s%s\n", carta1_estado, carta1_codigo);
    printf("Nome da Cidade: %s\n", carta1_cidade);
    printf("População: %lu\n", carta1_populacao);
    printf("Área: %.2f km²\n", carta1_area);
    printf("PIB: %.2f bilhões de reais\n", carta1_pib);
    printf("Número de Pontos Turísticos: %d\n", carta1_pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1_densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1_pibPerCapita);
    // printf("Super Poder: %.2f\n", carta1_superPoder);

    // Impressão das Cartas do Super Trunfo
    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2_estado);
    printf("Código: %s%s\n", carta2_estado, carta2_codigo);
    printf("Nome da Cidade: %s\n", carta2_cidade);
    printf("População: %lu\n", carta2_populacao);
    printf("Área: %.2f km²\n", carta2_area);
    printf("PIB: %.2f bilhões de reais\n", carta2_pib);
    printf("Número de Pontos Turísticos: %d\n", carta2_pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2_densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2_pibPerCapita);
    // printf("Super Poder: %.2f\n", carta2_superPoder);

    // Comparação das Cartas
    // Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2)
    // Exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
    // printf("\nComparação de Cartas:\n");
    // printf("População: %d\n", carta1_populacao > carta2_populacao);
    // printf("Área: %d\n", carta1_area > carta2_area);
    // printf("PIB: %d\n", carta1_pib > carta2_pib);
    // printf("Pontos Turísticos: %d\n", carta1_pontosTuristicos > carta2_pontosTuristicos);
    // printf("Densidade Populacional: %d\n", carta1_densidadePopulacional < carta2_densidadePopulacional);
    // printf("PIB per Capita: %d\n", carta1_pibPerCapita > carta2_pibPerCapita);
    // printf("Super Poder: %d\n", carta1_superPoder > carta2_superPoder);

    // Comparação das Cartas por Atributo
    // O programa deve exibir, de forma clara, qual carta venceu a comparação, incluindo o atributo utilizado na comparação e os valores das duas cartas para aquele atributo.
    printf("\nComparação das Cartas - (Atributo: População):\n");
    printf("Carta 1 - %s (%s%s): %lu\n", carta1_cidade, carta1_estado, carta1_codigo, carta1_populacao);
    printf("Carta 2 - %s (%s%s): %lu\n", carta2_cidade, carta2_estado, carta2_codigo, carta2_populacao);
    if (carta1_populacao > carta2_populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1_cidade);
    }
    else {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2_cidade);
    }

    return 0;
}