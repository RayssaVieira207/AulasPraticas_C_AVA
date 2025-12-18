/*Aula 5: Vetors
Exemplo 4: Declaração, leitura e impressão de um vetor com for*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int i, tamanho; 

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os valores do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nImprimindo os valores do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("\nImprimindo os valores dos vetores em ordem inversa:\n");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    system("pause"); 
    return 0;
}