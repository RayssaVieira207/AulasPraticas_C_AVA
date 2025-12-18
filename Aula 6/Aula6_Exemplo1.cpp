/*Aula 6: Operações com Vetores
Exemplo 1: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int i, pares = 0, vetor[10]; 

    //Leitura dos Vetores
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    //verifica quantidade vetores são pares
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        } 
    }

    //imprime o resultado
    printf("\nQuantidade de números pares: %d", pares);
    
    if (pares == 0) {
        printf("\nO(Os) números escolhidos não tem valores pares.\n");
    } else {
        printf("\nNúmeros pares escolhidos: ");
        for (i = 0; i < 10; i++) {
            if (vetor[i] % 2 == 0) {
                printf("%d ", vetor[i]);
            }
        }
    }
    printf("\n");    

    system("pause"); 
    return 0;
}