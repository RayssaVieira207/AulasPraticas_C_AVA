/*Aula 5: Vetors
Exemplo 2: Declaração, leitura e impressão de um vetor */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int vetor[3]; 

    printf("Digite os valore do vetor:\n");
    scanf("%d", &vetor[0]);
    scanf("%d", &vetor[1]);
    scanf("%d", &vetor[2]);

    printf("%d ", vetor[0]);
    printf("%d ", vetor[1]);
    printf("%d ", vetor[2]);
    printf("\n");

    system("pause"); 
    return 0;
}