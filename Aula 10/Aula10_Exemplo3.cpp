/*Aula 10: Ponteiros e Manipulação de Arquivos
Exemplo 3: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

void altera(int x) {
    printf("Dentro da função altera: %d\n", x);
    x = 20;
    printf("Dentro da função altera depois de modificar: %d\n", x);
}

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int n = 10;

    altera(n); 
    printf("Dentro do main: %d\n", n); //desreferenciação do ponteiro

    printf("\n");
    system("pause"); 
    return 0;
}