#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int num_pontos_turisticos, num_pontos_turisticos1, codigo_estado, codigo_estado1;
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

    printf("Digite o estado da cidade: \n");
    fgets(estado, 50, stdin);
    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade, 100, stdin);
    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacao);
	getchar(); //limpa o buffer do teclado
    printf("Digite a área da cidade (em km²): \n");
    scanf(" %f", &area);
    printf("Digite o PIB da cidade (em milhões): \n");
    scanf(" %f", &pib);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &num_pontos_turisticos);

    printf("~~~~Dados da carta 02~~~~\n");

    printf("Digite o estado da cidade: \n");
    fgets(estado1, 50, stdin);
    
	printf("Digite o nome da cidade: \n");
    fgets(nome_cidade1, 100, stdin);
    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacao1);
	getchar(); //limpa o buffer do teclado
    printf("Digite a área da cidade (em km²): \n");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (em milhões): \n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &num_pontos_turisticos1);

 /* Cálculo da Densidade Populacional */
    densidade_populacional1 = (float)populacao / area;
    PIB_per_capita = (float)(pib * 1000000) / populacao;

    densidade_populacional2 = (float)populacao1 / area1;
    PIB_per_capita1 = (float)(pib1 * 1000000) / populacao1;

    super_poder = populacao + PIB_per_capita + (1 /densidade_populacional1) + area + num_pontos_turisticos;
    super_poder1 = populacao1 + PIB_per_capita1 + (1 /densidade_populacional2) + area1 + num_pontos_turisticos1;
	
	/* Calculo criado para gerar o código da carta, baseando cada letra a um numero 
     utilizando a tabela ASCII.	*/
	
	codigo_estado = (estado[0] + estado[1]) * 100;
	codigo_estado1 = (estado1[0] + estado1[1]) * 100;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
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

    printf("\n");
    // Exibição dos Dados da carta 02
    printf("~~~~Dados da carta 02~~~~\n");
	printf("\n");
	
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

    //Comparação dos valores
	
	printf("\n");
	printf("Comparação das cartas (Escolha o tema):\n");
	
	if(populacao > populacao1){
		printf("População carta %s ganhou.\n", nome_cidade);
	} else if (populacao < populacao1){
		printf("População carta %s ganhou.\n", nome_cidade1);
	} else {
		printf("Droga...empate!!\n");
	}
	
	if(area > area1){
		printf("SÁrea carta %s ganhou.\n", nome_cidade);
	} else if (area < area1){
		printf("Área carta %s ganhou\n.", nome_cidade1);
	} else {
		printf("Droga...empate!!\n");
	}
	
	if(pib > pib1){
		printf("PIB carta %s ganhou.\n", nome_cidade);
	} else if (pib < pib1){
		printf("PIB carta %s ganhou\n.", nome_cidade1);
	} else {
		printf("Droga...empate!!\n");
	}
	
	if(num_pontos_turisticos > num_pontos_turisticos1){
		printf("Num. pontos turisticos carta %s ganhou.\n", nome_cidade);
	} else if (num_pontos_turisticos < num_pontos_turisticos1){
		printf("Num. pontos turisticos carta %s ganhou\n.", nome_cidade1);
	} else {
		printf("Droga...empate!!\n");
	}
	
	if(densidade_populacional1 > densidade_populacional2){
		printf("Densidade populacional carta %s ganhou.\n", nome_cidade);
	} else if (densidade_populacional1 < densidade_populacional2){
		printf("Densidade populacional carta %s ganhou\n.", nome_cidade1);
	} else {
		printf("Droga...empate!!\n");
	}
	
	if(PIB_per_capita > PIB_per_capita1){
		printf("PIB per capta carta %s ganhou.\n", nome_cidade);
	} else if (PIB_per_capita < PIB_per_capita1){
		printf("PIB per capta carta %s ganhou\n.", nome_cidade1);
	} else {
		printf("Droga...empate!!\n");
	}
	
	if(super_poder > super_poder1){
		printf("Super Poder carta %s ganhou.\n", nome_cidade);
	} else if (super_poder < super_poder1){
		printf("Super Poder carta %s ganhou\n.", nome_cidade1);
	} else {
		printf("Droga...empate!!\n");
	}
	


 

    return 0;
}
