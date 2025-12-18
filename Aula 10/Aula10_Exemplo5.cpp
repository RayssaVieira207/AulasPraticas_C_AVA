/*Aula 10: Ponteiros e Manipulação de Arquivos
Exemplo 4: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    FILE *arquivo = NULL; //declaração do ponteiro para arquivo

    arquivo = fopen("teste.txt", "w"); //abre ou (cria) um arquivo "teste.txt" no modo escrita ("w" = write)

    fprintf(arquivo, "Inicio do arquivo.\n"); //escreve uma linha de texto no arquivo
    int numero = 507;
    fprintf(arquivo, "Valor de número: %d\n", numero); // escreve o valor da variavel numero no arquivo 
    
    fclose(arquivo); //fecha o arquivo

    return 0;
}