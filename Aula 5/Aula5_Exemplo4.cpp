/*Aula 5: Vetors
Exemplo 3: Declaração, leitura e impressão de um vetor com for*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int i, vetor[3]; 

    printf("Digite os valores do vetor:\n");
    for (i = 0; i < 3; i++) {
        printf("digite o %dº Valor do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nImprimindo os valores do vetor:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    system("pause"); 
    return 0;
}