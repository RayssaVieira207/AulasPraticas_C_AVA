/*Aula 6: Operações com Vetores
Exemplo 3: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int i, soma = 0, vetor[5]; 

    //Leitura dos Vetores
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    //Calcula a soma
    for (i = 0; i < 5; i++) {
        soma += vetor[i];
    }

    //Exibição do resultado
    printf("\nSomas: %d", soma);
    printf("\n");

    system("pause"); 
    return 0;
}