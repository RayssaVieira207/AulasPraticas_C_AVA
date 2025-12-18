/*Aula 8: Manipulação de Matrizes
Exemplo 1: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    //matriz com 4 linhas e 3 colunas
    //cada linha representa um aluno, e cada coluna uma nota
    float notas[4][3], soma, media;
    int i, j;
    //Leitura das notas
    for (i = 0; i < 4; i++) {
        printf("%dº Aluno:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Digite a nota %dº do aluno %dº: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    //Cálculo e exibição da média de cada aluno
    printf("\nMédias dos Alunos:\n");
    for (i = 0; i < 4; i++) {
        soma = 0;
        for (j = 0; j < 3; j++) {
            soma += notas[i][j];
        }
        media = soma / 3;
        printf("%dº Aluno: Média = %.2f\n", i + 1, media);
    }   
    printf("\n");

    system("pause"); 
    return 0;
}