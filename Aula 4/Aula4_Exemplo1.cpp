/*Aula 4: Laças de Repetição - for
Exemplo 1: Impressão de uma sequência de números*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int i = 1; // Inicialização do contador
    
    for (i = 0;i <= 5; i++) { // condição e incremento
        printf("%d\n", i); // impressão na tela
    }

    system("pause"); 
    return 0;
}