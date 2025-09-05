#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int escolhaJogador = 0;
    printf("****JOGO SUPER TRUNFO****\n");
    printf("Escolha uma opção para comer: \n");
    printf("1. JOGAR\n");
    printf("2. REGRAS\n");
    printf("3. CRÉDITOS\n");
    printf("4. SAIR\n");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador) {
        case 1:
            // Código de cadastro, cálculo, exibição e comparação movido para fora, mas condicionado
            break;
        case 2:
            printf("Regras do Jogo:\n");
            printf("1. Cada jogador cadastra uma carta com atributos de uma cidade.\n");
            printf("2. Os atributos incluem população, área, PIB, pontos turísticos, etc.\n");
            printf("3. Os jogadores escolhem dois atributos para comparar.\n");
            printf("4. A carta com o maior valor no primeiro atributo vence; em caso de empate, o segundo atributo decide.\n");
            printf("5. Em caso de empate nos dois, ninguém ganha a rodada.\n");
            break;
        case 3:
            printf("Créditos:\n");
            printf("Desenvolvido por: Kaidji\n");
            break;
        case 4:
            printf("Saindo do jogo. Até a próxima!\n");
            exit(0);
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    if (escolhaJogador == 1) {
        char estado[50], estado1[50];
        char nome_cidade[100], nome_cidade1[100];
        unsigned long int populacao = 0, populacao1 = 0;
        float area = 0.0, area1 = 0.0;
        float pib = 0.0, pib1 = 0.0;
        int num_pontos_turisticos = 0, num_pontos_turisticos1 = 0; 
        int codigo_estado = 0, codigo_estado1 = 0, opcaoJogador = 0, opcaoJogador2 = 0;
        float densidade_populacional1 = 0.0, densidade_populacional2 = 0.0;
        float PIB_per_capita = 0.0, PIB_per_capita1 = 0.0;
        float super_poder = 0.0, super_poder1 = 0.0;

        // Cadastro das Cartas:
        printf("Registro de novas Cartas\n");
        printf("~~~~Dados da carta 01~~~~\n");

        printf("Digite o estado da cidade: \n");
        fgets(estado, 50, stdin);
        while(getchar() != '\n');
        printf("Digite o nome da cidade: \n");
        fgets(nome_cidade, 100, stdin);
        printf("Digite a população da cidade: \n");
        scanf(" %lu", &populacao);
        getchar();
        printf("Digite a área da cidade (em km²): \n");
        scanf(" %f", &area);
        getchar(); 
        printf("Digite o PIB da cidade (em milhões): \n");
        scanf(" %f", &pib);
        getchar(); 
        printf("Digite o número de pontos turísticos da cidade: \n");
        scanf(" %d", &num_pontos_turisticos);
        getchar();

        printf("~~~~Dados da carta 02~~~~\n");

        printf("Digite o estado da cidade: \n");
        fgets(estado1, 50, stdin);
        printf("Digite o nome da cidade: \n");
        fgets(nome_cidade1, 100, stdin);
        printf("Digite a população da cidade: \n");
        scanf(" %lu", &populacao1);
        getchar();
        printf("Digite a área da cidade (em km²): \n");
        scanf(" %f", &area1);
        getchar();
        printf("Digite o PIB da cidade (em milhões): \n");
        scanf(" %f", &pib1);
        getchar();
        printf("Digite o número de pontos turísticos da cidade: \n");
        scanf(" %d", &num_pontos_turisticos1);
        getchar();

        // Cálculos
        densidade_populacional1 = (area > 0) ? (float)populacao / area : 0.0;
        PIB_per_capita = (populacao > 0) ? (float)(pib * 1000000) / populacao : 0.0;
        densidade_populacional2 = (area1 > 0) ? (float)populacao1 / area1 : 0.0;
        PIB_per_capita1 = (populacao1 > 0) ? (float)(pib1 * 1000000) / populacao1 : 0.0;
        super_poder = populacao + PIB_per_capita + (densidade_populacional1 > 0 ? 1 / densidade_populacional1 : 0) + area + num_pontos_turisticos;
        super_poder1 = populacao1 + PIB_per_capita1 + (densidade_populacional2 > 0 ? 1 / densidade_populacional2 : 0) + area1 + num_pontos_turisticos1;
        codigo_estado = (estado[0] && estado[1]) ? (estado[0] + estado[1]) * 100 : 0;
        codigo_estado1 = (estado1[0] && estado1[1]) ? (estado1[0] + estado1[1]) * 100 : 0;

        // Exibição dos Dados
        printf("Resultado do cadastro:\n");
        printf("~~~~Dados da carta 01~~~~\n");
        printf("Nome da Cidade: %s\n", nome_cidade);
        printf("Código da é: %d\n", codigo_estado);
        printf("Estado: %s\n", estado);
        printf("População: %lu\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f milhões\n", pib);
        printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("PIB per Capita: %.2f reais\n", PIB_per_capita);
        printf("Super Poder: %.1f\n", super_poder);

        printf("~~~~Dados da carta 02~~~~\n");
        printf("Nome da Cidade: %s\n", nome_cidade1);
        printf("Código da é: %d.\n", codigo_estado1);
        printf("Estado: %s\n", estado1);
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f milhões\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB per Capita: %.2f reais\n", PIB_per_capita1);
        printf("Super Poder: %.1f\n", super_poder1);

        // Comparação com dois atributos
        printf("\n");
        printf("Comparação das cartas (Escolha o tema 1 ao 7 para o primeiro atributo):\n");
        scanf("%d", &opcaoJogador);
        printf("Escolha o tema 1 ao 7 para o segundo atributo (em caso de empate):\n");
        scanf("%d", &opcaoJogador2);

        switch (opcaoJogador) {
            case 1: // População
                if (populacao > populacao1) {
                    printf("Carta %s vence com maior população!\n", nome_cidade);
                } else if (populacao < populacao1) {
                    printf("Carta %s vence com maior população!\n", nome_cidade1);
                } else {
                    // Empate no primeiro atributo, usa o segundo
                    switch (opcaoJogador2) {
                        case 1: printf("Empate na população! "); break;
                        case 2: printf("Empate na população, comparando área! "); break;
                        case 3: printf("Empate na população, comparando PIB! "); break;
                        case 4: printf("Empate na população, comparando pontos turísticos! "); break;
                        case 5: printf("Empate na população, comparando densidade populacional! "); break;
                        case 6: printf("Empate na população, comparando PIB per capita! "); break;
                        case 7: printf("Empate na população, comparando Super Poder! "); break;
                        default: printf("Opção inválida para segundo atributo!\n"); break;
                    }
                    if (opcaoJogador2 == 2 && area > area1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 2 && area < area1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 3 && pib > pib1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 3 && pib < pib1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos > num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos < num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 < densidade_populacional2) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 > densidade_populacional2) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 6 && PIB_per_capita > PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 6 && PIB_per_capita < PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 7 && super_poder > super_poder1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 7 && super_poder < super_poder1) printf("Carta %s vence!\n", nome_cidade1);
                    else printf("Empate nos dois atributos!\n");
                }
                break;
            case 2: // Área
                if (area > area1) {
                    printf("Carta %s vence com maior área!\n", nome_cidade);
                } else if (area < area1) {
                    printf("Carta %s vence com maior área!\n", nome_cidade1);
                } else {
                    switch (opcaoJogador2) {
                        case 1: printf("Empate na área, comparando população! "); break;
                        case 2: printf("Empate na área! "); break;
                        case 3: printf("Empate na área, comparando PIB! "); break;
                        case 4: printf("Empate na área, comparando pontos turísticos! "); break;
                        case 5: printf("Empate na área, comparando densidade populacional! "); break;
                        case 6: printf("Empate na área, comparando PIB per capita! "); break;
                        case 7: printf("Empate na área, comparando Super Poder! "); break;
                        default: printf("Opção inválida para segundo atributo!\n"); break;
                    }
                    if (opcaoJogador2 == 1 && populacao > populacao1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 1 && populacao < populacao1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 3 && pib > pib1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 3 && pib < pib1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos > num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos < num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 < densidade_populacional2) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 > densidade_populacional2) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 6 && PIB_per_capita > PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 6 && PIB_per_capita < PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 7 && super_poder > super_poder1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 7 && super_poder < super_poder1) printf("Carta %s vence!\n", nome_cidade1);
                    else printf("Empate nos dois atributos!\n");
                }
                break;
            case 3: // PIB
                if (pib > pib1) {
                    printf("Carta %s vence com maior PIB!\n", nome_cidade);
                } else if (pib < pib1) {
                    printf("Carta %s vence com maior PIB!\n", nome_cidade1);
                } else {
                    switch (opcaoJogador2) {
                        case 1: printf("Empate no PIB, comparando população! "); break;
                        case 2: printf("Empate no PIB, comparando área! "); break;
                        case 3: printf("Empate no PIB! "); break;
                        case 4: printf("Empate no PIB, comparando pontos turísticos! "); break;
                        case 5: printf("Empate no PIB, comparando densidade populacional! "); break;
                        case 6: printf("Empate no PIB, comparando PIB per capita! "); break;
                        case 7: printf("Empate no PIB, comparando Super Poder! "); break;
                        default: printf("Opção inválida para segundo atributo!\n"); break;
                    }
                    if (opcaoJogador2 == 1 && populacao > populacao1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 1 && populacao < populacao1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 2 && area > area1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 2 && area < area1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos > num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos < num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 < densidade_populacional2) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 > densidade_populacional2) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 6 && PIB_per_capita > PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 6 && PIB_per_capita < PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 7 && super_poder > super_poder1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 7 && super_poder < super_poder1) printf("Carta %s vence!\n", nome_cidade1);
                    else printf("Empate nos dois atributos!\n");
                }
                break;
            case 4: // Pontos Turísticos
                if (num_pontos_turisticos > num_pontos_turisticos1) {
                    printf("Carta %s vence com maior número de pontos turísticos!\n", nome_cidade);
                } else if (num_pontos_turisticos < num_pontos_turisticos1) {
                    printf("Carta %s vence com maior número de pontos turísticos!\n", nome_cidade1);
                } else {
                    switch (opcaoJogador2) {
                        case 1: printf("Empate nos pontos turísticos, comparando população! "); break;
                        case 2: printf("Empate nos pontos turísticos, comparando área! "); break;
                        case 3: printf("Empate nos pontos turísticos, comparando PIB! "); break;
                        case 4: printf("Empate nos pontos turísticos! "); break;
                        case 5: printf("Empate nos pontos turísticos, comparando densidade populacional! "); break;
                        case 6: printf("Empate nos pontos turísticos, comparando PIB per capita! "); break;
                        case 7: printf("Empate nos pontos turísticos, comparando Super Poder! "); break;
                        default: printf("Opção inválida para segundo atributo!\n"); break;
                    }
                    if (opcaoJogador2 == 1 && populacao > populacao1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 1 && populacao < populacao1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 2 && area > area1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 2 && area < area1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 3 && pib > pib1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 3 && pib < pib1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 < densidade_populacional2) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 > densidade_populacional2) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 6 && PIB_per_capita > PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 6 && PIB_per_capita < PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 7 && super_poder > super_poder1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 7 && super_poder < super_poder1) printf("Carta %s vence!\n", nome_cidade1);
                    else printf("Empate nos dois atributos!\n");
                }
                break;
            case 5: // Densidade Populacional
                if (densidade_populacional1 < densidade_populacional2) {
                    printf("Carta %s vence com menor densidade populacional!\n", nome_cidade);
                } else if (densidade_populacional1 > densidade_populacional2) {
                    printf("Carta %s vence com menor densidade populacional!\n", nome_cidade1);
                } else {
                    switch (opcaoJogador2) {
                        case 1: printf("Empate na densidade populacional, comparando população! "); break;
                        case 2: printf("Empate na densidade populacional, comparando área! "); break;
                        case 3: printf("Empate na densidade populacional, comparando PIB! "); break;
                        case 4: printf("Empate na densidade populacional, comparando pontos turísticos! "); break;
                        case 5: printf("Empate na densidade populacional! "); break;
                        case 6: printf("Empate na densidade populacional, comparando PIB per capita! "); break;
                        case 7: printf("Empate na densidade populacional, comparando Super Poder! "); break;
                        default: printf("Opção inválida para segundo atributo!\n"); break;
                    }
                    if (opcaoJogador2 == 1 && populacao > populacao1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 1 && populacao < populacao1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 2 && area > area1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 2 && area < area1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 3 && pib > pib1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 3 && pib < pib1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos > num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos < num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 6 && PIB_per_capita > PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 6 && PIB_per_capita < PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 7 && super_poder > super_poder1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 7 && super_poder < super_poder1) printf("Carta %s vence!\n", nome_cidade1);
                    else printf("Empate nos dois atributos!\n");
                }
                break;
            case 6: // PIB per Capita
                if (PIB_per_capita > PIB_per_capita1) {
                    printf("Carta %s vence com maior PIB per capita!\n", nome_cidade);
                } else if (PIB_per_capita < PIB_per_capita1) {
                    printf("Carta %s vence com maior PIB per capita!\n", nome_cidade1);
                } else {
                    switch (opcaoJogador2) {
                        case 1: printf("Empate no PIB per capita, comparando população! "); break;
                        case 2: printf("Empate no PIB per capita, comparando área! "); break;
                        case 3: printf("Empate no PIB per capita, comparando PIB! "); break;
                        case 4: printf("Empate no PIB per capita, comparando pontos turísticos! "); break;
                        case 5: printf("Empate no PIB per capita, comparando densidade populacional! "); break;
                        case 6: printf("Empate no PIB per capita! "); break;
                        case 7: printf("Empate no PIB per capita, comparando Super Poder! "); break;
                        default: printf("Opção inválida para segundo atributo!\n"); break;
                    }
                    if (opcaoJogador2 == 1 && populacao > populacao1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 1 && populacao < populacao1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 2 && area > area1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 2 && area < area1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 3 && pib > pib1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 3 && pib < pib1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos > num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos < num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 < densidade_populacional2) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 > densidade_populacional2) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 7 && super_poder > super_poder1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 7 && super_poder < super_poder1) printf("Carta %s vence!\n", nome_cidade1);
                    else printf("Empate nos dois atributos!\n");
                }
                break;
            case 7: // Super Poder
                if (super_poder > super_poder1) {
                    printf("Carta %s vence com maior Super Poder!\n", nome_cidade);
                } else if (super_poder < super_poder1) {
                    printf("Carta %s vence com maior Super Poder!\n", nome_cidade1);
                } else {
                    switch (opcaoJogador2) {
                        case 1: printf("Empate no Super Poder, comparando população! "); break;
                        case 2: printf("Empate no Super Poder, comparando área! "); break;
                        case 3: printf("Empate no Super Poder, comparando PIB! "); break;
                        case 4: printf("Empate no Super Poder, comparando pontos turísticos! "); break;
                        case 5: printf("Empate no Super Poder, comparando densidade populacional! "); break;
                        case 6: printf("Empate no Super Poder, comparando PIB per capita! "); break;
                        case 7: printf("Empate no Super Poder! "); break;
                        default: printf("Opção inválida para segundo atributo!\n"); break;
                    }
                    if (opcaoJogador2 == 1 && populacao > populacao1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 1 && populacao < populacao1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 2 && area > area1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 2 && area < area1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 3 && pib > pib1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 3 && pib < pib1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos > num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 4 && num_pontos_turisticos < num_pontos_turisticos1) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 < densidade_populacional2) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 5 && densidade_populacional1 > densidade_populacional2) printf("Carta %s vence!\n", nome_cidade1);
                    else if (opcaoJogador2 == 6 && PIB_per_capita > PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade);
                    else if (opcaoJogador2 == 6 && PIB_per_capita < PIB_per_capita1) printf("Carta %s vence!\n", nome_cidade1);
                    else printf("Empate nos dois atributos!\n");
                }
                break;
            default:
                printf("Opção inválida para primeiro atributo!\n");
                break;
        }
    }

    return 0;
}