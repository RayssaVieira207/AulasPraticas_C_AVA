/*Aula 8: Manipulação de Matrizes
Exemplo 3: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int linhas, colunas, i, j, pares = 0, impares = 0;

    //Entrada de tamanho da matriz
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    //Declaração da matriz com tamanho definido pelo usuário (VLA)
    int matriz[linhas][colunas];

    //Leitura de valores da matriz
    printf("\nDigite os valores da matriz (Linhas)x(Colunas) %dx%d:\n", linhas, colunas);
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Elementos da matriz:[%d]x[%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            //Contagem de pares e ímpares
            if (matriz[i][j] % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    }

    //exibição do resultado
    printf("\nContagem de pares e ímpares:\n");
    printf("Total de números Pares: %d\n", pares);
    printf("Total de números Ímpares: %d\n", impares);

    printf("\n");
    system("pause"); 
    return 0;
}