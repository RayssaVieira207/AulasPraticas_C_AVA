/*Aula 9: Funções
Exemplo 1: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

void exibirMensagem() {
    printf("Está é uma Menagem de dentro de uma função! exibirMensagem()\n");
    //printf("Fim!\n");
}

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    exibirMensagem(); //chamad ada função
    printf("Função exibirMensagem() finalizada.\n");

    printf("\n");
    system("pause"); 
    return 0;
}