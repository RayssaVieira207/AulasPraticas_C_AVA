/*Aula 6: Operações com Vetores
Exemplo 2: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int i, menor, vetor[tam]; 

    //Leitura dos Vetores
    for (i = 0; i < tam; i++) {
        printf("Digite o %dº vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    //Inicializa o menor com o primeiro valor do vetor
    menor = vetor[0]; 

    //verifica quantidade vetores são pares
    for (i = 0; i < tam; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    //Exibição do menor valor
    printf("\nMenor valor: %d\n", menor);
    printf("\n");

    system("pause"); 
    return 0;
}