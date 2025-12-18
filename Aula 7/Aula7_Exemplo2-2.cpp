/*Aula 7: Matrizes
Exemplo 2-2: calculando a soma de todos os elementos da matriz*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int i, j, soma = 0; 
    int linha, coluna;

    printf("Digite a quantidade de linhas:\n");
    scanf("%d", &linha);
    printf("Digite a quantidade de colunas:\n");
    scanf("%d", &coluna);

    int matriz[linha][coluna];

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            matriz[i][j] = i;
        }
    }
    
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            soma += matriz[i][j];
        }
    }

    printf("Soma Total: %d", soma);
    printf("\n");

    system("pause"); 
    return 0;
}