#include <stdio.h>

int main() {
    // Variáveis das Cartas do Super Trunfo
    // Informações da Carta 1
    char carta1_estado[3] = "SP";
    char carta1_cidade[30] = "São Paulo";
    unsigned long int carta1_populacao = 45973;
    int carta1_pontosTuristicos = 133;
    float carta1_area = 248.219;
    float carta1_pib = 2719.751;
    float carta1_densidadePopulacional;
    float carta1_pibPerCapita;

    // Informações da Carta 2
    char carta2_estado[3] = "RJ";
    char carta2_cidade[30] = "Rio de Janeiro";
    unsigned long int carta2_populacao = 16055;
    int carta2_pontosTuristicos = 198;
    float carta2_area = 43.696;
    float carta2_pib = 949.321;
    float carta2_densidadePopulacional;
    float carta2_pibPerCapita;

    // Cálculos das Cartas 1 e 2
    // Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
    carta1_densidadePopulacional = carta1_populacao / carta1_area;
    carta2_densidadePopulacional = carta2_populacao / carta2_area;
    // Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
    carta1_pibPerCapita = carta1_pib / carta1_populacao;
    carta2_pibPerCapita = carta2_pib / carta2_populacao;

    // Menu Principal das Cartas do Super Trunfo
    int menu, escolha1, escolha2;

    printf("==* MENU PRINCIPAL *==\n");
    printf("Escolha uma opção:\n");
    printf("1. Cartas Cadastradas\n");
    printf("2. Comparação de Cartas com um Atributo\n");
    printf("3. Comparação de Cartas com dois Atributos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("\n==* CARTAS CADASTRADAS *==\n");
        printf("Carta 1:\n");
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
        printf("\n==* COMPARAÇÃO DE CARTAS COM UM ATRIBUTO *==\n");
        printf("A regra geral é: vence a carta com o maior valor no atributo escolhido.\n");
        printf("Porém, para a Densidade Populacional, a regra inverte: vence a carta com o menor valor.\n");
        printf("Escolha um atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha1);

        switch (escolha1)
        {
        case 1:
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

        case 2:
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

        case 3:
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

        case 4:
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

        case 5:
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

    case 3:
        printf("\n==* COMPARAÇÃO DE CARTAS COM DOIS ATRIBUTOS *==\n");
        printf("A regra geral é: vence a carta com o maior valor no atributo escolhido.\n");
        printf("Porém, para a Densidade Populacional, a regra inverte: vence a carta com o menor valor.\n");
        printf("Escolha dois atributos para comparação.\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("Digite sua primeira escolha: ");
        scanf("%d", &escolha1);

        switch (escolha1)
        {
        case 1:
            printf("Primeiro atributo escolhido: População\n");
            escolha1 = carta1_populacao > carta2_populacao ? 1 : 0;
            break;

        case 2:
            printf("Primeiro atributo escolhido: Área\n");
            escolha1 = carta1_area > carta2_area ? 1 : 0;
            break;

        case 3:
            printf("Primeiro atributo escolhido: PIB\n");
            escolha1 = carta1_pib > carta2_pib ? 1 : 0;
            break;

        case 4:
            printf("Primeiro atributo escolhido: Número de pontos turísticos\n");
            escolha1 = carta1_pontosTuristicos > carta2_pontosTuristicos ? 1 : 0;
            break;

        case 5:
            printf("Primeiro atributo escolhido: Densidade Populacional\n");
            escolha1 = carta1_densidadePopulacional < carta2_densidadePopulacional ? 1 : 0;
            break;
        
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }

        printf("\nDigite sua segunda escolha: ");
        scanf("%d", &escolha2);

        if (escolha2 != escolha1)
        {
            switch (escolha2)
            {
            case 1:
                printf("Segundo atributo escolhido: População\n");
                escolha2 = carta1_populacao > carta2_populacao ? 1 : 0;
                break;

            case 2:
                printf("Segundo atributo escolhido: Área\n");
                escolha2 = carta1_area > carta2_area ? 1 : 0;
                break;

            case 3:
                printf("Segundo atributo escolhido: PIB\n");
                escolha2 = carta1_pib > carta2_pib ? 1 : 0;
                break;

            case 4:
                printf("Segundo atributo escolhido: Número de pontos turísticos\n");
                escolha2 = carta1_pontosTuristicos > carta2_pontosTuristicos ? 1 : 0;
                break;

            case 5:
                printf("Segundo atributo escolhido: Densidade Populacional\n");
                escolha2 = carta1_densidadePopulacional < carta2_densidadePopulacional ? 1 : 0;
                break;
            
            default:
                printf("\nOpção inválida. Tente novamente.\n");
                break;
            }
        }
        else
        {
            printf("Você escolheu o mesmo atributo nas duas opções, tente novamente.\n");
        }

        if (escolha1 && escolha2)
        {
            printf("Resultado: A Carta (%s) venceu!\n", carta1_cidade);
        }
        else if (escolha1 != escolha2)
        {
            printf("Resultado: Houve um Empate!\n");
        }
        else
        {
            printf("Resultado: A Carta (%s) venceu!\n", carta2_cidade);
        }
        break;
    
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }

    return 0;
}