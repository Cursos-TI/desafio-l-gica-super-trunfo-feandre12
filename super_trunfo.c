#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis das Cartas do Super Trunfo
    char carta1_estado[4], carta2_estado[4];
    char carta1_cidade[30], carta2_cidade[30];
    unsigned long int carta1_populacao, carta2_populacao;
    int carta1_pontosTuristicos, carta2_pontosTuristicos;
    float carta1_area, carta2_area;
    float carta1_pib, carta2_pib;
    float carta1_densidadePopulacional, carta2_densidadePopulacional;
    float carta1_pibPerCapita, carta2_pibPerCapita;

    // Informações da Carta 1
    strcpy(carta1_estado, "SP");
    strcpy(carta1_cidade, "São Paulo");
    carta1_populacao = 45973.194;
    carta1_pontosTuristicos = 133;
    carta1_area = 248.219;
    carta1_pib = 2719.751;
    carta1_densidadePopulacional = carta1_populacao / carta1_area; // Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
    carta1_pibPerCapita = carta1_pib / carta1_populacao; // Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.

    // Informações da Carta 2
    strcpy(carta2_estado, "RJ");
    strcpy(carta2_cidade, "Rio de Janeiro");
    carta2_populacao = 16055.174;
    carta2_pontosTuristicos = 198;
    carta2_area = 43.696;
    carta2_pib = 949.321;
    carta2_densidadePopulacional = carta2_populacao / carta2_area; // Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
    carta2_pibPerCapita = carta2_pib / carta2_populacao; // Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.

    // Menu Principal das Cartas do Super Trunfo
    int menu, escolha;

    printf("==* MENU PRINCIPAL *==\n");
    printf("Escolha uma opção:\n");
    printf("1. Cartas Cadastradas\n");
    printf("2. Comparação de Cartas\n");
    printf("Digite sua escolha: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("\nCarta 1:\n");
        printf("Nome da Cidade: %s (%s)\n", carta1_cidade, carta1_estado);
        printf("População: %lu milhões\n", carta1_populacao);
        printf("Área: %.3f km²\n", carta1_area);
        printf("PIB: %.3f bilhões de reais\n", carta1_pib);
        printf("Número de Pontos Turísticos: %d\n", carta1_pontosTuristicos);
        printf("Densidade Populacional: %.3f hab/km²\n", carta1_densidadePopulacional);
        printf("PIB per Capita: %.3f reais\n", carta1_pibPerCapita);
        printf("\n"); // QUEBRA DE LINHA
        printf("Carta 2:\n");
        printf("Nome da Cidade: %s (%s)\n", carta2_cidade, carta2_estado);
        printf("População: %lu milhões\n", carta2_populacao);
        printf("Área: %.3f km²\n", carta2_area);
        printf("PIB: %.3f bilhões de reais\n", carta2_pib);
        printf("Número de Pontos Turísticos: %d\n", carta2_pontosTuristicos);
        printf("Densidade Populacional: %.3f hab/km²\n", carta2_densidadePopulacional);
        printf("PIB per Capita: %.3f reais\n", carta2_pibPerCapita);
        break;

    case 2:
        printf("\n==* COMPARAÇÃO DE CARTAS *==\n");
        printf("Escolha um atributo para comparação:\n");
        printf("1. Regras de Comparação\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade Populacional\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nVocê escolheu a opção: Regras de Comparação\n");
            printf("A regra geral é: vence a carta com o maior valor no atributo escolhido.\n");
            printf("Porém, para a Densidade Populacional, a regra inverte: vence a carta com o menor valor.\n");
            break;

        case 2:
            printf("\nVocê escolheu a opção: População\n");
            printf("Carta 1: %s (%lu habitantes)\n", carta1_cidade, carta1_populacao);
            printf("Carta 2: %s (%lu habitantes)\n", carta2_cidade, carta2_populacao);
            if (carta1_populacao == carta2_populacao)
            {
                printf("Resultado: Empate!\n");
            }
            else if (carta1_populacao > carta2_populacao)
            {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_cidade);
            }
            else
            {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_cidade);
            }
            break;

        case 3:
            printf("\nVocê escolheu a opção: Área\n");
            printf("Carta 1: %s (%.3f km²)\n", carta1_cidade, carta1_area);
            printf("Carta 2: %s (%.3f km²)\n", carta2_cidade, carta2_area);
            if (carta1_area == carta2_area)
            {
                printf("Resultado: Empate!\n");
            }
            else if (carta1_area > carta2_area)
            {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_cidade);
            }
            else
            {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_cidade);
            }
            break;

        case 4:
            printf("\nVocê escolheu a opção: PIB\n");
            printf("Carta 1: %s (%.3f bilhões de reais)\n", carta1_cidade, carta1_pib);
            printf("Carta 2: %s (%.3f bilhões de reais)\n", carta2_cidade, carta2_pib);
            if (carta1_pib == carta2_pib)
            {
                printf("Resultado: Empate!\n");
            }
            else if (carta1_pib > carta2_pib)
            {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_cidade);
            }
            else
            {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_cidade);
            }
            break;

        case 5:
            printf("\nVocê escolheu a opção: Número de pontos turísticos\n");
            printf("Carta 1: %s (%d pontos turísticos)\n", carta1_cidade, carta1_pontosTuristicos);
            printf("Carta 2: %s (%d pontos turísticos)\n", carta2_cidade, carta2_pontosTuristicos);
            if (carta1_pontosTuristicos == carta2_pontosTuristicos)
            {
                printf("Resultado: Empate!\n");
            }
            else if (carta1_pontosTuristicos > carta2_pontosTuristicos)
            {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_cidade);
            }
            else
            {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_cidade);
            }
            break;

        case 6:
            printf("\nVocê escolheu a opção: Densidade Populacional\n");
            printf("Carta 1: %s (%.3f hab/km²)\n", carta1_cidade, carta1_densidadePopulacional);
            printf("Carta 2: %s (%.3f hab/km²)\n", carta2_cidade, carta2_densidadePopulacional);
            if (carta1_densidadePopulacional == carta2_densidadePopulacional)
            {
                printf("Resultado: Empate!\n");
            }
            else if (carta1_densidadePopulacional < carta2_densidadePopulacional)
            {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_cidade);
            }
            else
            {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_cidade);
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
        break;
    
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }

    return 0;
}