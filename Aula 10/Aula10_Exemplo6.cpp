/*Aula 10: Ponteiros e Manipulação de Arquivos
Exemplo 4: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    //abre o arquivo para escrita ("w" = write)
    FILE *arquivo = fopen("teste2.txt", "w");

    //verifica se o arquivo foi aberto corretamente
    if (arquivo != NULL) {
        //escreve no arquivo
        fprintf(arquivo,"Olá Arquivo \n");
        //fecha o arquivo
        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }

    return 0;
}