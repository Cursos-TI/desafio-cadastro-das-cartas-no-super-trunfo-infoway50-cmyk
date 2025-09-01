#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {

    char estado[50], estado1[50];
    char nome_cidade[100], nome_cidade1[100];
    unsigned long int populacao, populacao1;
    float area, area1;
    float pib, pib1;
    int num_pontos_turisticos, num_pontos_turisticos1;
    float densidade_populacional1, densidade_populacional2;
    float PIB_per_capita, PIB_per_capita1;
    float super_poder, super_poder1;

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Registro de novas Cartas\n");
    printf("~~~~Dados da carta 01~~~~\n");

    printf("Digite o estado da cidade: ");
    fgets(estado, 50, stdin);
    printf("Digite o nome da cidade: ");
    fgets(nome_cidade, 100, stdin);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf(" %f", &pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf(" %d", &num_pontos_turisticos);
    
    getchar(); // Limpar o buffer do teclado antes de usar fgets novamente

    printf("~~~~Dados da carta 02~~~~\n");

    printf("Digite o estado da cidade: ");
    fgets(estado1, 50, stdin);
    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1, 100, stdin);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf(" %d", &num_pontos_turisticos1);

 /* Cálculo da Densidade Populacional */
    densidade_populacional1 = (float)populacao / area;
    PIB_per_capita = (float)(pib * 1000000) / populacao;

    densidade_populacional2 = (float)populacao1 / area1;
    PIB_per_capita1 = (float)(pib1 * 1000000) / populacao1;

    super_poder = populacao + PIB_per_capita + (1 /densidade_populacional1) + area + num_pontos_turisticos;
    super_poder1 = populacao1 + PIB_per_capita1 + (1 /densidade_populacional2) + area1 + num_pontos_turisticos1;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("~~~~Dados da carta 01~~~~\n");
    printf("Código da carta: %c\n", nome_cidade[0]);
    printf("Estado: %s", estado);
    printf("Nome da Cidade: %s", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita);
    printf("Super Poder: %.1f\n", super_poder);

    printf("\n");
    // Exibição dos Dados da carta 02
    printf("~~~~Dados da carta 02~~~~\n");
    printf("Código da carta: %c\n", nome_cidade1[0]);
    printf("Estado: %s", estado1);
    printf("Nome da Cidade: %s", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita1);
    printf("Super Poder: %.1f\n", super_poder1);

    //Comparação dos valores

    printf("\n");
    printf("~~~~Comparação das cartas~~~~\n");
    printf("1 = para vitória da carta 1 e 0 = para vitória da carta 2\n");

    printf("População : %d\n", (populacao > populacao1) ? 1 : 0);
    printf("Área : %d\n", (area > area1) ? 1 : 0);
    printf("PIB : %d\n", (pib > pib1) ? 1 : 0);
    printf("Pontos Turísticos : %d\n", (num_pontos_turisticos > num_pontos_turisticos1) ? 1 : 0);
    printf("Densidade Populacional : %d\n", (densidade_populacional1 > densidade_populacional2) ? 1 : 0);
    printf("PIB per Capita : %d\n", (PIB_per_capita > PIB_per_capita1) ? 1 : 0);
    printf("Super Poder : %d\n", (super_poder > super_poder1) ? 1 : 0);

    return 0;
}
