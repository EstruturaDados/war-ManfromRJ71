#include <stdio.h>
#include <string.h>

//Definição da struct Território
//Armazena nome, cor do exército e quantidade de tropas

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Declaração do vetor de structs para armazenar 5 territórios
    Territorio territorios[5];

    // Entrada de Dados dos Territórios
    for (int i = 0; i < 5; i++) {
        printf("\nCadastro do Território %d:\n", i + 1);

        // Leitura do nome do Território
        printf("Digite o nome do território: ");
        scanf(" %[^\n]", territorios[i].nome); //Lê até a quebra de linha

        // Leitura da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %[^\n]", territorios[i].cor);

        // Leitura da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados cadastrados
    printf("\n-*-* Territórios Cadastrados *-*-\n");
    for (int i=0; i<5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);

    }

    return 0;
}