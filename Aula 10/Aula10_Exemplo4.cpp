/*Aula 10: Ponteiros e Manipulação de Arquivos
Exemplo 4: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

void modifReferencia(int *x) {
    printf("Dentro da função, antes da modificalção: *ptr = %d\n", *x);
    *x = 100;
    printf("Dentro da função altera, depois da modificação: *ptr = %d\n", *x);
}

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int valor = 10;
    printf("Antes da chamada da função: valor = %d\n", valor);

    //passa o endereço de memória da valor
    modifReferencia(&valor); 
    printf("Dentro do main: valor = %d\n", valor); //desreferenciação do ponteiro

    printf("\n");
    system("pause"); 
    return 0;
}