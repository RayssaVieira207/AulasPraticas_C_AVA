/*Aula 7: Matrizes
Exemplo 2: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int i, j, soma = 0; 

    int matriz[3][4] = {
        {1, 2, 3, 4},
        {1, 1, 1, 1},
        {4, 3, 2, 1}
    };

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
    }
    printf("Soma Total: %d\n", soma);

    system("pause"); 
    return 0;
}