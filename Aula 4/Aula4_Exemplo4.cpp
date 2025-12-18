/*Aula 4: Laças de Repetição - for
Exemplo 4: Soma de valores (contador)*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int i;
    int soma = 0;

    printf("Soma = soma + i\n");
    
    for (i = 1;i <= 5; i++) {
         //soma = soma + i;
        printf("Soma = %d + %d = ", soma, i);
        printf("%d\n", soma = soma + i);
    }
    printf("\nSoma final: %d\n", soma);

    system("pause"); 
    return 0;
}