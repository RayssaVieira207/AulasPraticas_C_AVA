/*Aula 4: Laças de Repetição - for
Exemplo 5:IMpressão da sequencia decrescente */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int i = 1; 

    printf("\nImpressão em ordem crescente:\n");
    
    for (i = 0; i <= 5; i++) { 
        printf("%d ", i); 
    }

        printf("\nImpressão em ordem decrescente:\n");

    for (i = 5; i >= 0; i--) { 
        printf("%d ", i); 
    }
    printf("\n");

    system("pause"); 
    return 0;
}