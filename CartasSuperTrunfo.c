#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//

struct Card {
    char code[4];
    char name[20];
    int populacao;
    float area;
    float pib;
    int n_pontos_turisticos;
};

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    struct Card cards[2];

    for (int i = 0; i < 2; i++) {
        printf("%sCadastrar nova Cidade\n", i == 1 ? "\n" : "");
        printf("Digite o codigo da cidade (Ex: A01)\n");
        scanf("%s", cards[i].code);
        printf("Digite o nome da cidade:\n");
        scanf("%s", cards[i].name);
        printf("Digite a populacao da cidade:\n");
        scanf("%d", &cards[i].populacao);
        printf("Digite a area da cidade (em km2):\n");
        scanf("%f", &cards[i].area);
        printf("Digite o PIB da cidade (Em milhoes):\n");
        scanf("%f", &cards[i].pib);
        printf("Digite quantos pontos turisticos:\n");
        scanf("%d", &cards[i].n_pontos_turisticos);
    }

    for (int i = 0; i < 2; i++) {
        printf("Dados da cidade %s\n", cards[i].code);
        printf("Nome %s\n", cards[i].name);
        printf("Populacao %i\n", cards[i].populacao);
        printf("Area %f\n", cards[i].area);
        printf("Pib %f\n", cards[i].pib);
        printf("Numero de pontos turisticos %d\n", cards[i].n_pontos_turisticos);
    }

    return 0;
}
