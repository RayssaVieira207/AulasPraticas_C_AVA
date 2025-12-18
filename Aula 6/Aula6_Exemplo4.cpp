/*Aula 6: Operações com Vetores
Exemplo 4: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int vetor[5] = {4, 8, 15, 16, 23};
    int i, valor, encontrado = 0; 

    //Exibindo os valores do Vetores
    printf("Vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    //Entada de valor a ser buscado
    printf("\n\nDigite um valor para buscar: ");
    scanf("%d", &valor);

    //Busca no vator
    for (i = 0; i < 5; i++) {
        if (vetor[i] == valor) {
            encontrado = 1;
            break;
        }
    }

    //imprime o resultado
    if (encontrado) {
        printf("\nValor encontrado no vetor!");
    } else {
        printf("\nValor %d, não encontrado no vetor.", valor);
    }
    
    printf("\n");

    system("pause"); 
    return 0;
}