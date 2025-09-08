#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    printf("Lógica Super Trunfo!\n");
    
    char estado1[50];
    char estado2[50];
    char codigo1[50];
    char codigo2[50];
    char cidade1[50];
    char cidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontosturisticos1;
    int pontosturisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o estado1: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo1: \n");
    scanf("%s", &codigo1);

    printf("Digite a cidade1: \n");
    scanf("%s", &cidade1);

    printf("Digite a populacao1: \n");
    scanf("%d", &populacao1);

    printf("Digite a area1: \n");
    scanf("%f", &area1);

    printf("Digite o pib1: \n");
    scanf("%f", &pib1);

    printf("Digite os pontosturisticos1: \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite o estado2: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo2: \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade2: \n");
    scanf("%s", &cidade2);

    printf("Digite a populacao2: \n");
    scanf("%d", &populacao2);

    printf("Digite a area2: \n");
    scanf("%f", &area2);

    printf("Digite o pib2: \n");
    scanf("%f", &pib2);

    printf("Digite os pontosturisticos2: \n");
    scanf("%d", &pontosturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado1: %s \n", estado1);
    printf("Código1: %s \n", codigo1);
    printf("Cidade1: %s \n", cidade1);
    printf("População1: %d \n", populacao1);
    printf("Área1: %.2f km²\n", area1);
    printf("PIB1: %.2f \n", pib1);
    printf("Pontos Turísticos1: %d \n", pontosturisticos1);

    printf("Estado2: %s \n", estado2);
    printf("Código2: %s \n", codigo2);
    printf("Cidade2: %s \n", cidade2);
    printf("População2: %d \n", populacao2);
    printf("Área2: %.2f km²\n", area2);
    printf("PIB2: %.2f \n", pib2);
    printf("Pontos Turísticos2: %d \n", pontosturisticos2);
    
    return 0;
}
