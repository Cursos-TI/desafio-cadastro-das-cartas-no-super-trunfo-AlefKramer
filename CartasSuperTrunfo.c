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

    //solicitar dados da cidade
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);  // Leitura do código da cidade

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]%*c", nome);  // Leitura do nome da cidade, permitindo espaços



    
    
    
    
    
    
    
    
    return 0;
}
