/*Aula 7: Matrizes
Exemplo 1: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int i, j; 

    int matriz[3][4] = {
        {1, 2, 3, 4},
        {1, 1, 1, 1},
        {4, 3, 2, 1}
    };

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    /* pra imprimir com outra formatação
     for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (j == 3) {
                printf("%d, ", matriz[i][j]);  
            } else {
            printf("%d. ", matriz[i][j]);
        }
        printf("\n");
    }
    */

    system("pause"); 
    return 0;
}