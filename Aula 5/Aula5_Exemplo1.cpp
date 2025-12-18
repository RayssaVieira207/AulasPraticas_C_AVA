/*Aula 5: Vetors
Exemplo 1: Declaração e impressão de um vetor */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    //int vetor[5] = (1,2,3,1,1); // Declaração de um vetor
    int vetor[3]; // Declaração de um vetor

    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;

    printf("%d ", vetor[0]);
    printf("%d ", vetor[1]);
    printf("%d ", vetor[2]);
    printf("\n");

    system("pause"); 
    return 0;
}