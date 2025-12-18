/*Aula 10: Ponteiros e Manipulação de Arquivos
Exemplo 2: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int x = 10;
    int *p = &x; //declaração de um ponteiro para inteiro
        
    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor apontado por p: %d\n", *p); //desreferenciação do ponteiro

    *p = 200; //modificação do valor de x através do ponteiro
    printf("Novo valor de x: %d\n", x); //desreferenciação do ponteiro

    printf("\n");
    system("pause"); 
    return 0;
}