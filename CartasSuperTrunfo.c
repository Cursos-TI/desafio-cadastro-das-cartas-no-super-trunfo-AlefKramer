#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //variaveis para armazenar os dados das cidades
    char codigo[5]; // Código da cidade, por exemplo: A01, B02
    char nome[50]; // Nome da cidade
    int populacao; // Populaçao da cidade
    float area; // Área da cidade
    float pib; // PIB da cidade
    int pontos_turisticos; // Número de pontos turísticos da cidade

    // cadastro das cartas:
    printf("Cadastro de Cartas de Cidades\n");

    // solicitar dados da cidade
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);  // Leitura do código da cidade

    // Consumir o caractere de nova linha que sobra no buffer após o scanf anterior
    getchar();  // Limpar o buffer de entrada

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]%*c", nome);  // Leitura do nome da cidade, permitindo espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);  // Leitura da população

    // Consumir o caractere de nova linha restante
    getchar();  // Limpar o buffer de entrada

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);  // Leitura da área

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);  // Leitura do PIB

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);  // Leitura dos pontos turísticos

    // Exibição dos dados das cartas:
    printf("\nDados da cidade %s (%s):\n", nome, codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}