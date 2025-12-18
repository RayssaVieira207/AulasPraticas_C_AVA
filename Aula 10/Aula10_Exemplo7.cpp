/*Aula 10: Ponteiros e Manipulação de Arquivos
Exemplo 4: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    FILE *arquivo;

    //gravação noarquivo 
    arquivo = fopen("saida.txt", "a");
    if (arquivo != NULL) {
        fprintf(arquivo,"Olá Arquivo 'saida.txt'.\n");
        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }

    //Leitura do arquivo 
    char linha[100];
    arquivo = fopen("saida.txt", "r");
    if (arquivo != NULL) {
        printf("Conteúdo do arquivo: \n");
        while (fgets(linha, sizeof(linha), arquivo) != NULL) {
            printf("%s", linha);
        }
        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }

    system("pause");
    return 0;
}