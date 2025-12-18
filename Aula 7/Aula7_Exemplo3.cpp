/*Aula 7: Matrizes
Exemplo 3: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int i, j, linha = 5, coluna = 2;
    int matriz[linha][coluna];

    //Quando há apenas uma comando dentro do for
    //não é necessário o uso de chaves {}
    for (i = 0; i < linha; i++) { //percorre cada inha
        for (j = 0; j < coluna; j++) {//percorre cada coluna
            matriz[i][j] = i; //imprime o valor da posição atual
        }
    }
    
    for (i = 0; i < linha; i++) {//percorre cada inha
        for (j = 0; j < coluna; j++) {//percorre cada coluna
            printf("%d ", matriz[i][j]); //imprime o valor da posição atual
        }
        printf("\n");// quebra de linha após cada linha da matriz
    }

    system("pause"); 
    return 0;
}