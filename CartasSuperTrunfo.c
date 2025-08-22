#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado[50];
    char nome_cidade[100];
    int populacao = 0;
    float area = 0.0;
    float pib = 0.0;
    int num_pontos_turisticos = 0;

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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("~~~~Dados da carta 01~~~~\n");
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos);

    printf("~~~~Fim dos Dados da carta 01~~~~\n");

    printf("~~~~Dados da carta 02~~~~\n");
    
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

  
    printf("~~~~Dados da carta 02~~~~\n");
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos);

    printf("~~~~Fim dos Dados da carta 02~~~~\n");

    return 0;
}
